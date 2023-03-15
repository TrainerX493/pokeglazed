#include <stdarg.h>
#include "global.h"
#include "characters.h"
#include "gpu_regs.h"
#include "main.h"
#include "malloc.h"
#include "test.h"
#include "test_runner.h"

#define TIMEOUT_SECONDS 30

void CB2_TestRunner(void);

EWRAM_DATA struct TestRunnerState gTestRunnerState;

void TestRunner_Battle(const struct Test *);

static bool32 MgbaOpen_(void);
static void MgbaExit_(u8 exitCode);
static s32 MgbaPuts_(const char *s);
static s32 MgbaVPrintf_(const char *fmt, va_list va);
static void Intr_Timer2(void);

extern const struct Test __start_tests[];
extern const struct Test __stop_tests[];

static bool32 PrefixMatch(const char *pattern, const char *string)
{
    if (string == NULL)
        return TRUE;

    while (TRUE)
    {
        if (!*pattern)
            return TRUE;
        if (*pattern != *string)
            return FALSE;
        pattern++;
        string++;
    }
}

enum { STATE_INIT, STATE_NEXT_TEST, STATE_REPORT_RESULT, STATE_EXIT };

void CB2_TestRunner(void)
{
    switch (gTestRunnerState.state)
    {
    case STATE_INIT:
        if (!MgbaOpen_())
        {
            gTestRunnerState.state = STATE_EXIT;
            gTestRunnerState.exitCode = 2;
            return;
        }

        gIntrTable[7] = Intr_Timer2;

        gTestRunnerState.state = STATE_NEXT_TEST;
        gTestRunnerState.exitCode = 0;
        gTestRunnerState.tests = 0;
        gTestRunnerState.passes = 0;
        gTestRunnerState.skips = 0;
        gTestRunnerState.skipFilename = NULL;
        gTestRunnerState.test = __start_tests - 1;
        break;

    case STATE_NEXT_TEST:
        gTestRunnerState.test++;

        if (gTestRunnerState.test == __stop_tests)
        {
            MgbaPrintf_("%s%d/%d PASSED\e[0m", gTestRunnerState.exitCode == 0 ? "\e[32m" : "\e[31m", gTestRunnerState.passes, gTestRunnerState.tests);
            if (gTestRunnerState.skips)
            {
                if (gTestRunnerSkipIsFail)
                    MgbaPrintf_("\e[31m%d SKIPPED\e[0m", gTestRunnerState.skips);
                else
                    MgbaPrintf_("%d SKIPPED", gTestRunnerState.skips);
            }
            gTestRunnerState.state = STATE_EXIT;
            return;
        }

        if (!PrefixMatch(gTestRunnerArgv, gTestRunnerState.test->name))
            return;

        // Greedily assign tests to processes based on estimated cost.
        // TODO: Make processCosts a min heap.
        if (gTestRunnerState.test->runner != &gAssumptionsRunner)
        {
            u32 i;
            u32 minCost, minCostProcess;
            minCost = gTestRunnerState.processCosts[0];
            minCostProcess = 0;
            for (i = 1; i < gTestRunnerN; i++)
            {
                if (gTestRunnerState.processCosts[i] < minCost)
                {
                    minCost = gTestRunnerState.processCosts[i];
                    minCostProcess = i;
                }
            }

            if (gTestRunnerState.test->runner->estimateCost)
                gTestRunnerState.processCosts[minCostProcess] += gTestRunnerState.test->runner->estimateCost(gTestRunnerState.test->data);
            else
                gTestRunnerState.processCosts[minCostProcess] += 1;

            if (minCostProcess != gTestRunnerI)
                return;
        }

        gTestRunnerState.state = STATE_REPORT_RESULT;
        gTestRunnerState.result = TEST_RESULT_PASS;
        gTestRunnerState.expectedResult = TEST_RESULT_PASS;
        if (gTestRunnerHeadless)
            gTestRunnerState.timeoutSeconds = TIMEOUT_SECONDS;
        else
            gTestRunnerState.timeoutSeconds = UINT_MAX;
        InitHeap(gHeap, HEAP_SIZE);
        EnableInterrupts(INTR_FLAG_TIMER2);
        REG_TM2CNT_L = UINT16_MAX - (274 * 60); // Approx. 1 second.
        REG_TM2CNT_H = TIMER_ENABLE | TIMER_INTR_ENABLE | TIMER_1024CLK;

        // NOTE: Assumes that the compiler interns __FILE__.
        if (gTestRunnerState.skipFilename == gTestRunnerState.test->filename)
        {
            gTestRunnerState.result = TEST_RESULT_SKIP;
        }
        else
        {
            MgbaPrintf_(":N%s", gTestRunnerState.test->name);
            if (gTestRunnerState.test->runner->setUp)
                gTestRunnerState.test->runner->setUp(gTestRunnerState.test->data);
            gTestRunnerState.test->runner->run(gTestRunnerState.test->data);
        }
        break;

    case STATE_REPORT_RESULT:
        REG_TM2CNT_H = 0;

        gTestRunnerState.state = STATE_NEXT_TEST;

        if (gTestRunnerState.test->runner->tearDown)
            gTestRunnerState.test->runner->tearDown(gTestRunnerState.test->data);

        if (gTestRunnerState.test->runner == &gAssumptionsRunner)
        {
            if (gTestRunnerState.result != TEST_RESULT_PASS)
                gTestRunnerState.skipFilename = gTestRunnerState.test->filename;
        }
        else if (gTestRunnerState.result == TEST_RESULT_SKIP)
        {
            gTestRunnerState.skips++;
            if (gTestRunnerSkipIsFail)
                gTestRunnerState.exitCode = 1;
        }
        else
        {
            const char *color;
            const char *result;

            gTestRunnerState.tests++;

            if (gTestRunnerState.result == gTestRunnerState.expectedResult)
            {
                gTestRunnerState.passes++;
                color = "\e[32m";
                MgbaPrintf_(":N%s", gTestRunnerState.test->name);
            }
            else if (gTestRunnerState.result != TEST_RESULT_SKIP || gTestRunnerSkipIsFail)
            {
                gTestRunnerState.exitCode = 1;
                color = "\e[31m";
            }
            else
            {
                color = "";
            }

            if (gTestRunnerState.result == TEST_RESULT_PASS
             && gTestRunnerState.result != gTestRunnerState.expectedResult)
            {
                MgbaPuts_("\e[31mPlease remove KNOWN_FAILING if this test intentionally PASSes\e[0m");
            }

            switch (gTestRunnerState.result)
            {
            case TEST_RESULT_FAIL:
                if (gTestRunnerState.expectedResult == TEST_RESULT_FAIL)
                {
                    result = "KNOWN_FAILING";
                    color = "\e[33m";
                }
                else
                {
                    result = "FAIL";
                }
                break;
            case TEST_RESULT_PASS: result = "PASS"; break;
            case TEST_RESULT_SKIP: result = "SKIP"; break;
            case TEST_RESULT_INVALID: result = "INVALID"; break;
            case TEST_RESULT_ERROR: result = "ERROR"; break;
            case TEST_RESULT_TIMEOUT: result = "TIMEOUT"; break;
            default: result = "UNKNOWN"; break;
            }

            MgbaPrintf_(":R%s%s\e[0m", color, result);
        }

        break;

    case STATE_EXIT:
        MgbaExit_(gTestRunnerState.exitCode);
        break;
    }
}

void Test_ExpectedResult(enum TestResult result)
{
    gTestRunnerState.expectedResult = result;
}

static void Assumptions_Run(void *data)
{
    void (*function)(void) = data;
    function();
}

const struct TestRunner gAssumptionsRunner =
{
    .run = Assumptions_Run,
};

#define IRQ_LR (*(vu32 *)0x3007F9C)

/* Returns to AgbMainLoop.
 * Similar to a longjmp except that we only restore sp (and cpsr via
 * overwriting the value of lr_irq on the stack).
 *
 * WARNING: This could potentially be flaky because other global state
 * will not be cleaned up, we may decide to Exit on a timeout instead. */
static NAKED void JumpToAgbMainLoop(void)
{
    asm(".arm\n\
         .word 0xe3104778\n\
         ldr r0, =gAgbMainLoop_sp\n\
         ldr sp, [r0]\n\
         ldr r0, =AgbMainLoop\n\
         bx r0\n\
         .pool");
}

void ReinitCallbacks(void)
{
    gMain.callback1 = NULL;
    SetMainCallback2(CB2_TestRunner);
    gMain.vblankCallback = NULL;
    gMain.hblankCallback = NULL;
}

static void Intr_Timer2(void)
{
    if (--gTestRunnerState.timeoutSeconds == 0)
    {
        if (gTestRunnerState.test->runner->checkProgress
         && gTestRunnerState.test->runner->checkProgress(gTestRunnerState.test->data))
        {
            gTestRunnerState.timeoutSeconds = TIMEOUT_SECONDS;
        }
        else
        {
            gTestRunnerState.result = TEST_RESULT_TIMEOUT;
            ReinitCallbacks();
            IRQ_LR = ((uintptr_t)JumpToAgbMainLoop & ~1) + 4;
        }
    }
}

void Test_ExitWithResult(enum TestResult result, const char *fmt, ...)
{
    gTestRunnerState.result = result;
    ReinitCallbacks();
    if (gTestRunnerState.test->runner->handleExitWithResult
     && !gTestRunnerState.test->runner->handleExitWithResult(gTestRunnerState.test->data, result)
     && gTestRunnerState.result != gTestRunnerState.expectedResult)
    {
        va_list va;
        va_start(va, fmt);
        MgbaVPrintf_(fmt, va);
    }
    JumpToAgbMainLoop();
}

#define REG_DEBUG_ENABLE (*(vu16 *)0x4FFF780)
#define REG_DEBUG_FLAGS  (*(vu16 *)0x4FFF700)
#define REG_DEBUG_STRING ((char *)0x4FFF600)

static bool32 MgbaOpen_(void)
{
    REG_DEBUG_ENABLE = 0xC0DE;
    return REG_DEBUG_ENABLE == 0x1DEA;
}

static void MgbaExit_(u8 exitCode)
{
    register u32 _exitCode asm("r0") = exitCode;
    asm("swi 0x3" :: "r" (_exitCode));
}

static s32 MgbaPuts_(const char *s)
{
    return MgbaPrintf_("%s", s);
}

s32 MgbaPrintf_(const char *fmt, ...)
{
    va_list va;
    va_start(va, fmt);
    return MgbaVPrintf_(fmt, va);
}

static s32 MgbaPutchar_(s32 i, s32 c)
{
    REG_DEBUG_STRING[i++] = c;
    if (i == 255)
    {
        REG_DEBUG_STRING[i] = '\0';
        REG_DEBUG_FLAGS = MGBA_LOG_INFO | 0x100;
        i = 0;
    }
    return i;
}

extern const u8 gWireless_RSEtoASCIITable[];

// Bare-bones, only supports plain %s, %S, and %d.
static s32 MgbaVPrintf_(const char *fmt, va_list va)
{
    s32 i = 0;
    s32 c, d;
    const char *s;
    while (*fmt)
    {
        switch ((c = *fmt++))
        {
        case '%':
            switch (*fmt++)
            {
            case '%':
                i = MgbaPutchar_(i, '%');
                break;
            case 'd':
                d = va_arg(va, int);
                if (d == 0)
                {
                    i = MgbaPutchar_(i, '0');
                }
                else
                {
                    char buffer[10];
                    s32 n = 0;
                    u32 u = abs(d);
                    if (d < 0)
                        i = MgbaPutchar_(i, '-');
                    while (u > 0)
                    {
                        buffer[n++] = '0' + (u % 10);
                        u /= 10;
                    }
                    while (n > 0)
                        i = MgbaPutchar_(i, buffer[--n]);
                }
                break;
            case 'q':
                d = va_arg(va, int);
                {
                    char buffer[10];
                    s32 n = 0;
                    u32 u = abs(d) >> 12;
                    if (u == 0)
                    {
                        i = MgbaPutchar_(i, '0');
                    }
                    else
                    {
                        if (d < 0)
                            i = MgbaPutchar_(i, '-');
                        while (u > 0)
                        {
                            buffer[n++] = '0' + (u % 10);
                            u /= 10;
                        }
                        while (n > 0)
                            i = MgbaPutchar_(i, buffer[--n]);
                    }

                    n = 0;
                    i = MgbaPutchar_(i, '.');
                    u = d & 0xFFF;
                    while (TRUE)
                    {
                        u *= 10;
                        i = MgbaPutchar_(i, '0' + (u >> 12));
                        u &= 0xFFF;
                        if (u == 0)
                            break;
                        if (++n == 2)
                        {
                            u *= 10;
                            i = MgbaPutchar_(i, '0' + ((u + UQ_4_12_ROUND) >> 12));
                            break;
                        }
                    }
                }
                break;
            case 's':
                s = va_arg(va, const char *);
                while ((c = *s++) != '\0')
                    i = MgbaPutchar_(i, c);
                break;
            case 'S':
                s = va_arg(va, const u8 *);
                while ((c = *s++) != EOS)
                {
                    if ((c = gWireless_RSEtoASCIITable[c]) != '\0')
                        i = MgbaPutchar_(i, c);
                    else
                        i = MgbaPutchar_(i, '?');
                }
                break;
            }
            break;
        case '\n':
            i = 254;
            i = MgbaPutchar_(i, '\0');
            break;
        default:
            i = MgbaPutchar_(i, c);
            break;
        }
    }
    if (i != 0)
    {
        REG_DEBUG_FLAGS = MGBA_LOG_INFO | 0x100;
    }
    return i;
}
