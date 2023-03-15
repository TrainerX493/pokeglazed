#include "global.h"
#include "test_battle.h"

#define TEST_MAX_HP (100)

SINGLE_BATTLE_TEST("Volt Absorb heals 25% when hit by electric type moves")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_THUNDER_SHOCK].type == TYPE_ELECTRIC);
        PLAYER(SPECIES_JOLTEON) { Ability(ABILITY_VOLT_ABSORB); HP(1); MaxHP(TEST_MAX_HP); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THUNDER_SHOCK); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_VOLT_ABSORB);
        HP_BAR(player, hp: TEST_MAX_HP / 4 + 1);
        MESSAGE("Jolteon restored HP using its Volt Absorb!");
    }
}

SINGLE_BATTLE_TEST("Volt Absorb does not activate if protected")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_THUNDER_SHOCK].type == TYPE_ELECTRIC);
        PLAYER(SPECIES_JOLTEON) { Ability(ABILITY_VOLT_ABSORB); HP(1); MaxHP(TEST_MAX_HP); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_PROTECT); MOVE(opponent, MOVE_THUNDER_SHOCK); }
    } SCENE {
        NONE_OF { ABILITY_POPUP(player, ABILITY_VOLT_ABSORB); HP_BAR(player); MESSAGE("Jolteon restored HP using its Volt Absorb!"); }
    }
}

SINGLE_BATTLE_TEST("Volt Absorb activates on status moves")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_THUNDER_WAVE].type == TYPE_ELECTRIC);
        ASSUME(gBattleMoves[MOVE_THUNDER_WAVE].split == SPLIT_STATUS);
        PLAYER(SPECIES_JOLTEON) { Ability(ABILITY_VOLT_ABSORB); HP(1); MaxHP(TEST_MAX_HP); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THUNDER_WAVE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_VOLT_ABSORB);
        HP_BAR(player, hp: TEST_MAX_HP / 4 + 1);
        MESSAGE("Jolteon restored HP using its Volt Absorb!");
    }
}

SINGLE_BATTLE_TEST("Volt Absorb is only triggered once on multi strike moves")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_FURY_SWIPES].type == TYPE_NORMAL);
        ASSUME(gBattleMoves[MOVE_FURY_SWIPES].effect == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_JOLTEON) { Ability(ABILITY_VOLT_ABSORB); HP(1); MaxHP(TEST_MAX_HP); };
        OPPONENT(SPECIES_GRAVELER_ALOLAN) { Ability(ABILITY_GALVANIZE); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_FURY_SWIPES); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_VOLT_ABSORB);
        HP_BAR(player, hp: TEST_MAX_HP / 4 + 1);
        MESSAGE("Jolteon restored HP using its Volt Absorb!");
    }
}

DOUBLE_BATTLE_TEST("Volt Absorb does not stop Electric Typed Explosion from damaging other pokemon", s16 damage1, s16 damage2) // Fixed issue #1961
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        ASSUME(gBattleMoves[MOVE_EXPLOSION].type == TYPE_NORMAL);
        PLAYER(SPECIES_JOLTEON) { Ability(ABILITY_VOLT_ABSORB); HP(1); MaxHP(TEST_MAX_HP); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_GRAVELER_ALOLAN) { Ability(ABILITY_GALVANIZE); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_EXPLOSION); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_VOLT_ABSORB);
        HP_BAR(playerLeft, hp: TEST_MAX_HP / 4 + 1);
        MESSAGE("Jolteon restored HP using its Volt Absorb!");
        HP_BAR(playerRight, captureDamage: &results->damage1);
        HP_BAR(opponentRight, captureDamage: &results->damage2);
    }
    FINALLY {
        EXPECT_NE(results[0].damage1, 0);
        EXPECT_NE(results[0].damage2, 0);
    }
}

SINGLE_BATTLE_TEST("Volt Absorb prevents Cell Battery from activating")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_THUNDER_SHOCK].type == TYPE_ELECTRIC);
        PLAYER(SPECIES_JOLTEON) { Ability(ABILITY_VOLT_ABSORB); HP(1); MaxHP(TEST_MAX_HP); Item(ITEM_CELL_BATTERY); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THUNDER_SHOCK); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_VOLT_ABSORB);
        HP_BAR(player, hp: TEST_MAX_HP / 4 + 1);
        MESSAGE("Jolteon restored HP using its Volt Absorb!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Using Cell Battery, the attack of Jolteon rose!");
        }

    }
}
