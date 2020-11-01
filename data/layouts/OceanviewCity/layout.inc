NORTHCOAST_TOWN_0_0_MapBorder::
	.incbin "data/layouts/NORTHCOAST_TOWN_0_0/border.bin"

NORTHCOAST_TOWN_0_0_MapBlockdata::
	.incbin "data/layouts/NORTHCOAST_TOWN_0_0/map.bin"

	.align 2
NORTHCOAST_TOWN_0_0_Layout::
    .4byte    0x00000028  @Map Width
    .4byte    0x00000028  @Map Height
    .4byte    NORTHCOAST_TOWN_0_0_MapBorder  @Border Data
    .4byte    NORTHCOAST_TOWN_0_0_MapBlockdata  @Map data / Movement Permissons
    .4byte    gTileset_NORTHCOAST_TOWN_0_0_PrimaryTileset  @Primary Tileset
    .4byte    gTileset_NORTHCOAST_TOWN_0_0_SecondaryTileset  @Secondary Tileset
SOUTHERLY_CITY_0_1_MapBorder::
	.incbin "data/layouts/SOUTHERLY_CITY_0_1/border.bin"

SOUTHERLY_CITY_0_1_MapBlockdata::
	.incbin "data/layouts/SOUTHERLY_CITY_0_1/map.bin"

	.align 2
SOUTHERLY_CITY_0_1_Layout::
    .4byte    0x00000028  @Map Width
    .4byte    0x0000003C  @Map Height
    .4byte    SOUTHERLY_CITY_0_1_MapBorder  @Border Data
    .4byte    SOUTHERLY_CITY_0_1_MapBlockdata  @Map data / Movement Permissons
    .4byte    gTileset_SOUTHERLY_CITY_0_1_PrimaryTileset  @Primary Tileset
    .4byte    gTileset_SOUTHERLY_CITY_0_1_SecondaryTileset  @Secondary Tileset
SEASPRAY_TOWN_0_2_MapBorder::
	.incbin "data/layouts/SEASPRAY_TOWN_0_2/border.bin"

SEASPRAY_TOWN_0_2_MapBlockdata::
	.incbin "data/layouts/SEASPRAY_TOWN_0_2/map.bin"

	.align 2
SEASPRAY_TOWN_0_2_Layout::
    .4byte    0x0000002A  @Map Width
    .4byte    0x00000028  @Map Height
    .4byte    SEASPRAY_TOWN_0_2_MapBorder  @Border Data
    .4byte    SEASPRAY_TOWN_0_2_MapBlockdata  @Map data / Movement Permissons
    .4byte    gTileset_SEASPRAY_TOWN_0_2_PrimaryTileset  @Primary Tileset
    .4byte    gTileset_SEASPRAY_TOWN_0_2_SecondaryTileset  @Secondary Tileset
OCEANVIEW_CITY_0_3_MapBorder::
	.incbin "data/layouts/OCEANVIEW_CITY_0_3/border.bin"

OCEANVIEW_CITY_0_3_MapBlockdata::
	.incbin "data/layouts/OCEANVIEW_CITY_0_3/map.bin"

	.align 2
OCEANVIEW_CITY_0_3_Layout::
    .4byte    0x00000028  @Map Width
    .4byte    0x0000003C  @Map Height
    .4byte    OCEANVIEW_CITY_0_3_MapBorder  @Border Data
    .4byte    OCEANVIEW_CITY_0_3_MapBlockdata  @Map data / Movement Permissons
    .4byte    gTileset_OCEANVIEW_CITY_0_3_PrimaryTileset  @Primary Tileset
    .4byte    gTileset_OCEANVIEW_CITY_0_3_SecondaryTileset  @Secondary Tileset
