#ifndef GUARD_CONFIG_POKEMON_H
#define GUARD_CONFIG_POKEMON_H

// Species data settings
#define P_UPDATED_TYPES             GEN_LATEST  // Since Gen 6, several Pokémon were changed to be partially or fully Fairy type.
#define P_UPDATED_STATS             GEN_LATEST  // Since Gen 6, Pokémon stats are updated with each passing generation.
#define P_UPDATED_ABILITIES         GEN_LATEST  // Since Gen 6, certain Pokémon have their abilities changed.
#define P_UPDATED_EGG_GROUPS        GEN_LATEST  // Since Gen 8, certain Pokémon have gained new egg groups.

// Breeding settings
#define P_NIDORAN_M_DITTO_BREED     GEN_LATEST  // Since Gen 5, when Nidoran♂ breeds with Ditto it can produce Nidoran♀ offspring. Before, it would only yield male offspring. This change also applies to Volbeat.
#define P_INCENSE_BREEDING          GEN_LATEST  // Since Gen 9, cross-generation Baby Pokémon don't require Incense being held by the parents to be obtained via breeding.
#define P_EGG_HATCH_LEVEL           GEN_LATEST  // Since Gen 4, Pokémon will hatch from eggs at level 1 instead of 5.
#define P_BALL_INHERITING           GEN_LATEST  // Since Gen 6, Eggs from the Daycare will inherit the Poké Ball from their mother. From Gen7 onwards, the father can pass it down as well, as long as it's of the same species as the mother.

// Species-specific settings
#define P_SHEDINJA_BALL             GEN_LATEST  // Since Gen 4, Shedinja requires a Poké Ball for its evolution. In Gen 3, Shedinja inherits Nincada's Ball.
#define P_KADABRA_EVERSTONE         GEN_LATEST  // Since Gen 4, Kadabra can evolve even when holding an Everstone.
#define P_HIPPO_GENDER_DIFF_ICONS   TRUE        // If TRUE, will give Hippopotas and Hippowdon custom icons for their female forms.
#define P_SHUCKLE_BERRY_JUICE       TRUE        // In Gen 2, Shuckle had a 1/16 chance of converting Berry that it's holding into Berry Juice. Setting this to TRUE will allow to do this with an Oran Berry, which is the spiritual succesor of the Berry item.

// Other settings
#define P_LEGENDARY_PERFECT_IVS     GEN_LATEST  // Since Gen 6, Legendaries, Mythicals and Ultra Beasts found in the wild or given through gifts have at least 3 perfect IVs.

// Flag settings
// To use the following features in scripting, replace the 0s with the flag ID you're assigning it to.
// Eg: Replace with FLAG_UNUSED_0x264 so you can use that flag to toggle the feature.
#define P_FLAG_FORCE_SHINY      0     // If this flag is set, all wild and gift Pokémon will forced into being Shiny.
#define P_FLAG_FORCE_NO_SHINY   0     // If this flag is set, all wild and gift Pokémon will forced into NOT being Shiny.

// Modifying the latest generation WILL change the saveblock due to Dex flags and will require a new save file.
// Forms are kept based on the base species, Eg: Meowth and Persian will keep all of their forms, but Perrserker will not be available if P_GEN_8_POKEMON is set to FALSE.
// If you're disabling a generation previous to others (eg: Gen 5 but not Gen 6, 7 and 8),
// remember to update NATIONAL_DEX enum in include/constants/pokedex.h to avoid players from softlocking in the non-existant entries.
#define P_GEN_4_POKEMON             TRUE        // Generation 4 Pokémon (DPPt, HGSS)
#define P_GEN_5_POKEMON             TRUE        // Generation 5 Pokémon (BW, B2W2)
#define P_GEN_6_POKEMON             TRUE        // Generation 6 Pokémon (XY, ORAS)
#define P_GEN_7_POKEMON             TRUE        // Generation 7 Pokémon (SM, USUM, LGPE)
#define P_GEN_8_POKEMON             TRUE        // Generation 8 Pokémon (SwSh, BDSP, LA)

#endif // GUARD_CONFIG_POKEMON_H
