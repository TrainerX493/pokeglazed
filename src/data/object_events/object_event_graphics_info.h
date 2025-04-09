const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableBrendanNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrendanMachBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableBrendanAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Surfing
    .images = sPicTableBrendanSurfing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_FieldMove
    .images = sPicTableBrendanFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_QuintyPlump = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_QUINTY_PLUMP,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_L
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_QuintyPlump
    .images = sPicTableQuintyPlump,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_NinjaBoy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableNinjaBoy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Twin = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTwin,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boy1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBoy1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Girl1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGirl1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boy2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBoy2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Girl2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGirl2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LittleBoy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableLittleBoy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LittleGirl = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableLittleGirl,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boy3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBoy3,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Girl3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGirl3,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RichBoy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRichBoy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWoman1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FatMan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFatMan,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PokefanF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePokefanF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWoman2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ExpertM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableExpertM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ExpertF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableExpertF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWoman3,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PokefanM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePokefanM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman4 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWoman4,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cook = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableCook,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkReceptionist = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLinkReceptionist,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_OldMan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableOldMan,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_OldWoman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableOldWoman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Camper = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableCamper,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Picnicker = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePicnicker,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan3,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman5 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWoman5,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Youngster = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableYoungster,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BugCatcher = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBugCatcher,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PsychicM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePsychicM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SchoolKidM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSchoolKidM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Maniac = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableManiac,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_HexManiac = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableHexManiac,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RayquazaStill = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Standard
    .images = sPicTableRayquazaStill,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SwimmerM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSwimmerM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SwimmerF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSwimmerF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BlackBelt = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBlackBelt,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Beauty = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBeauty,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Scientist1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableScientist1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lass = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLass,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Gentleman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGentleman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sailor = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSailor,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Fisherman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFisherman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RunningTriathleteM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRunningTriathleteM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RunningTriathleteF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRunningTriathleteF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TuberF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableTuberF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TuberM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableTuberM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Hiker = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableHiker,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CyclingTriathleteM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableCyclingTriathleteM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CyclingTriathleteF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableCyclingTriathleteF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Nurse = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Nurse
    .images = sPicTableNurse,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ItemBall = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableItemBall,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 256, 16, 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32, NULL
    .anims = sAnimTable_BerryTree
    .images = sPicTablePechaBerryTree,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTreeEarlyStages = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 256, 16, 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_BerryTree
    .images = sPicTablePechaBerryTree,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTreeLateStages = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BerryTree
    .images = sPicTablePechaBerryTree,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ProfBirch = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableProfBirch,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man4 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan4,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man5 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan5,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ReporterM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableReporterM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ReporterF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableReporterF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Bard = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMauvilleOldMan1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Hipster = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMauvilleOldMan1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Trader = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMauvilleOldMan1,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Storyteller = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Giddy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedMauvilleOldMan1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedMauvilleOldMan2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedNatuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableUnusedNatuDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedMagnemiteDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableUnusedMagnemiteDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedSquirtleDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableUnusedSquirtleDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedWooperDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableUnusedWooperDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedPikachuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableUnusedPikachuDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedPorygon2Doll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableUnusedPorygon2Doll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CuttableTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_CuttableTree
    .images = sPicTableCuttableTree,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MartEmployee = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMartEmployee,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RooftopSaleWoman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRooftopSaleWoman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Teala = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTeala,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BreakableRock = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_BreakableRock
    .images = sPicTableBreakableRock,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PushableBoulder = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTablePushableBoulder,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MrBrineysBoat = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMrBrineysBoat,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableMayNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMayMachBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableMayAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MaySurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Surfing
    .images = sPicTableMaySurfing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_FieldMove
    .images = sPicTableMayFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Truck = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_TRUCK,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE
    .size = 1152,
    .width = 48,
    .height = 48,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_48x48
    .anims = sAnimTable_Inanimate
    .images = sPicTableTruck,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_VigorothCarryingBox = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_VIGOROTH,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableVigorothCarryingBox,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_VigorothFacingAway = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_VIGOROTH,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableVigorothFacingAway,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BirchsBag = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableBirchsBag,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_EnemyZigzagoon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ZIGZAGOON,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableEnemyZigzagoon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Poochyena = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_POOCHYENA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTablePoochyena,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Artist = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableArtist,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableBrendanNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrendanMachBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableBrendanAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Surfing
    .images = sPicTableBrendanSurfing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_FieldMove
    .images = sPicTableBrendanFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableMayNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMayMachBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableMayAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMaySurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Surfing
    .images = sPicTableMaySurfing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_FieldMove
    .images = sPicTableMayFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cameraman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableCameraman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrendanUnderwater,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMayUnderwater,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MovingBox = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MOVING_BOX,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableMovingBox,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CableCar = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_CABLE_CAR,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableCableCar,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Scientist2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableScientist2,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DevonEmployee = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableDevonEmployee,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AquaMemberM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableAquaMemberM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AquaMemberF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableAquaMemberF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MagmaMemberM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMagmaMemberM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MagmaMemberF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMagmaMemberF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sidney = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSidney,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Phoebe = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePhoebe,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Glacia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGlacia,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Drake = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableDrake,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Roxanne = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRoxanne,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Brawly = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrawly,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wattson = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWattson,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Flannery = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFlannery,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Norman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableNorman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Winona = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWinona,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Liza = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLiza,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tate = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTate,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wallace = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWallace,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Steven = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSteven,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wally = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWally,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RubySapphireLittleBoy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableRubySapphireLittleBoy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanFishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Fishing
    .images = sPicTableBrendanFishing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayFishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Fishing
    .images = sPicTableMayFishing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_HotSpringsOldWoman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableHotSpringsOldWoman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SSTidal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SSTIDAL,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 1920, 96, 40,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_8x8
    .subspriteTables = sOamTables_96x40
    .anims = sAnimTable_Standard
    .images = sPicTableSSTidal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SubmarineShadow = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SUBMARINE_SHADOW,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 1408, 88, 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_8x8
    .subspriteTables = sOamTables_88x32
    .anims = sAnimTable_Standard
    .images = sPicTableSubmarineShadow,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PichuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTablePichuDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PikachuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTablePikachuDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MarillDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableMarillDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TogepiDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableTogepiDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CyndaquilDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableCyndaquilDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ChikoritaDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableChikoritaDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TotodileDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableTotodileDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_JigglypuffDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableJigglypuffDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MeowthDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableMeowthDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ClefairyDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableClefairyDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DittoDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableDittoDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SmoochumDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableSmoochumDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TreeckoDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableTreeckoDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TorchicDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableTorchicDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MudkipDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableMudkipDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DuskullDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableDuskullDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_WynautDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableWynautDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BaltoyDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableBaltoyDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KecleonDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableKecleonDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AzurillDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableAzurillDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SkittyDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableSkittyDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SwabluDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableSwabluDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GulpinDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableGulpinDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LotadDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableLotadDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeedotDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableSeedotDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PikaCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTablePikaCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RoundCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableRoundCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KissCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableKissCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ZigzagCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableZigzagCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SpinCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableSpinCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DiamondCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableDiamondCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BallCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableBallCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GrassCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableGrassCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FireCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableFireCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_WaterCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableWaterCushion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigSnorlaxDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigSnorlaxDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRhydonDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigRhydonDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigLaprasDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigLaprasDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigVenusaurDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigVenusaurDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigCharizardDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigCharizardDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigBlastoiseDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigBlastoiseDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigWailmerDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigWailmerDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRegirockDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigRegirockDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRegiceDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigRegiceDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRegisteelDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBigRegisteelDoll,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Latias = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLatiasLatios,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Latios = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLatiasLatios,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GameboyKid = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGameboyKid,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ContestJudge = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableContestJudge,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanWatering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrendanWatering,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayWatering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMayWatering,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBrendanDecorating,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableMayDecorating,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Archie = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableArchie,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Maxie = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMaxie,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KyogreFront = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableKyogreFront,
    .affineAnims = sAffineAnimTable_mTable_KyogreGroudon
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GroudonFront = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableGroudonFront,
    .affineAnims = sAffineAnimTable_mTable_KyogreGroudon
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KyogreSide = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableKyogreSide,
    .affineAnims = sAffineAnimTable_mTable_KyogreGroudon
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GroudonSide = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_GroudonSide
    .images = sPicTableGroudonSide,
    .affineAnims = sAffineAnimTable_mTable_KyogreGroudon
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Fossil = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableFossil,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Regirock = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableRegi,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Regice = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableRegi,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Registeel = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableRegi,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Skitty = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableSkitty,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Kecleon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableKecleon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KyogreAsleep = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_KYOGRE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableKyogreFront,
    .affineAnims = sAffineAnimTable_mTable_KyogreGroudon
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GroudonAsleep = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GROUDON,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableGroudonFront,
    .affineAnims = sAffineAnimTable_mTable_KyogreGroudon
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Rayquaza = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Rayquaza
    .images = sPicTableRayquaza,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Zigzagoon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableZigzagoon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Pikachu = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTablePikachu,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Azumarill = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableAzumarill,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wingull = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableWingull,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KecleonBridgeShadow = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableKecleon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TuberMSwimming = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableTuberMSwimming,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Azurill = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableAzurill,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mom = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMom,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkBrendan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableBrendanNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkMay = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableMayNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Juan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableJuan,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Scott = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableScott,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MysteryEventDeliveryman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMysteryEventDeliveryman,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Statue = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableStatue,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Kirlia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableKirlia,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Dusclops = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableDusclops,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnionRoomAttendant = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableUnionRoomAttendant,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Red = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RED_LEAF,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Leaf = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RED_LEAF,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLeaf,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sudowoodo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSudowoodo,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mew = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMew,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Deoxys = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_DEOXYS,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableDeoxys,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BirthIslandStone = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BIRTH_ISLAND_STONE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBirthIslandStone,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Anabel = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableAnabel,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tucker = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTucker,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Greta = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGreta,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Spenser = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSpenser,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Noland = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableNoland,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lucy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLucy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Brandon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrandon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RubySapphireBrendan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RS_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRubySapphireBrendan,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RubySapphireMay = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RS_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRubySapphireMay,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lugia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_LUGIA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLugia,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_HoOh = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_HO_OH,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_HoOh
    .images = sPicTableHoOh,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableBrantNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrantBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantSki = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableBrantSki,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Surfing
    .images = sPicTableBrantSurfing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_FieldMove
    .images = sPicTableBrantFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrantUnderwater,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableBrantDecorating,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrantLighthouse = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRANT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION, 2048, 64, 64,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableBrantLighthouse,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_BrendanMayNormal
    .images = sPicTableAlexaNormal,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableAlexaBike,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaSki = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_AcroBike
    .images = sPicTableAlexaSki,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Surfing
    .images = sPicTableAlexaSurfing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_FieldMove
    .images = sPicTableAlexaFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableAlexaUnderwater,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableAlexaDecorating,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AlexaLighthouse = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ALEXA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION, 2048, 64, 64,
    .paletteSlot = PALSLOT_PLAYER
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableAlexaLighthouse,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boy4 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBoy4,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Girl4 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGirl4,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Percy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePercy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cato = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableCato,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tye = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTye,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Chelle = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableChelle,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Luke = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLuke,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cynthia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_6,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableCynthia,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Rosaline = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRosaline,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Magnus = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_8,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMagnus,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tanya = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTanya,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Gray = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGray,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Plane = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_9,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE
    .size = 1152,
    .width = 48,
    .height = 48,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTablePlane,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Zoroark = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_10,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableZoroark,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RegirockHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableRegirockHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RegiceHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableRegiceHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RegisteelHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_11,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableRegisteelHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mewtwo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_12,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMewtwo,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Arceus = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_13,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE
    .size = 1152,
    .width = 48,
    .height = 48,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableArceus,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Shinx = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_14,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableShinx,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Slowpoke = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_15,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableSlowpoke,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sparky = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSparky,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Terry = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTerry,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Flo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFlo,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lief = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLief,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Irene = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableIrene,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Ernest = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableErnest,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Nicole = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableNicole,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tyson = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableTyson,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Bugsy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBugsy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Brian = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBrian,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Clair = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableClair,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Falkner = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFalkner,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Jasmine = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableJasmine,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Morty = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMorty,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Silver = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSilver,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Simon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_15,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSimon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Ivan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableIvan,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Whitney = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_15,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWhitney,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Powell = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePowell,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Eusine = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableEusine,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Thor = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableThor,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Ricky = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRicky,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sora = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSora,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Makunoushi = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMakunoushi,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Blake = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableBlake,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RedAlt = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRedAlt,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Kris = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableKris,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_StevenAlt = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSteven,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_WallaceAlt = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWallace,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Soul = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSoul,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FusionMember = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFusionMember,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FusionNeoMemberM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFusionNeoMemberM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FusionNeoMemberF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableFusionNeoMemberF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Michael = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMichael,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Regina = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableRegina,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Decon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableDecon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Pius = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePius,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Willow = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWillow,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_OakBrown = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableOakBrown,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Gran = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGran,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lance = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableLance,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Pryce = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePryce,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sean = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSean,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DadGlazed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableDadGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MomGlazed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMomGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_NurseGlazed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableNurseGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_NurseFake = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableNurseGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MartEmployeeGlazed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMartEmployeeGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ReceptionistGlazed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableReceptionistGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Guard = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGuard,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man6 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan6,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man7 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan7,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man8 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan8,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man9 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan9,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man10 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMan10,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman6= {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableWoman6,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cyclist = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableCyclist,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Snowboader = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSnowboader,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_EvergreenRaceM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableEvergreenRaceM,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_EvergreenRaceF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableEvergreenRaceF,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Articuno = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_11,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableArticuno,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Azelf = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableAzelf,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Celebi = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableArticuno,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cobalion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableCobalion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cresselia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableCresselia,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Darkrai = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableDarkrai,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Dialga = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableDialga,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Entei = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableEntei,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Giratina = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableGiratina,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Heatran = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableHeatran,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_HoOhHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Standard
    .images = sPicTableHoOhHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Jirachi = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableJirachi,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Keldeo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableKeldeo,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Kyurem = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableKyurem,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LatiasHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLatiasHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LatiosHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLatiosHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LugiaHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Standard
    .images = sPicTableLugiaHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Manaphy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableManaphy,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mesprit = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_12,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMesprit,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MewRage = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableMewRage,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Moltres = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMoltres,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Palkia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE
    .size = 1152,
    .width = 48,
    .height = 48,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTablePalkia,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Raikou = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableRaikou,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Regigigas = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableRegigigas,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Reshiram = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableReshiram,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Shaymin = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableShaymin,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Suicune = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableSuicune,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Terrakion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableTerrakion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Uxie = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableUxie,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Virizion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableVirizion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Zapdos = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableZapdos,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Zekrom = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableZekrom,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Absol = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableAbsol,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Ampharos = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableAmpharos,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Blissey = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBlissey,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Chespin = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableChespin,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cyndaquil = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableCyndaquil,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Dragonite = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableDragonite,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Drapion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_8,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableDrapion,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Eevee = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableEevee,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Empoleon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableEmpoleon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Espeon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableEspeon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Fennekin = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableFennekin,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Feraligatr = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableFeraligatr,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Flareon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableFlareon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Froakie = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableFroakie,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Garchomp = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_15,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableGarchomp,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Grovyle = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableGrovyle,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Hydreigon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_12,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableHydreigon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Jolteon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableJolteon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lapras = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLapras,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Leafeon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLeafeon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lucario = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableLucario,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mienfoo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMienfoo,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Miltank = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_15,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMiltank,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mudkip = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 256, 16, 16,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableMudkip,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PikachuScarfed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTablePikachuScarfed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Quilava = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableQuilava,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sentret = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_5,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableSentret,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Seviper = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableSeviper,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Skarmory = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableSkarmory,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Umbreon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableUmbreon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Vaporeon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableVaporeon,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Zangoose = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableZangoose,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FlygonShiny = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableFlygonShiny,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GardevoirShiny = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableGardevoirShiny,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MachampShiny = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableMachampShiny,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_NidokingShiny = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableNidokingShiny,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AuroraOrb = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableAuroraOrb,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Bamboo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Standard
    .images = sPicTableBamboo,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CarOrange = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE
    .size = 1152,
    .width = 48,
    .height = 48,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_48x48
    .anims = sAnimTable_Inanimate
    .images = sPicTableCarOrange,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CarYellow = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableCarYellow,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Egg = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableEgg,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GreatBall = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1 ,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableGreatBall,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GymFire = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableGymFire,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_HeadbuttTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_7,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableHeadbuttTree,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_IllusionRock = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableIllusionRock,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ItemBallHGSS = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableItemBallHGSS,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_JohtoBerries = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32
    .subspriteTables = sOamTables_16x32
    .anims = sAnimTable_Standard
    .images = sPicTableJohtoBerries,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MineCart = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_32x32
    .anims = sAnimTable_Inanimate
    .images = sPicTableMineCart,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ShipGlazed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 1920, 96, 40,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_8x8
    .subspriteTables = sOamTables_96x40
    .anims = sAnimTable_Standard
    .images = sPicTableShipGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SignThing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableSignThing,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ThunderOrb = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableThunderOrb,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tombstone = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableTombstone,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TreeSudo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1
    .shadowSize = SHADOW_SIZE_M
    .inanimate = FALSE,
    .compressed = FALSE
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Standard
    .images = sPicTableTreeSudo,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TruckGlazed = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE, 2048, 64, 64,
    .paletteSlot = PALSLOT_NPC_SPECIAL
    .shadowSize = SHADOW_SIZE_M
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_64x64
    .anims = sAnimTable_Inanimate
    .images = sPicTableTruckGlazed,
    .affineAnims = gDummySpriteAffineAnimTable
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_VolcanoOrb = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GLAZED_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3
    .shadowSize = SHADOW_SIZE_S
    .inanimate = TRUE,
    .compressed = FALSE
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32
    .subspriteTables = sOamTables_16x16
    .anims = sAnimTable_Inanimate
    .images = sPicTableVolcanoOrb,
    .affineAnims = gDummySpriteAffineAnimTable
};
