#ifndef GUARD_TEST_H
#define GUARD_TEST_H

#include "test_runner.h"

#define MAX_PROCESSES 32 // See also tools/mgba-rom-test-hydra/main.c

enum TestResult
{
    TEST_RESULT_FAIL,
    TEST_RESULT_PASS,
    TEST_RESULT_SKIP,
    TEST_RESULT_INVALID,
    TEST_RESULT_ERROR,
    TEST_RESULT_TIMEOUT,
};

struct TestRunner
{
    u32 (*estimateCost)(void *);
    void (*setUp)(void *);
    void (*run)(void *);
    void (*tearDown)(void *);
    bool32 (*checkProgress)(void *);
    bool32 (*handleExitWithResult)(void *, enum TestResult);
};

struct Test
{
    const char *name;
    const char *filename;
    const struct TestRunner *runner;
    void *data;
};

struct TestRunnerState
{
    u8 state;
    u8 exitCode;
    s32 tests;
    s32 passes;
    s32 skips;
    const char *skipFilename;
    const struct Test *test;
    u32 processCosts[MAX_PROCESSES];

    u8 result;
    u8 expectedResult;
    u32 timeoutSeconds;
};

extern const u8 gTestRunnerN;
extern const u8 gTestRunnerI;
extern const char gTestRunnerArgv[256];

extern const struct TestRunner gAssumptionsRunner;
extern struct TestRunnerState gTestRunnerState;

void CB2_TestRunner(void);

void Test_ExpectedResult(enum TestResult);
void Test_ExitWithResult(enum TestResult, const char *fmt, ...);

s32 MgbaPrintf_(const char *fmt, ...);

#define ASSUMPTIONS \
    static void Assumptions(void); \
    __attribute__((section(".tests"))) static const struct Test sAssumptions = \
    { \
        .name = "ASSUMPTIONS: " __FILE__, \
        .filename = __FILE__, \
        .runner = &gAssumptionsRunner, \
        .data = Assumptions, \
    }; \
    static void Assumptions(void)

#define ASSUME(c) \
    do \
    { \
        if (!(c)) \
            Test_ExitWithResult(TEST_RESULT_SKIP, "%s:%d: ASSUME failed", gTestRunnerState.test->filename, __LINE__); \
    } while (0)

#define EXPECT(c) \
    do \
    { \
        if (!(c)) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT failed", gTestRunnerState.test->filename, __LINE__); \
    } while (0)

#define EXPECT_EQ(a, b) \
    do \
    { \
        typeof(a) _a = (a), _b = (b); \
        if (_a != _b) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT_EQ(%d, %d) failed", gTestRunnerState.test->filename, __LINE__, _a, _b); \
    } while (0)

#define EXPECT_NE(a, b) \
    do \
    { \
        typeof(a) _a = (a), _b = (b); \
        if (_a == _b) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT_NE(%d, %d) failed", gTestRunnerState.test->filename, __LINE__, _a, _b); \
    } while (0)

#define EXPECT_LT(a, b) \
    do \
    { \
        typeof(a) _a = (a), _b = (b); \
        if (_a >= _b) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT_LT(%d, %d) failed", gTestRunnerState.test->filename, __LINE__, _a, _b); \
    } while (0)

#define EXPECT_LE(a, b) \
    do \
    { \
        typeof(a) _a = (a), _b = (b); \
        if (_a > _b) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT_LE(%d, %d) failed", gTestRunnerState.test->filename, __LINE__, _a, _b); \
    } while (0)

#define EXPECT_GT(a, b) \
    do \
    { \
        typeof(a) _a = (a), _b = (b); \
        if (_a <= _b) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT_GT(%d, %d) failed", gTestRunnerState.test->filename, __LINE__, _a, _b); \
    } while (0)

#define EXPECT_GE(a, b) \
    do \
    { \
        typeof(a) _a = (a), _b = (b); \
        if (_a < _b) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT_GE(%d, %d) failed", gTestRunnerState.test->filename, __LINE__, _a, _b); \
    } while (0)

#define KNOWN_FAILING \
    Test_ExpectedResult(TEST_RESULT_FAIL)

#endif
