/* Embedded DSL for automated black-box testing of battle mechanics.
 *
 * To run all the tests use:
 *     make check
 * To run specific tests, e.g. Spikes ones, use:
 *     make check TESTS='Spikes'
 * To build a ROM (pokemerald-test.elf) that can be opened in mgba to
 * view specific tests, e.g. Spikes ones, use:
 *     make pokeemerald-test.elf TESTS='Spikes'
 *
 * Manually testing a battle mechanic often follows this pattern:
 * 1. Create a party which can activate the mechanic.
 * 2. Start a battle and play a few turns which activate the mechanic.
 * 3. Look at the UI outputs to decide if the mechanic works.
 *
 * Automated testing follows the same pattern:
 * 1. Initialize the party in GIVEN.
 * 2. Play the turns in WHEN.
 * 3. Check the UI outputs in SCENE.
 *
 * As a concrete example, to manually test EFFECT_PARALYZE, e.g. the
 * effect of Stun Spore you might:
 * 1. Put a Wobbuffet that knows Stun Spore in your party.
 * 2. Battle a wild Wobbuffet.
 * 3. Use Stun Spore.
 * 4. Check that the Wobbuffet is paralyzed.
 *
 * This can be translated to an automated test as follows:
 *
 *   ASSUMPTIONS
 *   {
 *       ASSUME(gBattleMoves[MOVE_STUN_SPORE].effect == EFFECT_PARALYZE);
 *   }
 *
 *   SINGLE_BATTLE_TEST("Stun Spore inflicts paralysis")
 *   {
 *       GIVEN {
 *           PLAYER(SPECIES_WOBBUFFET); // 1.
 *           OPPONENT(SPECIES_WOBBUFFET); // 2.
 *       } WHEN {
 *           TURN { MOVE(player, MOVE_STUN_SPORE); } // 3.
 *       } SCENE {
 *           ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
 *           MESSAGE("Foe Wobbuffet is paralyzed! It may be unable to move!"); // 4
 *           STATUS_ICON(opponent, paralysis: TRUE); // 4.
 *       }
 *   }
 *
 * The ASSUMPTIONS block documents that Stun Spore has EFFECT_PARALYZE.
 * If Stun Spore did not have that effect it would cause the tests in
 * the file to be skipped. We write our tests like this so that hackers
 * can change the effects of moves without causing tests to fail.
 *
 * SINGLE_BATTLE_TEST defines the name of the test. Related tests should
 * start with the same prefix, e.g. Stun Spore tests should start with
 * "Stun Spore", this allows just the Stun Spore-related tests to be run
 * with:
 *     make check TESTS='Stun Spore'
 *
 * GIVEN initializes the parties, PLAYER and OPPONENT add a Pokémon to
 * their respective parties. They can both accept a block which further
 * customizes the Pokémon's stats, moves, item, ability, etc.
 *
 * WHEN describes the turns, and TURN describes the choices made in a
 * single turn. MOVE causes the player to use Stun Spore and adds the
 * move to the Pokémon's moveset if an explicit Moves was not specified.
 * Pokémon that are not mentioned in a TURN use Celebrate.
 * The test runner attempts to rig the RNG so that the first move used
 * in a turn does not miss and activates its secondary effects (if any).
 *
 * SCENE describes the player-visible output of the battle. In this case
 * ANIMATION checks that the Stun Spore animation played, MESSAGE checks
 * the paralysis message was shown, and STATUS_ICON checks that the
 * opponent's HP bar shows a PRZ icon.
 *
 * As a second example, to manually test that Stun Spore does not effect
 * Grass-types you might:
 * 1. Put a Wobbuffet that knows Stun Spore in your party.
 * 2. Battle a wild Oddish.
 * 3. Use Stun Spore.
 * 4. Check that the move animation does not play.
 * 5. Check that a "It doesn't affect Foe Oddish…" message is shown.
 *
 * This can again be translated as follows:
 *
 *   SINGLE_BATTLE_TEST("Stun Spore does not affect Grass-types")
 *   {
 *       GIVEN {
 *           ASSUME(gBattleMoves[MOVE_STUN_SPORE].flags & FLAG_POWDER);
 *           ASSUME(gSpeciesInfo[SPECIES_ODDISH].types[0] == TYPE_GRASS);
 *           PLAYER(SPECIES_ODDISH); // 1.
 *           OPPONENT(SPECIES_ODDISH); // 2.
 *       } WHEN {
 *           TURN { MOVE(player, MOVE_STUN_SPORE); } // 3.
 *       } SCENE {
 *           NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player); // 4.
 *           MESSAGE("It doesn't affect Foe Oddish…"); // 5.
 *       }
 *   }
 *
 * The ASSUMEs are documenting the reasons why Stun Spore does not
 * affect Oddish, namely that Stun Spore is a powder move, and Oddish
 * is a Grass-type. These ASSUMEs function similarly to the ones in
 * ASSUMPTIONS but apply only to the one test.
 *
 * NOT inverts the meaning of a SCENE check, so applying it to ANIMATION
 * requires that the Stun Spore animation does not play. MESSAGE checks
 * that the message was shown. The checks in SCENE are ordered, so
 * together this says "The doesn't affect message is shown, and the Stun
 * Spore animation does not play at any time before that". Normally you
 * would only test one or the other, or even better, just
 * NOT STATUS_ICON(opponent, paralysis: TRUE); to say that Oddish was
 * not paralyzed without specifying the exact outputs which led to that.
 *
 * As a final example, to test that Meditate works you might:
 * 1. Put a Wobbuffet that knows Meditate and Tackle in your party.
 * 2. Battle a wild Wobbuffet.
 * 3. Use Tackle and note the amount the HP bar reduced.
 * 4. Battle a wild Wobbuffet.
 * 5. Use Meditate and that the stat change animation and message play.
 * 6. Use Tackle and check that the HP bar reduced by more than in 3.
 *
 * This can be translated to an automated test as follows:
 *
 *    SINGLE_BATTLE_TEST("Meditate raises Attack", s16 damage)
 *    {
 *        bool32 raiseAttack;
 *        PARAMETRIZE { raiseAttack = FALSE; }
 *        PARAMETRIZE { raiseAttack = TRUE; }
 *        GIVEN {
 *            ASSUME(gBattleMoves[MOVE_TACKLE].split == SPLIT_PHYSICAL);
 *            PLAYER(SPECIES_WOBBUFFET);
 *            OPPONENT(SPECIES_WOBBUFFET);
 *        } WHEN {
 *            if (raiseAttack) TURN { MOVE(player, MOVE_MEDITATE); } // 5.
 *            TURN { MOVE(player, MOVE_TACKLE); } // 3 & 6.
 *        } SCENE {
 *            if (raiseAttack) {
 *                ANIMATION(ANIM_TYPE_MOVE, MOVE_MEDITATE, player);
 *                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); // 5.
 *                MESSAGE("Wobbuffet's attack rose!"); // 5.
 *            }
 *            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
 *            HP_BAR(opponent, captureDamage: &results[i].damage); // 3 & 6.
 *        } FINALLY {
 *            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage); // 6.
 *        }
 *    }
 *
 * PARAMETRIZE causes a test to run multiple times, once per PARAMETRIZE
 * block (e.g. once with raiseAttack = FALSE and once with raiseAttack =
 * TRUE).
 * HP_BAR's captureDamage causes the change in HP to be stored in a
 * variable, and the variable chosen is results[i].damage. results[i]
 * contains all the variables defined at the end of SINGLE_BATTLE_TEST,
 * i is the current PARAMETRIZE index.
 * FINALLY runs after the last parameter has finished, and uses
 * EXPECT_MUL_EQ to check that the second battle deals 1.5× the damage
 * of the first battle (with a small tolerance to account for rounding).
 *
 * You might notice that all the tests check the outputs the player
 * could see rather than the internal battle state. e.g. the Meditate test
 * could have used gBattleMons[B_POSITION_OPPONENT_LEFT].hp instead of
 * using HP_BAR to capture the damage. This is a deliberate choice, by
 * checking what the player can observe the tests are more robust to
 * refactoring, e.g. if gBattleMons got moved into gBattleStruct then
 * any test that used it would need to be updated.
 *
 * REFERENCE
 * =========
 *
 * ASSUME(cond)
 * Causes the test to be skipped if cond is false. Used to document any
 * prerequisites of the test, e.g. to test Burn reducing the Attack of a
 * Pokémon we can observe the damage of a physical attack with and
 * without the burn. To document that this test assumes the attack is
 * physical we can use:
 *     ASSUME(gBattleMoves[MOVE_WHATEVER].split == SPLIT_PHYSICAL);
 *
 * ASSUMPTIONS
 * Should be placed immediately after any #includes and contain any
 * ASSUMEs which should apply to the whole file, e.g. to test
 * EFFECT_POISON_HIT we need to choose a move with that effect, if
 * we chose to use Poison Sting in every test then the top of
 * move_effect_poison_hit.c should be:
 *     ASSUMPTIONS
 *     {
 *         ASSUME(gBattleMoves[MOVE_POISON_STING].effect == EFFECT_POISON_HIT);
 *     }
 *
 * SINGLE_BATTLE_TEST(name, results...) and DOUBLE_BATTLE_TEST(name, results...)
 * Define single- and double- battles. The names should start with the
 * name of the mechanic being tested so that it is easier to run all the
 * related tests. results contains variable declarations to be placed
 * into the results array which is available in PARAMETRIZEd tests.
 * The main differences for doubles are:
 * - Move targets sometimes need to be explicit.
 * - Instead of player and opponent there is playerLeft, playerRight,
 *   opponentLeft, and opponentRight.
 *
 * KNOWN_FAILING
 * Marks a test as not passing due to a bug. If there is an issue number
 * associated with the bug it should be included in a comment. If the
 * test passes the developer will be notified to remove KNOWN_FAILING.
 * For example:
 *     SINGLE_BATTLE_TEST("Jump Kick has no recoil if no target")
 *     {
 *         KNOWN_FAILING; // #2596.
 *
 * PARAMETRIZE
 * Runs a test multiple times. i will be set to which parameter is
 * running, and results will contain an entry for each parameter, e.g.:
 *     SINGLE_BATTLE_TEST("Blaze boosts Fire-type moves in a pinch", s16 damage)
 *     {
 *         u16 hp;
 *         PARAMETRIZE { hp = 99; }
 *         PARAMETRIZE { hp = 33; }
 *         GIVEN {
 *             ASSUME(gBattleMoves[MOVE_EMBER].type == TYPE_FIRE);
 *             PLAYER(SPECIES_CHARMANDER) { Ability(ABILITY_BLAZE); MaxHP(99); HP(hp); }
 *             OPPONENT(SPECIES_WOBBUFFET);
 *         } WHEN {
 *             TURN { MOVE(player, MOVE_EMBER); }
 *         } SCENE {
 *             HP_BAR(opponent, captureDamage: &results[i].damage);
 *         } FINALLY {
 *             EXPECT(results[1].damage > results[0].damage);
 *         }
 *     }
 *
 * PASSES_RANDOMLY(successes, trials)
 * Checks that the test passes approximately successes/trials. Used for
 * testing RNG-based attacks, e.g.:
 *     PASSES_RANDOMLY(gBattleMoves[move].accuracy, 100);
 * Note that PASSES_RANDOMLY makes the tests run very slowly and should
 * be avoided where possible.
 *
 * GIVEN
 * Contains the initial state of the parties before the battle.
 *
 * RNGSeed(seed)
 * Explicitly sets the RNG seed. Try to avoid using this because it is a
 * very fragile tool.
 * Example:
 *     GIVEN {
 *         RNGSeed(0xC0DEIDEA);
 *
 * PLAYER(species) and OPPONENT(species)
 * Adds the species to the player's or opponent's party respectively.
 * The Pokémon can be further customized with the following functions:
 * - Gender(MON_MALE | MON_FEMALE)
 * - Nature(nature)
 * - Ability(ability)
 * - Level(level)
 * - MaxHP(n), HP(n), Attack(n), Defense(n), SpAttack(n), SpDefense(n)
 * - Speed(n)
 * - Item(item)
 * - Moves(moves...)
 * - Friendship(friendship)
 * - Status1(status1)
 * For example to create a Wobbuffet that is poisoned:
 *     PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
 * Note if Speed is specified for any Pokémon then it must be specified
 * for all Pokémon.
 * Note if Moves is specified then MOVE will not automatically add moves
 * to the moveset.
 *
 * WHEN
 * Contains the choices that battlers make during the battle.
 *
 * TURN
 * Groups the choices made by the battlers on a single turn. If Speeds
 * have not been explicitly specified then the order of the MOVEs in the
 * TURN will be used to infer the Speeds of the Pokémon, e.g.:
 *     // player's speed will be greater than opponent's speed.
 *     TURN { MOVE(player, MOVE_SPLASH); MOVE(opponent, MOVE_SPLASH); }
 *     // opponent's speed will be greater than player's speed.
 *     TURN { MOVE(opponent, MOVE_SPLASH); MOVE(player, MOVE_SPLASH); }
 * The inference process is naive, if your test contains anything that
 * modifies the speed of a battler you should specify them explicitly.
 *
 * MOVE(battler, move | moveSlot:, [megaEvolve:], [hit:], [criticalHit:], [target:], [allowed:])
 * Used when the battler chooses Fight. Either the move ID or move slot
 * must be specified. megaEvolve: TRUE causes the battler to Mega Evolve
 * if able, hit: FALSE causes the move to miss, criticalHit: TRUE causes
 * the move to land a critical hit, target: is used in double battles to
 * choose the target (when necessary), and allowed: FALSE is used to
 * reject an illegal move e.g. a Disabled one.
 *     MOVE(playerLeft, MOVE_TACKLE, target: opponentRight);
 * If the battler does not have an explicit Moves specified the moveset
 * will be populated based on the MOVEs it uses.
 *
 * FORCED_MOVE(battler)
 * Used when the battler chooses Fight and then their move is chosen for
 * them, e.g. when affected by Encore.
 *     FORCED_MOVE(player);
 *
 * SWITCH(battler, partyIndex)
 * Used when the battler chooses Switch.
 *     SWITCH(player, 1);
 *
 * SKIP_TURN(battler)
 * Used when the battler cannot choose an action, e.g. when locked into
 * Thrash.
 *     SKIP_TURN(player);
 *
 * SEND_OUT(battler, partyIndex)
 * Used when the battler chooses to switch to another Pokémon but not
 * via Switch, e.g. after fainting or due to a U-turn.
 *     SEND_OUT(player, 1);
 *
 * SCENE
 * Contains an abridged description of the UI during the THEN. The order
 * of the description must match too, e.g.
 *     // ABILITY_POPUP followed by a MESSAGE
 *     ABILITY_POPUP(player, ABILITY_STURDY);
 *     MESSAGE("Geodude was protected by Sturdy!");
 *
 * ABILITY_POPUP(battler, [ability])
 * Causes the test to fail if the battler's ability pop-up is not shown.
 * If specified, ability is the ability shown in the pop-up.
 *     ABILITY_POPUP(opponent, ABILITY_MOLD_BREAKER);
 *
 * ANIMATION(type, animId, [battler], [target:])
 * Causes the test to fail if the animation does not play. A common use
 * of this command is to check if a move was successful, e.g.:
 *     ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
 * target can only be specified for ANIM_TYPE_MOVE.
 *
 * HP_BAR(battler, [damage: | hp: | captureDamage: | captureHP:])
 * If hp: or damage: are used, causes the test to fail if that amount of
 * damage is not dealt, e.g.:
 *     HP_BAR(player, hp: 0);
 * If captureDamage: or captureHP: are used, causes the test to fail if
 * the HP bar does not change, and then writes that change to the
 * pointer, e.g.:
 *     s16 damage;
 *     HP_BAR(player, captureDamage: &damage);
 * If none of the above are used, causes the test to fail if the HP
 * changes at all.
 *
 * MESSAGE(pattern)
 * Causes the test to fail if the message in pattern is not displayed.
 * Spaces in pattern match newlines (\n, \l, and \p) in the message.
 * Often used to check that a battler took its turn but it failed, e.g.:
 *     MESSAGE("Wobbuffet used Dream Eater!");
 *     MESSAGE("Foe Wobbuffet wasn't affected!");
 *
 * STATUS_ICON(battler, status1 | none: | sleep: | poison: | burn: | freeze: | paralysis:, badPoison:)
 * Causes the test to fail if the battler's status is not changed to the
 * specified status.
 *     STATUS_ICON(player, badPoison: TRUE);
 * If the expected status icon is parametrized the corresponding STATUS1
 * constant can be provided, e.g.:
 *     u32 status1;
 *     PARAMETRIZE { status1 = STATUS1_NONE; }
 *     PARAMETRIZE { status1 = STATUS1_BURN; }
 *     ...
 *     STATUS_ICON(player, status1);
 *
 * NOT
 * Causes the test to fail if the SCENE command succeeds before the
 * following command succeeds.
 *     // Our Wobbuffet does not Celebrate before the foe's.
 *     NOT MESSAGE("Wobbuffet used Celebrate!");
 *     MESSAGE("Foe Wobbuffet used Celebrate!");
 * WARNING: NOT is an alias of NONE_OF, so it behaves surprisingly when
 *          applied to multiple commands wrapped in braces.
 *
 * ONE_OF
 * Causes the test to fail unless one of the SCENE commands succeeds.
 *     ONE_OF {
 *         MESSAGE("Wobbuffet used Celebrate!");
 *         MESSAGE("Wobbuffet is paralyzed! It can't move!");
 *     }
 *
 * NONE_OF
 * Causes the test to fail if one of the SCENE commands succeeds before
 * the command after the NONE_OF succeeds.
 *     // Our Wobbuffet does not move before the foe's.
 *     NONE_OF {
 *         MESSAGE("Wobbuffet used Celebrate!");
 *         MESSAGE("Wobbuffet is paralyzed! It can't move!");
 *     }
 *     MESSAGE("Foe Wobbuffet used Celebrate!");
 *
 * PLAYER_PARTY and OPPONENT_PARTY
 * Refer to the party members defined in GIVEN, e.g.:
 *     s32 maxHP = GetMonData(&OPPONENT_PARTY[0], MON_DATA_MAX_HP);
 *     HP_BAR(opponent, damage: maxHP / 2);
 *
 * THEN
 * Contains code to run after the battle has finished. If the test is
 * PARAMETRIZEd then EXPECTs between the results should go here. Is also
 * occasionally used to check the internal battle state when checking
 * the behavior via a SCENE is too difficult, verbose, or error-prone.
 *
 * FINALLY
 * Contains checks to run after all PARAMETERIZEs have run. Prefer to
 * write your checks in THEN where possible, because a failure in THEN
 * will be tagged with which parameter it corresponds to.
 *
 * EXPECT(cond)
 * Causes the test to fail if cond is false.
 *
 * EXPECT_EQ(a, b), EXPECT_NE(a, b), EXPECT_LT(a, b), EXPECT_LE(a, b), EXPECT_GT(a, b), EXPECT_GE(a, b)
 * Causes the test to fail if a and b compare incorrectly, e.g.
 *     EXPECT_EQ(results[0].damage, results[1].damage);
 *
 * EXPECT_MUL_EQ(a, m, b)
 * Causes the test to fail if a*m != b (within a threshold), e.g.
 *     // Expect results[0].damage * 1.5 == results[1].damage.
 *     EXPECT_EQ(results[0].damage, Q_4_12(1.5), results[1].damage); */

#ifndef GUARD_TEST_BATTLE_H
#define GUARD_TEST_BATTLE_H

#include "battle.h"
#include "battle_anim.h"
#include "data.h"
#include "item.h"
#include "recorded_battle.h"
#include "test.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/battle_anim.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/species.h"

// NOTE: If the stack is too small the test runner will probably crash
// or loop.
#define BATTLE_TEST_STACK_SIZE 1024
#define MAX_QUEUED_EVENTS 16

enum { BATTLE_TEST_SINGLES, BATTLE_TEST_DOUBLES };

typedef void (*SingleBattleTestFunction)(void *, u32, struct BattlePokemon *, struct BattlePokemon *);
typedef void (*DoubleBattleTestFunction)(void *, u32, struct BattlePokemon *, struct BattlePokemon *, struct BattlePokemon *, struct BattlePokemon *);

struct BattleTest
{
    u8 type;
    u16 sourceLine;
    union
    {
        SingleBattleTestFunction singles;
        DoubleBattleTestFunction doubles;
    } function;
    size_t resultsSize;
};

enum
{
    QUEUED_ABILITY_POPUP_EVENT,
    QUEUED_ANIMATION_EVENT,
    QUEUED_HP_EVENT,
    QUEUED_MESSAGE_EVENT,
    QUEUED_STATUS_EVENT,
};

struct QueuedAbilityEvent
{
    u8 battlerId;
    u16 ability;
};

struct QueuedAnimationEvent
{
    u8 type;
    u16 id;
    u8 attacker:4;
    u8 target:4;
};

enum { HP_EVENT_NEW_HP, HP_EVENT_DELTA_HP };

struct QueuedHPEvent
{
    u32 battlerId:3;
    u32 type:1;
    u32 address:28;
};

struct QueuedMessageEvent
{
    const u8 *pattern;
};

struct QueuedStatusEvent
{
    u32 battlerId:3;
    u32 mask:8;
    u32 unused_01:21;
};

struct QueuedEvent
{
    u8 type;
    u8 sourceLineOffset;
    u8 groupType:2;
    u8 groupSize:6;
    union
    {
        struct QueuedAbilityEvent ability;
        struct QueuedAnimationEvent animation;
        struct QueuedHPEvent hp;
        struct QueuedMessageEvent message;
        struct QueuedStatusEvent status;
    } as;
};

struct BattleTestData
{
    u8 stack[BATTLE_TEST_STACK_SIZE];

    u8 playerPartySize;
    u8 opponentPartySize;
    u8 explicitMoves[NUM_BATTLE_SIDES];
    bool8 hasExplicitSpeeds;
    u8 explicitSpeeds[NUM_BATTLE_SIDES];
    u16 slowerThan[NUM_BATTLE_SIDES][PARTY_SIZE];
    u8 currentSide;
    u8 currentPartyIndex;
    struct Pokemon *currentMon;
    u8 gender;
    u8 nature;

    u8 currentMonIndexes[MAX_BATTLERS_COUNT];
    u8 turnState;
    u8 turns;
    u8 actionBattlers;
    u8 moveBattlers;
    bool8 hasRNGActions:1;

    struct RecordedBattleSave recordedBattle;
    u8 battleRecordTypes[MAX_BATTLERS_COUNT][BATTLER_RECORD_SIZE];
    u8 battleRecordSourceLineOffsets[MAX_BATTLERS_COUNT][BATTLER_RECORD_SIZE];
    u16 recordIndexes[MAX_BATTLERS_COUNT];
    u8 lastActionTurn;
    u8 nextRNGTurn;

    u8 queuedEventsCount;
    u8 queueGroupType;
    u8 queueGroupStart;
    u8 queuedEvent;
    struct QueuedEvent queuedEvents[MAX_QUEUED_EVENTS];
};

struct BattleTestRunnerState
{
    u8 battlersCount;
    u8 parametersCount; // Valid only in BattleTest_Setup.
    u8 parameters;
    u8 runParameter;
    u8 trials;
    u8 expectedPasses;
    u8 observedPasses;
    u8 skippedTrials;
    u8 runTrial;
    bool8 runRandomly:1;
    bool8 runGiven:1;
    bool8 runWhen:1;
    bool8 runScene:1;
    bool8 runThen:1;
    bool8 runFinally:1;
    bool8 runningFinally:1;
    struct BattleTestData data;
    u8 *results;
    u8 checkProgressParameter;
    u8 checkProgressTrial;
    u8 checkProgressTurn;
};

extern const struct TestRunner gBattleTestRunner;
extern struct BattleTestRunnerState *gBattleTestRunnerState;

#define MEMBERS(...) VARARG_8(MEMBERS_, __VA_ARGS__)
#define MEMBERS_0()
#define MEMBERS_1(a) a;
#define MEMBERS_2(a, b) a; b;
#define MEMBERS_3(a, b, c) a; b; c;
#define MEMBERS_4(a, b, c, d) a; b; c; d;
#define MEMBERS_5(a, b, c, d, e) a; b; c; d; e;
#define MEMBERS_6(a, b, c, d, e, f) a; b; c; d; e; f;
#define MEMBERS_7(a, b, c, d, e, f, g) a; b; c; d; e; f; g;
#define MEMBERS_8(a, b, c, d, e, f, g, h) a; b; c; d; e; f; g; h;

#define APPEND_TRUE(...) VARARG_8(APPEND_TRUE_, __VA_ARGS__)
#define APPEND_TRUE_0()
#define APPEND_TRUE_1(a) a, TRUE
#define APPEND_TRUE_2(a, b) a, TRUE, b, TRUE
#define APPEND_TRUE_3(a, b, c) a, TRUE, b, TRUE, c, TRUE
#define APPEND_TRUE_4(a, b, c, d) a, TRUE, b, TRUE, c, TRUE, d, TRUE
#define APPEND_TRUE_5(a, b, c, d, e) a, TRUE, b, TRUE, c, TRUE, d, TRUE, e, TRUE
#define APPEND_TRUE_6(a, b, c, d, e, f) a, TRUE, b, TRUE, c, TRUE, d, TRUE, e, TRUE, f, TRUE
#define APPEND_TRUE_7(a, b, c, d, e, f, g) a, TRUE, b, TRUE, c, TRUE, d, TRUE, e, TRUE, f, TRUE, g, TRUE
#define APPEND_TRUE_8(a, b, c, d, e, f, g, h) a, TRUE, b, TRUE, c, TRUE, d, TRUE, e, TRUE, f, TRUE, g, TRUE, h, TRUE

/* Test */

#define SINGLE_BATTLE_TEST(_name, ...) \
    struct CAT(Result, __LINE__) { MEMBERS(__VA_ARGS__) }; \
    static void CAT(Test, __LINE__)(struct CAT(Result, __LINE__) *, u32, struct BattlePokemon *, struct BattlePokemon *); \
    __attribute__((section(".tests"))) static const struct Test CAT(sTest, __LINE__) = \
    { \
        .name = _name, \
        .filename = __FILE__, \
        .runner = &gBattleTestRunner, \
        .data = (void *)&(const struct BattleTest) \
        { \
            .type = BATTLE_TEST_SINGLES, \
            .sourceLine = __LINE__, \
            .function = { .singles = (SingleBattleTestFunction)CAT(Test, __LINE__) }, \
            .resultsSize = sizeof(struct CAT(Result, __LINE__)), \
        }, \
    }; \
    static void CAT(Test, __LINE__)(struct CAT(Result, __LINE__) *results, u32 i, struct BattlePokemon *player, struct BattlePokemon *opponent)

#define DOUBLE_BATTLE_TEST(_name, ...) \
    struct CAT(Result, __LINE__) { MEMBERS(__VA_ARGS__) }; \
    static void CAT(Test, __LINE__)(struct CAT(Result, __LINE__) *, u32, struct BattlePokemon *, struct BattlePokemon *, struct BattlePokemon *, struct BattlePokemon *); \
    __attribute__((section(".tests"))) static const struct Test CAT(sTest, __LINE__) = \
    { \
        .name = _name, \
        .filename = __FILE__, \
        .runner = &gBattleTestRunner, \
        .data = (void *)&(const struct BattleTest) \
        { \
            .type = BATTLE_TEST_DOUBLES, \
            .sourceLine = __LINE__, \
            .function = { .doubles = (DoubleBattleTestFunction)CAT(Test, __LINE__) }, \
            .resultsSize = sizeof(struct CAT(Result, __LINE__)), \
        }, \
    }; \
    static void CAT(Test, __LINE__)(struct CAT(Result, __LINE__) *results, u32 i, struct BattlePokemon *playerLeft, struct BattlePokemon *opponentLeft, struct BattlePokemon *playerRight, struct BattlePokemon *opponentRight)

/* Parametrize */

#define PARAMETRIZE if (gBattleTestRunnerState->parametersCount++ == i)

/* Randomly */

#define PASSES_RANDOMLY(passes, trials) for (; gBattleTestRunnerState->runRandomly; gBattleTestRunnerState->runRandomly = FALSE) Randomly(__LINE__, passes, trials)

void Randomly(u32 sourceLine, u32 passes, u32 trials);

/* Given */

#define GIVEN for (; gBattleTestRunnerState->runGiven; gBattleTestRunnerState->runGiven = FALSE)

#define RNGSeed(seed) RNGSeed_(__LINE__, seed)

#define PLAYER(species) for (OpenPokemon(__LINE__, B_SIDE_PLAYER, species); gBattleTestRunnerState->data.currentMon; ClosePokemon(__LINE__))
#define OPPONENT(species) for (OpenPokemon(__LINE__, B_SIDE_OPPONENT, species); gBattleTestRunnerState->data.currentMon; ClosePokemon(__LINE__))

#define Gender(gender) Gender_(__LINE__, gender)
#define Nature(nature) Nature_(__LINE__, nature)
#define Ability(ability) Ability_(__LINE__, ability)
#define Level(level) Level_(__LINE__, level)
#define MaxHP(maxHP) MaxHP_(__LINE__, maxHP)
#define HP(hp) HP_(__LINE__, hp)
#define Attack(attack) Attack_(__LINE__, attack)
#define Defense(defense) Defense_(__LINE__, defense)
#define SpAttack(spAttack) SpAttack_(__LINE__, spAttack)
#define SpDefense(spDefense) SpDefense_(__LINE__, spDefense)
#define Speed(speed) Speed_(__LINE__, speed)
#define Item(item) Item_(__LINE__, item)
#define Moves(move1, ...) Moves_(__LINE__, (const u16 [MAX_MON_MOVES]) { move1, __VA_ARGS__ })
#define Friendship(friendship) Friendship_(__LINE__, friendship)
#define Status1(status1) Status1_(__LINE__, status1)

void OpenPokemon(u32 sourceLine, u32 side, u32 species);
void ClosePokemon(u32 sourceLine);

void RNGSeed_(u32 sourceLine, u32 seed);
void Gender_(u32 sourceLine, u32 gender);
void Nature_(u32 sourceLine, u32 nature);
void Ability_(u32 sourceLine, u32 ability);
void Level_(u32 sourceLine, u32 level);
void MaxHP_(u32 sourceLine, u32 maxHP);
void HP_(u32 sourceLine, u32 hp);
void Attack_(u32 sourceLine, u32 attack);
void Defense_(u32 sourceLine, u32 defense);
void SpAttack_(u32 sourceLine, u32 spAttack);
void SpDefense_(u32 sourceLine, u32 spDefense);
void Speed_(u32 sourceLine, u32 speed);
void Item_(u32 sourceLine, u32 item);
void Moves_(u32 sourceLine, const u16 moves[MAX_MON_MOVES]);
void Friendship_(u32 sourceLine, u32 friendship);
void Status1_(u32 sourceLine, u32 status1);

#define PLAYER_PARTY (gBattleTestRunnerState->data.recordedBattle.playerParty)
#define OPPONENT_PARTY (gBattleTestRunnerState->data.recordedBattle.opponentParty)

/* When */

#define WHEN for (; gBattleTestRunnerState->runWhen; gBattleTestRunnerState->runWhen = FALSE)

enum { TURN_CLOSED, TURN_OPEN, TURN_CLOSING };

#define TURN for (OpenTurn(__LINE__); gBattleTestRunnerState->data.turnState == TURN_OPEN; CloseTurn(__LINE__))

#define MOVE(battler, ...) Move(__LINE__, battler, (struct MoveContext) { APPEND_TRUE(__VA_ARGS__) })
#define FORCED_MOVE(battler) ForcedMove(__LINE__, battler)
#define SWITCH(battler, partyIndex) Switch(__LINE__, battler, partyIndex)
#define SKIP_TURN(battler) SkipTurn(__LINE__, battler)
#define SEND_OUT(battler, partyIndex) SendOut(__LINE__, battler, partyIndex)

struct MoveContext
{
    u16 move;
    u16 explicitMove:1;
    u16 moveSlot:2;
    u16 explicitMoveSlot:1;
    u16 hit:1;
    u16 explicitHit:1;
    u16 criticalHit:1;
    u16 explicitCriticalHit:1;
    u16 megaEvolve:1;
    u16 explicitMegaEvolve:1;
    // TODO: u8 zMove:1;
    u16 allowed:1;
    u16 explicitAllowed:1;
    struct BattlePokemon *target;
    bool8 explicitTarget;
};

void OpenTurn(u32 sourceLine);
void CloseTurn(u32 sourceLine);
void Move(u32 sourceLine, struct BattlePokemon *, struct MoveContext);
void ForcedMove(u32 sourceLine, struct BattlePokemon *);
void Switch(u32 sourceLine, struct BattlePokemon *, u32 partyIndex);
void SkipTurn(u32 sourceLine, struct BattlePokemon *);

void SendOut(u32 sourceLine, struct BattlePokemon *, u32 partyIndex);

/* Scene */

#define SCENE for (; gBattleTestRunnerState->runScene; gBattleTestRunnerState->runScene = FALSE)

#define ONE_OF for (OpenQueueGroup(__LINE__, QUEUE_GROUP_ONE_OF); gBattleTestRunnerState->data.queueGroupType != QUEUE_GROUP_NONE; CloseQueueGroup(__LINE__))
#define NONE_OF for (OpenQueueGroup(__LINE__, QUEUE_GROUP_NONE_OF); gBattleTestRunnerState->data.queueGroupType != QUEUE_GROUP_NONE; CloseQueueGroup(__LINE__))
#define NOT NONE_OF

#define ABILITY_POPUP(battler, ...) QueueAbility(__LINE__, battler, (struct AbilityEventContext) { __VA_ARGS__ })
#define ANIMATION(type, id, ...) QueueAnimation(__LINE__, type, id, (struct AnimationEventContext) { __VA_ARGS__ })
#define HP_BAR(battler, ...) QueueHP(__LINE__, battler, (struct HPEventContext) { APPEND_TRUE(__VA_ARGS__) })
#define MESSAGE(pattern) QueueMessage(__LINE__, (const u8 []) _(pattern))
#define STATUS_ICON(battler, status) QueueStatus(__LINE__, battler, (struct StatusEventContext) { status })

enum QueueGroupType
{
    QUEUE_GROUP_NONE,
    QUEUE_GROUP_ONE_OF,
    QUEUE_GROUP_NONE_OF,
};

struct AbilityEventContext
{
    u16 ability;
};

struct AnimationEventContext
{
    struct BattlePokemon *attacker;
    struct BattlePokemon *target;
};

struct HPEventContext
{
    u8 _;
    u16 hp;
    bool8 explicitHP;
    s16 damage;
    bool8 explicitDamage;
    u16 *captureHP;
    bool8 explicitCaptureHP;
    s16 *captureDamage;
    bool8 explicitCaptureDamage;
};

struct StatusEventContext
{
    u8 status1;
    bool8 none:1;
    bool8 sleep:1;
    bool8 poison:1;
    bool8 burn:1;
    bool8 freeze:1;
    bool8 paralysis:1;
    bool8 badPoison:1;
};

void OpenQueueGroup(u32 sourceLine, enum QueueGroupType);
void CloseQueueGroup(u32 sourceLine);

void QueueAbility(u32 sourceLine, struct BattlePokemon *battler, struct AbilityEventContext);
void QueueAnimation(u32 sourceLine, u32 type, u32 id, struct AnimationEventContext);
void QueueHP(u32 sourceLine, struct BattlePokemon *battler, struct HPEventContext);
void QueueMessage(u32 sourceLine, const u8 *pattern);
void QueueStatus(u32 sourceLine, struct BattlePokemon *battler, struct StatusEventContext);

/* Then */

#define THEN for (; gBattleTestRunnerState->runThen; gBattleTestRunnerState->runThen = FALSE)

/* Finally */

#define FINALLY for (; gBattleTestRunnerState->runFinally; gBattleTestRunnerState->runFinally = FALSE) if ((gBattleTestRunnerState->runningFinally = TRUE))

/* Expect */

#define EXPECT_MUL_EQ(a, m, b) \
    do \
    { \
        s32 _a = (a), _m = (m), _b = (b); \
        s32 _am = Q_4_12_TO_INT(_a * _m); \
        s32 _t = Q_4_12_TO_INT(abs(_m) + Q_4_12_ROUND); \
        if (abs(_am-_b) > _t) \
            Test_ExitWithResult(TEST_RESULT_FAIL, "%s:%d: EXPECT_MUL_EQ(%d, %q, %d) failed: %d not in [%d..%d]", gTestRunnerState.test->filename, __LINE__, _a, _m, _b, _am, _b-_t, _b+_t); \
    } while (0)

#endif
