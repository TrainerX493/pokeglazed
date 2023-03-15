#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_TOXIC].effect == EFFECT_TOXIC);
}

SINGLE_BATTLE_TEST("Toxic inflicts bad poison")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        STATUS_ICON(opponent, badPoison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Toxic cannot miss if used by a Poison-type")
{
    u32 species;
    bool32 hit;
    PARAMETRIZE { species = SPECIES_WOBBUFFET; hit = FALSE; }
    PARAMETRIZE { species = SPECIES_NIDORAN_M; hit = TRUE; }
    GIVEN {
        ASSUME(B_TOXIC_NEVER_MISS >= GEN_6);
        ASSUME(gSpeciesInfo[SPECIES_NIDORAN_M].types[0] == TYPE_POISON);
        PLAYER(species);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC, hit: FALSE); }
    } SCENE {
        if (hit) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            STATUS_ICON(opponent, badPoison: TRUE);
        } else {
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
            NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            NOT STATUS_ICON(opponent, badPoison: TRUE);
        }
    }
}
