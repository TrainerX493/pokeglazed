#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_DOUBLE_TEAM].effect == EFFECT_EVASION_UP);
}

SINGLE_BATTLE_TEST("Double Team raises Evasion")
{
    ASSUME(gBattleMoves[MOVE_SCRATCH].accuracy == 100);
    PASSES_RANDOMLY(gBattleMoves[MOVE_SCRATCH].accuracy * 3 / 4, 100);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_TEAM); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_TEAM, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's evasiveness rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}
