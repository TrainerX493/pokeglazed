#include "global.h"
#include "test_battle.h"

// TODO: Currently PASSES_RANDOMLY is incapable of testing Cute Charm
// because it only activates 33% of the time, but we only want to
// measure the 50% of the time that the infatuation prevents our move.
SINGLE_BATTLE_TEST("Cute Charm inflicts infatuation on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_TACKLE].flags & FLAG_MAKES_CONTACT);
        ASSUME(!(gBattleMoves[MOVE_SWIFT].flags & FLAG_MAKES_CONTACT));
        PLAYER(SPECIES_WOBBUFFET) { Gender(MON_MALE); }
        OPPONENT(SPECIES_CLEFAIRY) { Gender(MON_FEMALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, move); }
    } SCENE {
        if (gBattleMoves[move].flags & FLAG_MAKES_CONTACT) {
            ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
            MESSAGE("Foe Clefairy's Cute Charm infatuated Wobbuffet!");
            MESSAGE("Wobbuffet is in love with Foe Clefairy!");
        } else {
            NOT ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
            NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
            NOT MESSAGE("Foe Clefairy's Cute Charm infatuated Wobbuffet!");
            NOT MESSAGE("Wobbuffet is in love with Foe Clefairy!");
        }
    }
}

SINGLE_BATTLE_TEST("Cute Charm cannot infatuate same gender")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Gender(MON_MALE); }
        OPPONENT(SPECIES_CLEFAIRY) { Gender(MON_MALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        NOT ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
    }
}
