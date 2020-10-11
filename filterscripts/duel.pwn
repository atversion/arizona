// This is a comment
// uncomment the line below if you want to write a filterscript
//#define FILTERSCRIPT
#include <a_samp>
#include <DC_CMD>
#include <sscanf2>

#define COLOR_GREY 													  0xAFAFAFAA
#define DIALOG_DUEL 650

new Text:DUEL_TD[29];
new duel1,duel2;
new InDuel[MAX_PLAYERS] = 0;
new Duel_money[MAX_PLAYERS];
new DT,DTTimer,start_duel_time;//таймеры

public OnGameModeInit()
{
    duel_system();
    return 1;
}

CMD:duel(playerid, params[])
{
    new target,string[13];
    if(sscanf(params, "d",target)) return SendClientMessage(playerid, COLOR_GREY, "Введите: /duel [id]");
    if(InDuel[duel1] == 1) return SendClientMessage(playerid, -1, "{ff0000}[Ошибка]:{ffffff}Игрок уже на дуэли");
    if(InDuel[duel1] == 2) return SendClientMessage(playerid, -1, "{ff0000}[Ошибка]: {ffffff}Игрок уже на дуэли");
    duel2 = target;
    duel1 = playerid;
    Duel_money[playerid] = 100;
    format(string,sizeof(string),"bet:~n~%d$",Duel_money[playerid]);
    TextDrawSetString(DUEL_TD[13],string);
    for(new i; i<29; i++) TextDrawShowForPlayer(target,DUEL_TD[i]);
    SelectTextDraw(target,0xAFAFAFAA);
    return true;
}

public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    new string[128],str[128];
    if(clickedid == DUEL_TD[1]) SetPVarInt(playerid,"gun_duel",0);
    if(clickedid == DUEL_TD[2]) SetPVarInt(playerid,"gun_duel",1);
    if(clickedid == DUEL_TD[3]) SetPVarInt(playerid,"gun_duel",2);
	if(clickedid == DUEL_TD[4]) SetPVarInt(playerid,"gun_duel",3);
    if(clickedid == DUEL_TD[5]) SetPVarInt(playerid,"gun_duel",4);
    if(clickedid == DUEL_TD[6]) SetPVarInt(playerid,"gun_duel",5);
    if(clickedid == DUEL_TD[14])
    {
        if(Duel_money[playerid] < 100) return ShowPlayerDialog(playerid, 0, 0, "{FF6F00}Ставка", "Ставка не должна быть меньше 100$", "Ок","");
        Duel_money[playerid] -= 100;
        format(string,sizeof(string),"bet:~n~%d$",Duel_money[playerid]);
        TextDrawSetString(DUEL_TD[13],string);
		return true;
    }
    if(clickedid == DUEL_TD[15])
    {
        if(Duel_money[playerid] >= 3000) return ShowPlayerDialog(playerid, 0, 0, "{FF6F00}Ставка", "Ставка не должна превышать 3.000$", "Ок","");
        Duel_money[playerid] += 100;
        format(string,sizeof(string),"bet:~n~%d$",Duel_money[playerid]);
        TextDrawSetString(DUEL_TD[13],string);
		return true;
    }
    if(clickedid == DUEL_TD[16])
    {
        if(Duel_money[playerid] < 100) return ShowPlayerDialog(playerid, 0, 0, "{FF6F00}Ставка", "Ставка не должна быть меньше 100$", "Ок","");
        switch(GetPVarInt(playerid, "gun_duel"))
        {
            case 0: SetPVarInt(duel1,"g_duel",0),SetPVarInt(duel2,"g_duel",0);
            case 1: SetPVarInt(duel1,"g_duel",1),SetPVarInt(duel2,"g_duel",1);
            case 2: SetPVarInt(duel1,"g_duel",2),SetPVarInt(duel2,"g_duel",2);
            case 3: SetPVarInt(duel1,"g_duel",3),SetPVarInt(duel2,"g_duel",3);
            case 4: SetPVarInt(duel1,"g_duel",4),SetPVarInt(duel2,"g_duel",4);
            case 5: SetPVarInt(duel1,"g_duel",5),SetPVarInt(duel2,"g_duel",5);
		}
		new jtext[20];
		switch(GetPVarInt(playerid, "gun_duel"))
		{
			case 0: jtext = "Deagle";
			case 1: jtext = "Shotgun";
			case 2: jtext = "mp5";
			case 3: jtext = "Ak-47";
			case 4: jtext = "m4";
			case 5: jtext = "TEC-9";
		}
		format(string, sizeof(string), "{ff0000}Ты бросил вызов %s`у(%d) в дуэли 1х1!", PlayerName(duel2), duel2);
        SendClientMessage(duel1, -1, string);
        format(str, sizeof(str), "{00ff37}%s{ffffff} вызвал вас на дуэль 1х1\n{ffffff}Оружие дуэли: {00ff37}%s\n{ffffff}Ставка: {00ff37}%d$", PlayerName(duel1),jtext, Duel_money[playerid]);
        ShowPlayerDialog(duel1, DIALOG_DUEL, DIALOG_STYLE_MSGBOX, "{ff0000}ВЫЗОВ НА ДУЭЛЬ", str, "Принять", "Отказаться");
        for(new i; i<29; i++) TextDrawHideForPlayer(playerid,DUEL_TD[i]);
	    CancelSelectTextDraw(playerid);
    	return true;
    }
    if(clickedid == DUEL_TD[17])
    {
        for(new i; i<29; i++) TextDrawHideForPlayer(playerid,DUEL_TD[i]);
        DeletePVar(playerid,"g_duel");
        DeletePVar(playerid,"gun_duel");
        CancelSelectTextDraw(playerid);
    	return true;
    }
    return true;
}

public OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	if(dialogid == DIALOG_DUEL)
	{
	    if(!response) return SendClientMessage(duel2, -1, "Отказался от дуэли!");
    	switch(GetPVarInt(duel1, "g_duel"))
	    {
	        case 0: GivePlayerWeapon(duel1, 24, 600),GivePlayerWeapon(duel2,24,600);
	        case 1: GivePlayerWeapon(duel1, 25, 600),GivePlayerWeapon(duel2,25,600);
	        case 2: GivePlayerWeapon(duel1, 29, 600),GivePlayerWeapon(duel2,29,600);
	        case 3: GivePlayerWeapon(duel1, 30, 600),GivePlayerWeapon(duel2,30,600);
	        case 4: GivePlayerWeapon(duel1, 31, 600),GivePlayerWeapon(duel2,31,600);
	        case 5: GivePlayerWeapon(duel1, 32, 600),GivePlayerWeapon(duel2,32,600);
		}
        SetPlayerHealth(duel1, 100),SetPlayerHealth(duel2, 100);
        SetPlayerArmour(duel1, 100),SetPlayerArmour(duel2, 100);
        InDuel[duel1] = 1,InDuel[duel2] = 1;
        GivePlayerMoney(duel1, -Duel_money[playerid]);
        GivePlayerMoney(duel2, -Duel_money[playerid]);
        TogglePlayerControllable(duel1, false);
        TogglePlayerControllable(duel2, false);
        SetPlayerPos(duel1, 1390.1539,2107.4912,11.0156);//телепортирует
		SetPlayerPos(duel2, 1305.6497,2191.8596,11.0234);//телепортирует
        DT = 6;
        DTTimer = SetTimer("DuelTimer", 1000, 1);
        DeletePVar(playerid,"g_duel");
        DeletePVar(playerid,"gun_duel");
        start_duel_time = SetTimer("time_off_duel", 180000, 0);//запускаем таймер дуэли
		return true;
	}
    return true;
}
forward time_off_duel();
public time_off_duel()
{
        new str[128];
        format(str, sizeof(str), "{ff0000}Поединок Между %s(%d) и %s(%d) закончился. Причина: вышло время!", PlayerName(duel1), duel1, PlayerName(duel2), duel2);
        SendClientMessageToAll(-1, str);
        SendClientMessage(duel1, -1, "{ff0000}[Дуэль]: {ff0000}Вы потеряли свои деньги(так как соперник выжил).");
        SendClientMessage(duel2, -1, "{ff0000}[Дуэль]: {ff0000}Вы потеряли свои деньги(так как соперник выжил).");
        InDuel[duel1] = 0,InDuel[duel2] = 0;
        SpawnPlayer(duel1),SpawnPlayer(duel2);
        ResetPlayerWeapons(duel1),ResetPlayerWeapons(duel2);
        return 1;
}
forward DuelTimer();
public DuelTimer()
{
    DT --;
    if(DT == 0)
    {
        GameTextForPlayer(duel1, "~r~GO! GO! GO!", 2000, 3);
        GameTextForPlayer(duel2, "~r~GO! GO! GO!", 2000, 3);
        KillTimer(DTTimer);
        TogglePlayerControllable(duel1, true);
        TogglePlayerControllable(duel2, true);
        PlayerPlaySound(duel1, 1057, 1390.1539,2107.4912,11.0156);
        PlayerPlaySound(duel2, 1057, 1305.6497,2191.8596,11.0234);
        return 1;
    }
    new msg[30];
    format(msg, sizeof(msg), "~r~%d", DT);
    GameTextForPlayer(duel1, msg, 1000, 3);
    GameTextForPlayer(duel2, msg, 1000, 3);
    PlayerPlaySound(duel1, 1056, 1390.1539,2107.4912,11.0156);
    PlayerPlaySound(duel2, 1056, 1305.6497,2191.8596,11.0234);
    return 1;
}
public OnPlayerDeath(playerid, killerid)
{
    if(InDuel[playerid] == 1 && InDuel[killerid] == 1)
    {
        new str[128];
        GivePlayerMoney(killerid, 2*Duel_money[playerid]);
        format(str, sizeof(str), "{ff0000}[Дуэль]: Ты выйграл у %s(%d) сумму $%d", PlayerName(playerid), killerid, Duel_money[playerid]);
        SendClientMessage(killerid, -1, str);
        InDuel[playerid] = 0;
        InDuel[killerid] = 0;
        KillTimer(start_duel_time);
        SpawnPlayer(killerid);
    }
    return 1;
}

stock PlayerName(playerid)
{
    new name[MAX_PLAYER_NAME];
    GetPlayerName(playerid,name,sizeof(name));
    return name;
}
stock duel_system()
{
    DUEL_TD[0] = TextDrawCreate(627.000061, 164.107406, "usebox");
	TextDrawLetterSize(DUEL_TD[0], 0.000000, 19.292387);
	TextDrawTextSize(DUEL_TD[0], 457.333343, 0.000000);
	TextDrawAlignment(DUEL_TD[0], 1);
	TextDrawColor(DUEL_TD[0], 0);
	TextDrawUseBox(DUEL_TD[0], true);
	TextDrawBoxColor(DUEL_TD[0], 102);
	TextDrawSetShadow(DUEL_TD[0], 0);
	TextDrawSetOutline(DUEL_TD[0], 0);
	TextDrawFont(DUEL_TD[0], 0);

	DUEL_TD[1] = TextDrawCreate(462.000000, 166.340728, "LD_SPAC:white");
	TextDrawTextSize(DUEL_TD[1], 51.333312, 55.585189);

	DUEL_TD[2] = TextDrawCreate(516.999877, 166.755569, "LD_SPAC:white");
	TextDrawTextSize(DUEL_TD[2], 51.333312, 55.585189);

	DUEL_TD[3] = TextDrawCreate(571.333129, 166.755569, "LD_SPAC:white");
	TextDrawTextSize(DUEL_TD[3], 51.333312, 55.585189);

	DUEL_TD[4] = TextDrawCreate(462.333343, 224.414825, "LD_SPAC:white");
	TextDrawTextSize(DUEL_TD[4], 51.333312, 55.585189);

	DUEL_TD[5] = TextDrawCreate(517.333435, 224.414886, "LD_SPAC:white");
	TextDrawTextSize(DUEL_TD[5], 51.333312, 55.585189);

	DUEL_TD[6] = TextDrawCreate(571.666564, 224.414916, "LD_SPAC:white");
	TextDrawTextSize(DUEL_TD[6], 51.333312, 55.585189);
	for(new x=1; x < 7; x++)
	{
		TextDrawLetterSize(DUEL_TD[x], 0.000000, 0.000000);
		TextDrawAlignment(DUEL_TD[x], 1);
		TextDrawSetShadow(DUEL_TD[x], 0);
		TextDrawSetOutline(DUEL_TD[x], 0);
		TextDrawFont(DUEL_TD[x], 4);
		TextDrawSetSelectable(DUEL_TD[x], true);
	}

    DUEL_TD[7] = TextDrawCreate(463.333435, 172.977752, "_");
    TextDrawFont(DUEL_TD[7], TEXT_DRAW_FONT_MODEL_PREVIEW);
    TextDrawBackgroundColor(DUEL_TD[7], 0xFFFFFF00);
    TextDrawUseBox(DUEL_TD[7], 0);
    TextDrawTextSize(DUEL_TD[7], 80.000000, 66.000000);
    TextDrawSetPreviewRot(DUEL_TD[7], 5.000000, 0.000000, 65.000000, 1.000000);
    TextDrawSetPreviewModel(DUEL_TD[7], 348);
    TextDrawSetSelectable(DUEL_TD[7], 0);

	DUEL_TD[8] = TextDrawCreate(518.000000, 168.414810, "LD_SPAC:white");
    TextDrawFont(DUEL_TD[8], TEXT_DRAW_FONT_MODEL_PREVIEW);
    TextDrawBackgroundColor(DUEL_TD[8], 0xFFFFFF00);
    TextDrawUseBox(DUEL_TD[8], 0);
    TextDrawTextSize(DUEL_TD[8], 80.000000, 66.000000);
    TextDrawSetPreviewRot(DUEL_TD[8], 2.000000, 0.000000, 71.000000, 2.300000);
    TextDrawSetPreviewModel(DUEL_TD[8], 349);
    TextDrawSetSelectable(DUEL_TD[8], 0);

    DUEL_TD[9] = TextDrawCreate(565.000000, 176.296279, "LD_SPAC:white");
    TextDrawFont(DUEL_TD[9], TEXT_DRAW_FONT_MODEL_PREVIEW);
    TextDrawBackgroundColor(DUEL_TD[9], 0xFFFFFF00);
    TextDrawUseBox(DUEL_TD[9], 0);
    TextDrawTextSize(DUEL_TD[9], 80.000000, 66.000000);
    TextDrawSetPreviewRot(DUEL_TD[9], -10.000000, 0.000000, 75.000000, 1.250000);
    TextDrawSetPreviewModel(DUEL_TD[9], 353);
    TextDrawSetSelectable(DUEL_TD[9], 0);

    DUEL_TD[10] = TextDrawCreate(462.666656, 225.659271, "LD_SPAC:white");
    TextDrawFont(DUEL_TD[10], TEXT_DRAW_FONT_MODEL_PREVIEW);
    TextDrawBackgroundColor(DUEL_TD[10], 0xFFFFFF00);
    TextDrawUseBox(DUEL_TD[10], 0);
    TextDrawTextSize(DUEL_TD[10], 80.000000, 66.000000);
    TextDrawSetPreviewRot(DUEL_TD[10], 0.000000, 0.000000, 72.000000, 2.100000);
    TextDrawSetPreviewModel(DUEL_TD[10], 355);
    TextDrawSetSelectable(DUEL_TD[10], 0);

    DUEL_TD[11] = TextDrawCreate(517.333312, 224.414794, "LD_SPAC:white");
    TextDrawFont(DUEL_TD[11], TEXT_DRAW_FONT_MODEL_PREVIEW);
    TextDrawBackgroundColor(DUEL_TD[11], 0xFFFFFF00);
    TextDrawUseBox(DUEL_TD[11], 0);
    TextDrawTextSize(DUEL_TD[11], 80.000000, 66.000000);
    TextDrawSetPreviewRot(DUEL_TD[11], 0.000000, 0.000000, 72.000000, 1.870000);
    TextDrawSetPreviewModel(DUEL_TD[11], 356);
    TextDrawSetSelectable(DUEL_TD[11], 0);

    DUEL_TD[12] = TextDrawCreate(575.000000, 215.733322, "LD_SPAC:white");
    TextDrawFont(DUEL_TD[12], TEXT_DRAW_FONT_MODEL_PREVIEW);
    TextDrawBackgroundColor(DUEL_TD[12], 0xFFFFFF00);
    TextDrawUseBox(DUEL_TD[12], 0);
    TextDrawTextSize(DUEL_TD[12], 80.000000, 66.000000);
    TextDrawSetPreviewRot(DUEL_TD[12], -10.000000, 0.000000, 35.000000, 1.250000);
    TextDrawSetPreviewModel(DUEL_TD[12], 372);
    TextDrawSetSelectable(DUEL_TD[12], 0);

	DUEL_TD[13] = TextDrawCreate(517.333251, 281.244354, "bet:~n~000$");
	TextDrawLetterSize(DUEL_TD[13], 0.449999, 1.600000);
	TextDrawAlignment(DUEL_TD[13], 1);
	TextDrawColor(DUEL_TD[13], -1378294017);
	TextDrawUseBox(DUEL_TD[13], true);
	TextDrawBoxColor(DUEL_TD[13], 0);
	TextDrawSetShadow(DUEL_TD[13], 0);
	TextDrawSetOutline(DUEL_TD[13], 1);
	TextDrawBackgroundColor(DUEL_TD[13], 255);
	TextDrawFont(DUEL_TD[13], 2);
	TextDrawSetProportional(DUEL_TD[13], 1);

	DUEL_TD[14] = TextDrawCreate(462.666625, 284.148132, "LD_SPAC:white");
	TextDrawLetterSize(DUEL_TD[14], 0.000000, 0.000000);
	TextDrawTextSize(DUEL_TD[14], 51.666687, 24.888916);
	TextDrawAlignment(DUEL_TD[14], 1);
	TextDrawColor(DUEL_TD[14], -1);
	TextDrawSetShadow(DUEL_TD[14], 0);
	TextDrawSetOutline(DUEL_TD[14], 0);
	TextDrawFont(DUEL_TD[14], 4);
	TextDrawSetSelectable(DUEL_TD[14], true);

	DUEL_TD[15] = TextDrawCreate(571.999572, 285.392517, "LD_SPAC:white");
	TextDrawLetterSize(DUEL_TD[15], 0.000000, 0.000000);
	TextDrawTextSize(DUEL_TD[15], 51.666687, 24.888916);
	TextDrawAlignment(DUEL_TD[15], 1);
	TextDrawColor(DUEL_TD[15], -1);
	TextDrawSetShadow(DUEL_TD[15], 0);
	TextDrawSetOutline(DUEL_TD[15], 0);
	TextDrawFont(DUEL_TD[15], 4);
	TextDrawSetSelectable(DUEL_TD[15], true);

	DUEL_TD[16] = TextDrawCreate(480.333251, 314.014770, "LD_SPAC:white");
	TextDrawLetterSize(DUEL_TD[16], 0.000000, 0.000000);
	TextDrawTextSize(DUEL_TD[16], 59.333354, 22.400009);
	TextDrawAlignment(DUEL_TD[16], 1);
	TextDrawColor(DUEL_TD[16], -1);
	TextDrawSetShadow(DUEL_TD[16], 0);
	TextDrawSetOutline(DUEL_TD[16], 0);
	TextDrawFont(DUEL_TD[16], 4);
	TextDrawSetSelectable(DUEL_TD[16], true);

	DUEL_TD[17] = TextDrawCreate(542.999633, 314.014801, "LD_SPAC:white");
	TextDrawLetterSize(DUEL_TD[17], 0.000000, 0.000000);
	TextDrawTextSize(DUEL_TD[17], 59.333354, 22.400009);
	TextDrawAlignment(DUEL_TD[17], 1);
	TextDrawColor(DUEL_TD[17], -1);
	TextDrawSetShadow(DUEL_TD[17], 0);
	TextDrawSetOutline(DUEL_TD[17], 0);
	TextDrawFont(DUEL_TD[17], 4);
	TextDrawSetSelectable(DUEL_TD[17], true);

	DUEL_TD[18] = TextDrawCreate(508.333251, 151.407424, "Duel Arena");
	TextDrawLetterSize(DUEL_TD[18], 0.449999, 1.600000);
	TextDrawAlignment(DUEL_TD[18], 1);
	TextDrawColor(DUEL_TD[18], -16776961);
	TextDrawSetShadow(DUEL_TD[18], 0);
	TextDrawSetOutline(DUEL_TD[18], 1);
	TextDrawBackgroundColor(DUEL_TD[18], 255);
	TextDrawFont(DUEL_TD[18], 2);
	TextDrawSetProportional(DUEL_TD[18], 1);

	DUEL_TD[19] = TextDrawCreate(463.666717, 207.407394, "Deagle");
	TextDrawLetterSize(DUEL_TD[19], 0.449999, 1.600000);
	TextDrawAlignment(DUEL_TD[19], 1);
	TextDrawColor(DUEL_TD[19], -1);
	TextDrawUseBox(DUEL_TD[19], true);
	TextDrawBoxColor(DUEL_TD[19], 0);
	TextDrawSetShadow(DUEL_TD[19], 0);
	TextDrawSetOutline(DUEL_TD[19], 1);
	TextDrawBackgroundColor(DUEL_TD[19], 255);
	TextDrawFont(DUEL_TD[19], 1);
	TextDrawSetProportional(DUEL_TD[19], 1);

	DUEL_TD[20] = TextDrawCreate(517.333068, 206.992599, "Shotgun");
	TextDrawLetterSize(DUEL_TD[20], 0.384666, 1.790814);
	TextDrawAlignment(DUEL_TD[20], 1);
	TextDrawColor(DUEL_TD[20], -1);
	TextDrawUseBox(DUEL_TD[20], true);
	TextDrawBoxColor(DUEL_TD[20], 0);
	TextDrawSetShadow(DUEL_TD[20], 0);
	TextDrawSetOutline(DUEL_TD[20], 1);
	TextDrawBackgroundColor(DUEL_TD[20], 255);
	TextDrawFont(DUEL_TD[20], 1);
	TextDrawSetProportional(DUEL_TD[20], 1);

	DUEL_TD[21] = TextDrawCreate(586.332946, 206.992645, "MP5");
	TextDrawLetterSize(DUEL_TD[21], 0.384666, 1.790814);
	TextDrawAlignment(DUEL_TD[21], 1);
	TextDrawColor(DUEL_TD[21], -1);
	TextDrawUseBox(DUEL_TD[21], true);
	TextDrawBoxColor(DUEL_TD[21], 0);
	TextDrawSetShadow(DUEL_TD[21], 0);
	TextDrawSetOutline(DUEL_TD[21], 1);
	TextDrawBackgroundColor(DUEL_TD[21], 255);
	TextDrawFont(DUEL_TD[21], 1);
	TextDrawSetProportional(DUEL_TD[21], 1);

	DUEL_TD[22] = TextDrawCreate(468.999633, 264.651855, "AK-47");
	TextDrawLetterSize(DUEL_TD[22], 0.384666, 1.790814);
	TextDrawAlignment(DUEL_TD[22], 1);
	TextDrawColor(DUEL_TD[22], -1);
	TextDrawUseBox(DUEL_TD[22], true);
	TextDrawBoxColor(DUEL_TD[22], 0);
	TextDrawSetShadow(DUEL_TD[22], 0);
	TextDrawSetOutline(DUEL_TD[22], 1);
	TextDrawBackgroundColor(DUEL_TD[22], 255);
	TextDrawFont(DUEL_TD[22], 1);
	TextDrawSetProportional(DUEL_TD[22], 1);

	DUEL_TD[23] = TextDrawCreate(534.665954, 264.236968, "M4");
	TextDrawLetterSize(DUEL_TD[23], 0.384666, 1.790814);
	TextDrawAlignment(DUEL_TD[23], 1);
	TextDrawColor(DUEL_TD[23], -1);
	TextDrawUseBox(DUEL_TD[23], true);
	TextDrawBoxColor(DUEL_TD[23], 0);
	TextDrawSetShadow(DUEL_TD[23], 0);
	TextDrawSetOutline(DUEL_TD[23], 1);
	TextDrawBackgroundColor(DUEL_TD[23], 255);
	TextDrawFont(DUEL_TD[23], 1);
	TextDrawSetProportional(DUEL_TD[23], 1);

	DUEL_TD[24] = TextDrawCreate(580.666015, 264.236938, "TEC-9");
	TextDrawLetterSize(DUEL_TD[24], 0.384666, 1.790814);
	TextDrawAlignment(DUEL_TD[24], 1);
	TextDrawColor(DUEL_TD[24], -1);
	TextDrawUseBox(DUEL_TD[24], true);
	TextDrawBoxColor(DUEL_TD[24], 0);
	TextDrawSetShadow(DUEL_TD[24], 0);
	TextDrawSetOutline(DUEL_TD[24], 1);
	TextDrawBackgroundColor(DUEL_TD[24], 255);
	TextDrawFont(DUEL_TD[24], 1);
	TextDrawSetProportional(DUEL_TD[24], 1);

	DUEL_TD[25] = TextDrawCreate(478.665893, 279.585021, "-");
	TextDrawLetterSize(DUEL_TD[25], 1.988332, 3.508145);
	TextDrawAlignment(DUEL_TD[25], 1);
	TextDrawColor(DUEL_TD[25], -16776961);
	TextDrawUseBox(DUEL_TD[25], true);
	TextDrawBoxColor(DUEL_TD[25], 0);
	TextDrawSetShadow(DUEL_TD[25], 0);
	TextDrawSetOutline(DUEL_TD[25], 1);
	TextDrawBackgroundColor(DUEL_TD[25], 255);
	TextDrawFont(DUEL_TD[25], 2);
	TextDrawSetProportional(DUEL_TD[25], 1);

	DUEL_TD[26] = TextDrawCreate(586.665832, 282.488800, "+");
	TextDrawLetterSize(DUEL_TD[26], 1.098999, 2.902516);
	TextDrawAlignment(DUEL_TD[26], 1);
	TextDrawColor(DUEL_TD[26], 8388863);
	TextDrawUseBox(DUEL_TD[26], true);
	TextDrawBoxColor(DUEL_TD[26], 0);
	TextDrawSetShadow(DUEL_TD[26], 0);
	TextDrawSetOutline(DUEL_TD[26], 1);
	TextDrawBackgroundColor(DUEL_TD[26], 255);
	TextDrawFont(DUEL_TD[26], 2);
	TextDrawSetProportional(DUEL_TD[26], 1);

	DUEL_TD[27] = TextDrawCreate(487.666656, 318.162963, "START");
	TextDrawLetterSize(DUEL_TD[27], 0.449999, 1.600000);
	TextDrawAlignment(DUEL_TD[27], 1);
	TextDrawColor(DUEL_TD[27], 8388863);
	TextDrawSetShadow(DUEL_TD[27], 0);
	TextDrawSetOutline(DUEL_TD[27], 1);
	TextDrawBackgroundColor(DUEL_TD[27], 255);
	TextDrawFont(DUEL_TD[27], 1);
	TextDrawSetProportional(DUEL_TD[27], 1);

	DUEL_TD[28] = TextDrawCreate(557.999877, 318.163055, "EXIT");
	TextDrawLetterSize(DUEL_TD[28], 0.449999, 1.600000);
	TextDrawAlignment(DUEL_TD[28], 1);
	TextDrawColor(DUEL_TD[28], -16776961);
	TextDrawSetShadow(DUEL_TD[28], 0);
	TextDrawSetOutline(DUEL_TD[28], 1);
	TextDrawBackgroundColor(DUEL_TD[28], 255);
	TextDrawFont(DUEL_TD[28], 1);
	TextDrawSetProportional(DUEL_TD[28], 1);
    return 1;
}
