#ifndef GUARD_CONSTANTS_BATTLE_AI_H
#define GUARD_CONSTANTS_BATTLE_AI_H

// battlers
#define AI_TARGET 0
#define AI_USER 1
#define AI_TARGET_PARTNER 2
#define AI_USER_PARTNER 3

// get_type command
#define AI_TYPE1_TARGET 0
#define AI_TYPE1_USER 1
#define AI_TYPE2_TARGET 2
#define AI_TYPE2_USER 3
#define AI_TYPE_MOVE 4

// type effectiveness
#define AI_EFFECTIVENESS_x4     160
#define AI_EFFECTIVENESS_x2     80
#define AI_EFFECTIVENESS_x1     40
#define AI_EFFECTIVENESS_x0_5   20
#define AI_EFFECTIVENESS_x0_25  10
#define AI_EFFECTIVENESS_x0     0

// ai weather
#define AI_WEATHER_NONE 0
#define AI_WEATHER_SUN 1
#define AI_WEATHER_RAIN 2
#define AI_WEATHER_SANDSTORM 3
#define AI_WEATHER_HAIL 4

// get_how_powerful_move_is
#define MOVE_POWER_OTHER  0
#define MOVE_POWER_BEST   1
#define MOVE_POWER_GOOD   2 // Similar dmg range with best.
#define MOVE_POWER_WEAK   3 // Significantly lower than best and good.

// AI Flags. Most run specific functions to update score, new flags are used for internal logic in other scripts
#define AI_FLAG_CHECK_BAD_MOVE        (1 << 0)
#define AI_FLAG_TRY_TO_FAINT          (1 << 1)
#define AI_FLAG_CHECK_VIABILITY       (1 << 2)
#define AI_FLAG_SETUP_FIRST_TURN      (1 << 3)
#define AI_FLAG_RISKY                 (1 << 4)
#define AI_FLAG_PREFER_STRONGEST_MOVE (1 << 5)
#define AI_FLAG_PREFER_BATON_PASS     (1 << 6)
#define AI_FLAG_DOUBLE_BATTLE         (1 << 7)   // removed, split between AI_FLAG_CHECK_BAD_MOVE & AI_FLAG_CHECK_GOOD_MOVE
#define AI_FLAG_HP_AWARE              (1 << 8)
// New, Trainer Handicap Flags
#define AI_FLAG_NEGATE_UNAWARE        (1 << 9)   // AI is NOT aware of negating effects like wonder room, mold breaker, etc
#define AI_FLAG_WILL_SUICIDE          (1 << 10)  // AI will use explosion / self destruct / final gambit / etc
// New, Trainer Strategy Flags
#define AI_FLAG_HELP_PARTNER          (1 << 11)  // AI can try to help partner. If not set, will tend not to target partner
#define AI_FLAG_PREFER_STATUS_MOVES   (1 << 12)  // AI gets a score bonus for status moves. Should be combined with AI_FLAG_CHECK_BAD_MOVE to prevent using only status moves
#define AI_FLAG_STALL                 (1 << 13)  // AI stalls battle and prefers secondary damage/trapping/etc. TODO not finished
#define AI_FLAG_SCREENER              (1 << 14)  // AI prefers screening effects like reflect, mist, etc. TODO unfinished
#define AI_FLAG_SMART_SWITCHING       (1 << 15)  // AI includes a lot more switching checks

// 'other' ai logic flags
#define AI_FLAG_ROAMING               (1 << 29)
#define AI_FLAG_SAFARI                (1 << 30)
#define AI_FLAG_FIRST_BATTLE          (1 << 31)

#endif // GUARD_CONSTANTS_BATTLE_AI_H
