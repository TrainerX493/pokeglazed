#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_SAND_ATTACK].effect == EFFECT_ACCURACY_DOWN);
}

SINGLE_BATTLE_TEST("Sand Attack lowers Accuracy")
{
    ASSUME(gBattleMoves[MOVE_SCRATCH].accuracy == 100);
    PASSES_RANDOMLY(gBattleMoves[MOVE_SCRATCH].accuracy * 3 / 4, 100);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Wobbuffet's accuracy fell!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}
