#include "global.h"
#include "battle.h"
#include "battle_ai_main.h"
#include "battle_ai_util.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_setup.h"
#include "pokemon.h"
#include "random.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/item_effects.h"
#include "constants/items.h"
#include "constants/moves.h"

// this file's functions
static bool8 HasSuperEffectiveMoveAgainstOpponents(bool8 noRng);
static bool8 FindMonWithFlagsAndSuperEffective(u16 flags, u8 moduloPercent);
static bool8 ShouldUseItem(void);

void GetAIPartyIndexes(u32 battlerId, s32 *firstId, s32 *lastId)
{
    if (BATTLE_TWO_VS_ONE_OPPONENT && (battlerId & BIT_SIDE) == B_SIDE_OPPONENT)
    {
        *firstId = 0, *lastId = 6;
    }
    else if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_TOWER_LINK_MULTI))
    {
        if ((battlerId & BIT_FLANK) == B_FLANK_LEFT)
            *firstId = 0, *lastId = 3;
        else
            *firstId = 3, *lastId = 6;
    }
    else
    {
        *firstId = 0, *lastId = 6;
    }
}

static bool8 ShouldSwitchIfAllBadMoves(void)
{
    if (gBattleResources->ai->switchMon)
    {
        gBattleResources->ai->switchMon = 0;
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static bool8 ShouldSwitchIfPerishSong(void)
{
    if (gStatuses3[gActiveBattler] & STATUS3_PERISH_SONG
        && gDisableStructs[gActiveBattler].perishSongTimer == 0)
    {
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static bool8 ShouldSwitchIfWonderGuard(void)
{
    u8 opposingPosition;
    u8 opposingBattler;
    s32 i, j;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party = NULL;
    u16 move;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
        return FALSE;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler));

    if (gBattleMons[GetBattlerAtPosition(opposingPosition)].ability != ABILITY_WONDER_GUARD)
        return FALSE;

    // Check if Pokemon has a super effective move.
    for (opposingBattler = GetBattlerAtPosition(opposingPosition), i = 0; i < MAX_MON_MOVES; i++)
    {
        move = gBattleMons[gActiveBattler].moves[i];
        if (move != MOVE_NONE)
        {
            if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0))
                return FALSE;
        }
    }

    // Get party information.
    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    // Find a Pokemon in the party that has a super effective move.
    for (i = firstId; i < lastId; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[gActiveBattler])
            continue;

        for (opposingBattler = GetBattlerAtPosition(opposingPosition), j = 0; j < MAX_MON_MOVES; j++)
        {
            move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE)
            {
                if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0) && Random() % 3 < 2)
                {
                    // We found a mon.
                    *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = i;
                    BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
                    return TRUE;
                }
            }
        }
    }

    return FALSE; // There is not a single Pokemon in the party that has a super effective move against a mon with Wonder Guard.
}

static bool8 FindMonThatAbsorbsOpponentsMove(void)
{
    u8 battlerIn1, battlerIn2;
    u16 absorbingTypeAbility;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;

    if (HasSuperEffectiveMoveAgainstOpponents(TRUE) && Random() % 3 != 0)
        return FALSE;
    if (gLastLandedMoves[gActiveBattler] == 0)
        return FALSE;
    if (gLastLandedMoves[gActiveBattler] == 0xFFFF)
        return FALSE;
    if (gBattleMoves[gLastLandedMoves[gActiveBattler]].power == 0)
        return FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)));
    }
    else
    {
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    if (gBattleMoves[gLastLandedMoves[gActiveBattler]].type == TYPE_FIRE)
        absorbingTypeAbility = ABILITY_FLASH_FIRE;
    else if (gBattleMoves[gLastLandedMoves[gActiveBattler]].type == TYPE_WATER)
        absorbingTypeAbility = ABILITY_WATER_ABSORB;
    else if (gBattleMoves[gLastLandedMoves[gActiveBattler]].type == TYPE_ELECTRIC)
        absorbingTypeAbility = ABILITY_VOLT_ABSORB;
    else
        return FALSE;

    if (gBattleMons[gActiveBattler].ability == absorbingTypeAbility)
        return FALSE;

    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = firstId; i < lastId; i++)
    {
        u16 species;
        u16 monAbility;

        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn1))
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
            continue;

        species = GetMonData(&party[i], MON_DATA_SPECIES);
        if (GetMonData(&party[i], MON_DATA_ABILITY_NUM) != 0)
            monAbility = gBaseStats[species].abilities[1];
        else
            monAbility = gBaseStats[species].abilities[0];

        if (absorbingTypeAbility == monAbility && Random() & 1)
        {
            // we found a mon.
            *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = i;
            BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
            return TRUE;
        }
    }

    return FALSE;
}

static bool8 ShouldSwitchIfNaturalCure(void)
{
    if (!(gBattleMons[gActiveBattler].status1 & STATUS1_SLEEP))
        return FALSE;
    if (gBattleMons[gActiveBattler].ability != ABILITY_NATURAL_CURE)
        return FALSE;
    if (gBattleMons[gActiveBattler].hp < gBattleMons[gActiveBattler].maxHP / 2)
        return FALSE;

    if ((gLastLandedMoves[gActiveBattler] == 0 || gLastLandedMoves[gActiveBattler] == 0xFFFF) && Random() & 1)
    {
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else if (gBattleMoves[gLastLandedMoves[gActiveBattler]].power == 0 && Random() & 1)
    {
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
        return TRUE;
    }

    if (FindMonWithFlagsAndSuperEffective(MOVE_RESULT_DOESNT_AFFECT_FOE, 1))
        return TRUE;
    if (FindMonWithFlagsAndSuperEffective(MOVE_RESULT_NOT_VERY_EFFECTIVE, 1))
        return TRUE;

    if (Random() & 1)
    {
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
        return TRUE;
    }

    return FALSE;
}

static bool8 HasSuperEffectiveMoveAgainstOpponents(bool8 noRng)
{
    u8 opposingPosition;
    u8 opposingBattler;
    s32 i;
    u16 move;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler));
    opposingBattler = GetBattlerAtPosition(opposingPosition);

    if (!(gAbsentBattlerFlags & gBitTable[opposingBattler]))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[gActiveBattler].moves[i];
            if (move == MOVE_NONE)
                continue;

            if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0))
            {
                if (noRng)
                    return TRUE;
                if (Random() % 10 != 0)
                    return TRUE;
            }
        }
    }
    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
        return FALSE;

    opposingBattler = GetBattlerAtPosition(BATTLE_PARTNER(opposingPosition));

    if (!(gAbsentBattlerFlags & gBitTable[opposingBattler]))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[gActiveBattler].moves[i];
            if (move == MOVE_NONE)
                continue;

            if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0))
            {
                if (noRng)
                    return TRUE;
                if (Random() % 10 != 0)
                    return TRUE;
            }
        }
    }

    return FALSE;
}

static bool8 AreStatsRaised(void)
{
    u8 buffedStatsValue = 0;
    s32 i;

    for (i = 0; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[gActiveBattler].statStages[i] > DEFAULT_STAT_STAGE)
            buffedStatsValue += gBattleMons[gActiveBattler].statStages[i] - DEFAULT_STAT_STAGE;
    }

    return (buffedStatsValue > 3);
}

static bool8 FindMonWithFlagsAndSuperEffective(u16 flags, u8 moduloPercent)
{
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i, j;
    u16 move;

    if (gLastLandedMoves[gActiveBattler] == 0)
        return FALSE;
    if (gLastLandedMoves[gActiveBattler] == 0xFFFF)
        return FALSE;
    if (gLastHitBy[gActiveBattler] == 0xFF)
        return FALSE;
    if (gBattleMoves[gLastLandedMoves[gActiveBattler]].power == 0)
        return FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)));
    }
    else
    {
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = firstId; i < lastId; i++)
    {
        u16 species;
        u16 monAbility;

        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn1))
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
            continue;

        species = GetMonData(&party[i], MON_DATA_SPECIES);
        if (GetMonData(&party[i], MON_DATA_ABILITY_NUM) != 0)
            monAbility = gBaseStats[species].abilities[1];
        else
            monAbility = gBaseStats[species].abilities[0];

        CalcPartyMonTypeEffectivenessMultiplier(gLastLandedMoves[gActiveBattler], species, monAbility);
        if (gMoveResultFlags & flags)
        {
            battlerIn1 = gLastHitBy[gActiveBattler];

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
                if (move == 0)
                    continue;

                if (AI_GetTypeEffectiveness(move, gActiveBattler, battlerIn1) >= UQ_4_12(2.0) && Random() % moduloPercent == 0)
                {
                    *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = i;
                    BtlController_EmitTwoReturnValues(1, B_ACTION_SWITCH, 0);
                    return TRUE;
                }
            }
        }
    }

    return FALSE;
}

bool32 ShouldSwitch(void)
{
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;
    s32 availableToSwitch;

    if (gBattleMons[gActiveBattler].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION))
        return FALSE;
    if (gStatuses3[gActiveBattler] & STATUS3_ROOTED)
        return FALSE;
    if (IsAbilityPreventingEscape(gActiveBattler))
        return FALSE;
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return FALSE;

    availableToSwitch = 0;
    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK)])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK);
    }
    else
    {
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = firstId; i < lastId; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn1))
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
            continue;

        availableToSwitch++;
    }

    if (availableToSwitch == 0)
        return FALSE;
    if (ShouldSwitchIfAllBadMoves())
        return TRUE;
    if (ShouldSwitchIfPerishSong())
        return TRUE;
    if (ShouldSwitchIfWonderGuard())
        return TRUE;
    if (FindMonThatAbsorbsOpponentsMove())
        return TRUE;
    if (ShouldSwitchIfNaturalCure())
        return TRUE;
    if (HasSuperEffectiveMoveAgainstOpponents(FALSE))
        return FALSE;
    if (AreStatsRaised())
        return FALSE;
    if (FindMonWithFlagsAndSuperEffective(MOVE_RESULT_DOESNT_AFFECT_FOE, 2)
        || FindMonWithFlagsAndSuperEffective(MOVE_RESULT_NOT_VERY_EFFECTIVE, 3))
        return TRUE;

    return FALSE;
}

void AI_TrySwitchOrUseItem(void)
{
    struct Pokemon *party;
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    u8 battlerIdentity = GetBattlerPosition(gActiveBattler);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
    {
        if (ShouldSwitch())
        {
            if (*(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) == PARTY_SIZE)
            {
                s32 monToSwitchId = GetMostSuitableMonToSwitchInto();
                if (monToSwitchId == PARTY_SIZE)
                {
                    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerIdentity);
                        battlerIn2 = battlerIn1;
                    }
                    else
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerIdentity);
                        battlerIn2 = GetBattlerAtPosition(battlerIdentity ^ BIT_FLANK);
                    }

                    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

                    for (monToSwitchId = firstId; monToSwitchId < lastId; monToSwitchId++)
                    {
                        if (GetMonData(&party[monToSwitchId], MON_DATA_HP) == 0)
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn1])
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn2])
                            continue;
                        if (monToSwitchId == *(gBattleStruct->monToSwitchIntoId + battlerIn1))
                            continue;
                        if (monToSwitchId == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
                            continue;

                        break;
                    }
                }

                *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = monToSwitchId;
            }

            *(gBattleStruct->monToSwitchIntoId + gActiveBattler) = *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler);
            return;
        }
        else if (ShouldUseItem())
        {
            return;
        }
    }

    BtlController_EmitTwoReturnValues(1, B_ACTION_USE_MOVE, (gActiveBattler ^ BIT_SIDE) << 8);
}

// If there are two(or more) mons to choose from, always choose one that has baton pass
// as most often it can't do much on its own.
static u32 GetBestMonBatonPass(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, int aliveCount)
{
    int i, j, bits = 0;

    for (i = firstId; i < lastId; i++)
    {
        if (invalidMons & gBitTable[i])
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            if (GetMonData(&party[i], MON_DATA_MOVE1 + j, NULL) == MOVE_BATON_PASS)
            {
                bits |= gBitTable[i];
                break;
            }
        }
    }

    if ((aliveCount == 2 || (aliveCount > 2 && Random() % 3 == 0)) && bits)
    {
        do
        {
            i = (Random() % (lastId - firstId)) + firstId;
        } while (!(bits & gBitTable[i]));
        return i;
    }

    return PARTY_SIZE;
}

static u32 GestBestMonOffensive(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 opposingBattler)
{
    int i, bits = 0;

    while (bits != 0x3F) // All mons were checked.
    {
        int bestDmg = 0;
        int bestMonId = PARTY_SIZE;
        // Find the mon whose type is the most suitable offensively.
        for (i = firstId; i < lastId; i++)
        {
            if (!(gBitTable[i] & invalidMons) && !(gBitTable[i] & bits))
            {
                u16 species = GetMonData(&party[i], MON_DATA_SPECIES);
                u32 typeDmg = UQ_4_12(1.0);

                u8 atkType1 = gBaseStats[species].type1;
                u8 atkType2 = gBaseStats[species].type2;
                u8 defType1 = gBattleMons[opposingBattler].type1;
                u8 defType2 = gBattleMons[opposingBattler].type2;

                typeDmg *= GetTypeModifier(atkType1, defType1);
                if (atkType2 != atkType1)
                    typeDmg *= GetTypeModifier(atkType2, defType1);
                if (defType2 != defType1)
                {
                    typeDmg *= GetTypeModifier(atkType1, defType2);
                    if (atkType2 != atkType1)
                        typeDmg *= GetTypeModifier(atkType2, defType2);
                }
                if (bestDmg < typeDmg)
                {
                    bestDmg = typeDmg;
                    bestMonId = i;
                }
            }
        }

        // Ok, we know the mon has the right typing but does it have at least one super effective move?
        if (bestMonId != PARTY_SIZE)
        {
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                u32 move = GetMonData(&party[bestMonId], MON_DATA_MOVE1 + i);
                if (move != MOVE_NONE && AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0))
                    break;
            }

            if (i != MAX_MON_MOVES)
                return bestMonId; // Has both the typing and at least one super effective move.

            bits |= gBitTable[bestMonId]; // Sorry buddy, we want something better.
        }
        else
        {
            bits = 0x3F; // No viable mon to switch.
        }
    }

    return PARTY_SIZE;
}

static u32 GetBestMonDmg(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 opposingBattler)
{
    int i, j;
    int bestDmg = 0;
    int bestMonId = PARTY_SIZE;

    gMoveResultFlags = 0;
    // If we couldn't find the best mon in terms of typing, find the one that deals most damage.
    for (i = firstId; i < lastId; i++)
    {
        if (gBitTable[i] & invalidMons)
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u32 move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE && gBattleMoves[move].power != 0)
            {
                s32 dmg = AI_CalcPartyMonDamage(move, gActiveBattler, opposingBattler, &party[i]);
                if (bestDmg < dmg)
                {
                    bestDmg = dmg;
                    bestMonId = i;
                }
            }
        }
    }

    return bestMonId;
}

u8 GetMostSuitableMonToSwitchInto(void)
{
    u32 opposingBattler = 0;
    u32 bestDmg = 0;
    u32 bestMonId = 0;
    u8 battlerIn1 = 0, battlerIn2 = 0;
    s32 firstId = 0;
    s32 lastId = 0; // + 1
    struct Pokemon *party;
    s32 i, j, aliveCount = 0;
    u8 invalidMons = 0;

    if (*(gBattleStruct->monToSwitchIntoId + gActiveBattler) != PARTY_SIZE)
        return *(gBattleStruct->monToSwitchIntoId + gActiveBattler);
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return gBattlerPartyIndexes[gActiveBattler] + 1;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK)])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK);

        opposingBattler = BATTLE_OPPOSITE(battlerIn1);
        if (gAbsentBattlerFlags & gBitTable[opposingBattler])
            opposingBattler ^= BIT_FLANK;
    }
    else
    {
        opposingBattler = GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_SIDE);
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    // Get invalid slots ids.
    for (i = firstId; i < lastId; i++)
    {
        if (GetMonData(&party[i], MON_DATA_SPECIES) == SPECIES_NONE
            || GetMonData(&party[i], MON_DATA_HP) == 0
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == *(gBattleStruct->monToSwitchIntoId + battlerIn1)
            || i == *(gBattleStruct->monToSwitchIntoId + battlerIn2)
            || (GetMonAbility(&party[i]) == ABILITY_TRUANT && IsTruantMonVulnerable(gActiveBattler, opposingBattler))) // While not really invalid per say, not really wise to switch into this mon.
            invalidMons |= gBitTable[i];
        else
            aliveCount++;
    }

    bestMonId = GetBestMonBatonPass(party, firstId, lastId, invalidMons, aliveCount);
    if (bestMonId != PARTY_SIZE)
        return bestMonId;

    bestMonId = GestBestMonOffensive(party, firstId, lastId, invalidMons, opposingBattler);
    if (bestMonId != PARTY_SIZE)
        return bestMonId;

    bestMonId = GetBestMonDmg(party, firstId, lastId, invalidMons, opposingBattler);
    if (bestMonId != PARTY_SIZE)
        return bestMonId;

    return PARTY_SIZE;
}

static u8 GetAI_ItemType(u16 itemId, const u8 *itemEffect)
{
    if (itemId == ITEM_FULL_RESTORE)
        return AI_ITEM_FULL_RESTORE;
    else if (itemEffect[4] & ITEM4_HEAL_HP)
        return AI_ITEM_HEAL_HP;
    else if (itemEffect[3] & ITEM3_STATUS_ALL)
        return AI_ITEM_CURE_CONDITION;
#ifdef ITEM_EXPANSION
    else if ((itemEffect[0] & ITEM0_DIRE_HIT) || itemEffect[1])
#else
    else if (itemEffect[0] & (ITEM0_DIRE_HIT | ITEM0_X_ATTACK) || itemEffect[1] != 0 || itemEffect[2] != 0)
#endif
        return AI_ITEM_X_STAT;
    else if (itemEffect[3] & ITEM3_GUARD_SPEC)
        return AI_ITEM_GUARD_SPEC;
    else
        return AI_ITEM_NOT_RECOGNIZABLE;
}

static bool8 ShouldUseItem(void)
{
    struct Pokemon *party;
    s32 i;
    u8 validMons = 0;
    bool8 shouldUse = FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && GetBattlerPosition(gActiveBattler) == B_POSITION_PLAYER_RIGHT)
        return FALSE;

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP) != 0
            && GetMonData(&party[i], MON_DATA_SPECIES2) != SPECIES_NONE
            && GetMonData(&party[i], MON_DATA_SPECIES2) != SPECIES_EGG)
        {
            validMons++;
        }
    }

    for (i = 0; i < MAX_TRAINER_ITEMS; i++)
    {
        u16 item;
        const u8 *itemEffects;
        u8 paramOffset;
        u8 battlerSide;

        if (i != 0 && validMons > (gBattleResources->battleHistory->itemsNo - i) + 1)
            continue;
        item = gBattleResources->battleHistory->trainerItems[i];
        if (item == ITEM_NONE)
            continue;
        if (gItemEffectTable[item - ITEM_POTION] == NULL)
            continue;

        if (item == ITEM_ENIGMA_BERRY)
            itemEffects = gSaveBlock1Ptr->enigmaBerry.itemEffect;
        else
            itemEffects = gItemEffectTable[item - ITEM_POTION];

        *(gBattleStruct->AI_itemType + gActiveBattler / 2) = GetAI_ItemType(item, itemEffects);

        switch (*(gBattleStruct->AI_itemType + gActiveBattler / 2))
        {
        case AI_ITEM_FULL_RESTORE:
            if (gBattleMons[gActiveBattler].hp >= gBattleMons[gActiveBattler].maxHP / 4)
                break;
            if (gBattleMons[gActiveBattler].hp == 0)
                break;
            shouldUse = TRUE;
            break;
        case AI_ITEM_HEAL_HP:
            paramOffset = GetItemEffectParamOffset(item, 4, 4);
            if (paramOffset == 0)
                break;
            if (gBattleMons[gActiveBattler].hp == 0)
                break;
            if (gBattleMons[gActiveBattler].hp < gBattleMons[gActiveBattler].maxHP / 4 || gBattleMons[gActiveBattler].maxHP - gBattleMons[gActiveBattler].hp > itemEffects[paramOffset])
                shouldUse = TRUE;
            break;
        case AI_ITEM_CURE_CONDITION:
            *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) = 0;
            if (itemEffects[3] & ITEM3_SLEEP && gBattleMons[gActiveBattler].status1 & STATUS1_SLEEP)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_SLEEP);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_POISON && (gBattleMons[gActiveBattler].status1 & STATUS1_POISON 
                                               || gBattleMons[gActiveBattler].status1 & STATUS1_TOXIC_POISON))
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_POISON);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_BURN && gBattleMons[gActiveBattler].status1 & STATUS1_BURN)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_BURN);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_FREEZE && gBattleMons[gActiveBattler].status1 & STATUS1_FREEZE)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_FREEZE);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_PARALYSIS && gBattleMons[gActiveBattler].status1 & STATUS1_PARALYSIS)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_PARALYSIS);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_CONFUSION && gBattleMons[gActiveBattler].status2 & STATUS2_CONFUSION)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_CONFUSION);
                shouldUse = TRUE;
            }
            break;
        case AI_ITEM_X_STAT:
            *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) = 0;
            if (gDisableStructs[gActiveBattler].isFirstTurn == 0)
                break;
        #ifndef ITEM_EXPANSION
            if (itemEffects[0] & ITEM0_X_ATTACK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ATTACK);
            if (itemEffects[1] & ITEM1_X_DEFEND)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_DEFEND);
            if (itemEffects[1] & ITEM1_X_SPEED)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPEED);
            if (itemEffects[2] & ITEM2_X_SPATK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPATK);
            if (itemEffects[2] & ITEM2_X_ACCURACY)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ACCURACY);
            if (itemEffects[0] & ITEM0_DIRE_HIT)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_DIRE_HIT);
        #else
            if (itemEffects[1] & ITEM1_X_ATTACK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ATTACK);
            if (itemEffects[1] & ITEM1_X_DEFENSE)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_DEFEND);
            if (itemEffects[1] & ITEM1_X_SPEED)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPEED);
            if (itemEffects[1] & ITEM1_X_SPATK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPATK);
            if (itemEffects[1] & ITEM1_X_SPDEF)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPDEF);
            if (itemEffects[1] & ITEM1_X_ACCURACY)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ACCURACY);
            if (itemEffects[0] & ITEM0_DIRE_HIT)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_DIRE_HIT);
        #endif
            shouldUse = TRUE;
            break;
        case AI_ITEM_GUARD_SPEC:
            battlerSide = GetBattlerSide(gActiveBattler);
            if (gDisableStructs[gActiveBattler].isFirstTurn != 0 && gSideTimers[battlerSide].mistTimer == 0)
                shouldUse = TRUE;
            break;
        case AI_ITEM_NOT_RECOGNIZABLE:
            return FALSE;
        }

        if (shouldUse)
        {
            BtlController_EmitTwoReturnValues(1, B_ACTION_USE_ITEM, 0);
            *(gBattleStruct->chosenItem + (gActiveBattler / 2) * 2) = item;
            gBattleResources->battleHistory->trainerItems[i] = 0;
            return shouldUse;
        }
    }

    return FALSE;
}
