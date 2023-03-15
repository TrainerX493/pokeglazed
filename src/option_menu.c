#include "global.h"
#include "option_menu.h"
#include "main.h"
#include "menu.h"
#include "scanline_effect.h"
#include "palette.h"
#include "sprite.h"
#include "task.h"
#include "malloc.h"
#include "bg.h"
#include "gpu_regs.h"
#include "window.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "strings.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"

enum
{
    MENU_MAIN,
    MENU_CUSTOM,
    MENU_COUNT,
};

// Menu items
enum
{
    MENUITEM_MAIN_TEXTSPEED,
    MENUITEM_MAIN_BATTLESCENE,
    MENUITEM_MAIN_BATTLESTYLE,
    MENUITEM_MAIN_SOUND,
    MENUITEM_MAIN_BUTTONMODE,
    MENUITEM_MAIN_UNIT_SYSTEM,
    MENUITEM_MAIN_FRAMETYPE,
    MENUITEM_MAIN_CANCEL,
    MENUITEM_MAIN_COUNT,
};

enum
{
    MENUITEM_CUSTOM_HP_BAR,
    MENUITEM_CUSTOM_EXP_BAR,
    MENUITEM_CUSTOM_FONT,
    MENUITEM_CUSTOM_MATCHCALL,
    MENUITEM_CUSTOM_CANCEL,
    MENUITEM_CUSTOM_COUNT,
};

// Window Ids
enum
{
    WIN_TOPBAR,
    WIN_OPTIONS,
    WIN_DESCRIPTION
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    {//WIN_TOPBAR
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    {//WIN_OPTIONS
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 26,
        .height = 10,
        .paletteNum = 1,
        .baseBlock = 62
    },
    {//WIN_DESCRIPTION
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 1,
        .baseBlock = 500
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
    {
       .bg = 0,
       .charBaseIndex = 1,
       .mapBaseIndex = 30,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
       .baseTile = 0
    },
    {
       .bg = 1,
       .charBaseIndex = 1,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
    },
};

struct OptionMenu
{
    u8 submenu;
    u8 sel[MENUITEM_MAIN_COUNT];
    u8 sel_custom[MENUITEM_CUSTOM_COUNT];
    int menuCursor[MENU_COUNT];
    int visibleCursor[MENU_COUNT];
    u8 arrowTaskId;
};

#define Y_DIFF 16 // Difference in pixels between items.
#define OPTIONS_ON_SCREEN 5
#define NUM_OPTIONS_FROM_BORDER 1

// local functions
static void MainCB2(void);
static void VBlankCB(void);
static void DrawTopBarText(void); //top Option text
static void DrawLeftSideOptionText(int selection, int y);
static void DrawRightSideChoiceText(const u8 *str, int x, int y, bool8 choosen, bool8 active);
static void DrawOptionMenuTexts(void); //left side text;
static void DrawChoices(u32 id, int y); //right side draw function
static void HighlightOptionMenuItem(void);
static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_OptionMenuSave(u8 taskId);
static void Task_OptionMenuFadeOut(u8 taskId);
static void ScrollMenu(int direction);
static void ScrollAll(int direction); // to bottom or top
static int GetMiddleX(const u8 *txt1, const u8 *txt2, const u8 *txt3);
static int XOptions_ProcessInput(int x, int selection);
static int ProcessInput_Options_Two(int selection);
static int ProcessInput_Options_Three(int selection);
static int ProcessInput_Options_Four(int selection);
static int ProcessInput_Options_Eleven(int selection);
static int ProcessInput_Sound(int selection);
static int ProcessInput_FrameType(int selection);
static const u8 *const OptionTextDescription(void);
static const u8 *const OptionTextRight(u8 menuItem);
static u8 MenuItemCount(void);
static u8 MenuItemCancel(void);
static void DrawDescriptionText(void);
static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active);
static void DrawChoices_Options_Four(const u8 *const *const strings, int selection, int y, bool8 active);
static void ReDrawAll(void);
static void DrawChoices_TextSpeed(int selection, int y);
static void DrawChoices_BattleScene(int selection, int y);
static void DrawChoices_BattleStyle(int selection, int y);
static void DrawChoices_Sound(int selection, int y);
static void DrawChoices_ButtonMode(int selection, int y);
static void DrawChoices_BarSpeed(int selection, int y); //HP and EXP
static void DrawChoices_UnitSystem(int selection, int y);
static void DrawChoices_Font(int selection, int y);
static void DrawChoices_FrameType(int selection, int y);
static void DrawChoices_MatchCall(int selection, int y);
static void DrawBgWindowFrames(void);

// EWRAM vars
EWRAM_DATA static struct OptionMenu *sOptions = NULL;

// const data
static const u8 sEqualSignGfx[] = INCBIN_U8("graphics/interface/option_menu_equals_sign.4bpp"); // note: this is only used in the Japanese release
static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};
static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text_custom.gbapal");

#define TEXT_COLOR_OPTIONS_WHITE                1
#define TEXT_COLOR_OPTIONS_GRAY_FG              2
#define TEXT_COLOR_OPTIONS_GRAY_SHADOW          3
#define TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG        4
#define TEXT_COLOR_OPTIONS_ORANGE_FG            5
#define TEXT_COLOR_OPTIONS_ORANGE_SHADOW        6
#define TEXT_COLOR_OPTIONS_RED_FG               7
#define TEXT_COLOR_OPTIONS_RED_SHADOW           8
#define TEXT_COLOR_OPTIONS_GREEN_FG             9
#define TEXT_COLOR_OPTIONS_GREEN_SHADOW         10
#define TEXT_COLOR_OPTIONS_GREEN_DARK_FG        11
#define TEXT_COLOR_OPTIONS_GREEN_DARK_SHADOW    12
#define TEXT_COLOR_OPTIONS_RED_DARK_FG          13
#define TEXT_COLOR_OPTIONS_RED_DARK_SHADOW      14

// Menu draw and input functions
struct // MENU_MAIN
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsMain[MENUITEM_MAIN_COUNT] =
{
    [MENUITEM_MAIN_TEXTSPEED]    = {DrawChoices_TextSpeed,   ProcessInput_Options_Four},
    [MENUITEM_MAIN_BATTLESCENE]  = {DrawChoices_BattleScene, ProcessInput_Options_Two},
    [MENUITEM_MAIN_BATTLESTYLE]  = {DrawChoices_BattleStyle, ProcessInput_Options_Two},
    [MENUITEM_MAIN_SOUND]        = {DrawChoices_Sound,       ProcessInput_Options_Two},
    [MENUITEM_MAIN_BUTTONMODE]   = {DrawChoices_ButtonMode,  ProcessInput_Options_Three},
    [MENUITEM_MAIN_UNIT_SYSTEM]  = {DrawChoices_UnitSystem,  ProcessInput_Options_Two},
    [MENUITEM_MAIN_FRAMETYPE]    = {DrawChoices_FrameType,   ProcessInput_FrameType},
    [MENUITEM_MAIN_CANCEL]       = {NULL, NULL},
};

struct // MENU_CUSTOM
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsCustom[MENUITEM_CUSTOM_COUNT] =
{
    [MENUITEM_CUSTOM_HP_BAR]       = {DrawChoices_BarSpeed,    ProcessInput_Options_Eleven},
    [MENUITEM_CUSTOM_EXP_BAR]      = {DrawChoices_BarSpeed,    ProcessInput_Options_Eleven},
    [MENUITEM_CUSTOM_FONT]         = {DrawChoices_Font,        ProcessInput_Options_Two}, 
    [MENUITEM_CUSTOM_MATCHCALL]    = {DrawChoices_MatchCall,   ProcessInput_Options_Two},
    [MENUITEM_CUSTOM_CANCEL]       = {NULL, NULL},
};

// Menu left side option names text
static const u8 sText_HpBar[]       = _("HP BAR");
static const u8 sText_ExpBar[]      = _("EXP BAR");
static const u8 sText_UnitSystem[]  = _("UNIT SYSTEM");
static const u8 *const sOptionMenuItemsNamesMain[MENUITEM_MAIN_COUNT] =
{
    [MENUITEM_MAIN_TEXTSPEED]   = gText_TextSpeed,
    [MENUITEM_MAIN_BATTLESCENE] = gText_BattleScene,
    [MENUITEM_MAIN_BATTLESTYLE] = gText_BattleStyle,
    [MENUITEM_MAIN_SOUND]       = gText_Sound,
    [MENUITEM_MAIN_BUTTONMODE]  = gText_ButtonMode,
    [MENUITEM_MAIN_UNIT_SYSTEM] = sText_UnitSystem,
    [MENUITEM_MAIN_FRAMETYPE]   = gText_Frame,
    [MENUITEM_MAIN_CANCEL]      = gText_OptionMenuSave,
};

static const u8 *const sOptionMenuItemsNamesCustom[MENUITEM_CUSTOM_COUNT] =
{
    [MENUITEM_CUSTOM_HP_BAR]      = sText_HpBar,
    [MENUITEM_CUSTOM_EXP_BAR]     = sText_ExpBar,
    [MENUITEM_CUSTOM_FONT]        = gText_Font,
    [MENUITEM_CUSTOM_MATCHCALL]   = gText_OptionMatchCalls,
    [MENUITEM_CUSTOM_CANCEL]      = gText_OptionMenuSave,
};

static const u8 *const OptionTextRight(u8 menuItem)
{
    switch (sOptions->submenu)
    {
    case MENU_MAIN:     return sOptionMenuItemsNamesMain[menuItem];
    case MENU_CUSTOM:   return sOptionMenuItemsNamesCustom[menuItem];
    }
}

// Menu left side text conditions
static bool8 CheckConditions(int selection)
{
    switch (sOptions->submenu)
    {
    case MENU_MAIN:
        switch(selection)
        {
        case MENUITEM_MAIN_TEXTSPEED:       return TRUE;
        case MENUITEM_MAIN_BATTLESCENE:     return TRUE;
        case MENUITEM_MAIN_BATTLESTYLE:     return TRUE;
        case MENUITEM_MAIN_SOUND:           return TRUE;
        case MENUITEM_MAIN_BUTTONMODE:      return TRUE;
        case MENUITEM_MAIN_UNIT_SYSTEM:     return TRUE;
        case MENUITEM_MAIN_FRAMETYPE:       return TRUE;
        case MENUITEM_MAIN_CANCEL:          return TRUE;
        case MENUITEM_MAIN_COUNT:           return TRUE;
        }
    case MENU_CUSTOM:
        switch(selection)
        {
        case MENUITEM_CUSTOM_HP_BAR:          return TRUE;
        case MENUITEM_CUSTOM_EXP_BAR:         return TRUE;
        case MENUITEM_CUSTOM_FONT:            return TRUE;
        case MENUITEM_CUSTOM_MATCHCALL:       return TRUE;
        case MENUITEM_CUSTOM_CANCEL:          return TRUE;
        case MENUITEM_CUSTOM_COUNT:           return TRUE;
        }
    }
}

// Descriptions
static const u8 sText_Empty[]                   = _("");
static const u8 sText_Desc_Save[]               = _("Save your settings.");
static const u8 sText_Desc_TextSpeed[]          = _("Choose one of the four text-display\nspeeds.");
static const u8 sText_Desc_BattleScene_On[]     = _("Show the POKéMON battle animations.");
static const u8 sText_Desc_BattleScene_Off[]    = _("Skip the POKéMON battle animations.");
static const u8 sText_Desc_BattleStyle_Shift[]  = _("Get the option to switch your\nPOKéMON after the enemies faints.");
static const u8 sText_Desc_BattleStyle_Set[]    = _("No free switch after fainting the\nenemies POKéMON.");
static const u8 sText_Desc_SoundMono[]          = _("Sound is the same in all speakers.\nRecommended for original hardware.");
static const u8 sText_Desc_SoundStereo[]        = _("Play the left and right audio channel\nseperatly. Great with headphones.");
static const u8 sText_Desc_ButtonMode[]         = _("All buttons work as normal.");
static const u8 sText_Desc_ButtonMode_LR[]      = _("On some screens the L and R buttons\nact as left and right.");
static const u8 sText_Desc_ButtonMode_LA[]      = _("The L button acts as another A\nbutton for one-handed play.");
static const u8 sText_Desc_UnitSystemImperial[] = _("Display BERRY and POKéMON weight\nand size in pounds and inches.");
static const u8 sText_Desc_UnitSystemMetric[]   = _("Display BERRY and POKéMON weight\nand size in kilograms and meters.");
static const u8 sText_Desc_FrameType[]          = _("Choose the frame surrounding the\nwindows.");
static const u8 *const sOptionMenuItemDescriptionsMain[MENUITEM_MAIN_COUNT][3] =
{
    [MENUITEM_MAIN_TEXTSPEED]   = {sText_Desc_TextSpeed,            sText_Empty,                sText_Empty},
    [MENUITEM_MAIN_BATTLESCENE] = {sText_Desc_BattleScene_On,       sText_Desc_BattleScene_Off, sText_Empty},
    [MENUITEM_MAIN_BATTLESTYLE] = {sText_Desc_BattleStyle_Shift,    sText_Desc_BattleStyle_Set, sText_Empty},
    [MENUITEM_MAIN_SOUND]       = {sText_Desc_SoundMono,            sText_Desc_SoundStereo,     sText_Empty},
    [MENUITEM_MAIN_BUTTONMODE]  = {sText_Desc_ButtonMode,           sText_Desc_ButtonMode_LR,   sText_Desc_ButtonMode_LA},
    [MENUITEM_MAIN_UNIT_SYSTEM] = {sText_Desc_UnitSystemImperial,   sText_Desc_UnitSystemMetric,sText_Empty},
    [MENUITEM_MAIN_FRAMETYPE]   = {sText_Desc_FrameType,            sText_Empty,                sText_Empty},
    [MENUITEM_MAIN_CANCEL]      = {sText_Desc_Save,                 sText_Empty,                sText_Empty},
};

// Custom
static const u8 sText_Desc_BattleHPBar[]        = _("Choose how fast the HP BAR will get\ndrained in battles.");
static const u8 sText_Desc_BattleExpBar[]       = _("Choose how fast the EXP BAR will get\nfilled in battles.");
static const u8 sText_Desc_SurfOff[]            = _("Disables the SURF theme when\nusing SURF.");
static const u8 sText_Desc_SurfOn[]             = _("Enables the SURF theme\nwhen using SURF.");
static const u8 sText_Desc_BikeOff[]            = _("Disables the BIKE theme when\nusing the BIKE.");
static const u8 sText_Desc_BikeOn[]             = _("Enables the BIKE theme when\nusing the BIKE.");
static const u8 sText_Desc_FontType[]           = _("Choose the font design.");
static const u8 sText_Desc_OverworldCallsOn[]   = _("TRAINERs will be able to call you,\noffering rematches and info.");
static const u8 sText_Desc_OverworldCallsOff[]  = _("You will not receive calls.\nSpecial events will still occur.");
static const u8 *const sOptionMenuItemDescriptionsCustom[MENUITEM_CUSTOM_COUNT][2] =
{
    [MENUITEM_CUSTOM_HP_BAR]      = {sText_Desc_BattleHPBar,        sText_Empty},
    [MENUITEM_CUSTOM_EXP_BAR]     = {sText_Desc_BattleExpBar,       sText_Empty},
    [MENUITEM_CUSTOM_FONT]        = {sText_Desc_FontType,           sText_Desc_FontType},
    [MENUITEM_CUSTOM_MATCHCALL]   = {sText_Desc_OverworldCallsOn,   sText_Desc_OverworldCallsOff},
    [MENUITEM_CUSTOM_CANCEL]      = {sText_Desc_Save,               sText_Empty},
};

// Disabled Descriptions
static const u8 sText_Desc_Disabled_Textspeed[]     = _("Only active if xyz.");
static const u8 *const sOptionMenuItemDescriptionsDisabledMain[MENUITEM_MAIN_COUNT] =
{
    [MENUITEM_MAIN_TEXTSPEED]   = sText_Desc_Disabled_Textspeed,
    [MENUITEM_MAIN_BATTLESCENE] = sText_Empty,
    [MENUITEM_MAIN_BATTLESTYLE] = sText_Empty,
    [MENUITEM_MAIN_SOUND]       = sText_Empty,
    [MENUITEM_MAIN_BUTTONMODE]  = sText_Empty,
    [MENUITEM_MAIN_UNIT_SYSTEM] = sText_Empty,
    [MENUITEM_MAIN_FRAMETYPE]   = sText_Empty,
    [MENUITEM_MAIN_CANCEL]      = sText_Empty,
};

// Disabled Custom
static const u8 sText_Desc_Disabled_BattleHPBar[]   = _("Only active if xyz.");
static const u8 *const sOptionMenuItemDescriptionsDisabledCustom[MENUITEM_CUSTOM_COUNT] =
{
    [MENUITEM_CUSTOM_HP_BAR]      = sText_Desc_Disabled_BattleHPBar,
    [MENUITEM_CUSTOM_EXP_BAR]     = sText_Empty,
    [MENUITEM_CUSTOM_FONT]        = sText_Empty,
    [MENUITEM_CUSTOM_MATCHCALL]   = sText_Empty,
    [MENUITEM_CUSTOM_CANCEL]      = sText_Empty,
};

static const u8 *const OptionTextDescription(void)
{
    u8 menuItem = sOptions->menuCursor[sOptions->submenu];
    u8 selection;

    switch (sOptions->submenu)
    {
    case MENU_MAIN:
        if (!CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledMain[menuItem];
        selection = sOptions->sel[menuItem];
        if (menuItem == MENUITEM_MAIN_TEXTSPEED || menuItem == MENUITEM_MAIN_FRAMETYPE)
            selection = 0;
        return sOptionMenuItemDescriptionsMain[menuItem][selection];
    case MENU_CUSTOM:
        if (!CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledMain[menuItem];
        selection = sOptions->sel_custom[menuItem];
        if (menuItem == MENUITEM_CUSTOM_HP_BAR || menuItem == MENUITEM_CUSTOM_EXP_BAR)
            selection = 0;
        return sOptionMenuItemDescriptionsCustom[menuItem][selection];
    }
}

static u8 MenuItemCount(void)
{
    switch (sOptions->submenu)
    {
    case MENU_MAIN:     return MENUITEM_MAIN_COUNT;
    case MENU_CUSTOM:   return MENUITEM_CUSTOM_COUNT;
    }
}

static u8 MenuItemCancel(void)
{
    switch (sOptions->submenu)
    {
    case MENU_MAIN:     return MENUITEM_MAIN_CANCEL;
    case MENU_CUSTOM:   return MENUITEM_CUSTOM_CANCEL;
    }
}

// Main code
static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static const u8 sText_TopBar_Main[]         = _("GENERAL");
static const u8 sText_TopBar_Main_Right[]   = _("{R_BUTTON}CUSTOM");
static const u8 sText_TopBar_Custom[]       = _("CUSTOM");
static const u8 sText_TopBar_Custom_Left[]  = _("{L_BUTTON}GENERAL");
static void DrawTopBarText(void)
{
    const u8 color[3] = { TEXT_DYNAMIC_COLOR_6, TEXT_COLOR_WHITE, TEXT_COLOR_OPTIONS_GRAY_FG };

    FillWindowPixelBuffer(WIN_TOPBAR, PIXEL_FILL(15));
    switch (sOptions->submenu)
    {
        case MENU_MAIN:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, sText_TopBar_Main);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 190, 1, color, 0, sText_TopBar_Main_Right);
            break;
        case MENU_CUSTOM:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, sText_TopBar_Custom);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 2, 1, color, 0, sText_TopBar_Custom_Left);
            break;
    }
    PutWindowTilemap(WIN_TOPBAR);
    CopyWindowToVram(WIN_TOPBAR, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(void) //left side text
{
    u8 i;

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < MenuItemCount(); i++)
        DrawLeftSideOptionText(i, (i * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

static void DrawDescriptionText(void)
{
    u8 color_gray[3];
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
        
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(1));
    AddTextPrinterParameterized4(WIN_DESCRIPTION, FONT_NORMAL, 8, 1, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextDescription());
    CopyWindowToVram(WIN_DESCRIPTION, COPYWIN_FULL);
}

static void DrawLeftSideOptionText(int selection, int y)
{
    u8 color_yellow[3];
    u8 color_gray[3];

    color_yellow[0] = TEXT_COLOR_TRANSPARENT;
    color_yellow[1] = TEXT_COLOR_OPTIONS_ORANGE_FG;
    color_yellow[2] = TEXT_COLOR_OPTIONS_ORANGE_SHADOW;
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;

    if (CheckConditions(selection))
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_yellow, TEXT_SKIP_DRAW, OptionTextRight(selection));
    else
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextRight(selection));
}

static void DrawRightSideChoiceText(const u8 *text, int x, int y, bool8 choosen, bool8 active)
{
    u8 color_red[3];
    u8 color_gray[3];

    if (active)
    {
        color_red[0] = TEXT_COLOR_TRANSPARENT;
        color_red[1] = TEXT_COLOR_OPTIONS_RED_FG;
        color_red[2] = TEXT_COLOR_OPTIONS_RED_SHADOW;
        color_gray[0] = TEXT_COLOR_TRANSPARENT;
        color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_FG;
        color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
    }
    else
    {
        color_red[0] = TEXT_COLOR_TRANSPARENT;
        color_red[1] = TEXT_COLOR_OPTIONS_RED_DARK_FG;
        color_red[2] = TEXT_COLOR_OPTIONS_RED_DARK_SHADOW;
        color_gray[0] = TEXT_COLOR_TRANSPARENT;
        color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG;
        color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
    }


    if (choosen)
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_red, TEXT_SKIP_DRAW, text);
    else
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_gray, TEXT_SKIP_DRAW, text);
}

static void DrawChoices(u32 id, int y) //right side draw function
{
    switch (sOptions->submenu)
    {
        case MENU_MAIN:
            if (sItemFunctionsMain[id].drawChoices != NULL)
                sItemFunctionsMain[id].drawChoices(sOptions->sel[id], y);
            break;
        case MENU_CUSTOM:
            if (sItemFunctionsCustom[id].drawChoices != NULL)
                sItemFunctionsCustom[id].drawChoices(sOptions->sel_custom[id], y);
            break;
    }
}

static void HighlightOptionMenuItem(void)
{
    int cursor = sOptions->visibleCursor[sOptions->submenu];

    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(Y_DIFF, 224));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(cursor * Y_DIFF + 24, cursor * Y_DIFF + 40));
}

void CB2_InitOptionMenu(void)
{
    u32 i, taskId;
    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void *)(VRAM), VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sOptionMenuBgTemplates, ARRAY_COUNT(sOptionMenuBgTemplates));
        ResetBgPositions();
        InitWindows(sOptionMenuWinTemplates);
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0 | WININ_WIN1_BG0 | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 3:
        LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1A2);
        gMain.state++;
        break;
    case 4:
        LoadPalette(sOptionMenuBg_Pal, 0, sizeof(sOptionMenuBg_Pal));
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, 0x70, 0x20);
        gMain.state++;
        break;
    case 5:
        LoadPalette(sOptionMenuText_Pal, 16, sizeof(sOptionMenuText_Pal));
        gMain.state++;
        break;
    case 6:
        sOptions = AllocZeroed(sizeof(*sOptions));
        sOptions->sel[MENUITEM_MAIN_TEXTSPEED]   = gSaveBlock2Ptr->optionsTextSpeed;
        sOptions->sel[MENUITEM_MAIN_BATTLESCENE] = gSaveBlock2Ptr->optionsBattleSceneOff;
        sOptions->sel[MENUITEM_MAIN_BATTLESTYLE] = gSaveBlock2Ptr->optionsBattleStyle;
        sOptions->sel[MENUITEM_MAIN_SOUND]       = gSaveBlock2Ptr->optionsSound;
        sOptions->sel[MENUITEM_MAIN_BUTTONMODE]  = gSaveBlock2Ptr->optionsButtonMode;
        sOptions->sel[MENUITEM_MAIN_UNIT_SYSTEM] = gSaveBlock2Ptr->optionsUnitSystem;
        sOptions->sel[MENUITEM_MAIN_FRAMETYPE]   = gSaveBlock2Ptr->optionsWindowFrameType;
        
        sOptions->sel_custom[MENUITEM_CUSTOM_HP_BAR]      = gSaveBlock2Ptr->optionsHpBarSpeed;
        sOptions->sel_custom[MENUITEM_CUSTOM_EXP_BAR]     = gSaveBlock2Ptr->optionsExpBarSpeed;
        sOptions->sel_custom[MENUITEM_CUSTOM_FONT]        = gSaveBlock2Ptr->optionsCurrentFont;
        sOptions->sel_custom[MENUITEM_CUSTOM_MATCHCALL]   = gSaveBlock2Ptr->optionsDisableMatchCall;

        sOptions->submenu = MENU_MAIN;

        gMain.state++;
        break;
    case 7:
        PutWindowTilemap(WIN_TOPBAR);
        DrawTopBarText();
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(WIN_DESCRIPTION);
        DrawDescriptionText();
        gMain.state++;
        break;
    case 9:
        PutWindowTilemap(WIN_OPTIONS);
        DrawOptionMenuTexts();
        gMain.state++;
        break;
    case 10:
        taskId = CreateTask(Task_OptionMenuFadeIn, 0);
        
        sOptions->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MENUITEM_MAIN_COUNT - 1, 110, 110, 0);

        for (i = 0; i < min(OPTIONS_ON_SCREEN, MenuItemCount()); i++)
            DrawChoices(i, i * Y_DIFF);

        HighlightOptionMenuItem();

        CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
        gMain.state++;
        break;
    case 11:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 12:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}

static void Task_OptionMenuFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_OptionMenuProcessInput;
}

static void Task_OptionMenuProcessInput(u8 taskId)
{
    int i = 0;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN , MenuItemCount());
    if (JOY_NEW(A_BUTTON))
    {
        if (sOptions->menuCursor[sOptions->submenu] == MenuItemCancel())
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (sOptions->visibleCursor[sOptions->submenu] == NUM_OPTIONS_FROM_BORDER) // don't advance visible cursor until scrolled to the bottom
        {
            if (--sOptions->menuCursor[sOptions->submenu] == 0)
                sOptions->visibleCursor[sOptions->submenu]--;
            else
                ScrollMenu(1);
        }
        else
        {
            if (--sOptions->menuCursor[sOptions->submenu] < 0) // Scroll all the way to the bottom.
            {
                sOptions->visibleCursor[sOptions->submenu] = sOptions->menuCursor[sOptions->submenu] = optionsToDraw-2;
                ScrollAll(0);
                sOptions->visibleCursor[sOptions->submenu] = optionsToDraw-1;
                sOptions->menuCursor[sOptions->submenu] = MenuItemCount() - 1;
            }
            else
            {
                sOptions->visibleCursor[sOptions->submenu]--;
            }
        }
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sOptions->visibleCursor[sOptions->submenu] == optionsToDraw-2) // don't advance visible cursor until scrolled to the bottom
        {
            if (++sOptions->menuCursor[sOptions->submenu] == MenuItemCount() - 1)
                sOptions->visibleCursor[sOptions->submenu]++;
            else
                ScrollMenu(0);
        }
        else
        {
            if (++sOptions->menuCursor[sOptions->submenu] >= MenuItemCount()-1) // Scroll all the way to the top.
            {
                sOptions->visibleCursor[sOptions->submenu] = optionsToDraw-2;
                sOptions->menuCursor[sOptions->submenu] = MenuItemCount() - optionsToDraw-1;
                ScrollAll(1);
                sOptions->visibleCursor[sOptions->submenu] = sOptions->menuCursor[sOptions->submenu] = 0;
            }
            else
            {
                sOptions->visibleCursor[sOptions->submenu]++;
            }
        }
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        if (sOptions->submenu == MENU_MAIN)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsMain[cursor].processInput != NULL)
                {
                    sOptions->sel[cursor] = sItemFunctionsMain[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
        else if (sOptions->submenu == MENU_CUSTOM)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel_custom[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsCustom[cursor].processInput != NULL)
                {
                    sOptions->sel_custom[cursor] = sItemFunctionsCustom[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel_custom[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
    }
    else if (JOY_NEW(R_BUTTON))
    {
        if (sOptions->submenu != MENU_CUSTOM)
            sOptions->submenu++;

        DrawTopBarText();
        ReDrawAll();
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(L_BUTTON))
    {
        if (sOptions->submenu != 0)
            sOptions->submenu--;
        
        DrawTopBarText();
        ReDrawAll();
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
}

static void Task_OptionMenuSave(u8 taskId)
{
    gSaveBlock2Ptr->optionsTextSpeed        = sOptions->sel[MENUITEM_MAIN_TEXTSPEED];
    gSaveBlock2Ptr->optionsBattleSceneOff   = sOptions->sel[MENUITEM_MAIN_BATTLESCENE];
    gSaveBlock2Ptr->optionsBattleStyle      = sOptions->sel[MENUITEM_MAIN_BATTLESTYLE];
    gSaveBlock2Ptr->optionsSound            = sOptions->sel[MENUITEM_MAIN_SOUND];
    gSaveBlock2Ptr->optionsButtonMode       = sOptions->sel[MENUITEM_MAIN_BUTTONMODE];
    gSaveBlock2Ptr->optionsUnitSystem       = sOptions->sel[MENUITEM_MAIN_UNIT_SYSTEM];
    gSaveBlock2Ptr->optionsWindowFrameType  = sOptions->sel[MENUITEM_MAIN_FRAMETYPE];

    gSaveBlock2Ptr->optionsHpBarSpeed       = sOptions->sel_custom[MENUITEM_CUSTOM_HP_BAR];
    gSaveBlock2Ptr->optionsExpBarSpeed      = sOptions->sel_custom[MENUITEM_CUSTOM_EXP_BAR];
    gSaveBlock2Ptr->optionsCurrentFont      = sOptions->sel_custom[MENUITEM_CUSTOM_FONT];
    gSaveBlock2Ptr->optionsDisableMatchCall = sOptions->sel_custom[MENUITEM_CUSTOM_MATCHCALL];

    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
    gTasks[taskId].func = Task_OptionMenuFadeOut;
}

static void Task_OptionMenuFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        FREE_AND_SET_NULL(sOptions);
        SetMainCallback2(gMain.savedCallback);
    }
}

static void ScrollMenu(int direction)
{
    int menuItem, pos;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    if (direction == 0) // scroll down
        menuItem = sOptions->menuCursor[sOptions->submenu] + NUM_OPTIONS_FROM_BORDER, pos = optionsToDraw - 1;
    else
        menuItem = sOptions->menuCursor[sOptions->submenu] - NUM_OPTIONS_FROM_BORDER, pos = 0;

    // Hide one
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF, PIXEL_FILL(0));
    // Show one
    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(1), 0, Y_DIFF * pos, 26 * 8, Y_DIFF);
    // Print
    DrawChoices(menuItem, pos * Y_DIFF);
    DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}
static void ScrollAll(int direction) // to bottom or top
{
    int i, y, menuItem, pos;
    int scrollCount;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    scrollCount = MenuItemCount() - optionsToDraw;

    // Move items up/down
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF * scrollCount, PIXEL_FILL(1));

    // Clear moved items
    if (direction == 0)
    {
        y = optionsToDraw - scrollCount;
        if (y < 0)
            y = optionsToDraw;
        y *= Y_DIFF;
    }
    else
    {
        y = 0;
    }

    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(1), 0, y, 26 * 8, Y_DIFF * scrollCount);
    // Print new texts
    for (i = 0; i < scrollCount; i++)
    {
        if (direction == 0) // From top to bottom
            menuItem = MenuItemCount() - 1 - i, pos = optionsToDraw - 1 - i;
        else // From bottom to top
            menuItem = i, pos = i;
        DrawChoices(menuItem, pos * Y_DIFF);
        DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

// Process Input functions ****GENERIC****
static int GetMiddleX(const u8 *txt1, const u8 *txt2, const u8 *txt3)
{
    int xMid;
    int widthLeft = GetStringWidth(1, txt1, 0);
    int widthMid = GetStringWidth(1, txt2, 0);
    int widthRight = GetStringWidth(1, txt3, 0);

    widthMid -= (198 - 104);
    xMid = (widthLeft - widthMid - widthRight) / 2 + 104;
    return xMid;
}

static int XOptions_ProcessInput(int x, int selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (++selection > (x - 1))
            selection = 0;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (--selection < 0)
            selection = (x - 1);
    }
    return selection;
}

static int ProcessInput_Options_Two(int selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
        selection ^= 1;

    return selection;
}

static int ProcessInput_Options_Three(int selection)
{
    return XOptions_ProcessInput(3, selection);
}

static int ProcessInput_Options_Four(int selection)
{
    return XOptions_ProcessInput(4, selection);
}

static int ProcessInput_Options_Eleven(int selection)
{
    return XOptions_ProcessInput(11, selection);
}

// Process Input functions ****SPECIFIC****
static int ProcessInput_Sound(int selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        SetPokemonCryStereo(selection);
    }

    return selection;
}

static int ProcessInput_FrameType(int selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < WINDOW_FRAMES_COUNT - 1)
            selection++;
        else
            selection = 0;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = WINDOW_FRAMES_COUNT - 1;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
    }
    return selection;
}

// Draw Choices functions ****GENERIC****
static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active)
{
    bool8 choosen = FALSE;
    if (style != 0)
        choosen = TRUE;

    DrawRightSideChoiceText(text, x, y+1, choosen, active);
}

static void DrawChoices_Options_Four(const u8 *const *const strings, int selection, int y, bool8 active)
{
    static const u8 choiceOrders[][3] =
    {
        {0, 1, 2},
        {0, 1, 2},
        {1, 2, 3},
        {1, 2, 3},
    };
    u8 styles[4] = {0};
    int xMid;
    const u8 *order = choiceOrders[selection];

    styles[selection] = 1;
    xMid = GetMiddleX(strings[order[0]], strings[order[1]], strings[order[2]]);

    DrawOptionMenuChoice(strings[order[0]], 104, y, styles[order[0]], active);
    DrawOptionMenuChoice(strings[order[1]], xMid, y, styles[order[1]], active);
    DrawOptionMenuChoice(strings[order[2]], GetStringRightAlignXOffset(1, strings[order[2]], 198), y, styles[order[2]], active);
}

static void ReDrawAll(void)
{
    u8 menuItem = sOptions->menuCursor[sOptions->submenu] - sOptions->visibleCursor[sOptions->submenu];
    u8 i;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    if (MenuItemCount() <= OPTIONS_ON_SCREEN) // Draw or delete the scrolling arrows based on options in the menu
    {
        if (sOptions->arrowTaskId != TASK_NONE)
        {
            RemoveScrollIndicatorArrowPair(sOptions->arrowTaskId);
            sOptions->arrowTaskId = TASK_NONE;
        }
    }
    else
    {
        if (sOptions->arrowTaskId == TASK_NONE)
            sOptions->arrowTaskId = sOptions->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MenuItemCount() - 1, 110, 110, 0);

    }

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < optionsToDraw; i++)
    {
        DrawChoices(menuItem+i, i * Y_DIFF);
        DrawLeftSideOptionText(menuItem+i, (i * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

// Process Input functions ****SPECIFIC****
static const u8 sText_Faster[] = _("FASTER");
static const u8 sText_Instant[] = _("INSTANT");
static const u8 *const sTextSpeedStrings[] = {gText_TextSpeedSlow, gText_TextSpeedMid, gText_TextSpeedFast, sText_Faster};
static void DrawChoices_TextSpeed(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MAIN_TEXTSPEED);
    DrawChoices_Options_Four(sTextSpeedStrings, selection, y, active);
}

static void DrawChoices_BattleScene(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MAIN_BATTLESCENE);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOn, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_BattleSceneOff, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), y, styles[1], active);
}

static void DrawChoices_BattleStyle(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MAIN_BATTLESTYLE);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleStyleShift, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_BattleStyleSet, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleStyleSet, 198), y, styles[1], active);
}

static void DrawChoices_Sound(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MAIN_SOUND);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_SoundMono, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_SoundStereo, GetStringRightAlignXOffset(FONT_NORMAL, gText_SoundStereo, 198), y, styles[1], active);
}

static void DrawChoices_ButtonMode(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MAIN_BUTTONMODE);
    u8 styles[3] = {0};
    int xMid = GetMiddleX(gText_ButtonTypeNormal, gText_ButtonTypeLR, gText_ButtonTypeLEqualsA);
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_ButtonTypeNormal, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_ButtonTypeLR, xMid, y, styles[1], active);
    DrawOptionMenuChoice(gText_ButtonTypeLEqualsA, GetStringRightAlignXOffset(1, gText_ButtonTypeLEqualsA, 198), y, styles[2], active);
}

static const u8 sText_Normal[] = _("NORMAL");
static void DrawChoices_BarSpeed(int selection, int y) //HP and EXP
{
    bool8 active = CheckConditions(MENUITEM_CUSTOM_EXP_BAR);

    if (selection == 0)
         DrawOptionMenuChoice(sText_Normal, 104, y, 1, active);
    else if (selection < 10)
    {
        u8 textPlus[] = _("+1{0x77}{0x77}{0x77}{0x77}{0x77}"); // 0x77 is to clear INSTANT text
        textPlus[1] = CHAR_0 + selection;
        DrawOptionMenuChoice(textPlus, 104, y, 1, active);
    }
    else
        DrawOptionMenuChoice(sText_Instant, 104, y, 1, active);
}

static void DrawChoices_UnitSystem(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MAIN_UNIT_SYSTEM);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_UnitSystemImperial, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_UnitSystemMetric, GetStringRightAlignXOffset(1, gText_UnitSystemMetric, 198), y, styles[1], active);
}

static void DrawChoices_FrameType(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MAIN_FRAMETYPE);
    u8 text[16];
    u8 n = selection + 1;
    u16 i;

    for (i = 0; gText_FrameTypeNumber[i] != EOS && i <= 5; i++)
        text[i] = gText_FrameTypeNumber[i];

    // Convert a number to decimal string
    if (n / 10 != 0)
    {
        text[i] = n / 10 + CHAR_0;
        i++;
        text[i] = n % 10 + CHAR_0;
        i++;
    }
    else
    {
        text[i] = n % 10 + CHAR_0;
        i++;
        text[i] = 0x77;
        i++;
    }

    text[i] = EOS;

    DrawOptionMenuChoice(gText_FrameType, 104, y, 0, active);
    DrawOptionMenuChoice(text, 128, y, 1, active);
}

static void DrawChoices_Font(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_CUSTOM_FONT);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_OptionFontEmerald, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_OptionFontFireRed, GetStringRightAlignXOffset(1, gText_OptionFontFireRed, 198), y, styles[1], active);
}

static void DrawChoices_MatchCall(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_CUSTOM_MATCHCALL);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOn, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_BattleSceneOff, GetStringRightAlignXOffset(1, gText_BattleSceneOff, 198), y, styles[1], active);
}


// Background tilemap
#define TILE_TOP_CORNER_L 0x1A2 // 418
#define TILE_TOP_EDGE     0x1A3 // 419
#define TILE_TOP_CORNER_R 0x1A4 // 420
#define TILE_LEFT_EDGE    0x1A5 // 421
#define TILE_RIGHT_EDGE   0x1A7 // 423
#define TILE_BOT_CORNER_L 0x1A8 // 424
#define TILE_BOT_EDGE     0x1A9 // 425
#define TILE_BOT_CORNER_R 0x1AA // 426

static void DrawBgWindowFrames(void)
{
    //                     bg, tile,              x, y, width, height, palNum
    // Option Texts window
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  2,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  2, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  2,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  3,  1, 16,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  3,  1, 16,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 13,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 13, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 13,  1,  1,  7);

    // Description window
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2, 14, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1, 15,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28, 15,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}
