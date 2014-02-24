/*
 * Copyright (C) 2008-2013 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __BATTLEGROUNDSM_H
#define __BATTLEGROUNDSM_H

#include "Language.h"
#include "Battleground.h"

enum BG_SM_WorldStates
{
	SM_MINE_CARTS_DISPLAY			= 6436,
    SM_ALLIANCE_RESOURCES           = 6437,
    SM_HORDE_RESOURCES              = 6438,
	SM_MINE_CART_1					= 6439,
	SM_MINE_CART_2					= 6440,
	SM_MINE_CART_3					= 6441,
	SM_DISPLAY_ALLIANCE_RESSOURCES	= 6442,
	SM_DISPLAY_HORDE_RESSOURCES		= 6443,
	SM_DISPLAY_PROGRESS_BAR			= 6875, // 0 = false, 1 = true
	SM_PROGRESS_BAR_STATUS			= 6876, // 0 = Horde max, 50 = Neutral, 100 = Alliance max
	SM_UNK							= 6877
};

enum BG_SM_MineCarts
{
	BG_SM_MINE_CART_1		= 1,
	BG_SM_MINE_CART_2		= 2,
	BG_SM_MINE_CART_3		= 3
};

enum BG_SM_ProgressBarConsts
{
    BG_SM_PROGRESS_BAR_DONT_SHOW			= 0,
    BG_SM_PROGRESS_BAR_SHOW					= 1,
    BG_SM_PROGRESS_BAR_NEUTRAL				= 50,
};

enum BG_SM_Sounds
{
    BG_SM_SOUND_MINE_CART_CAPTURED_HORDE		= 8213,
    BG_SM_SOUND_MINE_CART_CAPTURED_ALLIANCE		= 8173,
	BG_SM_SOUND_NEAR_VICTORY					= 8456,
	BG_SM_SOUND_MINE_CART_SPAWNED				= 8174,
};

enum BG_SM_Spells
{
    BG_SM_CONTROL_VISUAL_ALLIANCE	= 116086,
    BG_SM_CONTROL_VISUAL_HORDE		= 116085,
	BG_SM_CONTROL_VISUAL_NEUTRAL	= 118001
};

enum SMBattlegroundObjectEntry
{
	BG_SM_MINE_DEPOT			= 400433,
	BG_SM_DOOR					= 400434,
	BG_SM_NEEDLE				= 400435
};

enum SMBattlegroundGaveyards
{
	SM_GRAVEYARD_MAIN_ALLIANCE     = 4062,
    SM_GRAVEYARD_MAIN_HORDE        = 4061,
};

enum SMBattlegroundCreaturesTypes
{
    SM_SPIRIT_ALLIANCE		= 0,
    SM_SPIRIT_HORDE			= 1,
	SM_MINE_CART_TRIGGER	= 2,

    BG_SM_CREATURES_MAX		= 3
};

enum SMDepots
{
	SM_WATERFALL_DEPOT,
	SM_LAVA_DEPOT,
	SM_DIAMOND_DEPOT,
	SM_TROLL_DEPOT,
};

enum SMBattlegroundObjectTypes
{
	BG_SM_OBJECT_DOOR_A_1			= 0,
    BG_SM_OBJECT_DOOR_H_1			= 1,
	BG_SM_OBJECT_DOOR_A_2			= 2,
    BG_SM_OBJECT_DOOR_H_2			= 3,
	BG_SM_OBJECT_EAST_NEEDLE		= 4,
	BG_SM_OBJECT_NORTH_NEEDLE		= 5,
	BG_SM_OBJECT_WATERFALL_DEPOT	= 6,
	BG_SM_OBJECT_LAVA_DEPOT			= 7,
	BG_SM_OBJECT_DIAMOND_DEPOT		= 8,
	BG_SM_OBJECT_TROLL_DEPOT		= 9,
	BG_SM_OBJECT_MAX				= 10
};

enum BG_SM_Score
{
    BG_SM_WARNING_NEAR_VICTORY_SCORE    = 1400,
    BG_SM_MAX_TEAM_SCORE                = 1600
};

enum SMBattlegroundMineCartState
{
    SM_MINE_CART_CONTROL_NEUTRAL	= 0,
    SM_MINE_CART_CONTROL_ALLIANCE	= 1,
    SM_MINE_CART_CONTROL_HORDE		= 2,
};

enum BG_SM_CreatureIds
{
	NPC_MINE_CART_1			= 60378,
	NPC_MINE_CART_2			= 60379,
	NPC_MINE_CART_3			= 60380,
	NPC_MINE_CART_TRIGGER	= 400464,
};

enum BG_SM_Paths
{
	SM_EAST_PATH,
	SM_NORTH_PATH
};

const float BG_SM_DepotPos[4][4] =
{
    {566.950989f, 337.05801f, 347.295013f, 1.559089f},   // Waterfall
    {619.469971f, 79.719597f, 299.067993f, 1.625564f},   // Lava
    {895.974426f, 27.210802f, 364.390991f, 3.445790f},   // Diamond
    {778.444946f, 500.949707f, 359.738983f, 0.737040f}   // Troll
};

const float BG_SM_DoorPos[4][4] =
{
    {852.0289952f, 158.216003f, 326.761011f, 0.150758f}, // Alliance 1
    {830.092102f, 143.925507f, 326.5f, 3.130245f},       // Alliance 2
    {652.177612f, 228.493423f, 326.917480f, 0.163844f},  // Horde 1
    {635.622925f, 208.220886f, 326.648315f, 3.717332f}   // Horde 2
};

const float BG_SM_NeedlePos[2][4] =
{
	{715.585388f, 101.272034f, 319.994690f, 1.495311f}, // East
	{847.481689f, 308.032562f, 346.573242f, 3.627884f}  // North
};

#define MINE_CART_AT_DEPOT_POINTS		200
#define POINTS_PER_MINE_CART			150
#define DISPLAY_WORLDSTATE				1
#define BG_SM_NotSMWeekendHonorTicks    260
#define BG_SM_SMWeekendHonorTicks       160
#define SM_MINE_CART_MAX				3
#define SM_MAX_PATHS					2

struct BattlegroundSMScore : public BattlegroundScore
{
    BattlegroundSMScore() : MineCartCaptures(0) { }
    ~BattlegroundSMScore() { }
    uint32 MineCartCaptures;
};

class BattlegroundSM : public Battleground
{
    public:
        BattlegroundSM();
        ~BattlegroundSM();

        /* inherited from BattlegroundClass */
        void AddPlayer(Player* player);
        void StartingEventCloseDoors();
        void StartingEventOpenDoors();

        void HandleBuffUse(uint64 buff_guid);
        void HandleKillPlayer(Player* player, Player* killer);
        bool SetupBattleground();
        void Reset();
        void UpdateTeamScore(uint32 Team);
        void EndBattleground(uint32 winner);
        void UpdatePlayerScore(Player* Source, uint32 type, uint32 value, bool doAddHonor = true);
        void FillInitialWorldStates(WorldPacket& data);

        /* Battleground Events */
		void EventReopenDepot(uint32 diff);

        uint32 GetPrematureWinner();
    private:
        void PostUpdateImpl(uint32 diff);

        void EventTeamCapturedMineCart(uint32 team, uint8 mineCart);
        void UpdatePointsCount(uint32 Team);
		void SummonMineCart(uint32 diff);
		void FirstMineCartSummon(uint32 diff);
		void MineCartsMoves(uint32 diff);

        /* Scorekeeping */
        void AddPoints(uint32 Team, uint32 Points);

        void RemovePoint(uint32 TeamID, uint32 Points = 1) { m_TeamScores[GetTeamIndexByTeamId(TeamID)] -= Points; }
        void SetTeamPoint(uint32 TeamID, uint32 Points = 0) { m_TeamScores[GetTeamIndexByTeamId(TeamID)] = Points; }
		void CheckPlayerNearMineCart(uint32 diff);
		void CheckMineCartNearDepot(uint32 diff);
		void MineCartAddPoints(uint32 diff);
		void ResetDepotsAndMineCarts(uint8 depot, uint8 mineCart);
		uint32 GetMineCartTeamKeeper(uint8 mineCart);
        uint32 m_HonorScoreTics[2];

        uint32 m_MineCartsTrigger[SM_MINE_CART_MAX];
		int32 m_MineCartsProgressBar[SM_MINE_CART_MAX];
		uint32 m_MineCartTeamKeeper[SM_MINE_CART_MAX]; // keepers team
		int32 m_MineCartSpawnTimer;
		int32 m_FirstMineCartSummonTimer;
		int32 m_MineCartCheckTimer;
		int32 m_DepotCloseTimer[4];
		int32 m_MineCartAddPointsTimer;
		bool m_Depot[4]; // 0 = Waterfall, 1 = Lava, 2 = Diamond, 3 = Troll
		bool m_MineCartReachedDepot[SM_MINE_CART_MAX];
		bool m_MineCartNearDepot[SM_MINE_CART_MAX];
		bool m_MineCartSpawned[SM_MINE_CART_MAX];
		bool m_FirstMineCartSpawned;
		bool m_PathDone[SM_MINE_CART_MAX - 1][SM_MAX_PATHS]; // Only for first and third mine cart
		bool m_WaterfallPathDone; // Waterfall path

        uint32 m_HonorTics;
		bool m_IsInformedNearVictory;
};
#endif

