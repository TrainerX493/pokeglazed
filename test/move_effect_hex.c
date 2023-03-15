#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_HEX].effect == EFFECT_HEX);
}

SINGLE_BATTLE_TEST("Hex deals double damage to foes with a status", s16 damage)
{
    u32 status1;
    PARAMETRIZE { status1 = STATUS1_NONE; }
    PARAMETRIZE { status1 = STATUS1_SLEEP; }
    PARAMETRIZE { status1 = STATUS1_POISON; }
    PARAMETRIZE { status1 = STATUS1_BURN; }
    PARAMETRIZE { status1 = STATUS1_FREEZE; }
    PARAMETRIZE { status1 = STATUS1_PARALYSIS; }
    PARAMETRIZE { status1 = STATUS1_TOXIC_POISON; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Status1(status1); }
    } WHEN {
        TURN { MOVE(player, MOVE_HEX); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEX, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } THEN {
        if (i > 0)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[i].damage);
        if (i > 1)
            EXPECT_EQ(results[i-1].damage, results[i].damage);
    }
}
