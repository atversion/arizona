
#if defined _frobj_included
	#endinput
#endif
#define _frobj_included

static playerNewTimer[MAX_PLAYERS];
static playerSupTimer[MAX_PLAYERS];
static playerSupObject0[MAX_PLAYERS];
static playerSupObject1[MAX_PLAYERS];

static stock AddObj(playerid, Float:pos_x, Float:pos_y, Float:pos_z, suppobj, type)
{
    if(GetPlayerState(playerid) == 2) return 1;
    if(!IsPlayerConnected(playerid)) return 0;
	if(!suppobj)
	{
	    if(!type) SetPlayerPos(playerid, pos_x, pos_y, pos_z);
		else SetPlayerPosFindZ(playerid, pos_x, pos_y, pos_z);
		return 1;
	}
	if(playerSupObject0[playerid])
	{
	    KillTimer(playerSupTimer[playerid]);
		DestroyPlayerObject(playerid, playerSupObject0[playerid]);
	}
	new ping = (GetPlayerPing(playerid) + 50), time = (floatround(ping / 100) + 3);
	playerSupTimer[playerid] = SetTimerEx("fr_DellObj", (time > 10) ? (10 * 1000) : (time * 1000), 0, "i", playerid);
	playerSupObject0[playerid] = CreatePlayerObject(playerid, 19356, pos_x, pos_y, (pos_z - 1.09), 0.0, 90.0, 0.0);
	SetPlayerObjectMaterialText(playerid, playerSupObject0[playerid], " ", .fontcolor = 0xFFFFFF00);
	if(playerNewTimer[playerid]) KillTimer(playerNewTimer[playerid]);
	playerNewTimer[playerid] = SetTimerEx("fr_NextTp", (ping > 1000) ? (1000) : (ping), 0, "iifff", playerid, type, pos_x, pos_y, pos_z);
	return 1;
}

forward fr_DellObj(playerid);
public fr_DellObj(playerid)
{
	if(playerSupObject0[playerid]) DestroyPlayerObject(playerid, playerSupObject0[playerid]);
	playerSupTimer[playerid] = 0;
	playerSupObject0[playerid] = 0;
}

forward fr_NextTp(playerid, type, Float:pos_x, Float:pos_y, Float:pos_z);
public fr_NextTp(playerid, type, Float:pos_x, Float:pos_y, Float:pos_z)
{
    playerNewTimer[playerid] = 0;
	if(!type) SetPlayerPos(playerid, pos_x, pos_y, pos_z);
	else SetPlayerPosFindZ(playerid, pos_x, pos_y, pos_z);
}

public OnPlayerConnect(playerid)
{
    playerNewTimer[playerid] =
    playerSupTimer[playerid] =
 	playerSupObject0[playerid] =
 	playerSupObject1[playerid] = 0;
 	if(playerSupObject0[playerid]) DestroyPlayerObject(playerid, playerSupObject0[playerid]);
	playerSupTimer[playerid] = 0;
	playerSupObject0[playerid] = 0;
	#if defined fr_OnPlayerConnect
		return fr_OnPlayerConnect(playerid);
	#else
		return 1;
    #endif
}
#if defined _ALS_OnPlayerConnect
	#undef OnPlayerConnect
#else
	#define	_ALS_OnPlayerConnect
#endif
#define OnPlayerConnect fr_OnPlayerConnect
#if defined fr_OnPlayerConnect
	forward fr_OnPlayerConnect(playerid);
#endif

public OnPlayerDisconnect(playerid, reason)
{
	if(playerNewTimer[playerid]) KillTimer(playerNewTimer[playerid]);
	if(playerSupTimer[playerid]) KillTimer(playerSupTimer[playerid]);
    #if defined fr_OnPlayerDisconnect
    	return fr_OnPlayerDisconnect(playerid, reason);
	#else
	    return 1;
	#endif
}
#if defined _ALS_OnPlayerDisconnect
	#undef OnPlayerDisconnect
#else
	#define _ALS_OnPlayerDisconnect
#endif
#if defined fr_OnPlayerDisconnect
	forward fr_OnPlayerDisconnect(playerid, reason);
#endif
#define OnPlayerDisconnect fr_OnPlayerDisconnect

stock fr_SetSpawnInfo(playerid, team, skin, Float:pos_x, Float:pos_y, Float:pos_z, Float:pos_a, weap0, ammo0, weap1, ammo1, weap2, ammo2)
{
    if(!IsPlayerConnected(playerid)) return 0;
    if(playerSupObject1[playerid]) DestroyPlayerObject(playerid, playerSupObject1[playerid]);
    playerSupObject1[playerid] = CreatePlayerObject(playerid, 19356, pos_x, pos_y, (pos_z - 1.09), 0.0, 90.0, 0.0);
	SetPlayerObjectMaterialText(playerid, playerSupObject1[playerid], " ", .fontcolor = 0xFFFFFF00);
    return SetSpawnInfo(playerid, team, skin, pos_x, pos_y, pos_z, pos_a, weap0, ammo0, weap1, ammo1, weap2, ammo2);
}
#if defined _ALS_SetSpawnInfo
	#undef SetSpawnInfo
#else
	#define	_ALS_SetSpawnInfo
#endif
#define SetSpawnInfo fr_SetSpawnInfo

stock fr_SetPlayerPos(playerid, Float:pos_x, Float:pos_y, Float:pos_z, suppobj = 1) return AddObj(playerid, pos_x, pos_y, pos_z, suppobj, 0);
#if defined _ALS_SetPlayerPos
	#undef SetPlayerPos
#else
	#define	_ALS_SetPlayerPos
#endif
#define SetPlayerPos fr_SetPlayerPos

stock fr_SetPlayerPosFindZ(playerid, Float:pos_x, Float:pos_y, Float:pos_z, suppobj = 1) return AddObj(playerid, pos_x, pos_y, pos_z, suppobj, 1);
#if defined _ALS_SetPlayerPosFindZ
	#undef SetPlayerPosFindZ
#else
	#define	_ALS_SetPlayerPosFindZ
#endif
#define SetPlayerPosFindZ fr_SetPlayerPosFindZ
