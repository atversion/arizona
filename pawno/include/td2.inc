	pbTDTeam[0] = TextDrawCreate(75.000000, 126.000000, "RED TEAM");
	TextDrawBackgroundColor(pbTDTeam[0], 255);
	TextDrawFont(pbTDTeam[0], 2);
	TextDrawLetterSize(pbTDTeam[0], 0.400000, 2.099999);
	TextDrawColor(pbTDTeam[0], 0xFF6868FF);
	TextDrawSetOutline(pbTDTeam[0], 1);
	TextDrawSetProportional(pbTDTeam[0], 1);
	TextDrawSetSelectable(pbTDTeam[0], 0);

	pbTDTeam[1] = TextDrawCreate(577.000000, 126.000000, "BLUE TEAM");
	TextDrawAlignment(pbTDTeam[1], 3);
	TextDrawBackgroundColor(pbTDTeam[1], 255);
	TextDrawFont(pbTDTeam[1], 2);
	TextDrawLetterSize(pbTDTeam[1], 0.400000, 2.099999);
	TextDrawColor(pbTDTeam[1], 0x687FFFFF);
	TextDrawSetOutline(pbTDTeam[1], 1);
	TextDrawSetProportional(pbTDTeam[1], 1);
	TextDrawSetSelectable(pbTDTeam[1], 0);

	//рисуем имя игроков
	for(new i; i<MAX_PBTEAM;i++)
	{
		pbTDPos[0][i] = TextDrawCreate(75.000000, 143.0+(float(i)*8.0), "_");
		TextDrawBackgroundColor(pbTDPos[0][i], 255);
		TextDrawFont(pbTDPos[0][i], 2);
		TextDrawLetterSize(pbTDPos[0][i], 0.300000, 1.100000);
		TextDrawColor(pbTDPos[0][i], -1);
		TextDrawSetOutline(pbTDPos[0][i], 1);
		TextDrawSetProportional(pbTDPos[0][i], 1);
		TextDrawSetSelectable(pbTDPos[0][i], 0);
	}
	for(new i;i<MAX_PBTEAM; i++)
	{
		pbTDPos[1][i] = TextDrawCreate(577.000000, 143.0+(float(i)*8.0), "_");
		TextDrawAlignment(pbTDPos[1][i], 3);
		TextDrawBackgroundColor(pbTDPos[1][i], 255);
		TextDrawFont(pbTDPos[1][i], 2);
		TextDrawLetterSize(pbTDPos[1][i], 0.300000, 1.100000);
		TextDrawColor(pbTDPos[1][i], -1);
		TextDrawSetOutline(pbTDPos[1][i], 1);
		TextDrawSetProportional(pbTDPos[1][i], 1);
		TextDrawSetSelectable(pbTDPos[1][i], 0);
	}

	pbTDON[4] = TextDrawCreate(310.000000, 372.000000, "13");
	TextDrawAlignment(pbTDON[4], 3);
	TextDrawBackgroundColor(pbTDON[4], 255);
	TextDrawFont(pbTDON[4], 3);
	TextDrawLetterSize(pbTDON[4], 1.179999, 4.699998);
	TextDrawColor(pbTDON[4], -1);
	TextDrawSetOutline(pbTDON[4], 1);
	TextDrawSetProportional(pbTDON[4], 1);
	TextDrawSetSelectable(pbTDON[4], 0);

	pbTDON[0] = TextDrawCreate(312.000000, 401.000000, "RED TEAM");
	TextDrawAlignment(pbTDON[0], 3);
	TextDrawBackgroundColor(pbTDON[0], 255);
	TextDrawFont(pbTDON[0], 2);
	TextDrawLetterSize(pbTDON[0], 0.400000, 2.099998);
	TextDrawColor(pbTDON[0], 0xFF6868FF);
	TextDrawSetOutline(pbTDON[0], 1);
	TextDrawSetProportional(pbTDON[0], 1);
	TextDrawSetSelectable(pbTDON[0], 0);

	pbTDON[5] = TextDrawCreate(330.000000, 372.000000, "1");
	TextDrawBackgroundColor(pbTDON[5], 255);
	TextDrawFont(pbTDON[5], 3);
	TextDrawLetterSize(pbTDON[5], 1.179999, 4.699998);
	TextDrawColor(pbTDON[5], -1);
	TextDrawSetOutline(pbTDON[5], 1);
	TextDrawSetProportional(pbTDON[5], 1);
	TextDrawSetSelectable(pbTDON[5], 0);

	pbTDON[3] = TextDrawCreate(320.000000, 372.000000, ":");
	TextDrawAlignment(pbTDON[3], 2);
	TextDrawBackgroundColor(pbTDON[3], 255);
	TextDrawFont(pbTDON[3], 3);
	TextDrawLetterSize(pbTDON[3], 1.179999, 4.699998);
	TextDrawColor(pbTDON[3], -1);
	TextDrawSetOutline(pbTDON[3], 1);
	TextDrawSetProportional(pbTDON[3], 1);
	TextDrawSetSelectable(pbTDON[3], 0);

	pbTDON[1] = TextDrawCreate(328.000000, 401.000000, "BLUE TEAM");
	TextDrawBackgroundColor(pbTDON[1], 255);
	TextDrawFont(pbTDON[1], 2);
	TextDrawLetterSize(pbTDON[1], 0.400000, 2.099998);
	TextDrawColor(pbTDON[1], 0x687FFFFF);
	TextDrawSetOutline(pbTDON[1], 1);
	TextDrawSetProportional(pbTDON[1], 1);
	TextDrawSetSelectable(pbTDON[1], 0);

	pbTDON[2] = TextDrawCreate(320.000000, 416.000000, "00:01");
	TextDrawAlignment(pbTDON[2], 2);
	TextDrawBackgroundColor(pbTDON[2], 255);
	TextDrawFont(pbTDON[2], 3);
	TextDrawLetterSize(pbTDON[2], 0.699999, 3.000000);
	TextDrawColor(pbTDON[2], -1);
	TextDrawSetOutline(pbTDON[2], 1);
	TextDrawSetProportional(pbTDON[2], 1);
	TextDrawSetSelectable(pbTDON[2], 0);


	MenuIcon[0]= TextDrawCreate(660.000000, 100.000000, "Fon"); //MenuFon//
	TextDrawBackgroundColor(MenuIcon[0], 255);
	TextDrawFont(MenuIcon[0], 1);
	TextDrawLetterSize(MenuIcon[0], 0.500000, 29.000000);
	TextDrawColor(MenuIcon[0], -1);
	TextDrawSetOutline(MenuIcon[0], 0);
	TextDrawSetProportional(MenuIcon[0], 1);
	TextDrawSetShadow(MenuIcon[0], 1);
	TextDrawTextSize(MenuIcon[0], -60.000000, 210.000000);
	TextDrawSetSelectable(MenuIcon[0], 0);

	MenuIcon[1]= TextDrawCreate(-255.000000, 311.000000, "Header2"); //MenuHeader2//
	TextDrawBackgroundColor(MenuIcon[1], 0);
	TextDrawFont(MenuIcon[1], 5);
	TextDrawLetterSize(MenuIcon[1], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[1], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[1], 0);
	TextDrawSetProportional(MenuIcon[1], 1);
	TextDrawSetShadow(MenuIcon[1], 1);
	TextDrawTextSize(MenuIcon[1], 1141.000000, 197.000000);
	TextDrawSetPreviewModel(MenuIcon[1], 2189);
	TextDrawSetPreviewRot(MenuIcon[1], 90.000000, 0.000000, 180.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[1], 0);

	MenuIcon[2]= TextDrawCreate(-255.000000, -60.000000, "Header1"); //MenuHeader1//
	TextDrawBackgroundColor(MenuIcon[2], 0);
	TextDrawFont(MenuIcon[2], 5);
	TextDrawLetterSize(MenuIcon[2], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[2], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[2], 0);
	TextDrawSetProportional(MenuIcon[2], 1);
	TextDrawSetShadow(MenuIcon[2], 1);
	TextDrawTextSize(MenuIcon[2], 1141.000000, 197.000000);
	TextDrawSetPreviewModel(MenuIcon[2], 2189);
	TextDrawSetPreviewRot(MenuIcon[2], 90.000000, 0.000000, 180.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[2], 0);

	MenuIcon[3]= TextDrawCreate(111.000000, 318.000000, "Ram1"); //MenuRam1//
	TextDrawBackgroundColor(MenuIcon[3], 0);
	TextDrawFont(MenuIcon[3], 5);
	TextDrawLetterSize(MenuIcon[3], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[3], 255);
	TextDrawSetOutline(MenuIcon[3], 0);
	TextDrawSetProportional(MenuIcon[3], 1);
	TextDrawSetShadow(MenuIcon[3], 1);
	TextDrawTextSize(MenuIcon[3], 136.000000, 132.000000);
	TextDrawSetPreviewModel(MenuIcon[3], 2366);
	TextDrawSetPreviewRot(MenuIcon[3], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[3], 0);

	MenuIcon[4]= TextDrawCreate(256.000000, 318.000000, "Ram2"); //MenuRam2//
	TextDrawBackgroundColor(MenuIcon[4], 0);
	TextDrawFont(MenuIcon[4], 5);
	TextDrawLetterSize(MenuIcon[4], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[4], 255);
	TextDrawSetOutline(MenuIcon[4], 0);
	TextDrawSetProportional(MenuIcon[4], 1);
	TextDrawSetShadow(MenuIcon[4], 1);
	TextDrawTextSize(MenuIcon[4], 136.000000, 132.000000);
	TextDrawSetPreviewModel(MenuIcon[4], 2366);
	TextDrawSetPreviewRot(MenuIcon[4], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[4], 0);

	MenuIcon[5]= TextDrawCreate(402.000000, 318.000000, "Ram3"); //MenuRam3//
	TextDrawBackgroundColor(MenuIcon[5], 0);
	TextDrawFont(MenuIcon[5], 5);
	TextDrawLetterSize(MenuIcon[5], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[5], 255);
	TextDrawSetOutline(MenuIcon[5], 0);
	TextDrawSetProportional(MenuIcon[5], 1);
	TextDrawSetShadow(MenuIcon[5], 1);
	TextDrawTextSize(MenuIcon[5], 136.000000, 132.000000);
	TextDrawSetPreviewModel(MenuIcon[5], 2366);
	TextDrawSetPreviewRot(MenuIcon[5], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[5], 0);

	MenuIcon[6]= TextDrawCreate(159.000000, 377.000000, "Icon1"); //MenuIcon1//
	TextDrawBackgroundColor(MenuIcon[6], 0);
	TextDrawFont(MenuIcon[6], 5);
	TextDrawLetterSize(MenuIcon[6], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[6], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[6], 0);
	TextDrawSetProportional(MenuIcon[6], 1);
	TextDrawSetShadow(MenuIcon[6], 1);
	TextDrawTextSize(MenuIcon[6], 41.000000, 32.000000);
	TextDrawSetPreviewModel(MenuIcon[6], 1277);
	TextDrawSetPreviewRot(MenuIcon[6], 0.000000, 0.000000, 180.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[6], 1);

	MenuIcon[7]= TextDrawCreate(299.000000, 375.000000, "Icon2"); //MenuIcon2//
	TextDrawBackgroundColor(MenuIcon[7], 0);
	TextDrawFont(MenuIcon[7], 5);
	TextDrawLetterSize(MenuIcon[7], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[7], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[7], 0);
	TextDrawSetProportional(MenuIcon[7], 1);
	TextDrawSetShadow(MenuIcon[7], 1);
	TextDrawTextSize(MenuIcon[7], 49.000000, 39.000000);
	TextDrawSetPreviewModel(MenuIcon[7], 1314);
	TextDrawSetPreviewRot(MenuIcon[7], 0.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[7], 1);

	MenuIcon[8]= TextDrawCreate(445.000000, 375.000000, "Icon3"); //MenuIcon3//
	TextDrawBackgroundColor(MenuIcon[8], 0);
	TextDrawFont(MenuIcon[8], 5);
	TextDrawLetterSize(MenuIcon[8], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[8], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[8], 0);
	TextDrawSetProportional(MenuIcon[8], 1);
	TextDrawSetShadow(MenuIcon[8], 1);
	TextDrawTextSize(MenuIcon[8], 49.000000, 39.000000);
	TextDrawSetPreviewModel(MenuIcon[8], 1239);
	TextDrawSetPreviewRot(MenuIcon[8], 0.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[8], 1);

	MenuIcon[9]= TextDrawCreate(178.000000, 425.000000, "Setting"); //MenuText1//
	TextDrawAlignment(MenuIcon[9], 2);
	TextDrawBackgroundColor(MenuIcon[9], 255);
	TextDrawFont(MenuIcon[9], 1);
	TextDrawLetterSize(MenuIcon[9], 0.280000, 1.000000);
	TextDrawColor(MenuIcon[9], -1);
	TextDrawSetOutline(MenuIcon[9], 1);
	TextDrawSetProportional(MenuIcon[9], 1);
	TextDrawSetSelectable(MenuIcon[9], 0);

	MenuIcon[10]= TextDrawCreate(323.000000, 425.000000, "Report"); //MenuText2//
	TextDrawAlignment(MenuIcon[10], 2);
	TextDrawBackgroundColor(MenuIcon[10], 255);
	TextDrawFont(MenuIcon[10], 1);
	TextDrawLetterSize(MenuIcon[10], 0.280000, 1.000000);
	TextDrawColor(MenuIcon[10], -1);
	TextDrawSetOutline(MenuIcon[10], 1);
	TextDrawSetProportional(MenuIcon[10], 1);
	TextDrawSetSelectable(MenuIcon[10], 0);

	MenuIcon[11]= TextDrawCreate(471.000000, 424.000000, "Commands"); //MenuText3//
	TextDrawAlignment(MenuIcon[11], 2);
	TextDrawBackgroundColor(MenuIcon[11], 255);
	TextDrawFont(MenuIcon[11], 1);
	TextDrawLetterSize(MenuIcon[11], 0.280000, 1.000000);
	TextDrawColor(MenuIcon[11], -1);
	TextDrawSetOutline(MenuIcon[11], 1);
	TextDrawSetProportional(MenuIcon[11], 1);
	TextDrawSetSelectable(MenuIcon[11], 0);

	MenuIcon[12]= TextDrawCreate(541.000000, 79.000000, "MenuRam2"); //MenuRam5//
	TextDrawBackgroundColor(MenuIcon[12], 0);
	TextDrawFont(MenuIcon[12], 5);
	TextDrawLetterSize(MenuIcon[12], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[12], 255);
	TextDrawSetOutline(MenuIcon[12], 0);
	TextDrawSetProportional(MenuIcon[12], 1);
	TextDrawSetShadow(MenuIcon[12], 1);
	TextDrawTextSize(MenuIcon[12], 125.000000, 123.000000);
	TextDrawSetPreviewModel(MenuIcon[12], 2366);
	TextDrawSetPreviewRot(MenuIcon[12], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[12], 0);

	MenuIcon[13]= TextDrawCreate(486.000000, 79.000000, "MenuRam1"); //MenuRam4//
	TextDrawBackgroundColor(MenuIcon[13], 0);
	TextDrawFont(MenuIcon[13], 5);
	TextDrawLetterSize(MenuIcon[13], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[13], 255);
	TextDrawSetOutline(MenuIcon[13], 0);
	TextDrawSetProportional(MenuIcon[13], 1);
	TextDrawSetShadow(MenuIcon[13], 1);
	TextDrawTextSize(MenuIcon[13], 125.000000, 123.000000);
	TextDrawSetPreviewModel(MenuIcon[13], 2366);
	TextDrawSetPreviewRot(MenuIcon[13], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[13], 0);

	MenuIcon[14]= TextDrawCreate(486.000000, 150.000000, "MenuRam3"); //MenuRam6//
	TextDrawBackgroundColor(MenuIcon[14], 0);
	TextDrawFont(MenuIcon[14], 5);
	TextDrawLetterSize(MenuIcon[14], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[14], 255);
	TextDrawSetOutline(MenuIcon[14], 0);
	TextDrawSetProportional(MenuIcon[14], 1);
	TextDrawSetShadow(MenuIcon[14], 1);
	TextDrawTextSize(MenuIcon[14], 125.000000, 123.000000);
	TextDrawSetPreviewModel(MenuIcon[14], 2366);
	TextDrawSetPreviewRot(MenuIcon[14], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[14], 0);

	MenuIcon[15]= TextDrawCreate(541.000000, 150.000000, "MenuRam4"); //MenuRam7//
	TextDrawBackgroundColor(MenuIcon[15], 0);
	TextDrawFont(MenuIcon[15], 5);
	TextDrawLetterSize(MenuIcon[15], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[15], 255);
	TextDrawSetOutline(MenuIcon[15], 0);
	TextDrawSetProportional(MenuIcon[15], 1);
	TextDrawSetShadow(MenuIcon[15], 1);
	TextDrawTextSize(MenuIcon[15], 125.000000, 123.000000);
	TextDrawSetPreviewModel(MenuIcon[15], 2366);
	TextDrawSetPreviewRot(MenuIcon[15], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[15], 0);

	MenuIcon[16]= TextDrawCreate(541.000000, 222.000000, "MenuRam5"); //MenuRam8//
	TextDrawBackgroundColor(MenuIcon[16], 0);
	TextDrawFont(MenuIcon[16], 5);
	TextDrawLetterSize(MenuIcon[16], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[16], 255);
	TextDrawSetOutline(MenuIcon[16], 0);
	TextDrawSetProportional(MenuIcon[16], 1);
	TextDrawSetShadow(MenuIcon[16], 1);
	TextDrawTextSize(MenuIcon[16], 125.000000, 123.000000);
	TextDrawSetPreviewModel(MenuIcon[16], 2366);
	TextDrawSetPreviewRot(MenuIcon[16], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[16], 0);

	MenuIcon[17]= TextDrawCreate(529.000000, 130.000000, "MenuIcon1"); //MenuIcon4//
	TextDrawBackgroundColor(MenuIcon[17], 0);
	TextDrawFont(MenuIcon[17], 5);
	TextDrawLetterSize(MenuIcon[17], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[17], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[17], 0);
	TextDrawSetProportional(MenuIcon[17], 1);
	TextDrawSetShadow(MenuIcon[17], 1);
	TextDrawTextSize(MenuIcon[17], 39.000000, 40.000000);
	TextDrawSetPreviewModel(MenuIcon[17], 1275);
	TextDrawSetPreviewRot(MenuIcon[17], -20.000000, 0.000000, -30.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[17], 1);

	MenuIcon[18]= TextDrawCreate(583.000000, 135.000000, "MenuIcon2"); //MenuIcon5//
	TextDrawBackgroundColor(MenuIcon[18], 0);
	TextDrawFont(MenuIcon[18], 5);
	TextDrawLetterSize(MenuIcon[18], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[18], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[18], 0);
	TextDrawSetProportional(MenuIcon[18], 1);
	TextDrawSetShadow(MenuIcon[18], 1);
	TextDrawTextSize(MenuIcon[18], 41.000000, 31.000000);
	TextDrawSetPreviewModel(MenuIcon[18], 2061);
	TextDrawSetPreviewRot(MenuIcon[18], -20.000000, 0.000000, -30.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[18], 1);

	MenuIcon[19]= TextDrawCreate(521.000000, 205.000000, "MenuIcon3"); //MenuIcon6//
	TextDrawBackgroundColor(MenuIcon[19], 0);
	TextDrawFont(MenuIcon[19], 5);
	TextDrawLetterSize(MenuIcon[19], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[19], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[19], 0);
	TextDrawSetProportional(MenuIcon[19], 1);
	TextDrawSetShadow(MenuIcon[19], 1);
	TextDrawTextSize(MenuIcon[19], 45.000000, 34.000000);
	TextDrawSetPreviewModel(MenuIcon[19], 19513);
	TextDrawSetPreviewRot(MenuIcon[19], 90.000000, 160.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[19], 1);

	MenuIcon[20]= TextDrawCreate(580.000000, 205.000000, "MenuIcon4"); //MenuIcon7//
	TextDrawBackgroundColor(MenuIcon[20], 0);
	TextDrawFont(MenuIcon[20], 5);
	TextDrawLetterSize(MenuIcon[20], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[20], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[20], 0);
	TextDrawSetProportional(MenuIcon[20], 1);
	TextDrawSetShadow(MenuIcon[20], 1);
	TextDrawTextSize(MenuIcon[20], 45.000000, 34.000000);
	TextDrawSetPreviewModel(MenuIcon[20], 18875);
	TextDrawSetPreviewRot(MenuIcon[20], 90.000000, 140.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[20], 1);

	MenuIcon[21]= TextDrawCreate(583.000000, 279.000000, "MenuIcon5"); //MenuIcon8//
	TextDrawBackgroundColor(MenuIcon[21], 0);
	TextDrawFont(MenuIcon[21], 5);
	TextDrawLetterSize(MenuIcon[21], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[21], 0xFF6347FF);
	TextDrawSetOutline(MenuIcon[21], 0);
	TextDrawSetProportional(MenuIcon[21], 1);
	TextDrawSetShadow(MenuIcon[21], 1);
	TextDrawTextSize(MenuIcon[21], 42.000000, 31.000000);
	TextDrawSetPreviewModel(MenuIcon[21], 1274);
	TextDrawSetPreviewRot(MenuIcon[21], -20.000000, 0.000000, 140.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[21], 1);

	MenuIcon[22]= TextDrawCreate(531.000000, 174.000000, "action"); //MenuText4//
	TextDrawBackgroundColor(MenuIcon[22], 255);
	TextDrawFont(MenuIcon[22], 2);
	TextDrawLetterSize(MenuIcon[22], 0.240000, 0.899999);
	TextDrawColor(MenuIcon[22], -1);
	TextDrawSetOutline(MenuIcon[22], 0);
	TextDrawSetProportional(MenuIcon[22], 1);
	TextDrawSetShadow(MenuIcon[22], 1);
	TextDrawSetSelectable(MenuIcon[22], 0);

	MenuIcon[23]= TextDrawCreate(588.000000, 174.000000, "skills"); //MenuText5//
	TextDrawBackgroundColor(MenuIcon[23], 255);
	TextDrawFont(MenuIcon[23], 2);
	TextDrawLetterSize(MenuIcon[23], 0.240000, 0.899999);
	TextDrawColor(MenuIcon[23], -1);
	TextDrawSetOutline(MenuIcon[23], 0);
	TextDrawSetProportional(MenuIcon[23], 1);
	TextDrawSetShadow(MenuIcon[23], 1);
	TextDrawSetSelectable(MenuIcon[23], 0);

	MenuIcon[24]= TextDrawCreate(533.000000, 245.000000, "phone"); //MenuText6//
	TextDrawBackgroundColor(MenuIcon[24], 255);
	TextDrawFont(MenuIcon[24], 2);
	TextDrawLetterSize(MenuIcon[24], 0.240000, 0.899999);
	TextDrawColor(MenuIcon[24], -1);
	TextDrawSetOutline(MenuIcon[24], 0);
	TextDrawSetProportional(MenuIcon[24], 1);
	TextDrawSetShadow(MenuIcon[24], 1);
	TextDrawSetSelectable(MenuIcon[24], 0);

	MenuIcon[25]= TextDrawCreate(595.000000, 245.000000, "gps"); //MenuText7//
	TextDrawBackgroundColor(MenuIcon[25], 255);
	TextDrawFont(MenuIcon[25], 2);
	TextDrawLetterSize(MenuIcon[25], 0.240000, 0.899999);
	TextDrawColor(MenuIcon[25], -1);
	TextDrawSetOutline(MenuIcon[25], 0);
	TextDrawSetProportional(MenuIcon[25], 1);
	TextDrawSetShadow(MenuIcon[25], 1);
	TextDrawSetSelectable(MenuIcon[25], 0);

	MenuIcon[26]= TextDrawCreate(585.000000, 318.000000, "donate"); //MenuText8//
	TextDrawBackgroundColor(MenuIcon[26], 255);
	TextDrawFont(MenuIcon[26], 2);
	TextDrawLetterSize(MenuIcon[26], 0.240000, 0.899999);
	TextDrawColor(MenuIcon[26], -1);
	TextDrawSetOutline(MenuIcon[26], 0);
	TextDrawSetProportional(MenuIcon[26], 1);
	TextDrawSetShadow(MenuIcon[26], 1);
	TextDrawSetSelectable(MenuIcon[26], 0);

	MenuIcon[27]= TextDrawCreate(210.000000, 136.000000, "GrandBG1"); //MenuRam9//
	TextDrawBackgroundColor(MenuIcon[27], 255);
	TextDrawFont(MenuIcon[27], 1);
	TextDrawLetterSize(MenuIcon[27], 0.000000, 19.799999);
	TextDrawColor(MenuIcon[27], -1);
	TextDrawSetOutline(MenuIcon[27], 1);
	TextDrawSetProportional(MenuIcon[27], 1);
	TextDrawUseBox(MenuIcon[27], 1);
	TextDrawBoxColor(MenuIcon[27], 48);
	TextDrawTextSize(MenuIcon[27], 10.000000, 102.000000);
	TextDrawSetSelectable(MenuIcon[27], 0);

	MenuIcon[28]= TextDrawCreate(207.000000, 141.000000, "GrandBG2"); //MenuRam10//
	TextDrawBackgroundColor(MenuIcon[28], 255);
	TextDrawFont(MenuIcon[28], 1);
	TextDrawLetterSize(MenuIcon[28], 0.000000, 18.799995);
	TextDrawColor(MenuIcon[28], -1);
	TextDrawSetOutline(MenuIcon[28], 1);
	TextDrawSetProportional(MenuIcon[28], 1);
	TextDrawUseBox(MenuIcon[28], 1);
	TextDrawBoxColor(MenuIcon[28], 48);
	TextDrawTextSize(MenuIcon[28], 139.000000, 100.000000);
	TextDrawSetSelectable(MenuIcon[28], 0);

	MenuIcon[29]= TextDrawCreate(139.000000, 263.000000, "GrandBG3"); //MenuRam11//
	TextDrawBackgroundColor(MenuIcon[29], 255);
	TextDrawFont(MenuIcon[29], 1);
	TextDrawLetterSize(MenuIcon[29], 0.000000, 5.199996);
	TextDrawColor(MenuIcon[29], -1);
	TextDrawSetOutline(MenuIcon[29], 1);
	TextDrawSetProportional(MenuIcon[29], 1);
	TextDrawUseBox(MenuIcon[29], 1);
	TextDrawBoxColor(MenuIcon[29], 48);
	TextDrawTextSize(MenuIcon[29], 13.000000, 130.000000);
	TextDrawSetSelectable(MenuIcon[29], 0);

	MenuIcon[30]= TextDrawCreate(28.000000, 241.000000, "Case"); //MenuCase//
	TextDrawBackgroundColor(MenuIcon[30], 0);
	TextDrawFont(MenuIcon[30], 5);
	TextDrawLetterSize(MenuIcon[30], 0.500000, 1.000000);
	TextDrawColor(MenuIcon[30], -1);
	TextDrawSetOutline(MenuIcon[30], 0);
	TextDrawSetProportional(MenuIcon[30], 1);
	TextDrawSetShadow(MenuIcon[30], 1);
	TextDrawTextSize(MenuIcon[30], 100.000000, 90.000000);
	TextDrawSetPreviewModel(MenuIcon[30], 1210);
	TextDrawSetPreviewRot(MenuIcon[30], 0.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(MenuIcon[30], 1);

	MenuIcon[31]= TextDrawCreate(289.000000, 102.000000, "Menu"); //MenuText9//
	TextDrawBackgroundColor(MenuIcon[31], 255);
	TextDrawFont(MenuIcon[31], 1);
	TextDrawLetterSize(MenuIcon[31], 0.670000, 2.300000);
	TextDrawColor(MenuIcon[31], -1);
	TextDrawSetOutline(MenuIcon[31], 0);
	TextDrawSetProportional(MenuIcon[31], 1);
	TextDrawSetShadow(MenuIcon[31], 1);
	TextDrawSetSelectable(MenuIcon[31], 0);

	///
	HungerFon[0] = TextDrawCreate(547.500000, 58.000000, "_");TextDrawBackgroundColor(HungerFon[0], 255);TextDrawFont(HungerFon[0], 1);TextDrawLetterSize(HungerFon[0], 0.500000, 0.399999);
	TextDrawColor(HungerFon[0], -1);TextDrawSetOutline(HungerFon[0], 0);TextDrawSetProportional(HungerFon[0], 1);TextDrawSetShadow(HungerFon[0], 1);
	TextDrawUseBox(HungerFon[0], 1);TextDrawBoxColor(HungerFon[0], 255);TextDrawTextSize(HungerFon[0], 606.000000, 40.000000);TextDrawSetSelectable(HungerFon[0], 0);

	HungerFon[1] = TextDrawCreate(549.500000, 60.000000, "_");TextDrawBackgroundColor(HungerFon[1], 255);TextDrawFont(HungerFon[1], 1);
	TextDrawLetterSize(HungerFon[1], 0.490000, -0.000000);TextDrawColor(HungerFon[1], -1);TextDrawSetOutline(HungerFon[1], 0);TextDrawSetProportional(HungerFon[1], 1);
	TextDrawSetShadow(HungerFon[1], 1);TextDrawUseBox(HungerFon[1], 1);TextDrawBoxColor(HungerFon[1], 1787344480);TextDrawTextSize(HungerFon[1], 604.000000, 40.000000);TextDrawSetSelectable(HungerFon[1], 0);
	//
	Artificial[0] = TextDrawCreate(635.777770, 275.775878, "usebox");
	TextDrawLetterSize(Artificial[0], 0.000000, 15.037408);
	TextDrawTextSize(Artificial[0], 470.000061, 0.000000);
	TextDrawAlignment(Artificial[0], 1);
	TextDrawColor(Artificial[0], 0);
	TextDrawUseBox(Artificial[0], true);
	TextDrawBoxColor(Artificial[0], 0x4981F5FF);
	TextDrawSetShadow(Artificial[0], 0);
	TextDrawSetOutline(Artificial[0], 0);
	TextDrawFont(Artificial[0], 0);

	Artificial[1] = TextDrawCreate(634.888854, 276.771118, "usebox");
	TextDrawLetterSize(Artificial[1], 0.000000, 14.782590);
	TextDrawTextSize(Artificial[1], 470.888854, 0.000000);
	TextDrawAlignment(Artificial[1], 1);
	TextDrawColor(Artificial[1], 0);
	TextDrawUseBox(Artificial[1], true);
	TextDrawBoxColor(Artificial[1], 255);
	TextDrawSetShadow(Artificial[1], 0);
	TextDrawSetOutline(Artificial[1], 0);
	TextDrawFont(Artificial[1], 0);

	Artificial[2] = TextDrawCreate(513.333007, 265.813323, "Artificial Admin");
	TextDrawLetterSize(Artificial[2], 0.218888, 0.878222);
	TextDrawAlignment(Artificial[2], 1);
	TextDrawColor(Artificial[2], -1);
	TextDrawSetShadow(Artificial[2], 1);
	TextDrawSetOutline(Artificial[2], 1);
	TextDrawBackgroundColor(Artificial[2], 51);
	TextDrawFont(Artificial[2], 2);
	TextDrawSetProportional(Artificial[2], 1);

	//
	PerfomenceTD[0] = TextDrawCreate(502.888946, 131.917846, "usebox");
	TextDrawLetterSize(PerfomenceTD[0], 0.000000, 27.448270);
	TextDrawTextSize(PerfomenceTD[0], 135.333343, 0.000000);
	TextDrawAlignment(PerfomenceTD[0], 1);
	TextDrawColor(PerfomenceTD[0], 0);
	TextDrawUseBox(PerfomenceTD[0], true);
	TextDrawBoxColor(PerfomenceTD[0], 102);
	TextDrawSetShadow(PerfomenceTD[0], 0);
	TextDrawSetOutline(PerfomenceTD[0], 0);
	TextDrawFont(PerfomenceTD[0], 0);

	PerfomenceTD[1] = TextDrawCreate(238.222167, 137.386672, "TwinTurbo_Tuning");
	TextDrawLetterSize(PerfomenceTD[1], 0.745555, 2.645333);
	TextDrawTextSize(PerfomenceTD[1], 935.555664, 1553.067138);
	TextDrawAlignment(PerfomenceTD[1], 1);
	TextDrawColor(PerfomenceTD[1], -1);
	TextDrawUseBox(PerfomenceTD[1], true);
	TextDrawBoxColor(PerfomenceTD[1], 0);
	TextDrawSetShadow(PerfomenceTD[1], 0);
	TextDrawSetOutline(PerfomenceTD[1], 1);
	TextDrawBackgroundColor(PerfomenceTD[1], 51);
	TextDrawFont(PerfomenceTD[1], 0);
	TextDrawSetProportional(PerfomenceTD[1], 1);

	PerfomenceTD[2] = TextDrawCreate(502.444458, 131.917785, "usebox");
	TextDrawLetterSize(PerfomenceTD[2], 0.000000, -0.095432);
	TextDrawTextSize(PerfomenceTD[2], 135.333343, 0.000000);
	TextDrawAlignment(PerfomenceTD[2], 1);
	TextDrawColor(PerfomenceTD[2], 0);
	TextDrawUseBox(PerfomenceTD[2], true);
	TextDrawBoxColor(PerfomenceTD[2], 0x4981F5FF);
	TextDrawSetShadow(PerfomenceTD[2], 0);
	TextDrawSetOutline(PerfomenceTD[2], 0);
	TextDrawFont(PerfomenceTD[2], 0);

	PerfomenceTD[3] = TextDrawCreate(503.444427, 380.313354, "usebox");
	TextDrawLetterSize(PerfomenceTD[3], 0.000000, -0.095432);
	TextDrawTextSize(PerfomenceTD[3], 135.333328, 0.000000);
	TextDrawAlignment(PerfomenceTD[3], 1);
	TextDrawColor(PerfomenceTD[3], 0);
	TextDrawUseBox(PerfomenceTD[3], true);
	TextDrawBoxColor(PerfomenceTD[3], 0x4981F5FF);
	TextDrawSetShadow(PerfomenceTD[3], 0);
	TextDrawSetOutline(PerfomenceTD[3], 0);
	TextDrawFont(PerfomenceTD[3], 0);

	PerfomenceTD[4] = TextDrawCreate(140.666671, 131.917755, "usebox");
	TextDrawLetterSize(PerfomenceTD[4], 0.000000, 27.514446);
	TextDrawTextSize(PerfomenceTD[4], 134.444442, 0.000000);
	TextDrawAlignment(PerfomenceTD[4], 1);
	TextDrawColor(PerfomenceTD[4], 0);
	TextDrawUseBox(PerfomenceTD[4], true);
	TextDrawBoxColor(PerfomenceTD[4], 0x4981F5FF);
	TextDrawSetShadow(PerfomenceTD[4], 0);
	TextDrawSetOutline(PerfomenceTD[4], 0);
	TextDrawFont(PerfomenceTD[4], 0);

	PerfomenceTD[5] = TextDrawCreate(504.333404, 131.424453, "usebox");
	TextDrawLetterSize(PerfomenceTD[5], 0.000000, 27.558891);
	TextDrawTextSize(PerfomenceTD[5], 498.000091, 0.000000);
	TextDrawAlignment(PerfomenceTD[5], 1);
	TextDrawColor(PerfomenceTD[5], 0);
	TextDrawUseBox(PerfomenceTD[5], true);
	TextDrawBoxColor(PerfomenceTD[5], 0x4981F5FF);
	TextDrawSetShadow(PerfomenceTD[5], 0);
	TextDrawSetOutline(PerfomenceTD[5], 0);
	TextDrawFont(PerfomenceTD[5], 0);

	PerfomenceTD[6] = TextDrawCreate(278.222076, 158.791152, "__Matrix Project");
	TextDrawLetterSize(PerfomenceTD[6], 0.283333, 1.450666);
	TextDrawAlignment(PerfomenceTD[6], 1);
	TextDrawColor(PerfomenceTD[6], -1);
	TextDrawSetShadow(PerfomenceTD[6], -1);
	TextDrawSetOutline(PerfomenceTD[6], 0);
	TextDrawBackgroundColor(PerfomenceTD[6], 51);
	TextDrawFont(PerfomenceTD[6], 2);
	TextDrawSetProportional(PerfomenceTD[6], 1);

	PerfomenceTD[7] = TextDrawCreate(143.111160, 215.551116, "1");
	TextDrawLetterSize(PerfomenceTD[7], 0.000000, 0.000000);
	TextDrawTextSize(PerfomenceTD[7], 67.111099, 69.191116);
	TextDrawAlignment(PerfomenceTD[7], 1);
	TextDrawColor(PerfomenceTD[7], -1);
	TextDrawUseBox(PerfomenceTD[7], true);
	TextDrawBoxColor(PerfomenceTD[7], 0);
	TextDrawSetShadow(PerfomenceTD[7], 0);
	TextDrawSetOutline(PerfomenceTD[7], 0);
	TextDrawFont(PerfomenceTD[7], 5);
	TextDrawSetSelectable(PerfomenceTD[7], true);
	TextDrawSetPreviewModel(PerfomenceTD[7], 10281);
	TextDrawSetPreviewRot(PerfomenceTD[7], 0.000000, 0.000000, 0.000000, 1.000000);

	PerfomenceTD[8] = TextDrawCreate(214.333190, 215.551116, "2");
	TextDrawLetterSize(PerfomenceTD[8], 0.000000, 0.000000);
	TextDrawTextSize(PerfomenceTD[8], 67.111099, 69.191116);
	TextDrawAlignment(PerfomenceTD[8], 1);
	TextDrawColor(PerfomenceTD[8], -1);
	TextDrawUseBox(PerfomenceTD[8], true);
	TextDrawBoxColor(PerfomenceTD[8], 0);
	TextDrawSetShadow(PerfomenceTD[8], 0);
	TextDrawSetOutline(PerfomenceTD[8], 0);
	TextDrawFont(PerfomenceTD[8], 5);
	TextDrawSetSelectable(PerfomenceTD[8], true);
	TextDrawSetPreviewModel(PerfomenceTD[8], 1943);
	TextDrawSetPreviewRot(PerfomenceTD[8], 0.000000, 0.000000, 0.000000, 1.000000);

	PerfomenceTD[9] = TextDrawCreate(284.666534, 215.551116, "3");
	TextDrawLetterSize(PerfomenceTD[9], 0.000000, 0.000000);
	TextDrawTextSize(PerfomenceTD[9], 67.111099, 69.191116);
	TextDrawAlignment(PerfomenceTD[9], 1);
	TextDrawColor(PerfomenceTD[9], -1);
	TextDrawUseBox(PerfomenceTD[9], true);
	TextDrawBoxColor(PerfomenceTD[9], 0);
	TextDrawSetShadow(PerfomenceTD[9], 0);
	TextDrawSetOutline(PerfomenceTD[9], 0);
	TextDrawFont(PerfomenceTD[9], 5);
	TextDrawSetSelectable(PerfomenceTD[9], true);
	TextDrawSetPreviewModel(PerfomenceTD[9], 2207);
	TextDrawSetPreviewRot(PerfomenceTD[9], 0.000000, 0.000000, 0.000000, 1.000000);

	PerfomenceTD[10] = TextDrawCreate(355.444641, 215.551116, "4");
	TextDrawLetterSize(PerfomenceTD[10], 0.000000, 0.000000);
	TextDrawTextSize(PerfomenceTD[10], 67.111099, 69.191116);
	TextDrawAlignment(PerfomenceTD[10], 1);
	TextDrawColor(PerfomenceTD[10], -1);
	TextDrawUseBox(PerfomenceTD[10], true);
	TextDrawBoxColor(PerfomenceTD[10], 0);
	TextDrawSetShadow(PerfomenceTD[10], 0);
	TextDrawSetOutline(PerfomenceTD[10], 0);
	TextDrawFont(PerfomenceTD[10], 5);
	TextDrawSetSelectable(PerfomenceTD[10], true);
	TextDrawSetPreviewModel(PerfomenceTD[10], 1077);
	TextDrawSetPreviewRot(PerfomenceTD[10], 0.000000, 0.000000, 90.000000, 1.000000);

	PerfomenceTD[11] = TextDrawCreate(425.333404, 215.551116, "5");
	TextDrawLetterSize(PerfomenceTD[11], 0.000000, 0.000000);
	TextDrawTextSize(PerfomenceTD[11], 67.111099, 69.191116);
	TextDrawAlignment(PerfomenceTD[11], 1);
	TextDrawColor(PerfomenceTD[11], -1);
	TextDrawUseBox(PerfomenceTD[11], true);
	TextDrawBoxColor(PerfomenceTD[11], 0);
	TextDrawSetShadow(PerfomenceTD[11], 0);
	TextDrawSetOutline(PerfomenceTD[11], 0);
	TextDrawFont(PerfomenceTD[11], 5);
	TextDrawSetSelectable(PerfomenceTD[11], true);
	TextDrawSetPreviewModel(PerfomenceTD[11], 1077);
	TextDrawSetPreviewRot(PerfomenceTD[11], 90.000000, 90.000000, 180.000000, 1.000000);

	PerfomenceTD[12] = TextDrawCreate(259.110992, 340.480010, "ExitKlik");
	TextDrawLetterSize(PerfomenceTD[12], 0.000000, 0.000000);
	TextDrawTextSize(PerfomenceTD[12], 123.111160, 26.382202);
	TextDrawAlignment(PerfomenceTD[12], 1);
	TextDrawColor(PerfomenceTD[12], 0x4981F5FF);
	TextDrawUseBox(PerfomenceTD[12], true);
	TextDrawBoxColor(PerfomenceTD[12], -256);
	TextDrawSetShadow(PerfomenceTD[12], 0);
	TextDrawSetOutline(PerfomenceTD[12], 0);
	TextDrawFont(PerfomenceTD[12], 5);
	TextDrawSetSelectable(PerfomenceTD[12], true);
	TextDrawSetPreviewModel(PerfomenceTD[12], 19377);
	TextDrawSetPreviewRot(PerfomenceTD[12], 0.000000, 90.000000, 0.000000, 0.000000);

	PerfomenceTD[13] = TextDrawCreate(303.111175, 344.959991, "Exit");
	TextDrawLetterSize(PerfomenceTD[13], 0.449999, 1.600000);
	TextDrawAlignment(PerfomenceTD[13], 1);
	TextDrawColor(PerfomenceTD[13], -1);
	TextDrawSetShadow(PerfomenceTD[13], 0);
	TextDrawSetOutline(PerfomenceTD[13], 1);
	TextDrawBackgroundColor(PerfomenceTD[13], 51);
	TextDrawFont(PerfomenceTD[13], 1);
	TextDrawSetProportional(PerfomenceTD[13], 1);
	//

	Artificial_Admin[0] = TextDrawCreate(474.666442, 273.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[0], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[0], 1);
	TextDrawColor(Artificial_Admin[0], -1);
	TextDrawSetShadow(Artificial_Admin[0], 0);
	TextDrawSetOutline(Artificial_Admin[0], 1);
	TextDrawBackgroundColor(Artificial_Admin[0], 51);
	TextDrawFont(Artificial_Admin[0], 2);
	TextDrawSetProportional(Artificial_Admin[0], 1);

	Artificial_Admin[1] = TextDrawCreate(474.666442, 280.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[1], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[1], 1);
	TextDrawColor(Artificial_Admin[1], -1);
	TextDrawSetShadow(Artificial_Admin[1], 0);
	TextDrawSetOutline(Artificial_Admin[1], 1);
	TextDrawBackgroundColor(Artificial_Admin[1], 51);
	TextDrawFont(Artificial_Admin[1], 2);
	TextDrawSetProportional(Artificial_Admin[1], 1);

	Artificial_Admin[2] = TextDrawCreate(474.666442, 287.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[2], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[2], 1);
	TextDrawColor(Artificial_Admin[2], -1);
	TextDrawSetShadow(Artificial_Admin[2], 0);
	TextDrawSetOutline(Artificial_Admin[2], 1);
	TextDrawBackgroundColor(Artificial_Admin[2], 51);
	TextDrawFont(Artificial_Admin[2], 2);
	TextDrawSetProportional(Artificial_Admin[2], 1);

	Artificial_Admin[3] = TextDrawCreate(474.666442, 294.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[3], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[3], 1);
	TextDrawColor(Artificial_Admin[3], -1);
	TextDrawSetShadow(Artificial_Admin[3], 0);
	TextDrawSetOutline(Artificial_Admin[3], 1);
	TextDrawBackgroundColor(Artificial_Admin[3], 51);
	TextDrawFont(Artificial_Admin[3], 2);
	TextDrawSetProportional(Artificial_Admin[3], 1);

	Artificial_Admin[4] = TextDrawCreate(474.666442, 301.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[4], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[4], 1);
	TextDrawColor(Artificial_Admin[4], -1);
	TextDrawSetShadow(Artificial_Admin[4], 0);
	TextDrawSetOutline(Artificial_Admin[4], 1);
	TextDrawBackgroundColor(Artificial_Admin[4], 51);
	TextDrawFont(Artificial_Admin[4], 2);
	TextDrawSetProportional(Artificial_Admin[4], 1);

	Artificial_Admin[5] = TextDrawCreate(474.666442, 308.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[5], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[5], 1);
	TextDrawColor(Artificial_Admin[5], -1);
	TextDrawSetShadow(Artificial_Admin[5], 0);
	TextDrawSetOutline(Artificial_Admin[5], 1);
	TextDrawBackgroundColor(Artificial_Admin[5], 51);
	TextDrawFont(Artificial_Admin[5], 2);
	TextDrawSetProportional(Artificial_Admin[5], 1);

	Artificial_Admin[6] = TextDrawCreate(474.666442, 315.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[6], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[6], 1);
	TextDrawColor(Artificial_Admin[6], -1);
	TextDrawSetShadow(Artificial_Admin[6], 0);
	TextDrawSetOutline(Artificial_Admin[6], 1);
	TextDrawBackgroundColor(Artificial_Admin[6], 51);
	TextDrawFont(Artificial_Admin[6], 2);
	TextDrawSetProportional(Artificial_Admin[6], 1);

	Artificial_Admin[17] = TextDrawCreate(474.666442, 322.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[17], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[17], 1);
	TextDrawColor(Artificial_Admin[17], -1);
	TextDrawSetShadow(Artificial_Admin[17], 0);
	TextDrawSetOutline(Artificial_Admin[17], 1);
	TextDrawBackgroundColor(Artificial_Admin[17], 51);
	TextDrawFont(Artificial_Admin[17], 2);
	TextDrawSetProportional(Artificial_Admin[17], 1);

	Artificial_Admin[7] = TextDrawCreate(474.666442, 329.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[7], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[7], 1);
	TextDrawColor(Artificial_Admin[7], -1);
	TextDrawSetShadow(Artificial_Admin[7], 0);
	TextDrawSetOutline(Artificial_Admin[7], 1);
	TextDrawBackgroundColor(Artificial_Admin[7], 51);
	TextDrawFont(Artificial_Admin[7], 2);
	TextDrawSetProportional(Artificial_Admin[7], 1);

	Artificial_Admin[8] = TextDrawCreate(474.666442, 336.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[8], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[8], 1);
	TextDrawColor(Artificial_Admin[8], -1);
	TextDrawSetShadow(Artificial_Admin[8], 0);
	TextDrawSetOutline(Artificial_Admin[8], 1);
	TextDrawBackgroundColor(Artificial_Admin[8], 51);
	TextDrawFont(Artificial_Admin[8], 2);
	TextDrawSetProportional(Artificial_Admin[8], 1);

	Artificial_Admin[9] = TextDrawCreate(474.666442, 343.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[9], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[9], 1);
	TextDrawColor(Artificial_Admin[9], -1);
	TextDrawSetShadow(Artificial_Admin[9], 0);
	TextDrawSetOutline(Artificial_Admin[9], 1);
	TextDrawBackgroundColor(Artificial_Admin[9], 51);
	TextDrawFont(Artificial_Admin[9], 2);
	TextDrawSetProportional(Artificial_Admin[9], 1);

	Artificial_Admin[10] = TextDrawCreate(474.666442, 350.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[10], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[10], 1);
	TextDrawColor(Artificial_Admin[10], -1);
	TextDrawSetShadow(Artificial_Admin[10], 0);
	TextDrawSetOutline(Artificial_Admin[10], 1);
	TextDrawBackgroundColor(Artificial_Admin[10], 51);
	TextDrawFont(Artificial_Admin[10], 2);
	TextDrawSetProportional(Artificial_Admin[10], 1);

	Artificial_Admin[11] = TextDrawCreate(474.666442, 357.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[11], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[11], 1);
	TextDrawColor(Artificial_Admin[11], -1);
	TextDrawSetShadow(Artificial_Admin[11], 0);
	TextDrawSetOutline(Artificial_Admin[11], 1);
	TextDrawBackgroundColor(Artificial_Admin[11], 51);
	TextDrawFont(Artificial_Admin[11], 2);
	TextDrawSetProportional(Artificial_Admin[11], 1);

	Artificial_Admin[12] = TextDrawCreate(474.666442, 364.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[12], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[12], 1);
	TextDrawColor(Artificial_Admin[12], -1);
	TextDrawSetShadow(Artificial_Admin[12], 0);
	TextDrawSetOutline(Artificial_Admin[12], 1);
	TextDrawBackgroundColor(Artificial_Admin[12], 51);
	TextDrawFont(Artificial_Admin[12], 2);
	TextDrawSetProportional(Artificial_Admin[12], 1);

	Artificial_Admin[13] = TextDrawCreate(474.666442, 371.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[13], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[13], 1);
	TextDrawColor(Artificial_Admin[13], -1);
	TextDrawSetShadow(Artificial_Admin[13], 0);
	TextDrawSetOutline(Artificial_Admin[13], 1);
	TextDrawBackgroundColor(Artificial_Admin[13], 51);
	TextDrawFont(Artificial_Admin[13], 2);
	TextDrawSetProportional(Artificial_Admin[13], 1);

	Artificial_Admin[14] = TextDrawCreate(474.666442, 378.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[14], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[14], 1);
	TextDrawColor(Artificial_Admin[14], -1);
	TextDrawSetShadow(Artificial_Admin[14], 0);
	TextDrawSetOutline(Artificial_Admin[14], 1);
	TextDrawBackgroundColor(Artificial_Admin[14], 51);
	TextDrawFont(Artificial_Admin[14], 2);
	TextDrawSetProportional(Artificial_Admin[14], 1);

	Artificial_Admin[15] = TextDrawCreate(474.666442, 385.773406, "-1");
	TextDrawLetterSize(Artificial_Admin[15], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[15], 1);
	TextDrawColor(Artificial_Admin[15], -1);
	TextDrawSetShadow(Artificial_Admin[15], 0);
	TextDrawSetOutline(Artificial_Admin[15], 1);
	TextDrawBackgroundColor(Artificial_Admin[15], 51);
	TextDrawFont(Artificial_Admin[15], 2);
	TextDrawSetProportional(Artificial_Admin[15], 1);

	Artificial_Admin[16] = TextDrawCreate(474.666442, 392.473406, "-1");
	TextDrawLetterSize(Artificial_Admin[16], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[16], 1);
	TextDrawColor(Artificial_Admin[16], -1);
	TextDrawSetShadow(Artificial_Admin[16], 0);
	TextDrawSetOutline(Artificial_Admin[16], 1);
	TextDrawBackgroundColor(Artificial_Admin[16], 51);
	TextDrawFont(Artificial_Admin[16], 2);
	TextDrawSetProportional(Artificial_Admin[16], 1);

	Artificial_Admin[18] = TextDrawCreate(474.666442, 399.473406, "-1");
	TextDrawLetterSize(Artificial_Admin[18], 0.126888, 1.236622);
	TextDrawAlignment(Artificial_Admin[18], 1);
	TextDrawColor(Artificial_Admin[18], -1);
	TextDrawSetShadow(Artificial_Admin[18], 0);
	TextDrawSetOutline(Artificial_Admin[18], 1);
	TextDrawBackgroundColor(Artificial_Admin[18], 51);
	TextDrawFont(Artificial_Admin[18], 2);
	TextDrawSetProportional(Artificial_Admin[18], 1);
	////////////////////////////////////////ЛОГОТИП
	logo_tab_TD[0] = TextDrawCreate(553.8541, 8.7666, "LD_SPAC:white"); // пусто
	TextDrawTextSize(logo_tab_TD[0], 65.0000, 14.4599);
	TextDrawAlignment(logo_tab_TD[0], 1);
	TextDrawColor(logo_tab_TD[0], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[0], 255);
	TextDrawFont(logo_tab_TD[0], 4);
	TextDrawSetProportional(logo_tab_TD[0], 0);
	TextDrawSetShadow(logo_tab_TD[0], 0);

	logo_tab_TD[1] = TextDrawCreate(545.9815, 5.6499, "/"); // пусто
	TextDrawLetterSize(logo_tab_TD[1], 0.5480, 1.8975);
	TextDrawAlignment(logo_tab_TD[1], 1);
	TextDrawColor(logo_tab_TD[1], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[1], 255);
	TextDrawFont(logo_tab_TD[1], 1);
	TextDrawSetProportional(logo_tab_TD[1], 1);
	TextDrawSetShadow(logo_tab_TD[1], 0);

	logo_tab_TD[2] = TextDrawCreate(548.4809, 5.6499, "/"); // пусто
	TextDrawLetterSize(logo_tab_TD[2], 0.5480, 1.8975);
	TextDrawAlignment(logo_tab_TD[2], 1);
	TextDrawColor(logo_tab_TD[2], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[2], 255);
	TextDrawFont(logo_tab_TD[2], 1);
	TextDrawSetProportional(logo_tab_TD[2], 1);
	TextDrawSetShadow(logo_tab_TD[2], 0);

	logo_tab_TD[3] = TextDrawCreate(551.0803, 5.6499, "/"); // пусто
	TextDrawLetterSize(logo_tab_TD[3], 0.5480, 1.8975);
	TextDrawAlignment(logo_tab_TD[3], 1);
	TextDrawColor(logo_tab_TD[3], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[3], 255);
	TextDrawFont(logo_tab_TD[3], 1);
	TextDrawSetProportional(logo_tab_TD[3], 1);
	TextDrawSetShadow(logo_tab_TD[3], 0);

	logo_tab_TD[4] = TextDrawCreate(613.8799, 5.6499, "/"); // пусто
	TextDrawLetterSize(logo_tab_TD[4], 0.5480, 1.8975);
	TextDrawAlignment(logo_tab_TD[4], 1);
	TextDrawColor(logo_tab_TD[4], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[4], 255);
	TextDrawFont(logo_tab_TD[4], 1);
	TextDrawSetProportional(logo_tab_TD[4], 1);
	TextDrawSetShadow(logo_tab_TD[4], 0);

	logo_tab_TD[5] = TextDrawCreate(616.3479, 5.4833, "/"); // пусто
	TextDrawLetterSize(logo_tab_TD[5], 0.5480, 1.8975);
	TextDrawAlignment(logo_tab_TD[5], 1);
	TextDrawColor(logo_tab_TD[5], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[5], 255);
	TextDrawFont(logo_tab_TD[5], 1);
	TextDrawSetProportional(logo_tab_TD[5], 1);
	TextDrawSetShadow(logo_tab_TD[5], 0);

	logo_tab_TD[6] = TextDrawCreate(618.7787, 5.6499, "/"); // пусто
	TextDrawLetterSize(logo_tab_TD[6], 0.5480, 1.8975);
	TextDrawAlignment(logo_tab_TD[6], 1);
	TextDrawColor(logo_tab_TD[6], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[6], 255);
	TextDrawFont(logo_tab_TD[6], 1);
	TextDrawSetProportional(logo_tab_TD[6], 1);
	TextDrawSetShadow(logo_tab_TD[6], 0);

	logo_tab_TD[7] = TextDrawCreate(558.7506, 17.8999, "I"); // пусто
	TextDrawLetterSize(logo_tab_TD[7], 0.2772, 1.2558);
	TextDrawTextSize(logo_tab_TD[7], -88.0000, 0.0000);
	TextDrawAlignment(logo_tab_TD[7], 1);
	TextDrawColor(logo_tab_TD[7], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[7], 255);
	TextDrawFont(logo_tab_TD[7], 1);
	TextDrawSetProportional(logo_tab_TD[7], 1);
	TextDrawSetShadow(logo_tab_TD[7], 0);

	logo_tab_TD[8] = TextDrawCreate(608.4130, 17.8999, "I"); // пусто
	TextDrawLetterSize(logo_tab_TD[8], 0.2772, 1.2558);
	TextDrawTextSize(logo_tab_TD[8], -88.0000, 0.0000);
	TextDrawAlignment(logo_tab_TD[8], 1);
	TextDrawColor(logo_tab_TD[8], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[8], 255);
	TextDrawFont(logo_tab_TD[8], 1);
	TextDrawSetProportional(logo_tab_TD[8], 1);
	TextDrawSetShadow(logo_tab_TD[8], 0);

	logo_tab_TD[9] = TextDrawCreate(555.9967, 27.4333, "LD_SPAC:white"); // пусто
	TextDrawTextSize(logo_tab_TD[9], 59.0000, 12.0000);
	TextDrawAlignment(logo_tab_TD[9], 1);
	TextDrawColor(logo_tab_TD[9], 606348543);
	TextDrawBackgroundColor(logo_tab_TD[9], 255);
	TextDrawFont(logo_tab_TD[9], 4);
	TextDrawSetProportional(logo_tab_TD[9], 0);
	TextDrawSetShadow(logo_tab_TD[9], 0);

	logo_tab_TD[10] = TextDrawCreate(586.5739, 11.4333, "MATRIX_ROLEPLAY"); // пусто
	TextDrawLetterSize(logo_tab_TD[10], 0.1624, 0.8241);
	TextDrawAlignment(logo_tab_TD[10], 2);
	TextDrawColor(logo_tab_TD[10], -2139062017);
	TextDrawBackgroundColor(logo_tab_TD[10], 255);
	TextDrawFont(logo_tab_TD[10], 2);
	TextDrawSetProportional(logo_tab_TD[10], 1);
	TextDrawSetShadow(logo_tab_TD[10], 0);

	logo_tab_TD[11] = TextDrawCreate(585.7741, 29.5166, "gtasamrp.ru"); // пусто
	TextDrawLetterSize(logo_tab_TD[11], 0.1404, 0.7191);
	TextDrawAlignment(logo_tab_TD[11], 2);
	TextDrawColor(logo_tab_TD[11], -2139062017);
	TextDrawBackgroundColor(logo_tab_TD[11], 255);
	TextDrawFont(logo_tab_TD[11], 2);
	TextDrawSetProportional(logo_tab_TD[11], 1);
	TextDrawSetShadow(logo_tab_TD[11], 0);

	//
	StopAnimation = TextDrawCreate(401.00, 419.00, "~w~Press ~y~ENTER~w~ to stop animation");
	TextDrawBackgroundColor(StopAnimation, 0x000000FF);
	TextDrawFont(StopAnimation, 2);
	TextDrawSetOutline(StopAnimation, 1);
	TextDrawLetterSize(StopAnimation, 0.300000, 1.250000);
	TextDrawColor(StopAnimation, 0x0095B6FF);
	TextDrawSetProportional(StopAnimation, 1);

	TextDrawCreate(-100,-100,".");//Ѕаговый текстдрав
	TirBGDraw = TextDrawCreate(518,341,"-");
	TextDrawUseBox(TirBGDraw,1);
	TextDrawColor(TirBGDraw,0xFFFFFFFF);//
	TextDrawBackgroundColor(TirBGDraw,0x00000000);
	TextDrawBoxColor(TirBGDraw,0x00000055);
	TextDrawTextSize(TirBGDraw,105.0,40.0);
	TextDrawAlignment(TirBGDraw,2);
	TextDrawLetterSize(TirBGDraw,0.00,5.09);
	TextDrawSetOutline(TirBGDraw,1);
	TextDrawFont(TirBGDraw,0);
	//меню игрока
	/*	IconsMenu[0] = TextDrawCreate(213.000000, 91.000000, "Icons1");
	TextDrawBackgroundColor(IconsMenu[0], 0xFFFFFF00);
	TextDrawFont(IconsMenu[0], 5);
	TextDrawLetterSize(IconsMenu[0], 0.500000, 1.000000);
	TextDrawColor(IconsMenu[0], -157666329750);
	TextDrawTextSize(IconsMenu[0], 228.000000, 229.000000);
	TextDrawSetPreviewModel(IconsMenu[0], 1953);
	TextDrawSetPreviewRot(IconsMenu[0], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(IconsMenu[0], 0);

	IconsMenu[1] = TextDrawCreate(302.000000, 176.000000, "Icons2");
	TextDrawBackgroundColor(IconsMenu[1], 0xFFFFFF00);
	TextDrawFont(IconsMenu[1], 5);
	TextDrawLetterSize(IconsMenu[1], 0.500000, 1.000000);
	TextDrawColor(IconsMenu[1], -157666329750);
	TextDrawTextSize(IconsMenu[1], 56.000000, 54.000000);
	TextDrawSetPreviewModel(IconsMenu[1], 1953);
	TextDrawSetPreviewRot(IconsMenu[1], 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(IconsMenu[1], 0);

	IconsMenu[2] = TextDrawCreate(306.000000, 129.000000, "Q");
	TextDrawBackgroundColor(IconsMenu[2], 0);
	TextDrawFont(IconsMenu[2], 5);
	TextDrawLetterSize(IconsMenu[2], 0.500000, 1.000000);
	TextDrawTextSize(IconsMenu[2], 46.000000, 42.000000);
	TextDrawSetPreviewModel(IconsMenu[2], 1314);
	TextDrawSetPreviewRot(IconsMenu[2], -10.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(IconsMenu[2], 1);

	IconsMenu[3] = TextDrawCreate(344.000000, 162.000000, "Q");
	TextDrawBackgroundColor(IconsMenu[3], 0);
	TextDrawFont(IconsMenu[3], 5);
	TextDrawLetterSize(IconsMenu[3], 0.500000, 1.000000);
	TextDrawTextSize(IconsMenu[3], 62.000000, 69.000000);
	TextDrawSetPreviewModel(IconsMenu[3], 1212);
	TextDrawSetPreviewRot(IconsMenu[3], 90.000000, -20.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(IconsMenu[3], 1);

	IconsMenu[4] = TextDrawCreate(255.000000, 175.000000, "Q");
	TextDrawBackgroundColor(IconsMenu[4], 0);
	TextDrawFont(IconsMenu[4], 5);
	TextDrawLetterSize(IconsMenu[4], 0.500000, 1.000000);
	TextDrawTextSize(IconsMenu[4], 52.000000, 49.000000);
	TextDrawSetPreviewModel(IconsMenu[4], 1581);
	TextDrawSetPreviewRot(IconsMenu[4], 0.000000, 0.000000, 195.000000, 1.000000);
	TextDrawSetSelectable(IconsMenu[4], 1);

	IconsMenu[5] = TextDrawCreate(310.000000, 235.000000, "Q");
	TextDrawBackgroundColor(IconsMenu[5], 0);
	TextDrawFont(IconsMenu[5], 5);
	TextDrawLetterSize(IconsMenu[5], 0.500000, 1.000000);
	TextDrawTextSize(IconsMenu[5], 38.000000, 40.000000);
	TextDrawSetPreviewModel(IconsMenu[5], 1253);
	TextDrawSetPreviewRot(IconsMenu[5], 10.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(IconsMenu[5], 1);

	IconsMenu[6] = TextDrawCreate(331.000000, 164.000000, "Hi");
	TextDrawAlignment(IconsMenu[6], 2);
	TextDrawBackgroundColor(IconsMenu[6], 255);
	TextDrawFont(IconsMenu[6], 1);
	TextDrawLetterSize(IconsMenu[6], 0.280000, 1.000000);
	TextDrawColor(IconsMenu[6], -1);
	TextDrawSetOutline(IconsMenu[6], 1);
	TextDrawSetProportional(IconsMenu[6], 0);
	TextDrawSetSelectable(IconsMenu[6], 0);

	IconsMenu[7] = TextDrawCreate(376.000000, 211.000000, "Pay");
	TextDrawAlignment(IconsMenu[7], 2);
	TextDrawBackgroundColor(IconsMenu[7], 255);
	TextDrawFont(IconsMenu[7], 1);
	TextDrawLetterSize(IconsMenu[7], 0.280000, 1.000000);
	TextDrawColor(IconsMenu[7], -1);
	TextDrawSetOutline(IconsMenu[7], 1);
	TextDrawSetProportional(IconsMenu[7], 0);
	TextDrawSetSelectable(IconsMenu[7], 0);

	IconsMenu[8] = TextDrawCreate(282.000000, 211.000000, "Dock");
	TextDrawAlignment(IconsMenu[8], 2);
	TextDrawBackgroundColor(IconsMenu[8], 255);
	TextDrawFont(IconsMenu[8], 1);
	TextDrawLetterSize(IconsMenu[8], 0.260000, 1.000000);
	TextDrawColor(IconsMenu[8], -1);
	TextDrawSetOutline(IconsMenu[8], 1);
	TextDrawSetProportional(IconsMenu[8], 1);
	TextDrawSetSelectable(IconsMenu[8], 0);

	IconsMenu[9] = TextDrawCreate(328.000000, 228.000000, "Say");
	TextDrawAlignment(IconsMenu[9], 2);
	TextDrawBackgroundColor(IconsMenu[9], 255);
	TextDrawFont(IconsMenu[9], 1);
	TextDrawLetterSize(IconsMenu[9], 0.260000, 1.000000);
	TextDrawColor(IconsMenu[9], -1);
	TextDrawSetOutline(IconsMenu[9], 1);
	TextDrawSetProportional(IconsMenu[9], 0);
	TextDrawSetSelectable(IconsMenu[9], 0);

	IconsMenu[10] = TextDrawCreate(330.000000, 195.000000, ""NAMEICRP"");
	TextDrawAlignment(IconsMenu[10], 2);
	TextDrawBackgroundColor(IconsMenu[10], 255);
	TextDrawFont(IconsMenu[10], 1);
	TextDrawLetterSize(IconsMenu[10], 0.200000, 0.800000);
	TextDrawColor(IconsMenu[10], -1);
	TextDrawSetOutline(IconsMenu[10], 1);
	TextDrawSetProportional(IconsMenu[10], 1);
	TextDrawSetSelectable(IconsMenu[10], 0);

	IconsMenu[11] = TextDrawCreate(330.000000, 201.000000, "Role Play");
	TextDrawAlignment(IconsMenu[11], 2);
	TextDrawBackgroundColor(IconsMenu[11], 255);
	TextDrawFont(IconsMenu[11], 1);
	TextDrawLetterSize(IconsMenu[11], 0.160000, 0.800000);
	TextDrawColor(IconsMenu[11], -1);
	TextDrawSetOutline(IconsMenu[11], 1);
	TextDrawSetProportional(IconsMenu[11], 1);
	TextDrawSetSelectable(IconsMenu[11], 0);*/

	TirDraw[0] = TextDrawCreate(499, 300, "-");
	TextDrawFont(TirDraw[0], 1);
	TextDrawLetterSize(TirDraw[0], 3.5, 8.7);
	TextDrawColor(TirDraw[0], 0xFFFFFFFF);
	TextDrawBackgroundColor(TirDraw[0],0xAFAFAFFF);
	TextDrawSetOutline(TirDraw[0], 1);

	TirDraw[1] = TextDrawCreate(500, 315, "-");
	TextDrawFont(TirDraw[1], 1);
	TextDrawLetterSize(TirDraw[1], 1.47, 8.7);
	TextDrawColor(TirDraw[1], 0xFFFFFFFF);
	TextDrawBackgroundColor(TirDraw[1],0xAFAFAFFF);
	TextDrawSetOutline(TirDraw[1], 1);

	TirDraw[2] = TextDrawCreate(520, 315, "-");
	TextDrawFont(TirDraw[2], 1);
	TextDrawLetterSize(TirDraw[2], 1.47, 8.7);
	TextDrawColor(TirDraw[2], 0xFFFFFFFF);
	TextDrawBackgroundColor(TirDraw[2],0xAFAFAFFF);
	TextDrawSetOutline(TirDraw[2], 1);

	TirDraw[3] = TextDrawCreate(500, 330, "-");
	TextDrawFont(TirDraw[3], 1);
	TextDrawLetterSize(TirDraw[3], 1.47, 8.7);
	TextDrawColor(TirDraw[3], 0xFFFFFFFF);
	TextDrawBackgroundColor(TirDraw[3],0xAFAFAFFF);
	TextDrawSetOutline(TirDraw[3], 1);

	TirDraw[4] = TextDrawCreate(520, 330, "-");
	TextDrawFont(TirDraw[4], 1);
	TextDrawLetterSize(TirDraw[4], 1.47, 8.7);
	TextDrawColor(TirDraw[4], 0xFFFFFFFF);
	TextDrawBackgroundColor(TirDraw[4],0xAFAFAFFF);
	TextDrawSetOutline(TirDraw[4], 1);

	HInfoBG = TextDrawCreate(390.000000, 171.000000, "New Textdraw");
	TextDrawBackgroundColor(HInfoBG, 255);
	TextDrawFont(HInfoBG, 1);
	TextDrawLetterSize(HInfoBG, 0.000000, 17.300001);
	TextDrawColor(HInfoBG, -1);
	TextDrawSetOutline(HInfoBG, 0);
	TextDrawSetProportional(HInfoBG, 1);
	TextDrawSetShadow(HInfoBG, 1);
	TextDrawUseBox(HInfoBG, 1);
	TextDrawBoxColor(HInfoBG, 85);
	TextDrawTextSize(HInfoBG, 602.000000, 1.000000);

	StatusTextDraw[0] = TextDrawCreate(139.000000, 141.000000, "GrandBG");
	TextDrawBackgroundColor(StatusTextDraw[0], 255);
	TextDrawFont(StatusTextDraw[0], 1);
	TextDrawLetterSize(StatusTextDraw[0], 0.000000, 12.900001);
	TextDrawColor(StatusTextDraw[0], -1);
	TextDrawSetOutline(StatusTextDraw[0], 1);
	TextDrawSetProportional(StatusTextDraw[0], 1);
	TextDrawUseBox(StatusTextDraw[0], 1);
	TextDrawBoxColor(StatusTextDraw[0], 48);
	TextDrawTextSize(StatusTextDraw[0], 13.000000, 130.000000);
	TextDrawSetSelectable(StatusTextDraw[0], 0);

	StatusTextDraw[1] = TextDrawCreate(136.000000, 144.000000, "HEALTH");
	TextDrawBackgroundColor(StatusTextDraw[1], -6749953);
	TextDrawFont(StatusTextDraw[1], 2);
	TextDrawLetterSize(StatusTextDraw[1], 0.000000, 2.500000);
	TextDrawColor(StatusTextDraw[1], 0xFF6347FF);
	TextDrawSetOutline(StatusTextDraw[1], 0);
	TextDrawSetProportional(StatusTextDraw[1], 1);
	TextDrawSetShadow(StatusTextDraw[1], 0);
	TextDrawUseBox(StatusTextDraw[1], 1);
	TextDrawBoxColor(StatusTextDraw[1], 255);
	TextDrawTextSize(StatusTextDraw[1], 16.000000, 129.000000);
	TextDrawSetSelectable(StatusTextDraw[1], 0);

	StatusTextDraw[2] = TextDrawCreate(134.000000, 147.000000, "HEALTHBG");
	TextDrawBackgroundColor(StatusTextDraw[2], 255);
	TextDrawFont(StatusTextDraw[2], 1);
	TextDrawLetterSize(StatusTextDraw[2], 0.000000, 1.900001);
	TextDrawColor(StatusTextDraw[2], -1);
	TextDrawSetOutline(StatusTextDraw[2], 0);
	TextDrawSetProportional(StatusTextDraw[2], 1);
	TextDrawSetShadow(StatusTextDraw[2], 1);
	TextDrawUseBox(StatusTextDraw[2], 1);
	TextDrawBoxColor(StatusTextDraw[2], -16777131);
	TextDrawTextSize(StatusTextDraw[2], 18.000000, 130.000000);
	TextDrawSetSelectable(StatusTextDraw[2], 0);

	StatusTextDraw[3] = TextDrawCreate(136.000000, 174.000000, "Satiety");
	TextDrawBackgroundColor(StatusTextDraw[3], -6750123);
	TextDrawFont(StatusTextDraw[3], 2);
	TextDrawLetterSize(StatusTextDraw[3], 0.000000, 2.500000);
	TextDrawColor(StatusTextDraw[3], -6750123);
	TextDrawSetOutline(StatusTextDraw[3], 0);
	TextDrawSetProportional(StatusTextDraw[3], 1);
	TextDrawSetShadow(StatusTextDraw[3], 0);
	TextDrawUseBox(StatusTextDraw[3], 1);
	TextDrawBoxColor(StatusTextDraw[3], 255);
	TextDrawTextSize(StatusTextDraw[3], 16.000000, 129.000000);
	TextDrawSetSelectable(StatusTextDraw[3], 0);

	StatusTextDraw[4] = TextDrawCreate(134.000000, 177.000000, "SatietyBG");
	TextDrawBackgroundColor(StatusTextDraw[4], 255);
	TextDrawFont(StatusTextDraw[4], 1);
	TextDrawLetterSize(StatusTextDraw[4], 0.000000, 1.900001);
	TextDrawColor(StatusTextDraw[4], -1);
	TextDrawSetOutline(StatusTextDraw[4], 0);
	TextDrawSetProportional(StatusTextDraw[4], 1);
	TextDrawSetShadow(StatusTextDraw[4], 1);
	TextDrawUseBox(StatusTextDraw[4], 1);
	TextDrawBoxColor(StatusTextDraw[4], -6750123);
	TextDrawTextSize(StatusTextDraw[4], 18.000000, 130.000000);
	TextDrawSetSelectable(StatusTextDraw[4], 0);

	StatusTextDraw[5] = TextDrawCreate(136.000000, 204.000000, "DRUGS");
	TextDrawBackgroundColor(StatusTextDraw[5], -6749953);
	TextDrawFont(StatusTextDraw[5], 2);
	TextDrawLetterSize(StatusTextDraw[5], 0.000000, 2.500000);
	TextDrawColor(StatusTextDraw[5], 1616114517);
	TextDrawSetOutline(StatusTextDraw[5], 0);
	TextDrawSetProportional(StatusTextDraw[5], 1);
	TextDrawSetShadow(StatusTextDraw[5], 0);
	TextDrawUseBox(StatusTextDraw[5], 1);
	TextDrawBoxColor(StatusTextDraw[5], 255);
	TextDrawTextSize(StatusTextDraw[5], 16.000000, 129.000000);
	TextDrawSetSelectable(StatusTextDraw[5], 0);

	StatusTextDraw[6] = TextDrawCreate(134.000000, 207.000000, "DRUGSBG");
	TextDrawBackgroundColor(StatusTextDraw[6], 255);
	TextDrawFont(StatusTextDraw[6], 1);
	TextDrawLetterSize(StatusTextDraw[6], 0.000000, 1.900001);
	TextDrawColor(StatusTextDraw[6], -1);
	TextDrawSetOutline(StatusTextDraw[6], 0);
	TextDrawSetProportional(StatusTextDraw[6], 1);
	TextDrawSetShadow(StatusTextDraw[6], 1);
	TextDrawUseBox(StatusTextDraw[6], 1);
	TextDrawBoxColor(StatusTextDraw[6], 1616114517);
	TextDrawTextSize(StatusTextDraw[6], 18.000000, 130.000000);
	TextDrawSetSelectable(StatusTextDraw[6], 0);

	StatusTextDraw[7] = TextDrawCreate(136.000000, 234.000000, "ALCOHOL");
	TextDrawBackgroundColor(StatusTextDraw[7], -6749953);
	TextDrawFont(StatusTextDraw[7], 2);
	TextDrawLetterSize(StatusTextDraw[7], 0.000000, 2.500000);
	TextDrawColor(StatusTextDraw[7], -1347440811);
	TextDrawSetOutline(StatusTextDraw[7], 0);
	TextDrawSetProportional(StatusTextDraw[7], 1);
	TextDrawSetShadow(StatusTextDraw[7], 0);
	TextDrawUseBox(StatusTextDraw[7], 1);
	TextDrawBoxColor(StatusTextDraw[7], 255);
	TextDrawTextSize(StatusTextDraw[7], 16.000000, 129.000000);
	TextDrawSetSelectable(StatusTextDraw[7], 0);

	StatusTextDraw[8] = TextDrawCreate(134.000000, 237.000000, "ALCOHOLBG");
	TextDrawBackgroundColor(StatusTextDraw[8], 255);
	TextDrawFont(StatusTextDraw[8], 1);
	TextDrawLetterSize(StatusTextDraw[8], 0.000000, 1.900001);
	TextDrawColor(StatusTextDraw[8], -1);
	TextDrawSetOutline(StatusTextDraw[8], 0);
	TextDrawSetProportional(StatusTextDraw[8], 1);
	TextDrawSetShadow(StatusTextDraw[8], 1);
	TextDrawUseBox(StatusTextDraw[8], 1);
	TextDrawBoxColor(StatusTextDraw[8], -1347440811);
	TextDrawTextSize(StatusTextDraw[8], 18.000000, 130.000000);
	TextDrawSetSelectable(StatusTextDraw[8], 0);

	StatusTextDraw[9] = TextDrawCreate(49.000000, 152.000000, "Health");
	TextDrawBackgroundColor(StatusTextDraw[9], 255);
	TextDrawFont(StatusTextDraw[9], 2);
	TextDrawLetterSize(StatusTextDraw[9], 0.340000, 1.000000);
	TextDrawColor(StatusTextDraw[9], -1);
	TextDrawSetOutline(StatusTextDraw[9], 1);
	TextDrawSetProportional(StatusTextDraw[9], 1);
	TextDrawSetSelectable(StatusTextDraw[9], 0);

	StatusTextDraw[10] = TextDrawCreate(47.000000, 181.000000, "Satiety");
	TextDrawBackgroundColor(StatusTextDraw[10], 255);
	TextDrawFont(StatusTextDraw[10], 2);
	TextDrawLetterSize(StatusTextDraw[10], 0.340000, 1.000000);
	TextDrawColor(StatusTextDraw[10], -1);
	TextDrawSetOutline(StatusTextDraw[10], 1);
	TextDrawSetProportional(StatusTextDraw[10], 1);
	TextDrawSetSelectable(StatusTextDraw[10], 0);

	StatusTextDraw[11] = TextDrawCreate(56.000000, 210.000000, "Drugs");
	TextDrawBackgroundColor(StatusTextDraw[11], 255);
	TextDrawFont(StatusTextDraw[11], 2);
	TextDrawLetterSize(StatusTextDraw[11], 0.340000, 1.000000);
	TextDrawColor(StatusTextDraw[11], -1);
	TextDrawSetOutline(StatusTextDraw[11], 1);
	TextDrawSetProportional(StatusTextDraw[11], 1);
	TextDrawSetSelectable(StatusTextDraw[11], 0);

	StatusTextDraw[12] = TextDrawCreate(46.000000, 241.000000, "Alcohol");
	TextDrawBackgroundColor(StatusTextDraw[12], 255);
	TextDrawFont(StatusTextDraw[12], 2);
	TextDrawLetterSize(StatusTextDraw[12], 0.340000, 1.000000);
	TextDrawColor(StatusTextDraw[12], -1);
	TextDrawSetOutline(StatusTextDraw[12], 1);
	TextDrawSetProportional(StatusTextDraw[12], 1);
	TextDrawSetSelectable(StatusTextDraw[12], 0);

	HInfoEnterDraw = TextDrawCreate(497.000000, 312.000000, "PRESS ~g~~k~~SNEAK_ABOUT~~w~ TO ENTER");
	TextDrawAlignment(HInfoEnterDraw, 2);
	TextDrawBackgroundColor(HInfoEnterDraw, 255);
	TextDrawFont(HInfoEnterDraw, 3);
	TextDrawLetterSize(HInfoEnterDraw, 0.500000, 1.000000);
	TextDrawColor(HInfoEnterDraw, -1);
	TextDrawSetOutline(HInfoEnterDraw, 0);
	TextDrawSetProportional(HInfoEnterDraw, 1);
	TextDrawSetShadow(HInfoEnterDraw, 1);

	HInfoBuyDraw = TextDrawCreate(497.000000, 312.000000, "PRESS ~g~~k~~CONVERSATION_NO~~w~ TO BUY");
	TextDrawAlignment(HInfoBuyDraw, 2);
	TextDrawBackgroundColor(HInfoBuyDraw, 255);
	TextDrawFont(HInfoBuyDraw, 3);
	TextDrawLetterSize(HInfoBuyDraw, 0.500000, 1.000000);
	TextDrawColor(HInfoBuyDraw, -1);
	TextDrawSetOutline(HInfoBuyDraw, 0);
	TextDrawSetProportional(HInfoBuyDraw, 1);
	TextDrawSetShadow(HInfoBuyDraw, 1);

	BandDrawBG[0] = TextDrawCreate(203.000000, 110.000000, "Band1");
	TextDrawBackgroundColor(BandDrawBG[0], 255);
	TextDrawFont(BandDrawBG[0], 1);
	TextDrawLetterSize(BandDrawBG[0], -0.000000, 1.33);
	TextDrawColor(BandDrawBG[0], -1);
	TextDrawSetOutline(BandDrawBG[0], 0);
	TextDrawSetProportional(BandDrawBG[0], 1);
	TextDrawSetShadow(BandDrawBG[0], 1);
	TextDrawUseBox(BandDrawBG[0], 1);
	TextDrawBoxColor(BandDrawBG[0], 0x00000099);
	TextDrawTextSize(BandDrawBG[0], 445.000000, 0.000000);

	BandDrawBG[1] = TextDrawCreate(205.000000, 112.000000, "Band2");
	TextDrawBackgroundColor(BandDrawBG[1], 255);
	TextDrawFont(BandDrawBG[1], 1);
	TextDrawLetterSize(BandDrawBG[1], -0.000000, 0.899999);
	TextDrawColor(BandDrawBG[1], -1);
	TextDrawSetOutline(BandDrawBG[1], 0);
	TextDrawSetProportional(BandDrawBG[1], 1);
	TextDrawSetShadow(BandDrawBG[1], 1);
	TextDrawUseBox(BandDrawBG[1], 1);
	TextDrawBoxColor(BandDrawBG[1], 0x88990055);
	TextDrawTextSize(BandDrawBG[1], 443.000000, 0.000000);
	////нига228
	Boxmenu0 = TextDrawCreate(439.000000, 383.000000, "box1");
	TextDrawBackgroundColor(Boxmenu0, 255);
	TextDrawFont(Boxmenu0, 1);
	TextDrawLetterSize(Boxmenu0, 0.000000, 3.400001);
	TextDrawUseBox(Boxmenu0, 1);
	TextDrawBoxColor(Boxmenu0, 80);
	TextDrawTextSize(Boxmenu0, 206.000000, 10.000000);
	TextDrawSetSelectable(Boxmenu0, 0);

	Boxmenu1 = TextDrawCreate(387.000000, 358.000000, "box2");
	TextDrawBackgroundColor(Boxmenu1, 255);
	TextDrawFont(Boxmenu1, 1);
	TextDrawLetterSize(Boxmenu1, 0.000000, 2.000000);
	TextDrawUseBox(Boxmenu1, 1);
	TextDrawBoxColor(Boxmenu1, 2132351487);
	TextDrawTextSize(Boxmenu1, 258.000000, 10.000000);
	TextDrawSetSelectable(Boxmenu1, 0);

	Boxmenu2 = TextDrawCreate(385.000000, 360.000000, "box3");
	TextDrawBackgroundColor(Boxmenu2, 255);
	TextDrawFont(Boxmenu2, 1);
	TextDrawLetterSize(Boxmenu2, 0.000000, 1.600000);
	TextDrawUseBox(Boxmenu2, 1);
	TextDrawBoxColor(Boxmenu2, 128);
	TextDrawTextSize(Boxmenu2, 260.000000, 10.000000);
	TextDrawSetSelectable(Boxmenu2, 0);

	ButtonLeft = TextDrawCreate(176.000000, 345.000000, "selecticon1");
	TextDrawBackgroundColor(ButtonLeft, 0);
	TextDrawFont(ButtonLeft, 5);
	TextDrawLetterSize(ButtonLeft, 0.500000, 1.000000);
	TextDrawColor(ButtonLeft, 0xFF6347FF);
	TextDrawTextSize(ButtonLeft, 73.000000, 65.000000);
	TextDrawSetPreviewModel(ButtonLeft, 19132);
	TextDrawSetPreviewRot(ButtonLeft, -40.000000, -90.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(ButtonLeft, 1);

	ButtonRight = TextDrawCreate(396.000000, 345.000000, "selecticon2");
	TextDrawBackgroundColor(ButtonRight, 0);
	TextDrawFont(ButtonRight, 5);
	TextDrawLetterSize(ButtonRight, 0.500000, 1.000000);
	TextDrawColor(ButtonRight, 0xFF6347FF);
	TextDrawTextSize(ButtonRight, 73.000000, 65.000000);
	TextDrawSetPreviewModel(ButtonRight, 19132);
	TextDrawSetPreviewRot(ButtonRight, -40.000000, 90.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(ButtonRight, 1);
	//////////////
	boxcancel = TextDrawCreate(233.000000, 367.000000, "selecticon3");
	TextDrawBackgroundColor(boxcancel, 0);
	TextDrawFont(boxcancel, 5);
	TextDrawLetterSize(boxcancel, 0.500000, 1.000000);
	TextDrawColor(boxcancel, 0xFF6347FF);
	TextDrawTextSize(boxcancel, 84.000000, 63.000000);
	TextDrawSetPreviewModel(boxcancel, 19447);
	TextDrawSetPreviewRot(boxcancel, -20.000000, 0.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(boxcancel, 1);

	boxaccept = TextDrawCreate(327.000000, 367.000000, "selecticon3");
	TextDrawBackgroundColor(boxaccept, 0);
	TextDrawFont(boxaccept, 5);
	TextDrawLetterSize(boxaccept, 0.500000, 1.000000);
	TextDrawColor(boxaccept, 0xFF6347FF);
	TextDrawSetProportional(boxaccept, 1);
	TextDrawTextSize(boxaccept, 84.000000, 63.000000);
	TextDrawSetPreviewModel(boxaccept, 19447);
	TextDrawSetPreviewRot(boxaccept, -20.000000, 0.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(boxaccept, 1);

	ButtonUp = TextDrawCreate( 558.000000, 434.000000, "Fire arms");
	TextDrawBackgroundColor( ButtonUp, 255);
	TextDrawFont( ButtonUp, 3);
	TextDrawLetterSize( ButtonUp, 0.500000, 1.000000);
	TextDrawColor( ButtonUp, -602653600);
	//TextDrawSetOutline( ButtonUp, 0);
	TextDrawSetProportional( ButtonUp, 1);
	TextDrawSetShadow( ButtonUp, 1);
	TextDrawSetSelectable( ButtonUp, 0);

	ButtonDown = TextDrawCreate(543.000000, 375.000000, "selectactiondown");
	TextDrawBackgroundColor(ButtonDown, 0);
	TextDrawFont(ButtonDown, 5);
	TextDrawLetterSize(ButtonDown, 0.500000, 1.000000);
	TextDrawColor(ButtonDown, 0xFF6347FF);
	TextDrawSetOutline(ButtonDown, 0);
	TextDrawSetProportional(ButtonDown, 1);
	TextDrawSetShadow(ButtonDown, 1);
	//TextDrawUseBox(ButtonDown, 1);
	//TextDrawBoxColor(ButtonDown, 255);
	TextDrawTextSize(ButtonDown, 73.000000, 65.000000);
	TextDrawSetPreviewModel(ButtonDown, 19132);
	TextDrawSetPreviewRot(ButtonDown, -40.000000, 0.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(ButtonDown, 1);

	ButtonDown = TextDrawCreate(300.0, 300.0, "LD_BEAT:down");
	TextDrawFont(ButtonDown, 4);
	TextDrawTextSize(ButtonDown, 50, 25);
	TextDrawSetSelectable(ButtonDown, 1);

	ButtonCancel = TextDrawCreate(342.000000, 392.000000, "Cancel");
	TextDrawBackgroundColor(ButtonCancel, 255);
	TextDrawFont(ButtonCancel, 2);
	TextDrawLetterSize(ButtonCancel, 0.350000, 1.200000);
	TextDrawColor(ButtonCancel, -1);
	//TextDrawSetOutline(ButtonCancel, 1);
	TextDrawSetProportional(ButtonCancel, 1);
	TextDrawSetSelectable(ButtonCancel, 0);

	Boxmenu3 = TextDrawCreate(268.000000, 361.000000, "Select Action");
	TextDrawBackgroundColor(Boxmenu3, 255);
	TextDrawFont(Boxmenu3, 2);
	TextDrawLetterSize(Boxmenu3, 0.349999, 1.200000);
	TextDrawColor(Boxmenu3, -1);
	TextDrawSetOutline(Boxmenu3, 0);
	TextDrawSetProportional(Boxmenu3, 1);
	TextDrawSetShadow(Boxmenu3, 1);
	TextDrawSetSelectable(Boxmenu3, 0);

	BoxTaxi1 = TextDrawCreate(620.000000, 191.000000, "box1");
	TextDrawBackgroundColor(BoxTaxi1, 255);
	TextDrawFont(BoxTaxi1, 1);
	TextDrawLetterSize(BoxTaxi1, 0.000000, 5.300002);
	TextDrawColor(BoxTaxi1, 2020214864);
	TextDrawSetOutline(BoxTaxi1, 0);
	TextDrawSetProportional(BoxTaxi1, 1);
	TextDrawSetShadow(BoxTaxi1, 1);
	TextDrawUseBox(BoxTaxi1, 1);
	TextDrawBoxColor(BoxTaxi1, -1284241840);
	TextDrawTextSize(BoxTaxi1, 545.000000, 44.000000);
	TextDrawSetSelectable(BoxTaxi1, 0);

	BoxTaxi2 = TextDrawCreate(618.000000, 193.000000, "box1");
	TextDrawBackgroundColor(BoxTaxi2, 255);
	TextDrawFont(BoxTaxi2, 1);
	TextDrawLetterSize(BoxTaxi2, 0.000000, 4.800001);
	TextDrawColor(BoxTaxi2, -1);
	TextDrawSetOutline(BoxTaxi2, 0);
	TextDrawSetProportional(BoxTaxi2, 1);
	TextDrawSetShadow(BoxTaxi2, 1);
	TextDrawUseBox(BoxTaxi2, 1);
	TextDrawBoxColor(BoxTaxi2, 80);
	TextDrawTextSize(BoxTaxi2, 547.000000, 27.000000);
	TextDrawSetSelectable(BoxTaxi2, 0);

	Taximonitor = TextDrawCreate(556.000000, 194.000000, "Monitoring");
	TextDrawBackgroundColor(Taximonitor, 255);
	TextDrawFont(Taximonitor, 2);
	TextDrawLetterSize(Taximonitor, 0.209999, 0.799998);
	TextDrawColor(Taximonitor, -1);
	TextDrawSetOutline(Taximonitor, 0);
	TextDrawSetProportional(Taximonitor, 1);
	TextDrawSetShadow(Taximonitor, 1);
	TextDrawSetSelectable(Taximonitor, 0);

	TaxiDol = TextDrawCreate(566.000000, 206.000000, "$");
	TextDrawBackgroundColor(TaxiDol, 255);
	TextDrawFont(TaxiDol, 2);
	TextDrawLetterSize(TaxiDol, 0.239999, 1.499998);
	TextDrawColor(TaxiDol, -1);
	TextDrawSetOutline(TaxiDol, 0);
	TextDrawSetProportional(TaxiDol, 1);
	TextDrawSetShadow(TaxiDol, 1);
	TextDrawSetSelectable(TaxiDol, 0);

	TaxiServ = TextDrawCreate(562.000000, 227.000000, "taxi service");
	TextDrawBackgroundColor(TaxiServ, 255);
	TextDrawFont(TaxiServ, 2);
	TextDrawLetterSize(TaxiServ, 0.149999, 0.799998);
	TextDrawColor(TaxiServ, -1);
	TextDrawSetOutline(TaxiServ, 0);
	TextDrawSetProportional(TaxiServ, 1);
	TextDrawSetShadow(TaxiServ, 1);
	TextDrawSetSelectable(TaxiServ, 0);

	ButtonSelect = TextDrawCreate(247.000000, 392.000000, "Accept");
	TextDrawBackgroundColor(ButtonSelect, 255);
	TextDrawFont(ButtonSelect, 2);
	TextDrawLetterSize(ButtonSelect, 0.350000, 1.200000);
	TextDrawColor(ButtonSelect, -1);
	//TextDrawSetOutline(ButtonSelect, 1);
	TextDrawSetProportional(ButtonSelect, 1);
	TextDrawSetSelectable(ButtonSelect, 0);

	ShieldBG[0] = TextDrawCreate(610.0,57.8,"_");
	TextDrawLetterSize(ShieldBG[0],0.0,0.57);
	TextDrawUseBox(ShieldBG[0],1);
	TextDrawBoxColor(ShieldBG[0],COLOR_SHBAR_BG);
	TextDrawTextSize(ShieldBG[0],544.5,0.0);

	ShieldBG[1] = TextDrawCreate(608.0,59.6,"_");
	TextDrawLetterSize(ShieldBG[1],0.0,0.135);
	TextDrawUseBox(ShieldBG[1],1);
	TextDrawBoxColor(ShieldBG[1],COLOR_SHBAR_BG2);
	TextDrawTextSize(ShieldBG[1],546.5,0.0);

	FuelDrawBG[0] = TextDrawCreate(320.000000, 244.000000, "BackGround1");
	TextDrawAlignment(FuelDrawBG[0], 2);
	TextDrawBackgroundColor(FuelDrawBG[0], 255);
	TextDrawFont(FuelDrawBG[0], 1);
	TextDrawLetterSize(FuelDrawBG[0], 0.000000, 5.099997);
	TextDrawColor(FuelDrawBG[0], -1);
	TextDrawSetOutline(FuelDrawBG[0], 0);
	TextDrawSetProportional(FuelDrawBG[0], 1);
	TextDrawSetShadow(FuelDrawBG[0], 1);
	TextDrawUseBox(FuelDrawBG[0], 1);
	TextDrawBoxColor(FuelDrawBG[0], -1347440641);
	TextDrawTextSize(FuelDrawBG[0], 0.000000, 311.000000);

	FuelDrawBG[1] = TextDrawCreate(320.000000, 248.000000, "BackGround2");
	TextDrawAlignment(FuelDrawBG[1], 2);
	TextDrawBackgroundColor(FuelDrawBG[1], 255);
	TextDrawFont(FuelDrawBG[1], 1);
	TextDrawLetterSize(FuelDrawBG[1], 0.000000, 4.099998);
	TextDrawColor(FuelDrawBG[1], -1);
	TextDrawSetOutline(FuelDrawBG[1], 0);
	TextDrawSetProportional(FuelDrawBG[1], 1);
	TextDrawSetShadow(FuelDrawBG[1], 1);
	TextDrawUseBox(FuelDrawBG[1], 1);
	TextDrawBoxColor(FuelDrawBG[1], 255);
	TextDrawTextSize(FuelDrawBG[1], 0.000000, 300.000000);

	FuelNextBG[0] = TextDrawCreate(459.000000, 248.000000, "Fuel + BG");
	TextDrawAlignment(FuelNextBG[0], 2);
	TextDrawBackgroundColor(FuelNextBG[0], 255);
	TextDrawFont(FuelNextBG[0], 3);
	TextDrawLetterSize(FuelNextBG[0], 0.000000, 4.099997);
	TextDrawColor(FuelNextBG[0], -1);
	TextDrawSetOutline(FuelNextBG[0], 1);
	TextDrawSetProportional(FuelNextBG[0], 1);
	TextDrawUseBox(FuelNextBG[0], 1);
	TextDrawBoxColor(FuelNextBG[0], 0xFF6347FF);
	TextDrawTextSize(FuelNextBG[0], 0.000000, 22.000000);

	FuelNextBG[1] = TextDrawCreate(182.000000, 248.000000, "Fuel - BG");
	TextDrawAlignment(FuelNextBG[1], 2);
	TextDrawBackgroundColor(FuelNextBG[1], 255);
	TextDrawFont(FuelNextBG[1], 3);
	TextDrawLetterSize(FuelNextBG[1], 0.000000, 4.099997);
	TextDrawColor(FuelNextBG[1], -1);
	TextDrawSetOutline(FuelNextBG[1], 1);
	TextDrawSetProportional(FuelNextBG[1], 1);
	TextDrawUseBox(FuelNextBG[1], 1);
	TextDrawBoxColor(FuelNextBG[1], 0xFF6347FF);
	TextDrawTextSize(FuelNextBG[1], 0.000000, 24.000000);

	FuelBackKey[0] = TextDrawCreate(203.000000, 266.000000, "LD_BEAT:left");
	TextDrawBackgroundColor(FuelBackKey[0], 255);
	TextDrawFont(FuelBackKey[0], 4);
	TextDrawLetterSize(FuelBackKey[0], 0.500000, 1.000000);
	TextDrawColor(FuelBackKey[0], 16777215);
	TextDrawSetOutline(FuelBackKey[0], 0);
	TextDrawSetProportional(FuelBackKey[0], 1);
	TextDrawSetShadow(FuelBackKey[0], 1);
	TextDrawUseBox(FuelBackKey[0], 1);
	TextDrawBoxColor(FuelBackKey[0], 255);
	TextDrawTextSize(FuelBackKey[0], 28.000000, 17.000000);
	TextDrawSetSelectable(FuelBackKey[0], true);

	FuelNextKey[0] = TextDrawCreate(403.000000, 266.000000, "LD_BEAT:right");
	TextDrawBackgroundColor(FuelNextKey[0], 255);
	TextDrawFont(FuelNextKey[0], 4);
	TextDrawLetterSize(FuelNextKey[0], 0.500000, 1.000000);
	TextDrawColor(FuelNextKey[0], 16777215);
	TextDrawSetOutline(FuelNextKey[0], 0);
	TextDrawSetProportional(FuelNextKey[0], 1);
	TextDrawSetShadow(FuelNextKey[0], 1);
	TextDrawUseBox(FuelNextKey[0], 1);
	TextDrawBoxColor(FuelNextKey[0], 255);
	TextDrawTextSize(FuelNextKey[0], 28.000000, 17.000000);
	TextDrawSetSelectable(FuelNextKey[0], true);

	FuelBarDraw = TextDrawCreate(401.000000, 268.000000, "FuelBar1");
	TextDrawBackgroundColor(FuelBarDraw, 255);
	TextDrawFont(FuelBarDraw, 1);
	TextDrawLetterSize(FuelBarDraw, 0.000000, 1.399999);
	TextDrawColor(FuelBarDraw, -1);
	TextDrawSetOutline(FuelBarDraw, 0);
	TextDrawSetProportional(FuelBarDraw, 1);
	TextDrawSetShadow(FuelBarDraw, 1);
	TextDrawUseBox(FuelBarDraw, 1);
	TextDrawBoxColor(FuelBarDraw, -11206401);
	TextDrawTextSize(FuelBarDraw, 233.000000, 0.000000);

	FuelBackKey[1] = TextDrawCreate(172.000000, 249.000000, "LD_BEAT:left");
	TextDrawBackgroundColor(FuelBackKey[1], 255);
	TextDrawFont(FuelBackKey[1], 4);
	TextDrawLetterSize(FuelBackKey[1], 0.500000, 1.000000);
	TextDrawColor(FuelBackKey[1], -65281);
	TextDrawSetOutline(FuelBackKey[1], 0);
	TextDrawSetProportional(FuelBackKey[1], 1);
	TextDrawSetShadow(FuelBackKey[1], 1);
	TextDrawUseBox(FuelBackKey[1], 1);
	TextDrawBoxColor(FuelBackKey[1], 255);
	TextDrawTextSize(FuelBackKey[1], 19.000000, 36.000000);
	TextDrawSetSelectable(FuelBackKey[1], true);

	FuelNextKey[1] = TextDrawCreate(450.000000, 249.000000, "LD_BEAT:right");
	TextDrawBackgroundColor(FuelNextKey[1], 255);
	TextDrawFont(FuelNextKey[1], 4);
	TextDrawLetterSize(FuelNextKey[1], 0.500000, 1.000000);
	TextDrawColor(FuelNextKey[1], -65281);
	TextDrawSetOutline(FuelNextKey[1], 0);
	TextDrawSetProportional(FuelNextKey[1], 1);
	TextDrawSetShadow(FuelNextKey[1], 1);
	TextDrawUseBox(FuelNextKey[1], 1);
	TextDrawBoxColor(FuelNextKey[1], 255);
	TextDrawTextSize(FuelNextKey[1], 19.000000, 36.000000);
	TextDrawSetSelectable(FuelNextKey[1], true);

	FuelSelectDraw = TextDrawCreate(400.000000, 295.000000, "Fill");
	TextDrawBackgroundColor(FuelSelectDraw, 255);
	TextDrawFont(FuelSelectDraw, 3);
	TextDrawLetterSize(FuelSelectDraw, 0.990000, 2.300000);
	TextDrawColor(FuelSelectDraw, -1);
	TextDrawSetOutline(FuelSelectDraw, 1);
	TextDrawTextSize(FuelSelectDraw, 460.0, 20.0);
	TextDrawSetProportional(FuelSelectDraw, 1);
	TextDrawSetSelectable(FuelSelectDraw, true);

	FuelCancelDraw = TextDrawCreate(183.000000, 295.000000, "Cancel");
	TextDrawBackgroundColor(FuelCancelDraw, 255);
	TextDrawFont(FuelCancelDraw, 3);
	TextDrawLetterSize(FuelCancelDraw, 0.730000, 2.299999);
	TextDrawTextSize(FuelCancelDraw, 260.0, 20.0);
	TextDrawColor(FuelCancelDraw, -1);
	TextDrawSetOutline(FuelCancelDraw, 1);
	TextDrawSetProportional(FuelCancelDraw, 1);
	TextDrawSetSelectable(FuelCancelDraw, true);

	FuelKeyBG = TextDrawCreate(165.000000, 141.000000, "New Textdraw");
	TextDrawBackgroundColor(FuelKeyBG, 255);
	TextDrawFont(FuelKeyBG, 1);
	TextDrawLetterSize(FuelKeyBG, 0.000000, 9.699998);
	TextDrawColor(FuelKeyBG, -1);
	TextDrawSetOutline(FuelKeyBG, 0);
	TextDrawSetProportional(FuelKeyBG, 1);
	TextDrawSetShadow(FuelKeyBG, 1);
	TextDrawUseBox(FuelKeyBG, 1);
	TextDrawBoxColor(FuelKeyBG, 255);
	TextDrawTextSize(FuelKeyBG, 305.000000, 0.000000);

	FuelKeyDraw[0] = TextDrawCreate(287.000000, 204.000000, "0");
	TextDrawAlignment(FuelKeyDraw[0], 2);
	TextDrawBackgroundColor(FuelKeyDraw[0], 255);
	TextDrawFont(FuelKeyDraw[0], 1);
	TextDrawLetterSize(FuelKeyDraw[0], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[0], -65281);
	TextDrawSetOutline(FuelKeyDraw[0], 1);
	TextDrawSetProportional(FuelKeyDraw[0], 1);
	TextDrawUseBox(FuelKeyDraw[0], 1);
	TextDrawBoxColor(FuelKeyDraw[0], 16777215);
	TextDrawTextSize(FuelKeyDraw[0], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[0], true);

	FuelKeyDraw[1] = TextDrawCreate(183.000000, 146.000000, "1");
	TextDrawAlignment(FuelKeyDraw[1], 2);
	TextDrawBackgroundColor(FuelKeyDraw[1], 255);
	TextDrawFont(FuelKeyDraw[1], 1);
	TextDrawLetterSize(FuelKeyDraw[1], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[1], -65281);
	TextDrawSetOutline(FuelKeyDraw[1], 1);
	TextDrawSetProportional(FuelKeyDraw[1], 1);
	TextDrawUseBox(FuelKeyDraw[1], 1);
	TextDrawBoxColor(FuelKeyDraw[1], 16777215);
	TextDrawTextSize(FuelKeyDraw[1], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[1], true);

	FuelKeyDraw[2] = TextDrawCreate(218.000000, 146.000000, "2");
	TextDrawAlignment(FuelKeyDraw[2], 2);
	TextDrawBackgroundColor(FuelKeyDraw[2], 255);
	TextDrawFont(FuelKeyDraw[2], 1);
	TextDrawLetterSize(FuelKeyDraw[2], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[2], -65281);
	TextDrawSetOutline(FuelKeyDraw[2], 1);
	TextDrawSetProportional(FuelKeyDraw[2], 1);
	TextDrawUseBox(FuelKeyDraw[2], 1);
	TextDrawBoxColor(FuelKeyDraw[2], 16777215);
	TextDrawTextSize(FuelKeyDraw[2], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[2], true);

	FuelKeyDraw[3] = TextDrawCreate(253.000000, 146.000000, "3");
	TextDrawAlignment(FuelKeyDraw[3], 2);
	TextDrawBackgroundColor(FuelKeyDraw[3], 255);
	TextDrawFont(FuelKeyDraw[3], 1);
	TextDrawLetterSize(FuelKeyDraw[3], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[3], -65281);
	TextDrawSetOutline(FuelKeyDraw[3], 1);
	TextDrawSetProportional(FuelKeyDraw[3], 1);
	TextDrawUseBox(FuelKeyDraw[3], 1);
	TextDrawBoxColor(FuelKeyDraw[3], 16777215);
	TextDrawTextSize(FuelKeyDraw[3], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[3], true);

	FuelKeyDraw[4] = TextDrawCreate(183.000000, 175.000000, "4");
	TextDrawAlignment(FuelKeyDraw[4], 2);
	TextDrawBackgroundColor(FuelKeyDraw[4], 255);
	TextDrawFont(FuelKeyDraw[4], 1);
	TextDrawLetterSize(FuelKeyDraw[4], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[4], -65281);
	TextDrawSetOutline(FuelKeyDraw[4], 1);
	TextDrawSetProportional(FuelKeyDraw[4], 1);
	TextDrawUseBox(FuelKeyDraw[4], 1);
	TextDrawBoxColor(FuelKeyDraw[4], 16777215);
	TextDrawTextSize(FuelKeyDraw[4], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[4], true);

	FuelKeyDraw[5] = TextDrawCreate(218.000000, 175.000000, "5");
	TextDrawAlignment(FuelKeyDraw[5], 2);
	TextDrawBackgroundColor(FuelKeyDraw[5], 255);
	TextDrawFont(FuelKeyDraw[5], 1);
	TextDrawLetterSize(FuelKeyDraw[5], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[5], -65281);
	TextDrawSetOutline(FuelKeyDraw[5], 1);
	TextDrawSetProportional(FuelKeyDraw[5], 1);
	TextDrawUseBox(FuelKeyDraw[5], 1);
	TextDrawBoxColor(FuelKeyDraw[5], 16777215);
	TextDrawTextSize(FuelKeyDraw[5], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[5], true);

	FuelKeyDraw[6] = TextDrawCreate(253.000000, 175.000000, "6");
	TextDrawAlignment(FuelKeyDraw[6], 2);
	TextDrawBackgroundColor(FuelKeyDraw[6], 255);
	TextDrawFont(FuelKeyDraw[6], 1);
	TextDrawLetterSize(FuelKeyDraw[6], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[6], -65281);
	TextDrawSetOutline(FuelKeyDraw[6], 1);
	TextDrawSetProportional(FuelKeyDraw[6], 1);
	TextDrawUseBox(FuelKeyDraw[6], 1);
	TextDrawBoxColor(FuelKeyDraw[6], 16777215);
	TextDrawTextSize(FuelKeyDraw[6], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[6], true);

	FuelKeyDraw[7] = TextDrawCreate(183.000000, 204.000000, "7");
	TextDrawAlignment(FuelKeyDraw[7], 2);
	TextDrawBackgroundColor(FuelKeyDraw[7], 255);
	TextDrawFont(FuelKeyDraw[7], 1);
	TextDrawLetterSize(FuelKeyDraw[7], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[7], -65281);
	TextDrawSetOutline(FuelKeyDraw[7], 1);
	TextDrawSetProportional(FuelKeyDraw[7], 1);
	TextDrawUseBox(FuelKeyDraw[7], 1);
	TextDrawBoxColor(FuelKeyDraw[7], 16777215);
	TextDrawTextSize(FuelKeyDraw[7], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[7], true);

	FuelKeyDraw[8] = TextDrawCreate(218.000000, 204.000000, "8");
	TextDrawAlignment(FuelKeyDraw[8], 2);
	TextDrawBackgroundColor(FuelKeyDraw[8], 255);
	TextDrawFont(FuelKeyDraw[8], 1);
	TextDrawLetterSize(FuelKeyDraw[8], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[8], -65281);
	TextDrawSetOutline(FuelKeyDraw[8], 1);
	TextDrawSetProportional(FuelKeyDraw[8], 1);
	TextDrawUseBox(FuelKeyDraw[8], 1);
	TextDrawBoxColor(FuelKeyDraw[8], 16777215);
	TextDrawTextSize(FuelKeyDraw[8], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[8], true);

	FuelKeyDraw[9] = TextDrawCreate(253.000000, 204.000000, "9");
	TextDrawAlignment(FuelKeyDraw[9], 2);
	TextDrawBackgroundColor(FuelKeyDraw[9], 255);
	TextDrawFont(FuelKeyDraw[9], 1);
	TextDrawLetterSize(FuelKeyDraw[9], 0.699999, 2.099999);
	TextDrawColor(FuelKeyDraw[9], -65281);
	TextDrawSetOutline(FuelKeyDraw[9], 1);
	TextDrawSetProportional(FuelKeyDraw[9], 1);
	TextDrawUseBox(FuelKeyDraw[9], 1);
	TextDrawBoxColor(FuelKeyDraw[9], 16777215);
	TextDrawTextSize(FuelKeyDraw[9], 20.000000, 24.000000);
	TextDrawSetSelectable(FuelKeyDraw[9], true);

	FuelOtherDraw = TextDrawCreate(287.000000, 146.000000, "0");
	TextDrawAlignment(FuelOtherDraw, 2);
	TextDrawBackgroundColor(FuelOtherDraw, 255);
	TextDrawFont(FuelOtherDraw, 1);
	TextDrawLetterSize(FuelOtherDraw, -0.000000, 5.299999);
	TextDrawColor(FuelOtherDraw, -65281);
	TextDrawSetOutline(FuelOtherDraw, 1);
	TextDrawSetProportional(FuelOtherDraw, 1);
	TextDrawUseBox(FuelOtherDraw, 1);
	TextDrawBoxColor(FuelOtherDraw, -1347440641);
	TextDrawTextSize(FuelOtherDraw, 20.000000, 24.000000);
	TextDrawSetSelectable(FuelOtherDraw, true);

	//====speed=====
	speedbox[0] = TextDrawCreate( 513.000000, 356.000000, "_");
	TextDrawBackgroundColor( speedbox[0], 255);
	TextDrawFont( speedbox[0], 1);
	TextDrawLetterSize( speedbox[0], 0.500000, 7.099998);
	TextDrawColor( speedbox[0], 144);
	TextDrawSetOutline( speedbox[0], 0);
	TextDrawSetProportional( speedbox[0], 1);
	TextDrawSetShadow( speedbox[0], 1);
	TextDrawUseBox( speedbox[0], 1);
	TextDrawBoxColor( speedbox[0], 144);
	TextDrawTextSize( speedbox[0], 621.000000, 0.000000);
	TextDrawSetSelectable( speedbox[0], 0);
	speedbox[1] = TextDrawCreate( 513.000000, 430.000000, "_");
	TextDrawBackgroundColor( speedbox[1], 255);
	TextDrawFont( speedbox[1], 1);
	TextDrawLetterSize( speedbox[1], 0.500000, 1.499999);
	TextDrawColor( speedbox[1], 144);
	TextDrawSetOutline( speedbox[1], 0);
	TextDrawSetProportional( speedbox[1], 1);
	TextDrawSetShadow( speedbox[1], 1);
	TextDrawUseBox( speedbox[1], 1);
	TextDrawBoxColor( speedbox[1], 144);
	TextDrawTextSize( speedbox[1], 621.000000, 0.000000);
	TextDrawSetSelectable( speedbox[1], 0);
	speedbox[2] = TextDrawCreate( 567.000000, 360.000000, "_");
	TextDrawAlignment( speedbox[2], 2);
	TextDrawBackgroundColor( speedbox[2], 255);
	TextDrawFont( speedbox[2], 3);
	TextDrawLetterSize( speedbox[2], 0.629999, 2.700001);
	TextDrawColor( speedbox[2], -65);
	TextDrawSetOutline( speedbox[2], 1);
	TextDrawSetProportional( speedbox[2], 1);
	TextDrawUseBox( speedbox[2], 1);
	TextDrawBoxColor( speedbox[2], -1407312129);
	TextDrawTextSize( speedbox[2], 714.000000, 103.000000);
	TextDrawSetSelectable( speedbox[2], 0);
	speedbox[3] = TextDrawCreate( 513.000000, 462.000000, "_");
	TextDrawBackgroundColor( speedbox[3], 255);
	TextDrawFont( speedbox[3], 1);
	TextDrawLetterSize( speedbox[3], 0.500000, 7.099998);
	TextDrawColor( speedbox[3], 144);
	TextDrawSetOutline( speedbox[3], 0);
	TextDrawSetProportional( speedbox[3], 1);
	TextDrawSetShadow( speedbox[3], 1);
	TextDrawUseBox( speedbox[3], 1);
	TextDrawBoxColor( speedbox[3], 144);
	TextDrawTextSize( speedbox[3], 621.000000, 0.000000);
	TextDrawSetSelectable( speedbox[3], 0);
	//====speed=====
	//ShopEatResp
	BoxShopEat1 = TextDrawCreate(436.000000, 176.000000, "box1");
	TextDrawBackgroundColor(BoxShopEat1, 255);
	TextDrawFont(BoxShopEat1, 1);
	TextDrawLetterSize(BoxShopEat1, 0.000000, 15.100000);
	TextDrawColor(BoxShopEat1, -1);
	TextDrawSetOutline(BoxShopEat1, 0);
	TextDrawSetProportional(BoxShopEat1, 1);
	TextDrawSetShadow(BoxShopEat1, 1);
	TextDrawUseBox(BoxShopEat1, 1);
	TextDrawBoxColor(BoxShopEat1, 80);
	TextDrawTextSize(BoxShopEat1, 206.000000, 10.000000);
	TextDrawSetSelectable(BoxShopEat1, 0);

	BoxShopEat2 = TextDrawCreate(387.000000, 166.000000, "box2");
	TextDrawBackgroundColor(BoxShopEat2, 255);
	TextDrawFont(BoxShopEat2, 1);
	TextDrawLetterSize(BoxShopEat2, 0.000000, 1.999999);
	TextDrawColor(BoxShopEat2, -1);
	TextDrawSetOutline(BoxShopEat2, 0);
	TextDrawSetProportional(BoxShopEat2, 1);
	TextDrawSetShadow(BoxShopEat2, 1);
	TextDrawUseBox(BoxShopEat2, 1);
	TextDrawBoxColor(BoxShopEat2, 2132351487);
	TextDrawTextSize(BoxShopEat2, 258.000000, 10.000000);
	TextDrawSetSelectable(BoxShopEat2, 0);

	BoxShopEat3 = TextDrawCreate(385.000000, 168.000000, "box3");
	TextDrawBackgroundColor(BoxShopEat3, 255);
	TextDrawFont(BoxShopEat3, 1);
	TextDrawLetterSize(BoxShopEat3, 0.000000, 1.600000);
	TextDrawColor(BoxShopEat3, -1);
	TextDrawSetOutline(BoxShopEat3, 0);
	TextDrawSetProportional(BoxShopEat3, 1);
	TextDrawSetShadow(BoxShopEat3, 1);
	TextDrawUseBox(BoxShopEat3, 1);
	TextDrawBoxColor(BoxShopEat3, 128);
	TextDrawTextSize(BoxShopEat3, 260.000000, 10.000000);
	TextDrawSetSelectable(BoxShopEat3, 0);

	BoxShopEat4 = TextDrawCreate(436.000000, 289.000000, "box4");
	TextDrawBackgroundColor(BoxShopEat4, 255);
	TextDrawFont(BoxShopEat4, 1);
	TextDrawLetterSize(BoxShopEat4, 0.000000, 2.000000);
	TextDrawColor(BoxShopEat4, -1);
	TextDrawSetOutline(BoxShopEat4, 0);
	TextDrawSetProportional(BoxShopEat4, 1);
	TextDrawSetShadow(BoxShopEat4, 1);
	TextDrawUseBox(BoxShopEat4, 1);
	TextDrawBoxColor(BoxShopEat4, 80);
	TextDrawTextSize(BoxShopEat4, 206.000000, 10.000000);
	TextDrawSetSelectable(BoxShopEat4, 0);

	BoxShopEat5 = TextDrawCreate(320.000000, 194.000000, "box5");
	TextDrawBackgroundColor(BoxShopEat5, 255);
	TextDrawFont(BoxShopEat5, 1);
	TextDrawLetterSize(BoxShopEat5, 0.000000, 9.499998);
	TextDrawColor(BoxShopEat5, -1);
	TextDrawSetOutline(BoxShopEat5, 0);
	TextDrawSetProportional(BoxShopEat5, 1);
	TextDrawSetShadow(BoxShopEat5, 1);
	TextDrawUseBox(BoxShopEat5, 1);
	TextDrawBoxColor(BoxShopEat5, 80);
	TextDrawTextSize(BoxShopEat5, 226.000000, 10.000000);
	TextDrawSetSelectable(BoxShopEat5, 0);

	BoxShopEat6 = TextDrawCreate(419.000000, 194.000000, "box6");
	TextDrawBackgroundColor(BoxShopEat6, 255);
	TextDrawFont(BoxShopEat6, 1);
	TextDrawLetterSize(BoxShopEat6, 0.000000, 9.499998);
	TextDrawColor(BoxShopEat6, -1);
	TextDrawSetOutline(BoxShopEat6, 0);
	TextDrawSetProportional(BoxShopEat6, 1);
	TextDrawSetShadow(BoxShopEat6, 1);
	TextDrawUseBox(BoxShopEat6, 1);
	TextDrawBoxColor(BoxShopEat6, 80);
	TextDrawTextSize(BoxShopEat6, 329.000000, 10.000000);
	TextDrawSetSelectable(BoxShopEat6, 0);

	EatShopEat1 = TextDrawCreate(253.000000, 267.000000, "pizza");
	TextDrawBackgroundColor(EatShopEat1, 255);
	TextDrawFont(EatShopEat1, 2);
	TextDrawLetterSize(EatShopEat1, 0.349999, 1.200000);
	TextDrawColor(EatShopEat1, -1);
	TextDrawSetOutline(EatShopEat1, 1);
	TextDrawSetProportional(EatShopEat1, 1);
	TextDrawSetSelectable(EatShopEat1, 0);

	EatShopEat2 = TextDrawCreate(348.000000, 267.000000, "burger");
	TextDrawBackgroundColor(EatShopEat2, 255);
	TextDrawFont(EatShopEat2, 2);
	TextDrawLetterSize(EatShopEat2, 0.349999, 1.200000);
	TextDrawColor(EatShopEat2, -1);
	TextDrawSetOutline(EatShopEat2, 1);
	TextDrawSetProportional(EatShopEat2, 1);
	TextDrawSetSelectable(EatShopEat2, 0);

	IconShopsEat2 = TextDrawCreate(333.000000, 272.000000, "icon2");
	TextDrawBackgroundColor(IconShopsEat2, 0);
	TextDrawFont(IconShopsEat2, 5);
	TextDrawLetterSize(IconShopsEat2, 0.500000, -0.000000);
	TextDrawColor(IconShopsEat2, 0xFF6347FF);
	TextDrawSetOutline(IconShopsEat2, 0);
	TextDrawSetProportional(IconShopsEat2, 1);
	TextDrawSetShadow(IconShopsEat2, 1);
	TextDrawTextSize(IconShopsEat2, 84.000000, 53.000000);
	TextDrawSetPreviewModel(IconShopsEat2, 19447);
	TextDrawSetPreviewRot(IconShopsEat2, -20.000000, 0.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(IconShopsEat2, 1);

	CenaShopEat2 = TextDrawCreate(356.000000, 293.000000, "free");
	TextDrawBackgroundColor(CenaShopEat2, 255);
	TextDrawFont(CenaShopEat2, 2);
	TextDrawLetterSize(CenaShopEat2, 0.390000, 1.000000);
	TextDrawColor(CenaShopEat2, -1);
	TextDrawSetOutline(CenaShopEat2, 1);
	TextDrawSetProportional(CenaShopEat2, 1);
	TextDrawSetSelectable(CenaShopEat2, 0);

	CenaShopEat1 = TextDrawCreate(260.000000, 293.000000, "None");
	TextDrawBackgroundColor(CenaShopEat1, 255);
	TextDrawFont(CenaShopEat1, 2);
	TextDrawLetterSize(CenaShopEat1, 0.390000, 1.000000);
	TextDrawColor(CenaShopEat1, -1);
	TextDrawSetOutline(CenaShopEat1, 1);
	TextDrawSetProportional(CenaShopEat1, 1);
	TextDrawSetSelectable(CenaShopEat1, 0);

	SelectShopEat1 = TextDrawCreate(282.000000, 169.000000, "select eat");
	TextDrawBackgroundColor(SelectShopEat1, 255);
	TextDrawFont(SelectShopEat1, 2);
	TextDrawLetterSize(SelectShopEat1, 0.349999, 1.200000);
	TextDrawColor(SelectShopEat1, -1);
	TextDrawSetOutline(SelectShopEat1, 0);
	TextDrawSetProportional(SelectShopEat1, 1);
	TextDrawSetShadow(SelectShopEat1, 1);
	TextDrawSetSelectable(SelectShopEat1, 0);

	IconShopEat1 = TextDrawCreate(229.000000, 204.000000, "iconpizza");
	TextDrawBackgroundColor(IconShopEat1, 0);
	TextDrawFont(IconShopEat1, 5);
	TextDrawLetterSize(IconShopEat1, 0.500000, -0.000000);
	TextDrawColor(IconShopEat1, -1);
	TextDrawSetOutline(IconShopEat1, 0);
	TextDrawSetProportional(IconShopEat1, 1);
	TextDrawSetShadow(IconShopEat1, 1);
	TextDrawTextSize(IconShopEat1, 84.000000, 53.000000);
	TextDrawSetPreviewModel(IconShopEat1, 1582);
	TextDrawSetPreviewRot(IconShopEat1, 120.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(IconShopEat1, 0);

	IconShopEat2 = TextDrawCreate(334.000000, 204.000000, "iconpack");
	TextDrawBackgroundColor(IconShopEat2, 0);
	TextDrawFont(IconShopEat2, 5);
	TextDrawLetterSize(IconShopEat2, 0.500000, -0.000000);
	TextDrawColor(IconShopEat2, -1);
	TextDrawSetOutline(IconShopEat2, 0);
	TextDrawSetProportional(IconShopEat2, 1);
	TextDrawSetShadow(IconShopEat2, 1);
	TextDrawTextSize(IconShopEat2, 84.000000, 53.000000);
	TextDrawSetPreviewModel(IconShopEat2, 2663);
	TextDrawSetPreviewRot(IconShopEat2, 0.000000, 0.000000, 30.000000, 1.000000);
	TextDrawSetSelectable(IconShopEat2, 0);

	alcodraw1[6] = TextDrawCreate(90.000000, 139.000000, "_");
	TextDrawBackgroundColor(alcodraw1[6], 255);
	TextDrawFont(alcodraw1[6], 1);
	TextDrawLetterSize(alcodraw1[6], 0.500000, 17.099998);
	TextDrawColor(alcodraw1[6], -1);
	TextDrawSetOutline(alcodraw1[6], 0);
	TextDrawSetProportional(alcodraw1[6], 1);
	TextDrawSetShadow(alcodraw1[6], 1);
	TextDrawUseBox(alcodraw1[6], 1);
	TextDrawBoxColor(alcodraw1[6], 48);
	TextDrawTextSize(alcodraw1[6], 241.000000, 1.000000);
	TextDrawSetSelectable(alcodraw1[6], 0);

	alcodraw1[5] = TextDrawCreate(179.000000, 296.000000, "close");
	TextDrawBackgroundColor(alcodraw1[5], 255);
	TextDrawFont(alcodraw1[5], 2);
	TextDrawLetterSize(alcodraw1[5], 0.500000, 1.299999);
	TextDrawColor(alcodraw1[5], -1);
	TextDrawSetOutline(alcodraw1[5], 0);
	TextDrawSetProportional(alcodraw1[5], 1);
	TextDrawSetShadow(alcodraw1[5], 1);
	TextDrawSetSelectable(alcodraw1[5], 1);

	alcodraw[0] = TextDrawCreate(92.000000, 142.000000, "ld_beat:up");
	alcodraw[1] = TextDrawCreate(141.000000, 142.000000, "ld_beat:up");
	alcodraw[2] = TextDrawCreate(191.000000, 142.000000, "ld_beat:up");
	alcodraw[3] = TextDrawCreate(92.000000, 191.000000, "ld_beat:up");
	alcodraw[4] = TextDrawCreate(141.000000, 191.000000, "ld_beat:up");
	for(new A; A < 5; A++)
	{
		TextDrawBackgroundColor(alcodraw[A], 0);
		TextDrawFont(alcodraw[A], 5);
		TextDrawLetterSize(alcodraw[A], 0.500000, 1.000000);
		TextDrawColor(alcodraw[A], 32);
		TextDrawSetOutline(alcodraw[A], 0);
		TextDrawSetProportional(alcodraw[A], 1);
		TextDrawSetShadow(alcodraw[A], 1);
		TextDrawTextSize(alcodraw[A], 46.000000, 46.000000);
		TextDrawSetPreviewModel(alcodraw[A], 19377);
		TextDrawSetPreviewRot(alcodraw[A], 0.000000, 0.000000, 90.000000, 0.000000);
		TextDrawSetSelectable(alcodraw[A], 1);
	}
	alcodraw1[0] = TextDrawCreate(90.000000, 150.000000, "ld_beat:up");
	TextDrawBackgroundColor(alcodraw1[0], 0);
	TextDrawFont(alcodraw1[0], 5);
	TextDrawLetterSize(alcodraw1[0], 0.500000, 1.000000);
	TextDrawColor(alcodraw1[0], -1);
	TextDrawSetOutline(alcodraw1[0], 0);
	TextDrawSetProportional(alcodraw1[0], 1);
	TextDrawSetShadow(alcodraw1[0], 1);
	TextDrawTextSize(alcodraw1[0], 40.000000, 33.000000);
	TextDrawSetPreviewModel(alcodraw1[0], 1546);
	TextDrawSetPreviewRot(alcodraw1[0], 0.000000, 0.000000, 120.000000, 1.000000);
	TextDrawSetSelectable(alcodraw1[0], 0);
	alcodraw1[1] = TextDrawCreate(133.000000, 143.000000, "ld_beat:up");
	TextDrawBackgroundColor(alcodraw1[1], 0);
	TextDrawFont(alcodraw1[1], 5);
	TextDrawLetterSize(alcodraw1[1], 0.500000, 1.000000);
	TextDrawColor(alcodraw1[1], -1);
	TextDrawSetOutline(alcodraw1[1], 0);
	TextDrawSetProportional(alcodraw1[1], 1);
	TextDrawSetShadow(alcodraw1[1], 1);
	TextDrawTextSize(alcodraw1[1], 55.000000, 41.000000);
	TextDrawSetPreviewModel(alcodraw1[1], 1520);
	TextDrawSetPreviewRot(alcodraw1[1], 0.000000, 0.000000, 120.000000, 1.000000);
	TextDrawSetSelectable(alcodraw1[1], 0);
	alcodraw1[2] = TextDrawCreate(184.000000, 144.000000, "ld_beat:up");
	TextDrawBackgroundColor(alcodraw1[2], 0);
	TextDrawFont(alcodraw1[2], 5);
	TextDrawLetterSize(alcodraw1[2], 0.500000, 1.000000);
	TextDrawColor(alcodraw1[2], -1);
	TextDrawSetOutline(alcodraw1[2], 0);
	TextDrawSetProportional(alcodraw1[2], 1);
	TextDrawSetShadow(alcodraw1[2], 1);
	TextDrawTextSize(alcodraw1[2], 55.000000, 41.000000);
	TextDrawSetPreviewModel(alcodraw1[2], 1512);
	TextDrawSetPreviewRot(alcodraw1[2], 0.000000, 0.000000, 120.000000, 1.000000);
	TextDrawSetSelectable(alcodraw1[2], 0);
	alcodraw1[3] = TextDrawCreate(94.000000, 194.000000, "ld_beat:up");
	TextDrawBackgroundColor(alcodraw1[3], 0);
	TextDrawFont(alcodraw1[3], 5);
	TextDrawLetterSize(alcodraw1[3], 0.500000, 1.000000);
	TextDrawColor(alcodraw1[3], -1);
	TextDrawSetOutline(alcodraw1[3], 0);
	TextDrawSetProportional(alcodraw1[3], 1);
	TextDrawSetShadow(alcodraw1[3], 1);
	TextDrawTextSize(alcodraw1[3], 41.000000, 42.000000);
	TextDrawSetPreviewModel(alcodraw1[3], 2814);
	TextDrawSetPreviewRot(alcodraw1[3], -30.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(alcodraw1[3], 0);
	alcodraw1[4] = TextDrawCreate(141.000000, 185.000000, "ld_beat:up");
	TextDrawBackgroundColor(alcodraw1[4], 0);
	TextDrawFont(alcodraw1[4], 5);
	TextDrawLetterSize(alcodraw1[4], 0.500000, 1.000000);
	TextDrawColor(alcodraw1[4], -1);
	TextDrawSetOutline(alcodraw1[4], 0);
	TextDrawSetProportional(alcodraw1[4], 1);
	TextDrawSetShadow(alcodraw1[4], 1);
	TextDrawTextSize(alcodraw1[4], 44.000000, 57.000000);
	TextDrawSetPreviewModel(alcodraw1[4], 2768);
	TextDrawSetPreviewRot(alcodraw1[4], -30.000000, 0.000000, 120.000000, 1.000000);
	TextDrawSetSelectable(alcodraw1[4], 0);
	alcodraw2[0] = TextDrawCreate(121.000000, 178.000000, "20");
	alcodraw2[1] = TextDrawCreate(170.000000, 178.000000, "400");
	alcodraw2[2] = TextDrawCreate(221.000000, 178.000000, "500");
	alcodraw2[3] = TextDrawCreate(122.000000, 227.000000, "200");
	alcodraw2[4] = TextDrawCreate(170.000000, 227.000000, "300");
	for(new A; A < 5; A++)
	{
		TextDrawBackgroundColor(alcodraw2[A], 255);
		TextDrawFont(alcodraw2[A], 2);
		TextDrawLetterSize(alcodraw2[A], 0.320000, 0.899999);
		TextDrawColor(alcodraw2[A], -1);
		TextDrawSetOutline(alcodraw2[A], 0);
		TextDrawSetProportional(alcodraw2[A], 1);
		TextDrawSetShadow(alcodraw2[A], 1);
		TextDrawSetSelectable(alcodraw2[A], 0);
	}
	//////////////////////////////////========++++++++
	GrandKapt[0] = TextDrawCreate(320.000000, 382.000000, "00:00");
	TextDrawAlignment(GrandKapt[0], 2);
	TextDrawBackgroundColor(GrandKapt[0], 255);
	TextDrawFont(GrandKapt[0], 1);
	TextDrawLetterSize(GrandKapt[0], 0.470000, 1.500000);
	TextDrawColor(GrandKapt[0], -1);
	TextDrawSetOutline(GrandKapt[0], 0);
	TextDrawSetProportional(GrandKapt[0], 1);
	TextDrawSetShadow(GrandKapt[0], 0);
	TextDrawSetSelectable(GrandKapt[0], 0);



	GrandKapt[3] = TextDrawCreate(319.000000, 378.000000, "_");
	TextDrawAlignment(GrandKapt[3], 2);
	TextDrawBackgroundColor(GrandKapt[3], 255);
	TextDrawFont(GrandKapt[3], 1);
	TextDrawLetterSize(GrandKapt[3], 0.500000, 6.699999);
	TextDrawColor(GrandKapt[3], -1);
	TextDrawSetOutline(GrandKapt[3], 0);
	TextDrawSetProportional(GrandKapt[3], 1);
	TextDrawSetShadow(GrandKapt[3], 1);
	TextDrawUseBox(GrandKapt[3], 1);
	TextDrawBoxColor(GrandKapt[3], 639969023);
	TextDrawTextSize(GrandKapt[3], 0.000000, 131.000000);
	TextDrawSetSelectable(GrandKapt[3], 0);

	GrandKapt[4] = TextDrawCreate(319.000000, 384.000000, "_");
	TextDrawAlignment(GrandKapt[4], 2);
	TextDrawBackgroundColor(GrandKapt[3], 255);
	TextDrawFont(GrandKapt[4], 1);
	TextDrawLetterSize(GrandKapt[4], 0.500000, 5.400000);
	TextDrawColor(GrandKapt[4], -1);
	TextDrawSetOutline(GrandKapt[4], 0);
	TextDrawSetProportional(GrandKapt[4], 1);
	TextDrawSetShadow(GrandKapt[4], 1);
	TextDrawUseBox(GrandKapt[4], 1);
	TextDrawBoxColor(GrandKapt[4], 1077952767);
	TextDrawTextSize(GrandKapt[4], 0.000000, 121.000000);
	TextDrawSetSelectable(GrandKapt[4], 0);

	GrandKapt[5] = TextDrawCreate(319.000000, 378.000000, "_");
	TextDrawAlignment(GrandKapt[5], 2);
	TextDrawBackgroundColor(GrandKapt[5], 255);
	TextDrawFont(GrandKapt[5], 1);
	TextDrawLetterSize(GrandKapt[5], 0.500000, 2.000000);
	TextDrawColor(GrandKapt[5], -1);
	TextDrawSetOutline(GrandKapt[5], 0);
	TextDrawSetProportional(GrandKapt[5], 1);
	TextDrawSetShadow(GrandKapt[5], 1);
	TextDrawUseBox(GrandKapt[5], 1);
	TextDrawBoxColor(GrandKapt[5], 639969023);
	TextDrawTextSize(GrandKapt[5], 0.000000, 54.000000);
	TextDrawSetSelectable(GrandKapt[5], 0);

	GrandKapt[6] = TextDrawCreate(319.000000, 402.000000, "GroveStreet");
	TextDrawAlignment(GrandKapt[6], 2);
	TextDrawBackgroundColor(GrandKapt[6], 255);
	TextDrawFont(GrandKapt[6], 1);
	TextDrawLetterSize(GrandKapt[6], 0.190000, 0.700000);
	TextDrawColor(GrandKapt[6], -1);
	TextDrawSetOutline(GrandKapt[6], 0);
	TextDrawSetProportional(GrandKapt[6], 1);
	TextDrawSetShadow(GrandKapt[6], 0);
	TextDrawUseBox(GrandKapt[6], 1);
	TextDrawBoxColor(GrandKapt[6], 639969023);
	TextDrawTextSize(GrandKapt[6], 0.000000, 54.000000);
	TextDrawSetSelectable(GrandKapt[6], 0);

	GrandKapt[7] = TextDrawCreate(319.000000, 414.000000, "GroveStreet");
	TextDrawAlignment(GrandKapt[7], 2);
	TextDrawBackgroundColor(GrandKapt[7], 255);
	TextDrawFont(GrandKapt[7], 1);
	TextDrawLetterSize(GrandKapt[7], 0.190000, 0.700000);
	TextDrawColor(GrandKapt[7], -1);
	TextDrawSetOutline(GrandKapt[7], 0);
	TextDrawSetProportional(GrandKapt[7], 1);
	TextDrawSetShadow(GrandKapt[7], 0);
	TextDrawUseBox(GrandKapt[7], 1);
	TextDrawBoxColor(GrandKapt[7], 639969023);
	TextDrawTextSize(GrandKapt[7], 0.000000, 54.000000);
	TextDrawSetSelectable(GrandKapt[7], 0);

	GrandKapt[1] = TextDrawCreate(364.000000, 402.000000, "00");
	TextDrawAlignment(GrandKapt[1], 2);
	TextDrawBackgroundColor(GrandKapt[1], 255);
	TextDrawFont(GrandKapt[1], 1);
	TextDrawLetterSize(GrandKapt[1], 0.460000, 2.000000);
	TextDrawColor(GrandKapt[1], -1);
	TextDrawSetOutline(GrandKapt[1], 0);
	TextDrawSetProportional(GrandKapt[1], 1);
	TextDrawSetShadow(GrandKapt[1], 0);
	TextDrawUseBox(GrandKapt[1], 1);
	TextDrawBoxColor(GrandKapt[1], 0x5E8832FF);
	TextDrawTextSize(GrandKapt[1], 0.000000, 23.000000);
	TextDrawSetSelectable(GrandKapt[1], 0);

	GrandKapt[2] = TextDrawCreate(274.000000, 402.000000, "02");
	TextDrawAlignment(GrandKapt[2], 2);
	TextDrawBackgroundColor(GrandKapt[2], 255);
	TextDrawFont(GrandKapt[2], 1);
	TextDrawLetterSize(GrandKapt[2], 0.460000, 2.000000);
	TextDrawColor(GrandKapt[2], -1);
	TextDrawSetOutline(GrandKapt[2], 0);
	TextDrawSetProportional(GrandKapt[2], 1);
	TextDrawSetShadow(GrandKapt[2], 0);
	TextDrawUseBox(GrandKapt[2], 1);
	TextDrawBoxColor(GrandKapt[2], 0x5E8832FF);
	TextDrawTextSize(GrandKapt[2], 0.000000, 23.000000);
	TextDrawSetSelectable(GrandKapt[2], 0);

	GrandKapt[8] = TextDrawCreate(364.000000, 390.000000, "score");
	TextDrawAlignment(GrandKapt[8], 2);
	TextDrawBackgroundColor(GrandKapt[8], 255);
	TextDrawFont(GrandKapt[8], 1);
	TextDrawLetterSize(GrandKapt[8], 0.170000, 0.900000);
	TextDrawColor(GrandKapt[8], -1);
	TextDrawSetOutline(GrandKapt[8], 0);
	TextDrawSetProportional(GrandKapt[8], 1);
	TextDrawSetShadow(GrandKapt[8], 0);
	TextDrawUseBox(GrandKapt[8], 1);
	TextDrawBoxColor(GrandKapt[8], 1342177280);
	TextDrawTextSize(GrandKapt[8], 0.000000, 23.000000);
	TextDrawSetSelectable(GrandKapt[8], 0);

	GrandKapt[9] = TextDrawCreate(274.000000, 390.000000, "score");
	TextDrawAlignment(GrandKapt[9], 2);
	TextDrawBackgroundColor(GrandKapt[9], 255);
	TextDrawFont(GrandKapt[9], 1);
	TextDrawLetterSize(GrandKapt[9], 0.170000, 0.900000);
	TextDrawColor(GrandKapt[9], -1);
	TextDrawSetOutline(GrandKapt[9], 0);
	TextDrawSetProportional(GrandKapt[9], 1);
	TextDrawSetShadow(GrandKapt[9], 0);
	TextDrawUseBox(GrandKapt[9], 1);
	TextDrawBoxColor(GrandKapt[9], 1342177280);
	TextDrawTextSize(GrandKapt[9], 0.000000, 23.000000);
	TextDrawSetSelectable(GrandKapt[9], 0);

	//////////////////////////////////========++++++++
	// мафии
	Grand2Kapt[0] = TextDrawCreate(320.000000, 382.000000, "00:00");
	TextDrawAlignment(Grand2Kapt[0], 2);
	TextDrawBackgroundColor(Grand2Kapt[0], 255);
	TextDrawFont(Grand2Kapt[0], 1);
	TextDrawLetterSize(Grand2Kapt[0], 0.470000, 1.500000);
	TextDrawColor(Grand2Kapt[0], -1);
	TextDrawSetOutline(Grand2Kapt[0], 0);
	TextDrawSetProportional(Grand2Kapt[0], 1);
	TextDrawSetShadow(Grand2Kapt[0], 0);
	TextDrawSetSelectable(Grand2Kapt[0], 0);



	Grand2Kapt[3] = TextDrawCreate(319.000000, 378.000000, "_");
	TextDrawAlignment(Grand2Kapt[3], 2);
	TextDrawBackgroundColor(Grand2Kapt[3], 255);
	TextDrawFont(Grand2Kapt[3], 1);
	TextDrawLetterSize(Grand2Kapt[3], 0.500000, 6.699999);
	TextDrawColor(Grand2Kapt[3], -1);
	TextDrawSetOutline(Grand2Kapt[3], 0);
	TextDrawSetProportional(Grand2Kapt[3], 1);
	TextDrawSetShadow(Grand2Kapt[3], 1);
	TextDrawUseBox(Grand2Kapt[3], 1);
	TextDrawBoxColor(Grand2Kapt[3], 639969023);
	TextDrawTextSize(Grand2Kapt[3], 0.000000, 131.000000);
	TextDrawSetSelectable(Grand2Kapt[3], 0);

	Grand2Kapt[4] = TextDrawCreate(319.000000, 384.000000, "_");
	TextDrawAlignment(Grand2Kapt[4], 2);
	TextDrawBackgroundColor(Grand2Kapt[3], 255);
	TextDrawFont(Grand2Kapt[4], 1);
	TextDrawLetterSize(Grand2Kapt[4], 0.500000, 5.400000);
	TextDrawColor(Grand2Kapt[4], -1);
	TextDrawSetOutline(Grand2Kapt[4], 0);
	TextDrawSetProportional(Grand2Kapt[4], 1);
	TextDrawSetShadow(Grand2Kapt[4], 1);
	TextDrawUseBox(Grand2Kapt[4], 1);
	TextDrawBoxColor(Grand2Kapt[4], 1077952767);
	TextDrawTextSize(Grand2Kapt[4], 0.000000, 121.000000);
	TextDrawSetSelectable(Grand2Kapt[4], 0);

	Grand2Kapt[5] = TextDrawCreate(319.000000, 378.000000, "_");
	TextDrawAlignment(Grand2Kapt[5], 2);
	TextDrawBackgroundColor(Grand2Kapt[5], 255);
	TextDrawFont(Grand2Kapt[5], 1);
	TextDrawLetterSize(Grand2Kapt[5], 0.500000, 2.000000);
	TextDrawColor(Grand2Kapt[5], -1);
	TextDrawSetOutline(Grand2Kapt[5], 0);
	TextDrawSetProportional(Grand2Kapt[5], 1);
	TextDrawSetShadow(Grand2Kapt[5], 1);
	TextDrawUseBox(Grand2Kapt[5], 1);
	TextDrawBoxColor(Grand2Kapt[5], 639969023);
	TextDrawTextSize(Grand2Kapt[5], 0.000000, 54.000000);
	TextDrawSetSelectable(Grand2Kapt[5], 0);

	Grand2Kapt[6] = TextDrawCreate(319.000000, 402.000000, "GroveStreet");
	TextDrawAlignment(Grand2Kapt[6], 2);
	TextDrawBackgroundColor(Grand2Kapt[6], 255);
	TextDrawFont(Grand2Kapt[6], 1);
	TextDrawLetterSize(Grand2Kapt[6], 0.190000, 0.700000);
	TextDrawColor(Grand2Kapt[6], -1);
	TextDrawSetOutline(Grand2Kapt[6], 0);
	TextDrawSetProportional(Grand2Kapt[6], 1);
	TextDrawSetShadow(Grand2Kapt[6], 0);
	TextDrawUseBox(Grand2Kapt[6], 1);
	TextDrawBoxColor(Grand2Kapt[6], 639969023);
	TextDrawTextSize(Grand2Kapt[6], 0.000000, 54.000000);
	TextDrawSetSelectable(Grand2Kapt[6], 0);

	Grand2Kapt[7] = TextDrawCreate(319.000000, 414.000000, "GroveStreet");
	TextDrawAlignment(Grand2Kapt[7], 2);
	TextDrawBackgroundColor(Grand2Kapt[7], 255);
	TextDrawFont(Grand2Kapt[7], 1);
	TextDrawLetterSize(Grand2Kapt[7], 0.190000, 0.700000);
	TextDrawColor(Grand2Kapt[7], -1);
	TextDrawSetOutline(Grand2Kapt[7], 0);
	TextDrawSetProportional(Grand2Kapt[7], 1);
	TextDrawSetShadow(Grand2Kapt[7], 0);
	TextDrawUseBox(Grand2Kapt[7], 1);
	TextDrawBoxColor(Grand2Kapt[7], 639969023);
	TextDrawTextSize(Grand2Kapt[7], 0.000000, 54.000000);
	TextDrawSetSelectable(Grand2Kapt[7], 0);

	Grand2Kapt[1] = TextDrawCreate(364.000000, 402.000000, "00");
	TextDrawAlignment(Grand2Kapt[1], 2);
	TextDrawBackgroundColor(Grand2Kapt[1], 255);
	TextDrawFont(Grand2Kapt[1], 1);
	TextDrawLetterSize(Grand2Kapt[1], 0.460000, 2.000000);
	TextDrawColor(Grand2Kapt[1], -1);
	TextDrawSetOutline(Grand2Kapt[1], 0);
	TextDrawSetProportional(Grand2Kapt[1], 1);
	TextDrawSetShadow(Grand2Kapt[1], 0);
	TextDrawUseBox(Grand2Kapt[1], 1);
	TextDrawBoxColor(Grand2Kapt[1], 0x5E8832FF);
	TextDrawTextSize(Grand2Kapt[1], 0.000000, 23.000000);
	TextDrawSetSelectable(Grand2Kapt[1], 0);

	Grand2Kapt[2] = TextDrawCreate(274.000000, 402.000000, "02");
	TextDrawAlignment(Grand2Kapt[2], 2);
	TextDrawBackgroundColor(Grand2Kapt[2], 255);
	TextDrawFont(Grand2Kapt[2], 1);
	TextDrawLetterSize(Grand2Kapt[2], 0.460000, 2.000000);
	TextDrawColor(Grand2Kapt[2], -1);
	TextDrawSetOutline(Grand2Kapt[2], 0);
	TextDrawSetProportional(Grand2Kapt[2], 1);
	TextDrawSetShadow(Grand2Kapt[2], 0);
	TextDrawUseBox(Grand2Kapt[2], 1);
	TextDrawBoxColor(Grand2Kapt[2], 0x5E8832FF);
	TextDrawTextSize(Grand2Kapt[2], 0.000000, 23.000000);
	TextDrawSetSelectable(Grand2Kapt[2], 0);

	Grand2Kapt[8] = TextDrawCreate(364.000000, 390.000000, "score");
	TextDrawAlignment(Grand2Kapt[8], 2);
	TextDrawBackgroundColor(Grand2Kapt[8], 255);
	TextDrawFont(Grand2Kapt[8], 1);
	TextDrawLetterSize(Grand2Kapt[8], 0.170000, 0.900000);
	TextDrawColor(Grand2Kapt[8], -1);
	TextDrawSetOutline(Grand2Kapt[8], 0);
	TextDrawSetProportional(Grand2Kapt[8], 1);
	TextDrawSetShadow(Grand2Kapt[8], 0);
	TextDrawUseBox(Grand2Kapt[8], 1);
	TextDrawBoxColor(Grand2Kapt[8], 1342177280);
	TextDrawTextSize(Grand2Kapt[8], 0.000000, 23.000000);
	TextDrawSetSelectable(Grand2Kapt[8], 0);

	Grand2Kapt[9] = TextDrawCreate(274.000000, 390.000000, "score");
	TextDrawAlignment(Grand2Kapt[9], 2);
	TextDrawBackgroundColor(Grand2Kapt[9], 255);
	TextDrawFont(Grand2Kapt[9], 1);
	TextDrawLetterSize(Grand2Kapt[9], 0.170000, 0.900000);
	TextDrawColor(Grand2Kapt[9], -1);
	TextDrawSetOutline(Grand2Kapt[9], 0);
	TextDrawSetProportional(Grand2Kapt[9], 1);
	TextDrawSetShadow(Grand2Kapt[9], 0);
	TextDrawUseBox(Grand2Kapt[9], 1);
	TextDrawBoxColor(Grand2Kapt[9], 1342177280);
	TextDrawTextSize(Grand2Kapt[9], 0.000000, 23.000000);
	TextDrawSetSelectable(Grand2Kapt[9], 0);
	//
	PTarget[0] = TextDrawCreate(402.000000, 8.000000, "BoxTarget1");
	TextDrawBackgroundColor(PTarget[0], 255);
	TextDrawFont(PTarget[0], 1);
	TextDrawLetterSize(PTarget[0], 0.000000, 5.099997);
	TextDrawUseBox(PTarget[0], 1);
	TextDrawBoxColor(PTarget[0], 48);
	TextDrawTextSize(PTarget[0], 243.000000, 1.000000);
	TextDrawSetSelectable(PTarget[0], 0);
	PTarget[1] = TextDrawCreate(400.000000, 10.000000, "BoxTarget2");
	TextDrawBackgroundColor(PTarget[1], 255);
	TextDrawFont(PTarget[1], 1);
	TextDrawLetterSize(PTarget[1], 0.000000, 4.599998);
	TextDrawUseBox(PTarget[1], 1);
	TextDrawBoxColor( PTarget[1], 80);
	TextDrawTextSize(PTarget[1], 245.000000, 1.000000);
	TextDrawSetSelectable(PTarget[1], 0);
	PTarget[2] = TextDrawCreate(400.000000, 35.000000, "BoxHP");
	TextDrawBackgroundColor(PTarget[2], 255);
	TextDrawFont(PTarget[2], 1);
	TextDrawLetterSize(PTarget[2], 0.000000, 0.400000);
	TextDrawUseBox(PTarget[2], 1);
	TextDrawBoxColor(PTarget[2], -1408430593);
	TextDrawTextSize(PTarget[2], 245.000000, 1.000000);
	TextDrawSetSelectable(PTarget[2], 0);
	PTarget[3] = TextDrawCreate(400.000000, 45.000000, "BoxARMOUR");
	TextDrawBackgroundColor(PTarget[3], 255);
	TextDrawFont(PTarget[3], 1);
	TextDrawLetterSize(PTarget[3], 0.000000, 0.400000);
	TextDrawUseBox(PTarget[3], 1);
	TextDrawBoxColor(PTarget[3], 794073599);
	TextDrawTextSize(PTarget[3], 245.000000, 1.000000);
	TextDrawSetSelectable(PTarget[3], 0);

	kryg = TextDrawCreate(123.000000, 397.000000, "ld_beat:up");
	TextDrawBackgroundColor(kryg, 0);
	TextDrawFont(kryg, 5);
	TextDrawLetterSize(kryg, 0.500000, 10.000000);
	TextDrawColor(kryg, -208);
	TextDrawSetOutline(kryg, 0);
	TextDrawSetProportional(kryg, 1);
	TextDrawSetShadow(kryg, 1);
	TextDrawTextSize(kryg, 41.000000, 56.000000);
	TextDrawSetPreviewModel(kryg, 1953);
	TextDrawSetPreviewRot(kryg, 90.000000, 0.000000, 0.000000, 1.000000);
	TextDrawSetSelectable(kryg, 0);

	/////////////////////////телефон
	Sphone[0] = TextDrawCreate( 39.000000, 162.000000, "_");
	TextDrawBackgroundColor( Sphone[0], 255);
	TextDrawFont( Sphone[0], 1);
	TextDrawLetterSize( Sphone[0], 0.549999, 18.499998);
	TextDrawColor( Sphone[0], -1);
	TextDrawSetOutline( Sphone[0], 0);
	TextDrawSetProportional( Sphone[0], 1);
	TextDrawSetShadow( Sphone[0], 1);
	TextDrawUseBox( Sphone[0], 1);
	TextDrawBoxColor( Sphone[0], 2088335871);
	TextDrawTextSize( Sphone[0], 135.000000, 0.000000);
	TextDrawSetSelectable( Sphone[0], 0);

	Sphone[1] = TextDrawCreate( 41.000000, 177.000000, "_");
	TextDrawBackgroundColor( Sphone[1], 255);
	TextDrawFont( Sphone[1], 1);
	TextDrawLetterSize( Sphone[1], 0.500000, 14.200000);
	TextDrawColor( Sphone[1], -1);
	TextDrawSetOutline( Sphone[1], 0);
	TextDrawSetProportional( Sphone[1], 1);
	TextDrawSetShadow( Sphone[1], 1);
	TextDrawUseBox( Sphone[1], 1);
	TextDrawBoxColor( Sphone[1], -1);
	TextDrawTextSize( Sphone[1], 133.000000, 3.000000);
	TextDrawSetSelectable( Sphone[1], 0);

	Sphone[2] = TextDrawCreate( 40.000000, 166.000000, "_");
	TextDrawBackgroundColor( Sphone[2], 255);
	TextDrawFont( Sphone[2], 1);
	TextDrawLetterSize( Sphone[2], 0.500000, 0.599999);
	TextDrawColor( Sphone[2], -1);
	TextDrawSetOutline( Sphone[2], 0);
	TextDrawSetProportional( Sphone[2], 1);
	TextDrawSetShadow( Sphone[2], 1);
	TextDrawUseBox( Sphone[2], 1);
	TextDrawBoxColor( Sphone[2], 1482053375);
	TextDrawTextSize( Sphone[2], 134.000000, 0.000000);
	TextDrawSetSelectable( Sphone[2], 0);

	Sphone[3] = TextDrawCreate( 72.000000, 313.000000, "_");
	TextDrawBackgroundColor( Sphone[3], 255);
	TextDrawFont( Sphone[3], 1);
	TextDrawLetterSize( Sphone[3], 0.500000, 1.400000);
	TextDrawColor( Sphone[3], -1);
	TextDrawSetOutline( Sphone[3], 0);
	TextDrawSetProportional( Sphone[3], 1);
	TextDrawSetShadow( Sphone[3], 1);
	TextDrawUseBox( Sphone[3], 1);
	TextDrawBoxColor( Sphone[3], 1482053375);
	TextDrawTextSize( Sphone[3], 102.000000, 1.000000);
	TextDrawSetSelectable( Sphone[3], 0);

	Sphone[4] = TextDrawCreate( 40.000000, 164.000000, "26/01/2015      Atizona state");
	TextDrawBackgroundColor( Sphone[4], 255);
	TextDrawFont( Sphone[4], 2);
	TextDrawLetterSize( Sphone[4], 0.130000, 0.899999);
	TextDrawColor( Sphone[4], -1);
	TextDrawSetOutline( Sphone[4], 0);
	TextDrawSetProportional( Sphone[4], 1);
	TextDrawSetShadow( Sphone[4], 0);
	TextDrawSetSelectable( Sphone[4], 0);

	Sphone[5] = TextDrawCreate( 95.000000, 167.000000, "22.30");
	TextDrawBackgroundColor( Sphone[5], 255);
	TextDrawFont( Sphone[5], 2);
	TextDrawLetterSize( Sphone[5], 0.370000, 3.500000);
	TextDrawColor( Sphone[5], 128);
	TextDrawSetOutline( Sphone[5], 0);
	TextDrawSetProportional( Sphone[5], 1);
	TextDrawSetShadow( Sphone[5], 0);
	TextDrawSetSelectable( Sphone[5], 0);

	Sphone[6] = TextDrawCreate( 72.000000, 312.000000, "ld_beat:up"); /////???? ????????
	TextDrawBackgroundColor( Sphone[6], 0);
	TextDrawFont( Sphone[6], 5);
	TextDrawLetterSize( Sphone[6], 0.500000, 1.000000);
	TextDrawColor( Sphone[6], 437721087);
	TextDrawSetOutline( Sphone[6], 0);
	TextDrawSetProportional( Sphone[6], 1);
	TextDrawSetShadow( Sphone[6], 1);
	TextDrawTextSize( Sphone[6], 30.000000, 14.000000);
	TextDrawSetPreviewModel( Sphone[6], 19377);
	TextDrawSetPreviewRot( Sphone[6], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( Sphone[6], 1);

	Sphone[7] = TextDrawCreate( 78.000000, 314.000000, "menu");
	TextDrawBackgroundColor( Sphone[7], 255);
	TextDrawFont( Sphone[7], 2);
	TextDrawLetterSize( Sphone[7], 0.130000, 1.000000);
	TextDrawColor( Sphone[7], -1);
	TextDrawSetOutline( Sphone[7], 0);
	TextDrawSetProportional( Sphone[7], 1);
	TextDrawSetShadow( Sphone[7], 0);
	TextDrawSetSelectable( Sphone[7], 0);

	Sphone[8] = TextDrawCreate( 41.000000, 291.000000, "ld_beat:up"); //??????
	TextDrawBackgroundColor( Sphone[8], 0);
	TextDrawFont( Sphone[8], 5);
	TextDrawLetterSize( Sphone[8], 0.500000, -0.000000);
	TextDrawColor( Sphone[8], 32);
	TextDrawSetOutline( Sphone[8], 0);
	TextDrawSetProportional( Sphone[8], 1);
	TextDrawSetShadow( Sphone[8], 1);
	TextDrawTextSize( Sphone[8], 92.000000, 15.000000);
	TextDrawSetPreviewModel( Sphone[8], 19377);
	TextDrawSetPreviewRot( Sphone[8], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( Sphone[8], 1);


	SphoneKey[0] = TextDrawCreate( 41.000000, 197.000000, "ld_beat:up"); //????????
	TextDrawBackgroundColor( SphoneKey[0], 0);
	TextDrawFont( SphoneKey[0], 5);
	TextDrawLetterSize( SphoneKey[0], 0.500000, 1.000000);
	TextDrawColor( SphoneKey[0], 32);
	TextDrawSetOutline( SphoneKey[0], 0);
	TextDrawSetProportional( SphoneKey[0], 1);
	TextDrawSetShadow( SphoneKey[0], 1);
	TextDrawTextSize( SphoneKey[0], 92.000000, 20.000000);
	TextDrawSetPreviewModel( SphoneKey[0], 19377);
	TextDrawSetPreviewRot( SphoneKey[0], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( SphoneKey[0], 1);

	SphoneKey[1] = TextDrawCreate( 56.000000, 200.000000, "Contacts");
	TextDrawBackgroundColor( SphoneKey[1], 255);
	TextDrawFont( SphoneKey[1], 2);
	TextDrawLetterSize( SphoneKey[1], 0.270000, 1.300000);
	TextDrawColor( SphoneKey[1], 255);
	TextDrawSetOutline( SphoneKey[1], 0);
	TextDrawSetProportional( SphoneKey[1], 1);
	TextDrawSetShadow( SphoneKey[1], 0);
	TextDrawSetSelectable( SphoneKey[1], 0);

	SphoneKey[2] = TextDrawCreate( 41.000000, 221.000000, "ld_beat:up");//mesages
	TextDrawBackgroundColor( SphoneKey[2], 0);
	TextDrawFont( SphoneKey[2], 5);
	TextDrawLetterSize( SphoneKey[2], 0.500000, 1.000000);
	TextDrawColor( SphoneKey[2], 32);
	TextDrawSetOutline( SphoneKey[2], 0);
	TextDrawSetProportional( SphoneKey[2], 1);
	TextDrawSetShadow( SphoneKey[2], 1);
	TextDrawTextSize( SphoneKey[2], 92.000000, 20.000000);
	TextDrawSetPreviewModel( SphoneKey[2], 19377);
	TextDrawSetPreviewRot( SphoneKey[2], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( SphoneKey[2], 1);

	SphoneKey[3] = TextDrawCreate( 54.000000, 224.000000, "Messages");
	TextDrawBackgroundColor( SphoneKey[3], 255);
	TextDrawFont( SphoneKey[3], 2);
	TextDrawLetterSize( SphoneKey[3], 0.270000, 1.300000);
	TextDrawColor( SphoneKey[3], 255);
	TextDrawSetOutline( SphoneKey[3], 0);
	TextDrawSetProportional( SphoneKey[3], 1);
	TextDrawSetShadow( SphoneKey[3], 0);
	TextDrawSetSelectable( SphoneKey[3], 0);

	SphoneKey[4] = TextDrawCreate( 41.000000, 269.000000, "ld_beat:up"); // ????????? ????????
	TextDrawBackgroundColor( SphoneKey[4], 0);
	TextDrawFont( SphoneKey[4], 5);
	TextDrawLetterSize( SphoneKey[4], 0.500000, 1.000000);
	TextDrawColor( SphoneKey[4], 32);
	TextDrawSetOutline( SphoneKey[4], 0);
	TextDrawSetProportional( SphoneKey[4], 1);
	TextDrawSetShadow( SphoneKey[4], 1);
	TextDrawTextSize( SphoneKey[4], 92.000000, 20.000000);
	TextDrawSetPreviewModel( SphoneKey[4], 19377);
	TextDrawSetPreviewRot( SphoneKey[4], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( SphoneKey[4], 1);

	SphoneKey[5] = TextDrawCreate( 54.000000, 271.000000, "Off/On phone");
	TextDrawBackgroundColor( SphoneKey[5], 255);
	TextDrawFont( SphoneKey[5], 2);
	TextDrawLetterSize( SphoneKey[5], 0.270000, 1.300000);
	TextDrawColor( SphoneKey[5], 255);
	TextDrawSetOutline( SphoneKey[5], 0);
	TextDrawSetProportional( SphoneKey[5], 1);
	TextDrawSetShadow( SphoneKey[5], 0);
	TextDrawSetSelectable( SphoneKey[5], 0);

	SphoneKey[6] = TextDrawCreate( 41.000000, 245.000000, "ld_beat:up"); //////?????????
	TextDrawBackgroundColor( SphoneKey[6], 0);
	TextDrawFont( SphoneKey[6], 5);
	TextDrawLetterSize( SphoneKey[6], 0.500000, 1.000000);
	TextDrawColor( SphoneKey[6], 32);
	TextDrawSetOutline( SphoneKey[6], 0);
	TextDrawSetProportional( SphoneKey[6], 1);
	TextDrawSetShadow( SphoneKey[6], 1);
	TextDrawTextSize( SphoneKey[6], 92.000000, 20.000000);
	TextDrawSetPreviewModel( SphoneKey[6], 19377);
	TextDrawSetPreviewRot( SphoneKey[6], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( SphoneKey[6], 1);

	SphoneKey[7] = TextDrawCreate( 54.000000, 247.000000, "Call");
	TextDrawBackgroundColor( SphoneKey[7], 255);
	TextDrawFont( SphoneKey[7], 2);
	TextDrawLetterSize( SphoneKey[7], 0.270000, 1.300000);
	TextDrawColor( SphoneKey[7], 255);
	TextDrawSetOutline( SphoneKey[7], 0);
	TextDrawSetProportional( SphoneKey[7], 1);
	TextDrawSetShadow( SphoneKey[7], 0);
	TextDrawSetSelectable( SphoneKey[7], 0);

	Calling[0] = TextDrawCreate( 41.000000, 245.000000, "ld_beat:up"); ///????????? ?????
	TextDrawBackgroundColor( Calling[0], 0);
	TextDrawFont( Calling[0], 5);
	TextDrawLetterSize( Calling[0], 0.500000, 1.000000);
	TextDrawColor( Calling[0], 32);
	TextDrawSetOutline( Calling[0], 0);
	TextDrawSetProportional( Calling[0], 1);
	TextDrawSetShadow( Calling[0], 1);
	TextDrawTextSize( Calling[0], 92.000000, 20.000000);
	TextDrawSetPreviewModel( Calling[0], 19377);
	TextDrawSetPreviewRot( Calling[0], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( Calling[0], 1);

	Calling[1] = TextDrawCreate( 41.000000, 269.000000, "ld_beat:up"); // ??????? ??????
	TextDrawBackgroundColor( Calling[1], 0);
	TextDrawFont( Calling[1], 5);
	TextDrawLetterSize( Calling[1], 0.500000, 1.000000);
	TextDrawColor( Calling[1], 32);
	TextDrawSetOutline( Calling[1], 0);
	TextDrawSetProportional( Calling[1], 1);
	TextDrawSetShadow( Calling[1], 1);
	TextDrawTextSize( Calling[1], 92.000000, 20.000000);
	TextDrawSetPreviewModel( Calling[1], 19377);
	TextDrawSetPreviewRot( Calling[1], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable( Calling[1], 1);

	Calling[2] = TextDrawCreate( 54.000000, 247.000000, "Take");
	TextDrawBackgroundColor( Calling[2], 255);
	TextDrawFont( Calling[2], 2);
	TextDrawLetterSize( Calling[2], 0.270000, 1.300000);
	TextDrawColor( Calling[2], 255);
	TextDrawSetOutline( Calling[2], 0);
	TextDrawSetProportional( Calling[2], 1);
	TextDrawSetShadow( Calling[2], 0);
	TextDrawSetSelectable( Calling[2], 0);

	Calling[3] = TextDrawCreate( 54.000000, 271.000000, "Cancel");
	TextDrawBackgroundColor( Calling[3], 255);
	TextDrawFont( Calling[3], 2);
	TextDrawLetterSize( Calling[3], 0.270000, 1.300000);
	TextDrawColor( Calling[3], 255);
	TextDrawSetOutline( Calling[3], 0);
	TextDrawSetProportional( Calling[3], 1);
	TextDrawSetShadow( Calling[3], 0);
	TextDrawSetSelectable( Calling[3], 0);
	//////
	/////////////phonekey
	Pnumber[0] = TextDrawCreate(125.000000, 214.000000, "0");
	TextDrawAlignment(Pnumber[0], 2);
	TextDrawBackgroundColor(Pnumber[0], 255);
	TextDrawFont(Pnumber[0], 3);
	TextDrawLetterSize(Pnumber[0], 0.650000, 1.399999);
	TextDrawColor(Pnumber[0], -112);
	TextDrawSetOutline(Pnumber[0], 1);
	TextDrawSetProportional(Pnumber[0], 1);
	TextDrawUseBox(Pnumber[0], 1);
	TextDrawBoxColor(Pnumber[0], 32);
	TextDrawTextSize(Pnumber[0], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[0], 1);


	Pnumber[1] = TextDrawCreate(62.000000, 214.000000, "1");
	TextDrawAlignment(Pnumber[1], 2);
	TextDrawBackgroundColor(Pnumber[1], 255);
	TextDrawFont(Pnumber[1], 3);
	TextDrawLetterSize(Pnumber[1], 0.680000, 1.399999);
	TextDrawColor(Pnumber[1], -112);
	TextDrawSetOutline(Pnumber[1], 1);
	TextDrawSetProportional(Pnumber[1], 1);
	TextDrawUseBox(Pnumber[1], 1);
	TextDrawBoxColor(Pnumber[1], 32);
	TextDrawTextSize(Pnumber[1], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[1], 1);

	Pnumber[2] = TextDrawCreate(84.000000, 214.000000, "2");
	TextDrawAlignment(Pnumber[2], 2);
	TextDrawBackgroundColor(Pnumber[2], 255);
	TextDrawFont(Pnumber[2], 3);
	TextDrawLetterSize(Pnumber[2], 0.680000, 1.399999);
	TextDrawColor(Pnumber[2], -112);
	TextDrawSetOutline(Pnumber[2], 1);
	TextDrawSetProportional(Pnumber[2], 1);
	TextDrawUseBox(Pnumber[2], 1);
	TextDrawBoxColor(Pnumber[2], 32);
	TextDrawTextSize(Pnumber[2], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[2], 1);

	Pnumber[3] = TextDrawCreate(106.000000, 214.000000, "3");
	TextDrawAlignment(Pnumber[3], 2);
	TextDrawBackgroundColor(Pnumber[3], 255);
	TextDrawFont(Pnumber[3], 3);
	TextDrawLetterSize(Pnumber[3], 0.680000, 1.399999);
	TextDrawColor(Pnumber[3], -112);
	TextDrawSetOutline(Pnumber[3], 1);
	TextDrawSetProportional(Pnumber[3], 1);
	TextDrawUseBox(Pnumber[3], 1);
	TextDrawBoxColor(Pnumber[3], 32);
	TextDrawTextSize(Pnumber[3], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[3], 1);

	Pnumber[4] = TextDrawCreate(62.000000, 233.000000, "4");
	TextDrawAlignment(Pnumber[4], 2);
	TextDrawBackgroundColor(Pnumber[4], 255);
	TextDrawFont(Pnumber[4], 3);
	TextDrawLetterSize(Pnumber[4], 0.680000, 1.399999);
	TextDrawColor(Pnumber[4], -112);
	TextDrawSetOutline(Pnumber[4], 1);
	TextDrawSetProportional(Pnumber[4], 1);
	TextDrawUseBox(Pnumber[4], 1);
	TextDrawBoxColor(Pnumber[4], 32);
	TextDrawTextSize(Pnumber[4],13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[4], 1);

	Pnumber[5] = TextDrawCreate(84.000000, 233.000000, "5");
	TextDrawAlignment(Pnumber[5], 2);
	TextDrawBackgroundColor(Pnumber[5], 255);
	TextDrawFont(Pnumber[5], 3);
	TextDrawLetterSize(Pnumber[5], 0.680000, 1.399999);
	TextDrawColor(Pnumber[5], -112);
	TextDrawSetOutline(Pnumber[5], 1);
	TextDrawSetProportional(Pnumber[5], 1);
	TextDrawUseBox(Pnumber[5], 1);
	TextDrawBoxColor(Pnumber[5], 32);
	TextDrawTextSize(Pnumber[5], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[5], 1);

	Pnumber[6] = TextDrawCreate(106.000000, 233.000000, "6");
	TextDrawAlignment(Pnumber[6], 2);
	TextDrawBackgroundColor(Pnumber[6], 255);
	TextDrawFont(Pnumber[6], 3);
	TextDrawLetterSize(Pnumber[6], 0.680000, 1.399999);
	TextDrawColor(Pnumber[6], -112);
	TextDrawSetOutline(Pnumber[6], 1);
	TextDrawSetProportional(Pnumber[6], 1);
	TextDrawUseBox(Pnumber[6], 1);
	TextDrawBoxColor(Pnumber[6], 32);
	TextDrawTextSize(Pnumber[6], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[6], 1);

	Pnumber[7] = TextDrawCreate(62.000000, 252.000000, "7");
	TextDrawAlignment(Pnumber[7], 2);
	TextDrawBackgroundColor(Pnumber[7], 255);
	TextDrawFont(Pnumber[7], 3);
	TextDrawLetterSize(Pnumber[7], 0.680000, 1.399999);
	TextDrawColor(Pnumber[7], -112);
	TextDrawSetOutline(Pnumber[7], 1);
	TextDrawSetProportional(Pnumber[7], 1);
	TextDrawUseBox(Pnumber[7], 1);
	TextDrawBoxColor(Pnumber[7], 32);
	TextDrawTextSize(Pnumber[7], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[7], 1);

	Pnumber[8] = TextDrawCreate(84.000000, 252.000000, "8");
	TextDrawAlignment(Pnumber[8], 2);
	TextDrawBackgroundColor(Pnumber[8], 255);
	TextDrawFont(Pnumber[8], 3);
	TextDrawLetterSize(Pnumber[8], 0.680000, 1.399999);
	TextDrawColor(Pnumber[8], -112);
	TextDrawSetOutline(Pnumber[8], 1);
	TextDrawSetProportional(Pnumber[8], 1);
	TextDrawUseBox(Pnumber[8], 1);
	TextDrawBoxColor(Pnumber[8], 32);
	TextDrawTextSize(Pnumber[8], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[8], 1);

	Pnumber[9] = TextDrawCreate(106.000000, 252.000000, "9");
	TextDrawAlignment(Pnumber[9], 2);
	TextDrawBackgroundColor(Pnumber[9], 255);
	TextDrawFont(Pnumber[9], 3);
	TextDrawLetterSize(Pnumber[9], 0.680000, 1.399999);
	TextDrawColor(Pnumber[9], -112);
	TextDrawSetOutline(Pnumber[9], 1);
	TextDrawSetProportional(Pnumber[9], 1);
	TextDrawUseBox(Pnumber[9], 1);
	TextDrawBoxColor(Pnumber[9], 32);
	TextDrawTextSize(Pnumber[9], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[9], 1);

	Pnumber[10] = TextDrawCreate(41.000000, 197.000000, "xyyna");
	TextDrawBackgroundColor(Pnumber[10], 0);
	TextDrawFont(Pnumber[10], 5);
	TextDrawLetterSize(Pnumber[10], 0.500000, 1.000000);
	TextDrawColor(Pnumber[10], 32);
	TextDrawSetOutline(Pnumber[10], 0);
	TextDrawSetProportional(Pnumber[10], 1);
	TextDrawSetShadow(Pnumber[10], 1);
	TextDrawTextSize(Pnumber[10], 93.000000, 13.000000);
	TextDrawSetPreviewModel(Pnumber[10], 19377);
	TextDrawSetPreviewRot(Pnumber[10], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(Pnumber[10], 0);

	Pnumber[11] = TextDrawCreate(41.000000, 269.000000, "callersyka");
	TextDrawBackgroundColor(Pnumber[11], 0);
	TextDrawFont(Pnumber[11], 5);
	TextDrawLetterSize(Pnumber[11], 0.500000, 1.000000);
	TextDrawColor(Pnumber[11], 1003370751);
	TextDrawSetOutline(Pnumber[11], 0);
	TextDrawSetProportional(Pnumber[11], 1);
	TextDrawSetShadow(Pnumber[11], 1);
	TextDrawTextSize(Pnumber[11], 51.000000, 13.000000);
	TextDrawSetPreviewModel(Pnumber[11], 19377);
	TextDrawSetPreviewRot(Pnumber[11], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(Pnumber[11], 1);

	Pnumber[12] = TextDrawCreate(51.000000, 270.000000, "call");
	TextDrawBackgroundColor(Pnumber[12], 255);
	TextDrawFont(Pnumber[12], 2);
	TextDrawLetterSize(Pnumber[12], 0.300000, 1.000000);
	TextDrawColor(Pnumber[12], -1);
	TextDrawSetOutline(Pnumber[12], 1);
	TextDrawSetProportional(Pnumber[12], 1);
	TextDrawTextSize(Pnumber[12], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[12], 0);

	Pnumber[13] = TextDrawCreate(95.000000, 269.000000, "clearsyka");
	TextDrawBackgroundColor(Pnumber[13], 0);
	TextDrawFont(Pnumber[13], 5);
	TextDrawLetterSize(Pnumber[13], 0.500000, 1.000000);
	TextDrawColor(Pnumber[13], 32);
	TextDrawSetOutline(Pnumber[13], 0);
	TextDrawSetProportional(Pnumber[13], 1);
	TextDrawSetShadow(Pnumber[13], 1);
	TextDrawTextSize(Pnumber[13], 40.000000, 13.000000);
	TextDrawSetPreviewModel(Pnumber[13], 19377);
	TextDrawSetPreviewRot(Pnumber[13],0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(Pnumber[13], 1);

	Pnumber[14] = TextDrawCreate(102.000000, 270.000000, "clear");
	TextDrawBackgroundColor(Pnumber[14], 255);
	TextDrawFont(Pnumber[14], 2);
	TextDrawLetterSize(Pnumber[14], 0.210000, 1.000000);
	TextDrawColor(Pnumber[14], -1);
	TextDrawSetOutline(Pnumber[14], 1);
	TextDrawSetProportional(Pnumber[14], 1);
	TextDrawTextSize(Pnumber[14], 13.000000, 13.000000);
	TextDrawSetSelectable(Pnumber[14], 0);
	////
	/////////казино
	kbox[0] = TextDrawCreate(481.000000, 370.000000, "_");
	TextDrawBackgroundColor(kbox[0], 255);
	TextDrawFont(kbox[0], 1);
	TextDrawLetterSize(kbox[0], 0.500000, 7.099999);
	TextDrawColor(kbox[0], -1);
	TextDrawSetOutline(kbox[0], 0);
	TextDrawSetProportional(kbox[0], 1);
	TextDrawSetShadow(kbox[0], 1);
	TextDrawUseBox(kbox[0], 1);
	TextDrawBoxColor(kbox[0], 255);
	TextDrawTextSize(kbox[0], 631.000000, 0.000000);
	TextDrawSetSelectable(kbox[0], 0);

	kbox[1] = TextDrawCreate(483.000000, 373.000000, "_");
	TextDrawBackgroundColor(kbox[1], 255);
	TextDrawFont(kbox[1], 1);
	TextDrawLetterSize(kbox[1], 0.500000, 6.500000);
	TextDrawColor(kbox[1], -1);
	TextDrawSetOutline(kbox[1], 0);
	TextDrawSetProportional(kbox[1], 1);
	TextDrawSetShadow(kbox[1], 1);
	TextDrawUseBox(kbox[1], 1);
	TextDrawBoxColor(kbox[1], -1456788481);
	TextDrawTextSize(kbox[1], 629.000000, 0.000000);
	TextDrawSetSelectable(kbox[1], 0);
	/////////казино
	Bandito[0] = TextDrawCreate(272.000000, 147.000000, "_");
	TextDrawBackgroundColor(Bandito[0], 255);
	TextDrawFont(Bandito[0], 1);
	TextDrawLetterSize(Bandito[0], -0.199999, 15.800003);
	TextDrawColor(Bandito[0], -1);
	TextDrawSetOutline(Bandito[0], 0);
	TextDrawSetProportional(Bandito[0], 1);
	TextDrawSetShadow(Bandito[0], 1);
	TextDrawUseBox(Bandito[0], 1);
	TextDrawBoxColor(Bandito[0], -1961026049);
	TextDrawTextSize(Bandito[0], 367.000000, -2.000000);
	TextDrawSetSelectable(Bandito[0], 0);

	Bandito[1] = TextDrawCreate(320.000000, 152.000000, "Slot Machine");
	TextDrawAlignment(Bandito[1], 2);
	TextDrawBackgroundColor(Bandito[1], 255);
	TextDrawFont(Bandito[1], 2);
	TextDrawLetterSize(Bandito[1], 0.330000, 2.300000);
	TextDrawColor(Bandito[1], -1);
	TextDrawSetOutline(Bandito[1], 1);
	TextDrawSetProportional(Bandito[1], 1);
	TextDrawUseBox(Bandito[1], 1);
	TextDrawBoxColor(Bandito[1], 48);
	TextDrawTextSize(Bandito[1], 0.000000, 81.000000);
	TextDrawSetSelectable(Bandito[1], 0);

	Bandito[2] = TextDrawCreate(272.000000, 258.000000, "ld_beat:up");
	TextDrawBackgroundColor(Bandito[2], 0);
	TextDrawFont(Bandito[2], 5);
	TextDrawLetterSize(Bandito[2], 0.500000, 1.000000);
	TextDrawColor(Bandito[2], 64);
	TextDrawSetOutline(Bandito[2], 0);
	TextDrawSetProportional(Bandito[2], 1);
	TextDrawSetShadow(Bandito[2], 1);
	TextDrawTextSize(Bandito[2], 30.000000, 30.000000);
	TextDrawSetPreviewModel(Bandito[2], 19377);
	TextDrawSetPreviewRot(Bandito[2], 0.000000, 0.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(Bandito[2], 1);

	Bandito[3] = TextDrawCreate(338.000000, 258.000000, "ld_beat:up");
	TextDrawBackgroundColor(Bandito[3], 0);
	TextDrawFont(Bandito[3], 5);
	TextDrawLetterSize(Bandito[3], 0.500000, 1.000000);
	TextDrawColor(Bandito[3], 64);
	TextDrawSetOutline(Bandito[3], 0);
	TextDrawSetProportional(Bandito[3], 1);
	TextDrawSetShadow(Bandito[3], 1);
	TextDrawTextSize(Bandito[3], 30.000000, 30.000000);
	TextDrawSetPreviewModel(Bandito[3], 19377);
	TextDrawSetPreviewRot(Bandito[3], 0.000000, 0.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(Bandito[3], 1);
	////////////////////////////

	klickd[0] = TextDrawCreate(228.000000, 137.000000, "_");
	TextDrawBackgroundColor(klickd[0], 255);
	TextDrawFont(klickd[0], 1);
	TextDrawLetterSize(klickd[0], 0.500000, 19.799999);
	TextDrawColor(klickd[0], 1969887264);
	TextDrawSetOutline(klickd[0], 0);
	TextDrawSetProportional(klickd[0], 1);
	TextDrawSetShadow(klickd[0], 1);
	TextDrawUseBox(klickd[0], 1);
	TextDrawBoxColor(klickd[0], -240);
	TextDrawTextSize(klickd[0], 473.000000, 2.000000);
	TextDrawSetSelectable(klickd[0], 0);

	klickd[1] = TextDrawCreate(436.000000, 166.000000, "Done");
	TextDrawAlignment(klickd[1], 2);
	TextDrawBackgroundColor(klickd[1], 255);
	TextDrawFont(klickd[1], 2);
	TextDrawLetterSize(klickd[1], 0.300000, 1.100000);
	TextDrawColor(klickd[1], -1);
	TextDrawSetOutline(klickd[1], 1);
	TextDrawSetProportional(klickd[1], 1);
	TextDrawUseBox(klickd[1], 1);
	TextDrawBoxColor(klickd[1], -1294582896);
	TextDrawTextSize(klickd[1], 20.000000, 63.000000);
	TextDrawSetSelectable(klickd[1], 1);

	klickd[2] = TextDrawCreate(436.000000, 190.000000, "Clear");
	TextDrawAlignment(klickd[2], 2);
	TextDrawBackgroundColor(klickd[2], 255);
	TextDrawFont(klickd[2], 2);
	TextDrawLetterSize(klickd[2], 0.300000, 1.100000);
	TextDrawColor(klickd[2], -1);
	TextDrawSetOutline(klickd[2], 1);
	TextDrawSetProportional(klickd[2], 1);
	TextDrawUseBox(klickd[2], 1);
	TextDrawBoxColor(klickd[2], -1294582896);
	TextDrawTextSize(klickd[2], 20.000000, 63.000000);
	TextDrawSetSelectable(klickd[2], 1);

	klick[0] = TextDrawCreate(266.000000, 145.000000, "1");
	TextDrawAlignment(klick[0], 2);
	TextDrawBackgroundColor(klick[0], 255);
	TextDrawFont(klick[0], 3);
	TextDrawLetterSize(klick[0], 1.560000, 4.999999);
	TextDrawColor(klick[0], -1);
	TextDrawSetOutline(klick[0], 0);
	TextDrawSetProportional(klick[0], 1);
	TextDrawSetShadow(klick[0], 1);
	TextDrawUseBox(klick[0], 1);
	TextDrawBoxColor(klick[0], -1012451329);
	TextDrawTextSize(klick[0], 40.000000, 40.000000);
	TextDrawSetSelectable(klick[0], 1);

	klick[1] = TextDrawCreate(320.000000, 145.000000, "2");
	TextDrawAlignment(klick[1], 2);
	TextDrawBackgroundColor(klick[1], 255);
	TextDrawFont(klick[1], 3);
	TextDrawLetterSize(klick[1], 1.560000, 4.999999);
	TextDrawColor(klick[1], -1);
	TextDrawSetOutline(klick[1], 0);
	TextDrawSetProportional(klick[1], 1);
	TextDrawSetShadow(klick[1], 1);
	TextDrawUseBox(klick[1], 1);
	TextDrawBoxColor(klick[1], -1012451329);
	TextDrawTextSize(klick[1], 40.000000, 40.000000);
	TextDrawSetSelectable(klick[1], 1);

	klick[2] = TextDrawCreate(374.000000, 145.000000, "3");
	TextDrawAlignment(klick[2], 2);
	TextDrawBackgroundColor(klick[2], 255);
	TextDrawFont(klick[2], 3);
	TextDrawLetterSize(klick[2], 1.560000, 4.999999);
	TextDrawColor(klick[2], -1);
	TextDrawSetOutline(klick[2], 0);
	TextDrawSetProportional(klick[2], 1);
	TextDrawSetShadow(klick[2], 1);
	TextDrawUseBox(klick[2], 1);
	TextDrawBoxColor(klick[2], -1012451329);
	TextDrawTextSize(klick[2], 40.000000, 40.000000);
	TextDrawSetSelectable(klick[2], 1);

	klick[3] = TextDrawCreate(266.000000, 203.000000, "4");
	TextDrawAlignment(klick[3], 2);
	TextDrawBackgroundColor(klick[3], 255);
	TextDrawFont(klick[3], 3);
	TextDrawLetterSize(klick[3], 1.560000, 4.999999);
	TextDrawColor(klick[3], -1);
	TextDrawSetOutline(klick[3], 0);
	TextDrawSetProportional(klick[3], 1);
	TextDrawSetShadow(klick[3], 1);
	TextDrawUseBox(klick[3], 1);
	TextDrawBoxColor(klick[3], -1012451329);
	TextDrawTextSize(klick[3], 40.000000, 40.000000);
	TextDrawSetSelectable(klick[3], 1);

	klick[4] = TextDrawCreate(320.000000, 204.000000, "5");
	TextDrawAlignment(klick[4], 2);
	TextDrawBackgroundColor(klick[4], 255);
	TextDrawFont(klick[4], 3);
	TextDrawLetterSize(klick[4], 1.560000, 4.999999);
	TextDrawColor(klick[4], -1);
	TextDrawSetOutline(klick[4], 0);
	TextDrawSetProportional(klick[4], 1);
	TextDrawSetShadow(klick[4], 1);
	TextDrawUseBox(klick[4], 1);
	TextDrawBoxColor(klick[4], -1012451329);
	TextDrawTextSize(klick[4], 40.000000, 40.000000);
	TextDrawSetSelectable(klick[4], 1);

	klick[5] = TextDrawCreate(374.000000, 203.000000, "6");
	TextDrawAlignment(klick[5], 2);
	TextDrawBackgroundColor(klick[5], 255);
	TextDrawFont(klick[5], 3);
	TextDrawLetterSize(klick[5], 1.560000, 4.999999);
	TextDrawColor(klick[5], -1);
	TextDrawSetOutline(klick[5], 0);
	TextDrawSetProportional(klick[5], 1);
	TextDrawSetShadow(klick[5], 1);
	TextDrawUseBox(klick[5], 1);
	TextDrawBoxColor(klick[5], -1012451329);
	TextDrawTextSize(klick[5],40.000000, 40.000000);
	TextDrawSetSelectable(klick[5], 1);


	klick[6] = TextDrawCreate(266.000000, 262.000000, "7");
	TextDrawAlignment(klick[6], 2);
	TextDrawBackgroundColor(klick[6], 255);
	TextDrawFont(klick[6], 3);
	TextDrawLetterSize(klick[6], 1.560000, 4.999999);
	TextDrawColor(klick[6], -1);
	TextDrawSetOutline(klick[6], 0);
	TextDrawSetProportional(klick[6], 1);
	TextDrawSetShadow(klick[6], 1);
	TextDrawUseBox(klick[6], 1);
	TextDrawBoxColor(klick[6], -1012451329);
	TextDrawTextSize(klick[6],40.000000, 40.000000);
	TextDrawSetSelectable(klick[6], 1);

	klick[7] = TextDrawCreate(320.000000, 262.000000, "8");
	TextDrawAlignment(klick[7], 2);
	TextDrawBackgroundColor(klick[7], 255);
	TextDrawFont(klick[7], 3);
	TextDrawLetterSize(klick[7], 1.560000, 4.999999);
	TextDrawColor(klick[7], -1);
	TextDrawSetOutline(klick[7], 0);
	TextDrawSetProportional(klick[7], 1);
	TextDrawSetShadow(klick[7], 1);
	TextDrawUseBox(klick[7], 1);
	TextDrawBoxColor(klick[7], -1012451329);
	TextDrawTextSize(klick[7], 40.000000, 40.000000);
	TextDrawSetSelectable(klick[7], 1);


	klick[8] = TextDrawCreate(374.000000, 262.000000, "9");
	TextDrawAlignment(klick[8], 2);
	TextDrawBackgroundColor(klick[8], 255);
	TextDrawFont(klick[8], 3);
	TextDrawLetterSize(klick[8], 1.560000, 4.999999);
	TextDrawColor(klick[8], -1);
	TextDrawSetOutline(klick[8], 0);
	TextDrawSetProportional(klick[8], 1);
	TextDrawSetShadow(klick[8], 1);
	TextDrawUseBox(klick[8], 1);
	TextDrawBoxColor(klick[8], -1012451329);
	TextDrawTextSize(klick[8],40.000000, 40.000000);
	TextDrawSetSelectable(klick[8], 1);

	//////////////////////////////
	Bandito[4] = TextDrawCreate(285.000000, 264.000000, "~r~-");
	TextDrawBackgroundColor(Bandito[4], 255);
	TextDrawFont(Bandito[4], 1);
	TextDrawLetterSize(Bandito[4], 0.500000, 1.400000);
	TextDrawColor(Bandito[4], -1);
	TextDrawSetOutline(Bandito[4], 1);
	TextDrawSetProportional(Bandito[4], 1);
	TextDrawSetSelectable(Bandito[4], 0);

	Bandito[5] = TextDrawCreate(348.000000, 267.000000, "~g~+");
	TextDrawBackgroundColor(Bandito[5], 255);
	TextDrawFont(Bandito[5], 1);
	TextDrawLetterSize(Bandito[5], 0.549999, 1.200000);
	TextDrawColor(Bandito[5], -1);
	TextDrawSetOutline(Bandito[5], 1);
	TextDrawSetProportional(Bandito[5], 1);
	TextDrawSetSelectable(Bandito[5], 0);

	Bandito[6] = TextDrawCreate(299.000000, 263.000000, "ld_beat:up");
	TextDrawBackgroundColor(Bandito[6], 0);
	TextDrawFont(Bandito[6], 5);
	TextDrawLetterSize(Bandito[6], 0.500000, 1.000000);
	TextDrawColor(Bandito[6], 64);
	TextDrawSetOutline(Bandito[6], 0);
	TextDrawSetProportional(Bandito[6], 1);
	TextDrawSetShadow(Bandito[6], 1);
	TextDrawTextSize(Bandito[6], 40.000000, 20.000000);
	TextDrawSetPreviewModel(Bandito[6], 19377);
	TextDrawSetPreviewRot(Bandito[6], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(Bandito[6], 1);

	Bandito[7] = TextDrawCreate(308.000000, 268.000000, "play");
	TextDrawBackgroundColor(Bandito[7], 255);
	TextDrawFont(Bandito[7], 2);
	TextDrawLetterSize(Bandito[7], 0.240000, 1.000000);
	TextDrawColor(Bandito[7], -1);
	TextDrawSetOutline(Bandito[7], 1);
	TextDrawSetProportional(Bandito[7], 1);
	TextDrawSetSelectable(Bandito[7], 0);

	Bandito[8] = TextDrawCreate(364.000000, 139.000000, "ld_beat:up");
	TextDrawBackgroundColor(Bandito[8], 0);
	TextDrawFont(Bandito[8], 5);
	TextDrawLetterSize(Bandito[8], 0.500000, 1.000000);
	TextDrawColor(Bandito[8], 64);
	TextDrawSetOutline(Bandito[8], 0);
	TextDrawSetProportional(Bandito[8], 1);
	TextDrawSetShadow(Bandito[8], 1);
	TextDrawTextSize(Bandito[8], 30.000000, 30.000000);
	TextDrawSetPreviewModel(Bandito[8], 19377);
	TextDrawSetPreviewRot(Bandito[8], 0.000000, 0.000000, 90.000000, 1.000000);
	TextDrawSetSelectable(Bandito[8], 1);

	Bandito[9] = TextDrawCreate(371.000000, 140.000000, "~r~x");
	TextDrawBackgroundColor(Bandito[9], 255);
	TextDrawFont(Bandito[9], 2);
	TextDrawLetterSize(Bandito[9], 0.629999, 2.799999);
	TextDrawColor(Bandito[9], -1);
	TextDrawSetOutline(Bandito[9], 1);
	TextDrawSetProportional(Bandito[9], 1);
	TextDrawSetSelectable(Bandito[9], 0);

	////о читерах
	new Float:DrawPos = 25.000000;
	Cheat1 = 0;
	for(new i;i<10;i++)
	{
		if(i > 0) DrawPos+=30.0;
		CheatText[i] = TextDrawCreate(DrawPos,428.000000,"-1");
		TextDrawColor(CheatText[i], 0xef8100FF);
		TextDrawFont(CheatText[i], 1);
		TextDrawSetOutline(CheatText[i], 1);
		TextDrawLetterSize(CheatText[i],0.3500,1.270);
	}

	reconmenu[0] = TextDrawCreate(500.000000, 109.000000, "_");
	TextDrawBackgroundColor(reconmenu[0], 255);
	TextDrawFont(reconmenu[0], 1);
	TextDrawLetterSize(reconmenu[0], 0.500000, 25.899999);
	TextDrawColor(reconmenu[0], -1);
	TextDrawSetOutline(reconmenu[0], 0);
	TextDrawSetProportional(reconmenu[0], 0);
	TextDrawSetShadow(reconmenu[0], 1);
	TextDrawUseBox(reconmenu[0], 1);
	TextDrawBoxColor(reconmenu[0], 2115837439);
	TextDrawTextSize(reconmenu[0], 606.000000, 20.000000);
	TextDrawSetSelectable(reconmenu[0], 0);

	reconmenu[1] = TextDrawCreate(503.000000, 112.000000, "_");
	TextDrawBackgroundColor(reconmenu[1], 255);
	TextDrawFont(reconmenu[1], 1);
	TextDrawLetterSize(reconmenu[1], 0.500000, 25.199996);
	TextDrawColor(reconmenu[1], -1);
	TextDrawSetOutline(reconmenu[1], 0);
	TextDrawSetProportional(reconmenu[1], 0);
	TextDrawSetShadow(reconmenu[1], 1);
	TextDrawUseBox(reconmenu[1], 1);
	TextDrawBoxColor(reconmenu[1], -1370468097);
	TextDrawTextSize(reconmenu[1], 603.000000, 20.000000);
	TextDrawSetSelectable(reconmenu[1], 0);

	reconmenu[2] = TextDrawCreate(504.000000, 113.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[2], 0);
	TextDrawFont(reconmenu[2], 5);
	TextDrawLetterSize(reconmenu[2], 1.500000, 1.000000);
	TextDrawColor(reconmenu[2], 1141574655);
	TextDrawSetOutline(reconmenu[2], 0);
	TextDrawSetProportional(reconmenu[2], 0);
	TextDrawSetShadow(reconmenu[2], 1);
	TextDrawTextSize(reconmenu[2], 99.000000, 27.000000);
	TextDrawSetPreviewModel(reconmenu[2], 19377);
	TextDrawSetPreviewRot(reconmenu[2], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[2], 1);

	reconmenu[3] = TextDrawCreate(527.000000, 118.000000, "Check Stat");
	TextDrawBackgroundColor(reconmenu[3], 255);
	TextDrawFont(reconmenu[3], 2);
	TextDrawLetterSize(reconmenu[3], 0.220000, 1.300000);
	TextDrawColor(reconmenu[3], -1);
	TextDrawSetOutline(reconmenu[3], 1);
	TextDrawSetProportional(reconmenu[3], 1);
	TextDrawSetSelectable(reconmenu[3], 0);

	reconmenu[4] = TextDrawCreate(504.000000, 143.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[4], 0);
	TextDrawFont(reconmenu[4], 5);
	TextDrawLetterSize(reconmenu[4], 1.500000, 1.000000);
	TextDrawColor(reconmenu[4], 1141574655);
	TextDrawSetOutline(reconmenu[4], 0);
	TextDrawSetProportional(reconmenu[4], 0);
	TextDrawSetShadow(reconmenu[4], 1);
	TextDrawTextSize(reconmenu[4], 99.000000, 27.000000);
	TextDrawSetPreviewModel(reconmenu[4], 19377);
	TextDrawSetPreviewRot(reconmenu[4], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[4], 1);

	reconmenu[5] = TextDrawCreate(524.000000, 148.000000, "Check needs");
	TextDrawBackgroundColor(reconmenu[5], 255);
	TextDrawFont(reconmenu[5], 2);
	TextDrawLetterSize(reconmenu[5], 0.220000, 1.300000);
	TextDrawColor(reconmenu[5], -1);
	TextDrawSetOutline(reconmenu[5], 1);
	TextDrawSetProportional(reconmenu[5], 1);
	TextDrawSetSelectable(reconmenu[5], 0);

	reconmenu[6] = TextDrawCreate(504.000000, 173.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[6], 0);
	TextDrawFont(reconmenu[6], 5);
	TextDrawLetterSize(reconmenu[6], 1.500000, 1.000000);
	TextDrawColor(reconmenu[6], 1141574655);
	TextDrawSetOutline(reconmenu[6], 0);
	TextDrawSetProportional(reconmenu[6], 0);
	TextDrawSetShadow(reconmenu[6], 1);
	TextDrawTextSize(reconmenu[6], 99.000000, 27.000000);
	TextDrawSetPreviewModel(reconmenu[6], 19377);
	TextDrawSetPreviewRot(reconmenu[6], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[6], 1);

	reconmenu[7] = TextDrawCreate(526.000000, 179.000000, "Ban Player");
	TextDrawBackgroundColor(reconmenu[7], 255);
	TextDrawFont(reconmenu[7], 2);
	TextDrawLetterSize(reconmenu[7], 0.220000, 1.300000);
	TextDrawColor(reconmenu[7], -1);
	TextDrawSetOutline(reconmenu[7], 1);
	TextDrawSetProportional(reconmenu[7], 1);
	TextDrawSetSelectable(reconmenu[7], 0);

	reconmenu[8] = TextDrawCreate(504.000000, 203.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[8], 0);
	TextDrawFont(reconmenu[8], 5);
	TextDrawLetterSize(reconmenu[8], 1.500000, 1.000000);
	TextDrawColor(reconmenu[8], 1141574655);
	TextDrawSetOutline(reconmenu[8], 0);
	TextDrawSetProportional(reconmenu[8], 0);
	TextDrawSetShadow(reconmenu[8], 1);
	TextDrawTextSize(reconmenu[8], 99.000000, 27.000000);
	TextDrawSetPreviewModel(reconmenu[8], 19377);
	TextDrawSetPreviewRot(reconmenu[8], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[8], 1);

	reconmenu[9] = TextDrawCreate(525.000000, 208.000000, "Warn Player");
	TextDrawBackgroundColor(reconmenu[9], 255);
	TextDrawFont(reconmenu[9], 2);
	TextDrawLetterSize(reconmenu[9], 0.220000, 1.300000);
	TextDrawColor(reconmenu[9], -1);
	TextDrawSetOutline(reconmenu[9], 1);
	TextDrawSetProportional(reconmenu[9], 1);
	TextDrawSetSelectable(reconmenu[9], 0);

	reconmenu[10] = TextDrawCreate(504.000000, 233.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[10], 0);
	TextDrawFont(reconmenu[10], 5);
	TextDrawLetterSize(reconmenu[10], 1.500000, 1.000000);
	TextDrawColor(reconmenu[10], 1141574655);
	TextDrawSetOutline(reconmenu[10], 0);
	TextDrawSetProportional(reconmenu[10], 0);
	TextDrawSetShadow(reconmenu[10], 1);
	TextDrawTextSize(reconmenu[10], 99.000000, 27.000000);
	TextDrawSetPreviewModel(reconmenu[10], 19377);
	TextDrawSetPreviewRot(reconmenu[10], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[10], 1);

	reconmenu[11] = TextDrawCreate(525.000000, 239.000000, "Ajail Player");
	TextDrawBackgroundColor(reconmenu[11], 255);
	TextDrawFont(reconmenu[11], 2);
	TextDrawLetterSize(reconmenu[11], 0.220000, 1.300000);
	TextDrawColor(reconmenu[11], -1);
	TextDrawSetOutline(reconmenu[11], 1);
	TextDrawSetProportional(reconmenu[11], 1);
	TextDrawSetSelectable(reconmenu[11], 0);

	reconmenu[12] = TextDrawCreate(504.000000, 263.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[12], 0);
	TextDrawFont(reconmenu[12], 5);
	TextDrawLetterSize(reconmenu[12], 1.500000, 1.000000);
	TextDrawColor(reconmenu[12], 1141574655);
	TextDrawSetOutline(reconmenu[12], 0);
	TextDrawSetProportional(reconmenu[12], 0);
	TextDrawSetShadow(reconmenu[12], 1);
	TextDrawTextSize(reconmenu[12], 99.000000, 27.000000);
	TextDrawSetPreviewModel(reconmenu[12], 19377);
	TextDrawSetPreviewRot(reconmenu[12], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[12], 1);

	reconmenu[13] = TextDrawCreate(525.000000, 269.000000, "Go:NEXT ->>>>");
	TextDrawBackgroundColor(reconmenu[13], 255);
	TextDrawFont(reconmenu[13], 2);
	TextDrawLetterSize(reconmenu[13], 0.220000, 1.300000);
	TextDrawColor(reconmenu[13], -1);
	TextDrawSetOutline(reconmenu[13], 1);
	TextDrawSetProportional(reconmenu[13], 1);
	TextDrawSetSelectable(reconmenu[13], 0);

	reconmenu[14] = TextDrawCreate(504.000000, 293.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[14], 0);
	TextDrawFont(reconmenu[14], 5);
	TextDrawLetterSize(reconmenu[14], 1.500000, 1.000000);
	TextDrawColor(reconmenu[14], 1141574655);
	TextDrawSetOutline(reconmenu[14], 0);
	TextDrawSetProportional(reconmenu[14], 0);
	TextDrawSetShadow(reconmenu[14], 1);
	TextDrawTextSize(reconmenu[14], 99.000000, 27.000000);
	TextDrawSetPreviewModel(reconmenu[14], 19377);
	TextDrawSetPreviewRot(reconmenu[14], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[14], 1);

	reconmenu[15] = TextDrawCreate(525.000000, 300.000000, "<<<<- Go:Back");
	TextDrawBackgroundColor(reconmenu[15], 255);
	TextDrawFont(reconmenu[15], 2);
	TextDrawLetterSize(reconmenu[15], 0.220000, 1.300000);
	TextDrawColor(reconmenu[15], -1);
	TextDrawSetOutline(reconmenu[15], 1);
	TextDrawSetProportional(reconmenu[15], 1);
	TextDrawSetSelectable(reconmenu[15], 0);

	reconmenu[16] = TextDrawCreate(504.000000, 323.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[16], 0);
	TextDrawFont(reconmenu[16], 5);
	TextDrawLetterSize(reconmenu[16], 1.500000, 1.000000);
	TextDrawColor(reconmenu[16], 1141574655);
	TextDrawSetOutline(reconmenu[16], 0);
	TextDrawSetProportional(reconmenu[16], 0);
	TextDrawSetShadow(reconmenu[16], 1);
	TextDrawTextSize(reconmenu[16], 48.000000, 16.000000);
	TextDrawSetPreviewModel(reconmenu[16], 19377);
	TextDrawSetPreviewRot(reconmenu[16], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[16], 1);

	reconmenu[17] = TextDrawCreate(554.000000, 323.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[17], 0);
	TextDrawFont(reconmenu[17], 5);
	TextDrawLetterSize(reconmenu[17], 1.500000, 1.000000);
	TextDrawColor(reconmenu[17], 1141574655);
	TextDrawSetOutline(reconmenu[17], 0);
	TextDrawSetProportional(reconmenu[17], 0);
	TextDrawSetShadow(reconmenu[17], 1);
	TextDrawTextSize(reconmenu[17], 48.000000, 16.000000);
	TextDrawSetPreviewModel(reconmenu[17], 19377);
	TextDrawSetPreviewRot(reconmenu[17], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[17], 1);

	reconmenu[18] = TextDrawCreate(519.000000, 326.000000, "Other");
	TextDrawBackgroundColor(reconmenu[18], 255);
	TextDrawFont(reconmenu[18], 2);
	TextDrawLetterSize(reconmenu[18], 0.170000, 0.899999);
	TextDrawColor(reconmenu[18], -1);
	TextDrawSetOutline(reconmenu[18], 1);
	TextDrawSetProportional(reconmenu[18], 1);
	TextDrawSetSelectable(reconmenu[18], 0);

	reconmenu[19] = TextDrawCreate(570.000000, 326.000000, "Exit");
	TextDrawBackgroundColor(reconmenu[19], 255);
	TextDrawFont(reconmenu[19], 2);
	TextDrawLetterSize(reconmenu[19], 0.170000, 0.899999);
	TextDrawColor(reconmenu[19], -1);
	TextDrawSetOutline(reconmenu[19], 1);
	TextDrawSetProportional(reconmenu[19], 1);
	TextDrawSetSelectable(reconmenu[19], 0);
	//полоска с кнопки отхер
	reconmenu[20] = TextDrawCreate(504.000000, 346.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[20], 0);
	TextDrawFont(reconmenu[20], 5);
	TextDrawLetterSize(reconmenu[20], 1.500000, 1.000000);
	TextDrawColor(reconmenu[20], 1141574655);
	TextDrawSetOutline(reconmenu[20], 0);
	TextDrawSetProportional(reconmenu[20], 0);
	TextDrawSetShadow(reconmenu[20], 1);
	TextDrawTextSize(reconmenu[20], 48.000000, 16.000000);
	TextDrawSetPreviewModel(reconmenu[20], 19377);
	TextDrawSetPreviewRot(reconmenu[20], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[20], 1);

	reconmenu[21] = TextDrawCreate(504.000000, 363.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[21], 0);
	TextDrawFont(reconmenu[21], 5);
	TextDrawLetterSize(reconmenu[21], 1.500000, 1.000000);
	TextDrawColor(reconmenu[21], 1141574655);
	TextDrawSetOutline(reconmenu[21], 0);
	TextDrawSetProportional(reconmenu[21], 0);
	TextDrawSetShadow(reconmenu[21], 1);
	TextDrawTextSize(reconmenu[21], 48.000000, 16.000000);
	TextDrawSetPreviewModel(reconmenu[21], 19377);
	TextDrawSetPreviewRot(reconmenu[21], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[21], 1);

	reconmenu[22] = TextDrawCreate(554.000000, 346.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[22], 0);
	TextDrawFont(reconmenu[22], 5);
	TextDrawLetterSize(reconmenu[22], 1.500000, 1.000000);
	TextDrawColor(reconmenu[22], 1141574655);
	TextDrawSetOutline(reconmenu[22], 0);
	TextDrawSetProportional(reconmenu[22], 0);
	TextDrawSetShadow(reconmenu[22], 1);
	TextDrawTextSize(reconmenu[22], 48.000000, 16.000000);
	TextDrawSetPreviewModel(reconmenu[22], 19377);
	TextDrawSetPreviewRot(reconmenu[22], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[22], 1);

	reconmenu[23] = TextDrawCreate(554.000000, 363.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[23], 0);
	TextDrawFont(reconmenu[23], 5);
	TextDrawLetterSize(reconmenu[23], 1.500000, 1.000000);
	TextDrawColor(reconmenu[23], 1141574655);
	TextDrawSetOutline(reconmenu[23], 0);
	TextDrawSetProportional(reconmenu[23], 0);
	TextDrawSetShadow(reconmenu[23], 1);
	TextDrawTextSize(reconmenu[23], 48.000000, 16.000000);
	TextDrawSetPreviewModel(reconmenu[23], 19377);
	TextDrawSetPreviewRot(reconmenu[23], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[23], 1);

	reconmenu[24] = TextDrawCreate(520.000000, 349.000000, "Slap");
	TextDrawBackgroundColor(reconmenu[24], 255);
	TextDrawFont(reconmenu[24], 2);
	TextDrawLetterSize(reconmenu[24], 0.170000, 0.899999);
	TextDrawColor(reconmenu[24], -1);
	TextDrawSetOutline(reconmenu[24], 1);
	TextDrawSetProportional(reconmenu[24], 1);
	TextDrawSetSelectable(reconmenu[24], 0);

	reconmenu[25] = TextDrawCreate(520.000000, 366.000000, "Goto");
	TextDrawBackgroundColor(reconmenu[25], 255);
	TextDrawFont(reconmenu[25], 2);
	TextDrawLetterSize(reconmenu[25], 0.170000, 0.899999);
	TextDrawColor(reconmenu[25], -1);
	TextDrawSetOutline(reconmenu[25], 1);
	TextDrawSetProportional(reconmenu[25], 1);
	TextDrawSetSelectable(reconmenu[25], 0);

	reconmenu[26] = TextDrawCreate(562.000000, 350.000000, "Spawn p.");
	TextDrawBackgroundColor(reconmenu[26], 255);
	TextDrawFont(reconmenu[26], 2);
	TextDrawLetterSize(reconmenu[26], 0.170000, 0.899999);
	TextDrawColor(reconmenu[26], -1);
	TextDrawSetOutline(reconmenu[26], 1);
	TextDrawSetProportional(reconmenu[26], 1);
	TextDrawSetSelectable(reconmenu[26], 0);

	reconmenu[27] = TextDrawCreate(563.000000, 366.000000, "Give car");
	TextDrawBackgroundColor(reconmenu[27], 255);
	TextDrawFont(reconmenu[27], 2);
	TextDrawLetterSize(reconmenu[27], 0.170000, 0.899999);
	TextDrawColor(reconmenu[27], -1);
	TextDrawSetOutline(reconmenu[27], 1);
	TextDrawSetProportional(reconmenu[27], 1);
	TextDrawSetSelectable(reconmenu[27], 0);

	reconmenu[28] = TextDrawCreate(445.000000, 168.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[28], 0);
	TextDrawFont(reconmenu[28], 5);
	TextDrawLetterSize(reconmenu[28], 1.500000, 1.000000);
	TextDrawColor(reconmenu[28], 1141574655);
	TextDrawSetOutline(reconmenu[28], 0);
	TextDrawSetProportional(reconmenu[28], 0);
	TextDrawSetShadow(reconmenu[28], 1);
	TextDrawTextSize(reconmenu[28], 52.000000, 19.000000);
	TextDrawSetPreviewModel(reconmenu[28], 19377);
	TextDrawSetPreviewRot(reconmenu[28], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[28], 1);

	reconmenu[29] = TextDrawCreate(456.000000, 172.000000, "Ban Nick");
	TextDrawBackgroundColor(reconmenu[29], 255);
	TextDrawFont(reconmenu[29], 2);
	TextDrawLetterSize(reconmenu[29], 0.159999, 1.099999);
	TextDrawColor(reconmenu[29], -1);
	TextDrawSetOutline(reconmenu[29], 1);
	TextDrawSetProportional(reconmenu[29], 1);
	TextDrawSetSelectable(reconmenu[29], 0);

	reconmenu[30] = TextDrawCreate(445.000000, 189.000000, "FFFFFF90");
	TextDrawBackgroundColor(reconmenu[30], 0);
	TextDrawFont(reconmenu[30], 5);
	TextDrawLetterSize(reconmenu[30], 1.500000, 1.000000);
	TextDrawColor(reconmenu[30], 1141574655);
	TextDrawSetOutline(reconmenu[30], 0);
	TextDrawSetProportional(reconmenu[30], 0);
	TextDrawSetShadow(reconmenu[30], 1);
	TextDrawTextSize(reconmenu[30], 52.000000, 19.000000);
	TextDrawSetPreviewModel(reconmenu[30], 19377);
	TextDrawSetPreviewRot(reconmenu[30], 0.000000, 0.000000, 90.000000, 0.000000);
	TextDrawSetSelectable(reconmenu[30], 1);

	reconmenu[31] = TextDrawCreate(461.000000, 193.000000, "Ban IP");
	TextDrawBackgroundColor(reconmenu[31], 255);
	TextDrawFont(reconmenu[31], 2);
	TextDrawLetterSize(reconmenu[31], 0.159999, 1.099999);
	TextDrawColor(reconmenu[31], -1);
	TextDrawSetOutline(reconmenu[31], 1);
	TextDrawSetProportional(reconmenu[31], 1);
	TextDrawSetSelectable(reconmenu[31], 0);

	reconmenu[32] = TextDrawCreate(467.710113, 266.916687, "/REQUEST");
	TextDrawLetterSize(reconmenu[32], 0.000000, 2.664812);
	TextDrawTextSize(reconmenu[32], 407.956085, 0.000000);
	TextDrawAlignment(reconmenu[32], 1);
	TextDrawColor(reconmenu[32], 0);
	TextDrawUseBox(reconmenu[32], true);
	TextDrawBoxColor(reconmenu[32], 102);
	TextDrawSetShadow(reconmenu[32], 0);
	TextDrawSetOutline(reconmenu[32], 0);
	TextDrawFont(reconmenu[32], 0);
	TextDrawSetSelectable(reconmenu[32], 0);

	reconmenu[33] = TextDrawCreate(410.893585, 264.833282, "/request");
	TextDrawLetterSize(reconmenu[33], 0.249004, 2.819169);
	TextDrawTextSize(reconmenu[33], 462.430755, -51.333320);
	TextDrawAlignment(reconmenu[33], 1);
	TextDrawColor(reconmenu[33], -1);
	TextDrawUseBox(reconmenu[33], true);
	TextDrawBoxColor(reconmenu[33], 0);
	TextDrawSetShadow(reconmenu[33], 0);
	TextDrawSetOutline(reconmenu[33], 1);
	TextDrawBackgroundColor(reconmenu[33], 51);
	TextDrawFont(reconmenu[33], 2);
	TextDrawSetProportional(reconmenu[33], 1);
	TextDrawSetSelectable(reconmenu[33], 1);
    
	new Text:textid;
    LoadScreenText[0] = textid = TextDrawCreate(641.531494, 1.500000, "usebox");
    TextDrawLetterSize(textid, 0.000000, 49.396297);
    TextDrawTextSize(textid, -2.000000, 0.000000);
    TextDrawAlignment(textid, 1);
    TextDrawColor(textid, 0);
    TextDrawUseBox(textid, true);
    TextDrawBoxColor(textid, 255);
    TextDrawSetShadow(textid, 0);
    TextDrawFont(textid, 0);
 
    LoadScreenText[1] = textid = TextDrawCreate(397.900665, 184.666580, "usebox");
    TextDrawLetterSize(textid, 0.000000, 2.093318);
    TextDrawTextSize(textid, 229.449493, 0.000000);
    TextDrawAlignment(textid, 1);
    TextDrawColor(textid, 0);
    TextDrawUseBox(textid, true);
    TextDrawBoxColor(textid, 3289855);
    TextDrawSetShadow(textid, 0);
    TextDrawFont(textid, 0);
 
    LoadScreenText[2] = textid = TextDrawCreate(397.963562, 210.749969, "usebox");
    TextDrawLetterSize(textid, 0.000000, 14.509128);
    TextDrawTextSize(textid, 229.449493, 0.000000);
    TextDrawAlignment(textid, 1);
    TextDrawColor(textid, 0);
    TextDrawUseBox(textid, true);
    TextDrawBoxColor(textid, 3289855);
    TextDrawSetShadow(textid, 0);
    TextDrawFont(textid, 0);
 
    LoadScreenText[3] = textid = TextDrawCreate(395.089294, 213.250000, "usebox");
    TextDrawLetterSize(textid, 0.000000, 2.016666);
    TextDrawTextSize(textid, 231.792098, 0.000000);
    TextDrawAlignment(textid, 1);
    TextDrawColor(textid, 0);
    TextDrawUseBox(textid, true);
    TextDrawBoxColor(textid, 190);
    TextDrawSetShadow(textid, 0);
    TextDrawFont(textid, 0);
 
    LoadScreenText[4] = textid = TextDrawCreate(244.099395, 186.666641, "Load Textures");
    TextDrawLetterSize(textid, 0.449999, 1.600000);
    TextDrawAlignment(textid, 1);
    TextDrawColor(textid, -1061109505);
    TextDrawSetShadow(textid, 0);
    TextDrawBackgroundColor(textid, 51);
    TextDrawFont(textid, 3);
    TextDrawSetProportional(textid, 1);
 
    LoadScreenText[5] = textid = TextDrawCreate(234.260620, 237.416641, "loadsuk:loadsc6");
    TextDrawLetterSize(textid, 0.000000, 0.000000);
    TextDrawTextSize(textid, 159.297210, 102.083305);
    TextDrawAlignment(textid, 1);
    TextDrawColor(textid, -1);
    TextDrawSetShadow(textid, 0);
    TextDrawFont(textid, 4);