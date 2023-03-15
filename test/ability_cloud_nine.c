#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("Cloud Nine prevents weather effects")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SANDSTORM].effect == EFFECT_SANDSTORM);
        PLAYER(SPECIES_PSYDUCK) { Ability(ABILITY_CLOUD_NINE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); }
        TURN {}
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}
