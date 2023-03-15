#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gItems[ITEM_RED_CARD].holdEffect == HOLD_EFFECT_RED_CARD);
}

SINGLE_BATTLE_TEST("Red Card switches the attacker with a random non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BULBASAUR);
        OPPONENT(SPECIES_CHARMANDER);
        OPPONENT(SPECIES_SQUIRTLE) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        MESSAGE("Foe Bulbasaur was dragged out!");
    }
}

DOUBLE_BATTLE_TEST("Red Card switches the target with a random non-battler, non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_BULBASAUR);
        OPPONENT(SPECIES_CHARMANDER);
        OPPONENT(SPECIES_SQUIRTLE) { HP(0); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        MESSAGE("Foe Bulbasaur was dragged out!");
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if holder faints")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card activates after the last hit of a multi-hit move")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DOUBLE_KICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_KICK, opponent);
        HP_BAR(player);
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if knocked off")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if stolen by a move")
{
    u32 item;
    bool32 activate;
    PARAMETRIZE { item = ITEM_NONE; activate = FALSE; }
    PARAMETRIZE { item = ITEM_POTION; activate = TRUE; }
    ASSUME(gBattleMoves[MOVE_THIEF].effect == EFFECT_THIEF);

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET) { Item(item); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THIEF, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if stolen by Magician")
{
    u32 item;
    bool32 activate;
    PARAMETRIZE { item = ITEM_NONE; activate = FALSE; }
    PARAMETRIZE { item = ITEM_POTION; activate = TRUE; }

    GIVEN {
        ASSUME(P_GEN_6_POKEMON == TRUE);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_FENNEKIN) { Ability(ABILITY_MAGICIAN); Item(item); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Fennekin!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Wobbuffet held up its Red Card against Foe Fennekin!");
            }
        }
    }
}

DOUBLE_BATTLE_TEST("Red Card activates for only the fastest target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_WYNAUT) { Speed(2); Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); }
        OPPONENT(SPECIES_WYNAUT) { Speed(4); }
        OPPONENT(SPECIES_UNOWN) { Speed(1); }
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_ROCK_SLIDE);
            MOVE(opponentRight, MOVE_TACKLE, target: playerRight);
        }
    } SCENE {
        // Fastest target's Red Card activates.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        MESSAGE("Foe Unown was dragged out!");

        // Slower target's Red Card still able to activate on other battler.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
        MESSAGE("Wynaut held up its Red Card against Foe Wynaut!");
        MESSAGE("Foe Wobbuffet was dragged out!");
    }
}

DOUBLE_BATTLE_TEST("Red Card activates but fails if the attacker is rooted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_UNOWN);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_INGRAIN); }
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft);
            MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        MESSAGE("Foe Wobbuffet anchored itself with its roots!");

        // Red Card already consumed so cannot activate.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
            MESSAGE("Wynaut held up its Red Card against Foe Wynaut!");
        }
    }
}

DOUBLE_BATTLE_TEST("Red Card activates but fails if the attacker has Suction Cups")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_OCTILLERY) { Ability(ABILITY_SUCTION_CUPS); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_UNOWN);
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft);
            MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Wobbuffet held up its Red Card against Foe Octillery!");
        MESSAGE("Foe Octillery anchors itself with Suction Cups!");

        // Red Card already consumed so cannot activate.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
            MESSAGE("Wynaut held up its Red Card against Foe Wynaut!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if switched by Dragon Tail")
{
    bool32 hasWynaut, activate;
    PARAMETRIZE { hasWynaut = TRUE; activate = FALSE; }
    PARAMETRIZE { hasWynaut = FALSE; activate = TRUE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        if (hasWynaut) PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Red Card activates and overrides U-turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_U_TURN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wobbuffet held up its Red Card against Foe Wobbuffet!");
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if attacker's Sheer Force applied")
{
    u32 move;
    bool32 activate;
    PARAMETRIZE { move = MOVE_TACKLE; activate = TRUE; }
    PARAMETRIZE { move = MOVE_STOMP; activate = FALSE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_TAUROS) { Ability(ABILITY_SHEER_FORCE); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wobbuffet held up its Red Card against Foe Tauros!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Wobbuffet held up its Red Card against Foe Tauros!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Red Card activates before Emergency Exit")
{
    GIVEN {
        ASSUME(P_GEN_7_POKEMON == TRUE);
        PLAYER(SPECIES_GOLISOPOD) { MaxHP(100); HP(51); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_WIMPOD);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Golisopod held up its Red Card against Foe Wobbuffet!");
        ABILITY_POPUP(player, ABILITY_EMERGENCY_EXIT);
        MESSAGE("Go! Wimpod!");
    }
}

// SINGLE_BATTLE_TEST("Red Card activates but fails if the attacker has Dynamaxed")
