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

new
	bool: captch_opened[MAX_PLAYERS],
	captch_code[MAX_PLAYERS][7],

	PlayerText: captch_PTD[MAX_PLAYERS][2],
	PlayerText: captch_code_PTD[MAX_PLAYERS][5][7];

#define dialog_test_captcha 9022
#define dialog_test_captcha2 9023

captch_OnDialogResponse(playerid, dialogid, response, inputtext[])
{
	switch(dialogid)
	{
		case dialog_test_captcha:
		{
			if(!response)return Captch_CloseForPlayer(playerid);
			if(!strlen(inputtext)) return Captch_CloseForPlayer(playerid), SendClientMessage(playerid, 0xFF6347FF, "[Ioeaea] {FFFFFF}Ioaao iaaa?iue!");
			if(!Captch_IsValid(playerid, inputtext))
			{
				SendClientMessage(playerid, 0xFF6347FF, "[Ioeaea] {FFFFFF}Ioaao iaaa?iue!");
				return Captch_CloseForPlayer(playerid);
			}
//			new house = InfoHouse[playerid];
			VerifyCaptcha(playerid);
			Captch_CloseForPlayer(playerid);
		}
		case dialog_test_captcha2:
		{
			if(!response)return Captch_CloseForPlayer(playerid);
			if(!strlen(inputtext)) return Captch_CloseForPlayer(playerid), SendClientMessage(playerid, 0xFF6347FF, "[Ioeaea] {FFFFFF}Ioaao iaaa?iue!");
			if(!Captch_IsValid(playerid, inputtext))
			{
				SendClientMessage(playerid, 0xFF6347FF, "[Ioeaea] {FFFFFF}Ioaao iaaa?iue!");
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
	return true;
}

Captch_OpenForPlayer(playerid, dialogid)
{
	if(captch_opened[playerid])return 1;

	Captch_CreateTextdaws(playerid);

	PlayerTextDrawShow(playerid, captch_PTD[playerid][0]);
	PlayerTextDrawShow(playerid, captch_PTD[playerid][1]);

	new c_code[5];

	c_code[0] = random(10);
	c_code[1] = random(10);
	c_code[2] = random(10);
	c_code[3] = random(10);
	c_code[4] = random(10);

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
			case 7:
			{
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][1]);
				PlayerTextDrawShow(playerid, captch_code_PTD[playerid][i][2]);
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

				c_code[i] = 9;
			}
		}
		format(captch_code[playerid], 7, "%s%d", captch_code[playerid], c_code[i]);
	}
	captch_opened[playerid] = true;
	return ShowPlayerDialogEx( playerid, dialogid, 1, "I?iaa?ea ia ?iaioa", "{FFFFFF}Aaaaeoa {6CFF92}5 {FFFFFF}neiaieia, eioi?ua\naeaiu ia {6CFF92}aaoai {FFFFFF}ye?aia.", "OK", "Ioiaia");
}

Captch_DestroyTextdraws(playerid)
{
	PlayerTextDrawDestroy(playerid, captch_PTD[playerid][0]);
	PlayerTextDrawDestroy(playerid, captch_PTD[playerid][1]);

	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][0][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][1][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][2][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][3][i]);
	for(new i; i < 7; i ++) PlayerTextDrawDestroy(playerid, captch_code_PTD[playerid][4][i]);
}
Captch_CreateTextdaws(playerid)
{
	/*
		?????????: ?? ?????? ???????????? ??????? ?????? ?? ??????.

		captch_x - ????????? ?? ??????????? (? ????? - ?????, ? ???? - ??????)
		captch_y - ????????? ?? ????????? (? ????? - ????, ? ???? - ?????)
	*/
	new
		captch_x = 15,
		captch_y = -80;

	captch_PTD[playerid][0] = CreatePlayerTextDraw(playerid, 245.6666 + captch_x, 204.7777 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_PTD[playerid][0], 146.0000, 58.0000);
	PlayerTextDrawAlignment(playerid, captch_PTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, captch_PTD[playerid][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_PTD[playerid][0], 255);
	PlayerTextDrawFont(playerid, captch_PTD[playerid][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_PTD[playerid][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_PTD[playerid][0], 0);

	captch_PTD[playerid][1] = CreatePlayerTextDraw(playerid, 247.9998 + captch_x, 207.2665 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_PTD[playerid][1], 141.0000, 52.0000);
	PlayerTextDrawAlignment(playerid, captch_PTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, captch_PTD[playerid][1], 0x759DA3FF);
	PlayerTextDrawBackgroundColor(playerid, captch_PTD[playerid][1], 255);
	PlayerTextDrawFont(playerid, captch_PTD[playerid][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_PTD[playerid][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_PTD[playerid][1], 0);


	captch_code_PTD[playerid][0][0] = CreatePlayerTextDraw(playerid, 249.3333 + captch_x, 209.9112 + captch_y, "LD_SPAC:white"); // ???? ????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][0], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][0], 0);

	captch_code_PTD[playerid][0][1] = CreatePlayerTextDraw(playerid, 272.7346 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ????? ????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][1], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][1], 0);

	captch_code_PTD[playerid][0][2] = CreatePlayerTextDraw(playerid, 249.2013 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][2], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][2], 0);

	captch_code_PTD[playerid][0][3] = CreatePlayerTextDraw(playerid, 249.8679 + captch_x, 256.6485 + captch_y, "LD_SPAC:white"); // ???
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][3], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][3], 0);

	captch_code_PTD[playerid][0][4] = CreatePlayerTextDraw(playerid, 249.7679 + captch_x, 233.0472 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][4], 24.5799, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][4], 0);

	captch_code_PTD[playerid][0][5] = CreatePlayerTextDraw(playerid, 249.3333 + captch_x, 233.7126 + captch_y, "LD_SPAC:white"); // ???? ???
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][5], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][5], 0);

	captch_code_PTD[playerid][0][6] = CreatePlayerTextDraw(playerid, 272.7346 + captch_x, 232.5125 + captch_y, "LD_SPAC:white"); // ????? ???
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][0][6], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][0][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][0][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][0][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][0][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][0][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][0][6], 0);


	captch_code_PTD[playerid][1][0] = CreatePlayerTextDraw(playerid, 276.9349 + captch_x, 209.9112 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][0], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][0], 0);

	captch_code_PTD[playerid][1][1] = CreatePlayerTextDraw(playerid, 300.3363 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][1], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][1], 0);

	captch_code_PTD[playerid][1][2] = CreatePlayerTextDraw(playerid, 276.8030 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][2], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][2], 0);

	captch_code_PTD[playerid][1][3] = CreatePlayerTextDraw(playerid, 277.4696 + captch_x, 256.6485 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][3], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][3], 0);

	captch_code_PTD[playerid][1][4] = CreatePlayerTextDraw(playerid, 277.3695 + captch_x, 233.0472 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][4], 24.5799, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][4], 0);

	captch_code_PTD[playerid][1][5] = CreatePlayerTextDraw(playerid, 276.9349 + captch_x, 233.7126 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][5], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][5], 0);

	captch_code_PTD[playerid][1][6] = CreatePlayerTextDraw(playerid, 300.3363 + captch_x, 232.5125 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][1][6], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][1][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][1][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][1][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][1][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][1][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][1][6], 0);


	captch_code_PTD[playerid][2][0] = CreatePlayerTextDraw(playerid, 305.2367 + captch_x, 209.9112 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][0], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][0], 0);

	captch_code_PTD[playerid][2][1] = CreatePlayerTextDraw(playerid, 328.6380 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][1], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][1], 0);

	captch_code_PTD[playerid][2][2] = CreatePlayerTextDraw(playerid, 305.1047 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][2], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][2], 0);

	captch_code_PTD[playerid][2][3] = CreatePlayerTextDraw(playerid, 305.7713 + captch_x, 256.6485 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][3], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][3], 0);

	captch_code_PTD[playerid][2][4] = CreatePlayerTextDraw(playerid, 305.6713 + captch_x, 233.0472 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][4], 24.5799, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][4], 0);

	captch_code_PTD[playerid][2][5] = CreatePlayerTextDraw(playerid, 305.2367 + captch_x, 233.7126 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][5], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][5], 0);

	captch_code_PTD[playerid][2][6] = CreatePlayerTextDraw(playerid, 328.6380 + captch_x, 232.5125 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][2][6], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][2][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][2][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][2][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][2][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][2][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][2][6], 0);


	captch_code_PTD[playerid][3][0] = CreatePlayerTextDraw(playerid, 332.8384 + captch_x, 209.9112 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][0], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][0], 0);

	captch_code_PTD[playerid][3][1] = CreatePlayerTextDraw(playerid, 356.2397 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][1], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][1], 0);

	captch_code_PTD[playerid][3][2] = CreatePlayerTextDraw(playerid, 332.7064 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][2], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][2], 0);

	captch_code_PTD[playerid][3][3] = CreatePlayerTextDraw(playerid, 333.3730 + captch_x, 256.6485 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][3], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][3], 0);

	captch_code_PTD[playerid][3][4] = CreatePlayerTextDraw(playerid, 333.2730 + captch_x, 233.0472 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][4], 24.5799, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][4], 0);

	captch_code_PTD[playerid][3][5] = CreatePlayerTextDraw(playerid, 332.8384 + captch_x, 233.7126 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][5], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][5], 0);

	captch_code_PTD[playerid][3][6] = CreatePlayerTextDraw(playerid, 356.2397 + captch_x, 232.5125 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][3][6], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][3][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][3][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][3][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][3][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][3][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][3][6], 0);


	captch_code_PTD[playerid][4][0] = CreatePlayerTextDraw(playerid, 361.6401 + captch_x, 209.9112 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][0], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][0], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][0], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][0], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][0], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][0], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][0], 0);

	captch_code_PTD[playerid][4][1] = CreatePlayerTextDraw(playerid, 385.0414 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][1], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][1], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][1], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][1], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][1], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][1], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][1], 0);

	captch_code_PTD[playerid][4][2] = CreatePlayerTextDraw(playerid, 361.5081 + captch_x, 208.5111 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][2], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][2], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][2], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][2], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][2], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][2], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][2], 0);

	captch_code_PTD[playerid][4][3] = CreatePlayerTextDraw(playerid, 362.1747 + captch_x, 256.6485 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][3], 25.0000, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][3], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][3], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][3], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][3], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][3], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][3], 0);

	captch_code_PTD[playerid][4][4] = CreatePlayerTextDraw(playerid, 362.0747 + captch_x, 233.0472 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][4], 24.5799, 3.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][4], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][4], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][4], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][4], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][4], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][4], 0);

	captch_code_PTD[playerid][4][5] = CreatePlayerTextDraw(playerid, 361.6401 + captch_x, 233.7126 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][5], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][5], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][5], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][5], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][5], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][5], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][5], 0);

	captch_code_PTD[playerid][4][6] = CreatePlayerTextDraw(playerid, 385.0414 + captch_x, 232.5125 + captch_y, "LD_SPAC:white"); // ?????
	PlayerTextDrawTextSize(playerid, captch_code_PTD[playerid][4][6], 3.0000, 25.0000);
	PlayerTextDrawAlignment(playerid, captch_code_PTD[playerid][4][6], 1);
	PlayerTextDrawColor(playerid, captch_code_PTD[playerid][4][6], 0x1A2432FF);
	PlayerTextDrawBackgroundColor(playerid, captch_code_PTD[playerid][4][6], 255);
	PlayerTextDrawFont(playerid, captch_code_PTD[playerid][4][6], 4);
	PlayerTextDrawSetProportional(playerid, captch_code_PTD[playerid][4][6], 0);
	PlayerTextDrawSetShadow(playerid, captch_code_PTD[playerid][4][6], 0);
}

captchahouse(playerid)return Captch_OpenForPlayer(playerid, dialog_test_captcha);
captchabiz(playerid)return Captch_OpenForPlayer(playerid, dialog_test_captcha2);