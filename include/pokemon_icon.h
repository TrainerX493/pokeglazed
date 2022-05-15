#ifndef GUARD_POKEMON_ICON_H
#define GUARD_POKEMON_ICON_H

extern const u8 gMonIconPaletteIndices[];
extern const u8 gMonIconPaletteIndicesFemale[];
extern const u8 *const gMonIconTable[];
extern const struct SpritePalette gMonIconPaletteTable[];

const u8 *GetMonIconTiles(u16 species, u32 personality);
void TryLoadAllMonIconPalettesAtOffset(u16 offset);
u8 GetValidMonIconPalIndex(u16 species);
const u8 *GetMonIconPtr(u16 speciesId, u32 personality);
const u16 *GetValidMonIconPalettePtr(u16 speciesId);
u16 GetIconSpecies(u16 species, u32 personality);
u16 GetUnownLetterByPersonality(u32 personality);
u16 GetIconSpeciesNoPersonality(u16 speciesId);
void LoadMonIconPalettes(void);
void LoadMonIconPalette(u16 species);
void FreeMonIconPalettes(void);
u8 CreateMonIconNoPersonality(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority);
void FreeMonIconPalette(u16 species);
void FreeAndDestroyMonIconSprite(struct Sprite *sprite);
u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality);
u8 CreateMonIconCustom(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality, bool8 isFemale, bool8 isShiny);
u8 UpdateMonIconFrame(struct Sprite *sprite);
void LoadMonIconPalette(u16 species);
void SpriteCB_MonIcon(struct Sprite *sprite);
void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum);
u8 GetMonIconPaletteIndexFromSpecies(u16 species);

#endif // GUARD_POKEMON_ICON_H
