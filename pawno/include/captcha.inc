/*

	Captcha copy AZ-RP ???? ??????? AndreY.eXe.
	???? ???????? ? ???????? ?????? ?????????? ??????.


	* ?? ??????? ????????? ?? ??????: ?????????
	* ??????? ??????? /test_captcha, ????? ????????? ??????.
	* ????? ?????? ???????, ?????? cmd:test_captcha, #define dialog_test_captcha ? case dialog_test_captcha.


	??? ????????? ??????????:
	1. ??????????? ????? source ? ????? ? ???????? (??????).
	2. ? ????, ????? ???? ??????????? ???????? ???????????: #include "../source/captcha/index"
	3. ? OnDialogResponse ??????? captch_OnDialogResponse(playerid, dialogid, response, inputtext);
	4. ? OnPlayerConnect ??????? captch_OnPlayerConnect(playerid);

	???. ???? ?? ??? ?????? ?????????, ?? ? ???? ?????? ??? ????????.
*/


captch_OnDialogResponse(playerid, dialogid, response, inputtext[])
{
	switch(dialogid)
	{
		case dialog_test_captcha:
		{
			if(!response)return Captch_CloseForPlayer(playerid);
			if(!strlen(inputtext)) return Captch_CloseForPlayer(playerid), SendClientMessage(playerid, 0xFF6347FF, "[Ошибка] {FFFFFF}Ответ неверный!");
			if(!Captch_IsValid(playerid, inputtext))
			{
				SendClientMessage(playerid, 0xFF6347FF, "[Ошибка] {FFFFFF}Ответ неверный!");
				return Captch_CloseForPlayer(playerid);
			}
//			new house = InfoHouse[playerid];
			VerifyCaptcha(playerid);
			Captch_CloseForPlayer(playerid);
		}
		case dialog_test_captcha2:
		{
			if(!response)return Captch_CloseForPlayer(playerid);
			if(!strlen(inputtext)) return Captch_CloseForPlayer(playerid), SendClientMessage(playerid, 0xFF6347FF, "[Ошибка] {FFFFFF}Ответ неверный!");
			if(!Captch_IsValid(playerid, inputtext))
			{
				SendClientMessage(playerid, 0xFF6347FF, "[Ошибка] {FFFFFF}Ответ неверный!");
				return Captch_CloseForPlayer(playerid);
			}
			//new house = InfoHouse[playerid];
			VerifyBusiness(playerid);
			Captch_CloseForPlayer(playerid);
		}
	}
	return true;
}
captch_OnPlayerConnect(playerid)
{
	captch_opened[playerid] = false;
	captch_code[playerid][0] = 0;
}

Captch_IsValid(playerid, str[])
{
	return GetString(str, captch_code[playerid]);
}
Captch_CloseForPlayer(playerid)
{
	if(!captch_opened[playerid])return false;

	Captch_DestroyTextdraws(playerid);
	ShowPlayerDialog(playerid, 0, 0, "", "", "", "");

	captch_opened[playerid] = false;
	captch_code[playerid][0] = 0;
	KillTimer(buytime2[playerid]);
	buytime[playerid] = 0;
	return true;
}

Captch_OpenForPlayer(playerid, dialogid)
{
	if(captch_opened[playerid])return 1;

	Captch_CreateTextdaws(playerid);

	PlayerTextDrawShow(playerid, captch_PTD[playerid][0]);
	PlayerTextDrawShow(playerid, captch_PTD[playerid][1]);
	PlayerTextDrawShow(playerid, saas_PTD[playerid][0]);
	new c_code[5];

	c_code[0] = random(10);
	c_code[1] = random(10);
	c_code[2] = random(10);
	c_code[3] = random(10);
	c_code[4] = random(10);
	
	cc_code[0] = c_code[0];
	cc_code[1] = c_code[1];
	cc_code[2] = c_code[2];
	cc_code[3] = c_code[3];
	cc_code[4] = c_code[4];

	/*
		0 - ???? ????
		1 - ????? ????
		2 - ????
		3 - ???
		4 - ?????
		5 - ???? ???
		6 - ????? ???
	*/
	for(new i; i < 5; i ++)
	{
		switch(c_code[i])
		{
			case 0:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][0]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][3]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][5]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
			}
			case 1:
			{
				//PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				//PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][0]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
			}
			case 2:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][4]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][5]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][3]);
			}
			case 3:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][4]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][3]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
			}
			case 4:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][0]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][4]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
			}
			case 5:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][0]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][4]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][3]);
			}
			case 6:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][0]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][5]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][4]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][3]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
			}
			case 7:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
			}
			case 8:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][0]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][3]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][4]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][5]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
			}
			default:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][0]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][4]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][6]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][3]);

				c_code[i] = 9;
			}
		}
		format(captch_code[playerid], 7, "%s%d", captch_code[playerid], c_code[i]);
	}
	captch_opened[playerid] = true;
	return ShowPlayerDialogEx( playerid, dialogid, 1, "{ce9176}Проверка на робота", "{FFFFFF}Введите {9ACD32}5 {FFFFFF}символов, которые\nвидны на {9ACD32} вашем {FFFFFF}экране.", "OK", "Отмена");
}

Captch_DestroyTextdraws(playerid)
{
	PlayerTextDrawDestroy(playerid, captch_PTD[playerid][0]);
	PlayerTextDrawDestroy(playerid, captch_PTD[playerid][1]);
	PlayerTextDrawDestroy(playerid, saas_PTD[playerid][0]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][0][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][1][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][2][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][3][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][4][i]);
}
Captch_CreateTextdaws(playerid)
{
	new idiot;
	switch(random(9))
	{
	    case 0: idiot = -98;
	    case 1: idiot = -100;
	    case 2: idiot = -90;
	    case 3: idiot = -95;
	    case 4: idiot = -99;
	    case 5: idiot = -104;
	    case 6: idiot = -105;
	    case 7: idiot = -102;
	    case 8: idiot = -92;
	}
	new
		captch_x = -30 + random(30),
		captch_y = idiot;
		
	captch_PTD[playerid][0] = CreatePlayerTextDraw(playerid, 234.9998 + captch_x, 201.0442 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_PTD[playerid][0], 173.0000, 74.0000);
	PlayerTextDrawAlignment(playerid, captch_PTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, captch_PTD[playerid][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_PTD[playerid][0], 255);
	PlayerTextDrawFont(playerid, captch_PTD[playerid][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_PTD[playerid][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_PTD[playerid][0], 0);

	captch_PTD[playerid][1] = CreatePlayerTextDraw(playerid, 237.9998 + captch_x, 205.1923 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_PTD[playerid][1], 167.0000, 66.0000);
	PlayerTextDrawAlignment(playerid, captch_PTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, captch_PTD[playerid][1], 0x759DA3FF);
	PlayerTextDrawBackgroundColor(playerid, captch_PTD[playerid][1], 255);
	PlayerTextDrawFont(playerid, captch_PTD[playerid][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_PTD[playerid][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_PTD[playerid][1], 0);

	captch_code_PTD[playerid][0][0] = CreatePlayerTextDraw(playerid, 246.6666 + captch_x, 213.6445+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][0], 5.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][0], 0);

	captch_code_PTD[playerid][0][1] = CreatePlayerTextDraw(playerid, 269.4012 + captch_x, 212.6592+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][1], 5.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][1], 0);

	captch_code_PTD[playerid][0][2] = CreatePlayerTextDraw(playerid, 246.5346 + captch_x, 212.6592+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][2], 27.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][2], 0);

	captch_code_PTD[playerid][0][3] = CreatePlayerTextDraw(playerid, 246.5346 + captch_x, 259.9670+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][3], 25.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][3], 0);

	captch_code_PTD[playerid][0][4] = CreatePlayerTextDraw(playerid, 246.4346 + captch_x, 237.1952+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][4], 27.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][4], 0);

	captch_code_PTD[playerid][0][5] = CreatePlayerTextDraw(playerid, 246.6666 + captch_x, 237.0310+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][5], 5.0000, 24.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][5], 0);

	captch_code_PTD[playerid][0][6] = CreatePlayerTextDraw(playerid, 269.4012 + captch_x, 237.0754+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][6], 5.0000, 27.8000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][6], 0);

	captch_code_PTD[playerid][1][0] = CreatePlayerTextDraw(playerid, 277.6015 + captch_x, 209.0815+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][0], 5.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][0], 0);

	captch_code_PTD[playerid][1][1] = CreatePlayerTextDraw(playerid, 300.3363 + captch_x, 208.5110+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][1], -5.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][1], 0);

	captch_code_PTD[playerid][1][2] = CreatePlayerTextDraw(playerid, 277.8030 + captch_x, 208.5110+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][2], 20.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][2], 0);

	captch_code_PTD[playerid][1][3] = CreatePlayerTextDraw(playerid, 277.4696 + captch_x, 256.6484+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][3], 22.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][3], 0);

	captch_code_PTD[playerid][1][4] = CreatePlayerTextDraw(playerid, 277.3695 + captch_x, 233.0471+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][4], 23.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][4], 0);

	captch_code_PTD[playerid][1][5] = CreatePlayerTextDraw(playerid, 277.6016 + captch_x, 232.4681+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][5], 5.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][5], 0);

	captch_code_PTD[playerid][1][6] = CreatePlayerTextDraw(playerid, 300.3363 + captch_x, 232.9273+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][6], -5.0000, 27.6500);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][6], 0);

	captch_code_PTD[playerid][2][0] = CreatePlayerTextDraw(playerid, 305.2366 + captch_x, 208.6667+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][0], 5.0000, 26.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][0], 0);

	captch_code_PTD[playerid][2][1] = CreatePlayerTextDraw(playerid, 328.6380 + captch_x, 208.5110+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][1], 5.0000, 26.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][1], 0);

	captch_code_PTD[playerid][2][2] = CreatePlayerTextDraw(playerid, 305.1047 + captch_x, 208.5110+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][2], 26.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][2], 0);

	captch_code_PTD[playerid][2][3] = CreatePlayerTextDraw(playerid, 305.7713 + captch_x, 256.6484+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][3], 26.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][3], 0);

	captch_code_PTD[playerid][2][4] = CreatePlayerTextDraw(playerid, 305.6712 + captch_x, 233.0471+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][4], 26.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][4], 0);

	captch_code_PTD[playerid][2][5] = CreatePlayerTextDraw(playerid, 305.2366 + captch_x, 233.7126+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][5], 5.0000, 26.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][5], 0);

	captch_code_PTD[playerid][2][6] = CreatePlayerTextDraw(playerid, 328.6380 + captch_x, 232.5124+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][6], 5.0000, 28.5000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][6], 0);

	captch_code_PTD[playerid][3][0] = CreatePlayerTextDraw(playerid, 334.8500 + captch_x, 209.4963+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][0], 4.0000, 26.2000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][0], 0);

	captch_code_PTD[playerid][3][1] = CreatePlayerTextDraw(playerid, 358.5731 + captch_x, 209.3407+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][1], 4.0000, 26.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][1], 0);

	captch_code_PTD[playerid][3][2] = CreatePlayerTextDraw(playerid, 334.7064 + captch_x, 209.3406+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][2], 25.0000, 4.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][2], 0);

	captch_code_PTD[playerid][3][3] = CreatePlayerTextDraw(playerid, 335.3730 + captch_x, 255.4040+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][3], 25.0000, 4.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][3], 0);

	captch_code_PTD[playerid][3][4] = CreatePlayerTextDraw(playerid, 336.6063 + captch_x, 232.6323+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][4], 26.0000, 4.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][4], 0);

	captch_code_PTD[playerid][3][5] = CreatePlayerTextDraw(playerid, 334.5049 + captch_x, 232.4681+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][5], 4.0000, 27.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][5], 0);

	captch_code_PTD[playerid][3][6] = CreatePlayerTextDraw(playerid, 358.5731 + captch_x, 234.5865+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][6], 4.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][6], 0);

	captch_code_PTD[playerid][4][0] = CreatePlayerTextDraw(playerid, 365.6401 + captch_x, 214.0000+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][0], 4.0000, 27.8500);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][0], 0);

	captch_code_PTD[playerid][4][1] = CreatePlayerTextDraw(playerid, 391.0414 + captch_x, 214.0000+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][1], 4.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][1], 0);

	captch_code_PTD[playerid][4][2] = CreatePlayerTextDraw(playerid, 367.1748 + captch_x, 213.9036+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][2], 27.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][2], 0);

	captch_code_PTD[playerid][4][3] = CreatePlayerTextDraw(playerid, 367.1748 + captch_x, 259.9671+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][3], 26.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][3], 0);

	captch_code_PTD[playerid][4][4] = CreatePlayerTextDraw(playerid, 367.1748 + captch_x, 238.0250+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][4], 25.0000, 5.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][4], 0);

	captch_code_PTD[playerid][4][5] = CreatePlayerTextDraw(playerid, 365.6400 + captch_x, 237.8607+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][5], 4.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][5], 0);

	captch_code_PTD[playerid][4][6] = CreatePlayerTextDraw(playerid, 391.0414 + captch_x, 238.0751+ captch_y, "LD_SPAC:white"); // пусто
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][6], 4.0000, 24.9000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][6], 0);

	/*new Float:Dauns;
	switch(random(5))
	{
	    case 0: Dauns = 10.5;
	    case 1: Dauns = 6.5;
	    case 2: Dauns = 8.5;
	    case 3: Dauns = 7.5;
	    case 4: Dauns = 9.5;
	}
	saas_PTD[playerid][0] = CreatePlayerTextDraw(playerid, 399.3745 +captch_x, 232.9270 +captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, saas_PTD[playerid][0], -37.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, saas_PTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, saas_PTD[playerid][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, saas_PTD[playerid][0], 255);
	PlayerTextDrawFont(playerid, saas_PTD[playerid][0], 4);
	PlayerTextDrawSetProportional(playerid, saas_PTD[playerid][0], 0);
	PlayerTextDrawSetShadow(playerid, saas_PTD[playerid][0], 0);*/
}
