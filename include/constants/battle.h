#ifndef GUARD_CONSTANTS_BATTLE_H
#define GUARD_CONSTANTS_BATTLE_H

/*
 * A battler may be in one of four positions on the field. The first bit determines
 * what side the battler is on, either the player's side or the opponent's side.
 * The second bit determines what flank the battler is on, either the left or right.
 * Note that the opponent's flanks are drawn corresponding to their perspective, so
 * their right mon appears on the left, and their left mon appears on the right.
 * The battler ID is usually the same as the position, except in the case of link battles.
 *
 *   + ------------------------- +
 *   |           Opponent's side |
 *   |            Right    Left  |
 *   |              3       1    |
 *   |                           |
 *   | Player's side             |
 *   |  Left   Right             |
 *   |   0       2               |
 *   ----------------------------+
 *   |                           |
 *   |                           |
 *   +---------------------------+
 */

#define MAX_BATTLERS_COUNT  4

#define B_POSITION_PLAYER_LEFT        0
#define B_POSITION_OPPONENT_LEFT      1
#define B_POSITION_PLAYER_RIGHT       2
#define B_POSITION_OPPONENT_RIGHT     3

// These macros can be used with either battler ID or positions to get the partner or the opposite mon
#define BATTLE_OPPOSITE(id) ((id) ^ 1)
#define BATTLE_PARTNER(id) ((id) ^ 2)

#define B_SIDE_PLAYER     0
#define B_SIDE_OPPONENT   1

#define B_FLANK_LEFT  0
#define B_FLANK_RIGHT 1

#define BIT_SIDE        1
#define BIT_FLANK       2

// Battle Type Flags
#define BATTLE_TYPE_DOUBLE          (1 << 0)
#define BATTLE_TYPE_LINK            (1 << 1)
#define BATTLE_TYPE_IS_MASTER       (1 << 2) // In not-link battles, it's always set.
#define BATTLE_TYPE_TRAINER         (1 << 3)
#define BATTLE_TYPE_FIRST_BATTLE    (1 << 4)
#define BATTLE_TYPE_20              (1 << 5)
#define BATTLE_TYPE_MULTI           (1 << 6)
#define BATTLE_TYPE_SAFARI          (1 << 7)
#define BATTLE_TYPE_BATTLE_TOWER    (1 << 8)
#define BATTLE_TYPE_WALLY_TUTORIAL  (1 << 9)
#define BATTLE_TYPE_ROAMER          (1 << 10)
#define BATTLE_TYPE_EREADER_TRAINER (1 << 11)
#define BATTLE_TYPE_KYOGRE_GROUDON  (1 << 12)
#define BATTLE_TYPE_LEGENDARY       (1 << 13)
#define BATTLE_TYPE_REGI            (1 << 14)
#define BATTLE_TYPE_TWO_OPPONENTS   (1 << 15)
#define BATTLE_TYPE_DOME            (1 << 16)
#define BATTLE_TYPE_PALACE          (1 << 17)
#define BATTLE_TYPE_ARENA           (1 << 18)
#define BATTLE_TYPE_FACTORY         (1 << 19)
#define BATTLE_TYPE_PIKE            (1 << 20)
#define BATTLE_TYPE_PYRAMID         (1 << 21)
#define BATTLE_TYPE_INGAME_PARTNER  (1 << 22)
#define BATTLE_TYPE_x800000         (1 << 23)
#define BATTLE_TYPE_RECORDED        (1 << 24)
#define BATTLE_TYPE_x2000000        (1 << 25)
#define BATTLE_TYPE_TRAINER_HILL    (1 << 26)
#define BATTLE_TYPE_SECRET_BASE     (1 << 27)
#define BATTLE_TYPE_GROUDON         (1 << 28)
#define BATTLE_TYPE_KYOGRE          (1 << 29)
#define BATTLE_TYPE_RAYQUAZA        (1 << 30)
#define BATTLE_TYPE_x80000000       (1 << 31)
#define BATTLE_TYPE_FRONTIER                (BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_DOME | BATTLE_TYPE_PALACE | BATTLE_TYPE_ARENA | BATTLE_TYPE_FACTORY | BATTLE_TYPE_PIKE | BATTLE_TYPE_PYRAMID)
#define BATTLE_TYPE_FRONTIER_NO_PYRAMID     (BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_DOME | BATTLE_TYPE_PALACE | BATTLE_TYPE_ARENA | BATTLE_TYPE_FACTORY | BATTLE_TYPE_PIKE)

#define WILD_DOUBLE_BATTLE ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_TRAINER))))
#define BATTLE_TWO_VS_ONE_OPPONENT ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && gTrainerBattleOpponent_B == 0xFFFF))

// Battle Outcome defines
#define B_OUTCOME_WON                  1
#define B_OUTCOME_LOST                 2
#define B_OUTCOME_DREW                 3
#define B_OUTCOME_RAN                  4
#define B_OUTCOME_PLAYER_TELEPORTED    5
#define B_OUTCOME_MON_FLED             6
#define B_OUTCOME_CAUGHT               7
#define B_OUTCOME_NO_SAFARI_BALLS      8
#define B_OUTCOME_FORFEITED            9
#define B_OUTCOME_MON_TELEPORTED       10
#define B_OUTCOME_LINK_BATTLE_RAN      (1 << 7) // 128

// Non-volatile status conditions
// These persist remain outside of battle and after switching out
#define STATUS1_NONE             0
#define STATUS1_SLEEP            (1 << 0 | 1 << 1 | 1 << 2) // First 3 bits (Number of turns to sleep)
#define STATUS1_SLEEP_TURN(num)  ((num) << 0) // Just for readability (or if rearranging statuses)
#define STATUS1_POISON           (1 << 3)
#define STATUS1_BURN             (1 << 4)
#define STATUS1_FREEZE           (1 << 5)
#define STATUS1_PARALYSIS        (1 << 6)
#define STATUS1_TOXIC_POISON     (1 << 7)
#define STATUS1_TOXIC_COUNTER    (1 << 8 | 1 << 9 | 1 << 10 | 1 << 11)
#define STATUS1_TOXIC_TURN(num)  ((num) << 8)
#define STATUS1_PSN_ANY          (STATUS1_POISON | STATUS1_TOXIC_POISON)
#define STATUS1_ANY              (STATUS1_SLEEP | STATUS1_POISON | STATUS1_BURN | STATUS1_FREEZE | STATUS1_PARALYSIS | STATUS1_TOXIC_POISON)

// Volatile status ailments
// These are removed after exiting the battle or switching out
#define STATUS2_CONFUSION             (1 << 0 | 1 << 1 | 1 << 2)
#define STATUS2_CONFUSION_TURN(num)   ((num) << 0)
#define STATUS2_FLINCHED              (1 << 3)
#define STATUS2_UPROAR                (1 << 4 | 1 << 5 | 1 << 6)
#define STATUS2_UPROAR_TURN(num)      ((num) << 4)
#define STATUS2_UNUSED                (1 << 7)
#define STATUS2_BIDE                  (1 << 8 | 1 << 9)
#define STATUS2_BIDE_TURN(num)        (((num) << 8) & STATUS2_BIDE)
#define STATUS2_LOCK_CONFUSE          (1 << 10 | 1 << 11) // e.g. Thrash
#define STATUS2_LOCK_CONFUSE_TURN(num)((num) << 10)
#define STATUS2_MULTIPLETURNS         (1 << 12)
#define STATUS2_WRAPPED               (1 << 13)
#define STATUS2_POWDER                (1 << 14)
#define STATUS2_INFATUATION           (1 << 16 | 1 << 17 | 1 << 18 | 1 << 19)  // 4 bits, one for every battler
#define STATUS2_INFATUATED_WITH(battler) (gBitTable[battler] << 16)
#define STATUS2_FOCUS_ENERGY          (1 << 20)
#define STATUS2_TRANSFORMED           (1 << 21)
#define STATUS2_RECHARGE              (1 << 22)
#define STATUS2_RAGE                  (1 << 23)
#define STATUS2_SUBSTITUTE            (1 << 24)
#define STATUS2_DESTINY_BOND          (1 << 25)
#define STATUS2_ESCAPE_PREVENTION     (1 << 26)
#define STATUS2_NIGHTMARE             (1 << 27)
#define STATUS2_CURSED                (1 << 28)
#define STATUS2_FORESIGHT             (1 << 29)
#define STATUS2_DEFENSE_CURL          (1 << 30)
#define STATUS2_TORMENT               (1 << 31)

#define STATUS3_LEECHSEED_BATTLER       (1 << 0 | 1 << 1) // The battler to receive HP from Leech Seed
#define STATUS3_LEECHSEED               (1 << 2)
#define STATUS3_ALWAYS_HITS             (1 << 3 | 1 << 4)
#define STATUS3_ALWAYS_HITS_TURN(num)   (((num) << 3) & STATUS3_ALWAYS_HITS) // "Always Hits" is set as a 2 turn timer, i.e. next turn is the last turn when it's active
#define STATUS3_PERISH_SONG             (1 << 5)
#define STATUS3_ON_AIR                  (1 << 6)
#define STATUS3_UNDERGROUND             (1 << 7)
#define STATUS3_MINIMIZED               (1 << 8)
#define STATUS3_CHARGED_UP              (1 << 9)
#define STATUS3_ROOTED                  (1 << 10)
#define STATUS3_YAWN                    (1 << 11 | 1 << 12) // Number of turns to sleep
#define STATUS3_YAWN_TURN(num)          (((num) << 11) & STATUS3_YAWN)
#define STATUS3_IMPRISONED_OTHERS       (1 << 13)
#define STATUS3_GRUDGE                  (1 << 14)
#define STATUS3_CANT_SCORE_A_CRIT       (1 << 15)
#define STATUS3_GASTRO_ACID             (1 << 16)
#define STATUS3_EMBARGO                 (1 << 17)
#define STATUS3_UNDERWATER              (1 << 18)
#define STATUS3_INTIMIDATE_POKES        (1 << 19)
#define STATUS3_TRACE                   (1 << 20)
#define STATUS3_SMACKED_DOWN            (1 << 21)
#define STATUS3_ME_FIRST                (1 << 22)
#define STATUS3_TELEKINESIS             (1 << 23)
#define STATUS3_PHANTOM_FORCE           (1 << 24)
#define STATUS3_MIRACLE_EYED            (1 << 25)
#define STATUS3_MAGNET_RISE             (1 << 26)
#define STATUS3_HEAL_BLOCK              (1 << 27)
#define STATUS3_AQUA_RING               (1 << 28)
#define STATUS3_LASER_FOCUS             (1 << 29)
#define STATUS3_ELECTRIFIED             (1 << 30)
#define STATUS3_POWER_TRICK             (1 << 31)
#define STATUS3_SEMI_INVULNERABLE       (STATUS3_UNDERGROUND | STATUS3_ON_AIR | STATUS3_UNDERWATER | STATUS3_PHANTOM_FORCE)

#define HITMARKER_x10                   (1 << 4)
#define HITMARKER_x20                   (1 << 5)
#define HITMARKER_DESTINYBOND           (1 << 6)
#define HITMARKER_NO_ANIMATIONS         (1 << 7)
#define HITMARKER_IGNORE_SUBSTITUTE     (1 << 8)
#define HITMARKER_NO_ATTACKSTRING       (1 << 9)
#define HITMARKER_ATTACKSTRING_PRINTED  (1 << 10)
#define HITMARKER_NO_PPDEDUCT           (1 << 11)
#define HITMARKER_SWAP_ATTACKER_TARGET  (1 << 12)
#define HITMARKER_IGNORE_SAFEGUARD      (1 << 13)
#define HITMARKER_SYNCHRONISE_EFFECT    (1 << 14)
#define HITMARKER_RUN                   (1 << 15)
// 3 free spots because of change in handling of UNDERGROUND/UNDERGWATER/ON AIR
#define HITMARKER_UNABLE_TO_USE_MOVE    (1 << 19)
#define HITMARKER_x100000               (1 << 20)
#define HITMARKER_x200000               (1 << 21)
#define HITMARKER_x400000               (1 << 22)
#define HITMARKER_x800000               (1 << 23)
#define HITMARKER_GRUDGE                (1 << 24)
#define HITMARKER_OBEYS                 (1 << 25)
#define HITMARKER_x4000000              (1 << 26)
#define HITMARKER_CHARGING              (1 << 27)
#define HITMARKER_FAINTED(battler)      (gBitTable[battler] << 28)
#define HITMARKER_FAINTED2(battler)     ((1 << 28) << battler)

// Per-side statuses that affect an entire party
#define SIDE_STATUS_REFLECT                 (1 << 0)
#define SIDE_STATUS_LIGHTSCREEN             (1 << 1)
#define SIDE_STATUS_STICKY_WEB              (1 << 2)
#define SIDE_STATUS_SPIKES                  (1 << 4)
#define SIDE_STATUS_SAFEGUARD               (1 << 5)
#define SIDE_STATUS_FUTUREATTACK            (1 << 6)
#define SIDE_STATUS_MIST                    (1 << 8)
#define SIDE_STATUS_SPIKES_DAMAGED          (1 << 9)
#define SIDE_STATUS_TAILWIND                (1 << 10)
#define SIDE_STATUS_AURORA_VEIL             (1 << 11)
#define SIDE_STATUS_LUCKY_CHANT             (1 << 12)
#define SIDE_STATUS_TOXIC_SPIKES            (1 << 13)
#define SIDE_STATUS_STEALTH_ROCK            (1 << 14)
#define SIDE_STATUS_STEALTH_ROCK_DAMAGED    (1 << 15)
#define SIDE_STATUS_TOXIC_SPIKES_DAMAGED    (1 << 16)
#define SIDE_STATUS_STICKY_WEB_DAMAGED      (1 << 17)
#define SIDE_STATUS_QUICK_GUARD             (1 << 18)
#define SIDE_STATUS_WIDE_GUARD              (1 << 19)
#define SIDE_STATUS_CRAFTY_SHIELD           (1 << 20)
#define SIDE_STATUS_MAT_BLOCK               (1 << 21)

// Field affecting statuses.
#define STATUS_FIELD_MAGIC_ROOM         0x1
#define STATUS_FIELD_TRICK_ROOM         0x2
#define STATUS_FIELD_WONDER_ROOM        0x4
#define STATUS_FIELD_MUDSPORT           0x8
#define STATUS_FIELD_WATERSPORT         0x10
#define STATUS_FIELD_GRAVITY            0x20
#define STATUS_FIELD_GRASSY_TERRAIN     0x40
#define STATUS_FIELD_MISTY_TERRAIN      0x80
#define STATUS_FIELD_ELECTRIC_TERRAIN   0x100
#define STATUS_FIELD_PSYCHIC_TERRAIN    0x200
#define STATUS_FIELD_ION_DELUGE         0x400
#define STATUS_FIELD_FAIRY_LOCK         0x800

// Flags describing move's result
#define MOVE_RESULT_MISSED             (1 << 0)
#define MOVE_RESULT_SUPER_EFFECTIVE    (1 << 1)
#define MOVE_RESULT_NOT_VERY_EFFECTIVE (1 << 2)
#define MOVE_RESULT_DOESNT_AFFECT_FOE  (1 << 3)
#define MOVE_RESULT_ONE_HIT_KO         (1 << 4)
#define MOVE_RESULT_FAILED             (1 << 5)
#define MOVE_RESULT_FOE_ENDURED        (1 << 6)
#define MOVE_RESULT_FOE_HUNG_ON        (1 << 7)
#define MOVE_RESULT_STURDIED           (1 << 8)
#define MOVE_RESULT_NO_EFFECT          (MOVE_RESULT_MISSED | MOVE_RESULT_DOESNT_AFFECT_FOE | MOVE_RESULT_FAILED)

// Battle Weather flags
#define WEATHER_RAIN_TEMPORARY      (1 << 0)
#define WEATHER_RAIN_DOWNPOUR       (1 << 1)  // unused
#define WEATHER_RAIN_PERMANENT      (1 << 2)
#define WEATHER_RAIN_ANY            (WEATHER_RAIN_TEMPORARY | WEATHER_RAIN_DOWNPOUR | WEATHER_RAIN_PERMANENT)
#define WEATHER_SANDSTORM_TEMPORARY (1 << 3)
#define WEATHER_SANDSTORM_PERMANENT (1 << 4)
#define WEATHER_SANDSTORM_ANY       (WEATHER_SANDSTORM_TEMPORARY | WEATHER_SANDSTORM_PERMANENT)
#define WEATHER_SUN_TEMPORARY       (1 << 5)
#define WEATHER_SUN_PERMANENT       (1 << 6)
#define WEATHER_SUN_ANY             (WEATHER_SUN_TEMPORARY | WEATHER_SUN_PERMANENT)
#define WEATHER_HAIL_TEMPORARY      (1 << 7)
#define WEATHER_HAIL_PERMANENT      (1 << 8)
#define WEATHER_HAIL_ANY            (WEATHER_HAIL_TEMPORARY | WEATHER_HAIL_PERMANENT)
#define WEATHER_ANY                 (WEATHER_RAIN_ANY | WEATHER_SANDSTORM_ANY | WEATHER_SUN_ANY | WEATHER_HAIL_ANY)

// Battle Weather as enum
#define ENUM_WEATHER_NONE           0
#define ENUM_WEATHER_RAIN           1
#define ENUM_WEATHER_SUN            2
#define ENUM_WEATHER_SANDSTORM      3
#define ENUM_WEATHER_HAIL           4

// Move Effects
#define MOVE_EFFECT_SLEEP               0x1
#define MOVE_EFFECT_POISON              0x2
#define MOVE_EFFECT_BURN                0x3
#define MOVE_EFFECT_FREEZE              0x4
#define MOVE_EFFECT_PARALYSIS           0x5
#define MOVE_EFFECT_TOXIC               0x6
#define PRIMARY_STATUS_MOVE_EFFECT      MOVE_EFFECT_TOXIC // All above move effects apply primary status
#define MOVE_EFFECT_CONFUSION           0x7
#define MOVE_EFFECT_FLINCH              0x8
#define MOVE_EFFECT_TRI_ATTACK          0x9
#define MOVE_EFFECT_UPROAR              0xA
#define MOVE_EFFECT_PAYDAY              0xB
#define MOVE_EFFECT_CHARGING            0xC
#define MOVE_EFFECT_WRAP                0xD
#define MOVE_EFFECT_RECOIL_25           0xE
#define MOVE_EFFECT_ATK_PLUS_1          0xF
#define MOVE_EFFECT_DEF_PLUS_1          0x10
#define MOVE_EFFECT_SPD_PLUS_1          0x11
#define MOVE_EFFECT_SP_ATK_PLUS_1       0x12
#define MOVE_EFFECT_SP_DEF_PLUS_1       0x13
#define MOVE_EFFECT_ACC_PLUS_1          0x14
#define MOVE_EFFECT_EVS_PLUS_1          0x15
#define MOVE_EFFECT_ATK_MINUS_1         0x16
#define MOVE_EFFECT_DEF_MINUS_1         0x17
#define MOVE_EFFECT_SPD_MINUS_1         0x18
#define MOVE_EFFECT_SP_ATK_MINUS_1      0x19
#define MOVE_EFFECT_SP_DEF_MINUS_1      0x1A
#define MOVE_EFFECT_ACC_MINUS_1         0x1B
#define MOVE_EFFECT_EVS_MINUS_1         0x1C
#define MOVE_EFFECT_RECHARGE            0x1D
#define MOVE_EFFECT_RAGE                0x1E
#define MOVE_EFFECT_STEAL_ITEM          0x1F
#define MOVE_EFFECT_PREVENT_ESCAPE      0x20
#define MOVE_EFFECT_NIGHTMARE           0x21
#define MOVE_EFFECT_ALL_STATS_UP        0x22
#define MOVE_EFFECT_RAPIDSPIN           0x23
#define MOVE_EFFECT_REMOVE_STATUS       0x24
#define MOVE_EFFECT_ATK_DEF_DOWN        0x25
#define MOVE_EFFECT_RECOIL_33           0x26
#define MOVE_EFFECT_ATK_PLUS_2          0x27
#define MOVE_EFFECT_DEF_PLUS_2          0x28
#define MOVE_EFFECT_SPD_PLUS_2          0x29
#define MOVE_EFFECT_SP_ATK_PLUS_2       0x2A
#define MOVE_EFFECT_SP_DEF_PLUS_2       0x2B
#define MOVE_EFFECT_ACC_PLUS_2          0x2C
#define MOVE_EFFECT_EVS_PLUS_2          0x2D
#define MOVE_EFFECT_ATK_MINUS_2         0x2E
#define MOVE_EFFECT_DEF_MINUS_2         0x2F
#define MOVE_EFFECT_SPD_MINUS_2         0x30
#define MOVE_EFFECT_SP_ATK_MINUS_2      0x31
#define MOVE_EFFECT_SP_DEF_MINUS_2      0x32
#define MOVE_EFFECT_ACC_MINUS_2         0x33
#define MOVE_EFFECT_EVS_MINUS_2         0x34
#define MOVE_EFFECT_THRASH              0x35
#define MOVE_EFFECT_KNOCK_OFF           0x36
#define MOVE_EFFECT_DEF_SPDEF_DOWN      0x37
#define MOVE_EFFECT_RECOIL_33_STATUS    0x38
#define MOVE_EFFECT_RECOIL_50           0x39
#define MOVE_EFFECT_CLEAR_SMOG          0x3A
#define MOVE_EFFECT_SP_ATK_TWO_DOWN     0x3B
#define MOVE_EFFECT_SMACK_DOWN          0x3C
#define MOVE_EFFECT_FLAME_BURST         0x3D
#define MOVE_EFFECT_FEINT               0x3E
#define MOVE_EFFECT_SPECTRAL_THIEF      0x3F
#define MOVE_EFFECT_V_CREATE            0x40
#define MOVE_EFFECT_HAPPY_HOUR          0x41
#define MOVE_EFFECT_CORE_ENFORCER       0x42
#define MOVE_EFFECT_THROAT_CHOP         0x43
#define MOVE_EFFECT_INCINERATE          0x44
#define MOVE_EFFECT_BUG_BITE            0x45
#define NUM_MOVE_EFFECTS                0x46

#define MOVE_EFFECT_AFFECTS_USER        0x4000
#define MOVE_EFFECT_CERTAIN             0x8000

// Battle terrain defines for gBattleTerrain.
#define BATTLE_TERRAIN_GRASS        0
#define BATTLE_TERRAIN_LONG_GRASS   1
#define BATTLE_TERRAIN_SAND         2
#define BATTLE_TERRAIN_UNDERWATER   3
#define BATTLE_TERRAIN_WATER        4
#define BATTLE_TERRAIN_POND         5
#define BATTLE_TERRAIN_MOUNTAIN     6
#define BATTLE_TERRAIN_CAVE         7
#define BATTLE_TERRAIN_BUILDING     8
#define BATTLE_TERRAIN_PLAIN        9

// Move targets
#define MOVE_TARGET_SELECTED            0x0
#define MOVE_TARGET_DEPENDS             0x1
#define MOVE_TARGET_USER_OR_SELECTED    0x2
#define MOVE_TARGET_RANDOM              0x4
#define MOVE_TARGET_BOTH                0x8
#define MOVE_TARGET_USER                0x10
#define MOVE_TARGET_FOES_AND_ALLY       0x20
#define MOVE_TARGET_OPPONENTS_FIELD     0x40
#define MOVE_TARGET_ALLY                0x80

#endif // GUARD_CONSTANTS_BATTLE_H
