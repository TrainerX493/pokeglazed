#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("Flame Body inflicts burn on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_TACKLE].flags & FLAG_MAKES_CONTACT);
        ASSUME(!(gBattleMoves[MOVE_SWIFT].flags & FLAG_MAKES_CONTACT));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_MAGMAR) { Ability(ABILITY_FLAME_BODY); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (gBattleMoves[move].flags & FLAG_MAKES_CONTACT) {
            ABILITY_POPUP(opponent, ABILITY_FLAME_BODY);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, player);
            MESSAGE("Foe Magmar's Flame Body burned Wobbuffet!");
            STATUS_ICON(player, burn: TRUE);
        } else {
            NOT ABILITY_POPUP(opponent, ABILITY_FLAME_BODY);
            NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, player);
            NOT MESSAGE("Foe Magmar's Flame Body burned Wobbuffet!");
            NOT STATUS_ICON(player, burn: TRUE);
        }
    }
}
