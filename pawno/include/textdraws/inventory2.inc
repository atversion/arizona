		new Float:X = PlayerInfo[playerid][pInvPos_X], Float:Y = PlayerInfo[playerid][pInvPos_Y];
		
		InvTextDraws[playerid][58] = CreatePlayerTextDraw(playerid, 335.000000+X, 100.000000+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][58], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][58], 126.101715, 245.666672);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][58], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][58], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][58], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][58], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][58], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][58], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][58], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][58], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][58], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][58], 0);

		InvTextDraws[playerid][57] = CreatePlayerTextDraw(playerid, 335.000000+X, 123.599998+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][57], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][57], 126.101715, 1.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][57], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][57], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][57], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][57], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][57], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][57], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][57], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][57], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][57], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][57], 0);

		InvTextDraws[playerid][56] = CreatePlayerTextDraw(playerid, 338.000000+X, 103.466667+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][56], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][56], 38.033894, 17.599998);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][56], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][56], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][56], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][56], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][56], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][56], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][56], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][56], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][56], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][56], 1);

		InvTextDraws[playerid][55] = CreatePlayerTextDraw(playerid, 357.016937+X, 106.983704+Y, "HELP");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][55], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][55], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][55], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][55], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][55], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][55], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][55], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][55], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][55], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][55], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][55], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][55], 0);

		InvTextDraws[playerid][54] = CreatePlayerTextDraw(playerid, 379.033905+X, 103.466667+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][54], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][54], 38.033894, 17.599998);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][54], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][54], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][54], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][54], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][54], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][54], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][54], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][54], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][54], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][54], 1);

		InvTextDraws[playerid][53] = CreatePlayerTextDraw(playerid, 398.050842+X, 106.983704+Y, "REPORT");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][53], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][53], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][53], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][53], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][53], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][53], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][53], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][53], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][53], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][53], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][53], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][53], 0);

		InvTextDraws[playerid][52] = CreatePlayerTextDraw(playerid, 420.067810+X, 103.466667+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][52], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][52], 38.033894, 17.599998);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][52], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][52], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][52], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][52], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][52], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][52], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][52], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][52], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][52], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][52], 1);

		InvTextDraws[playerid][51] = CreatePlayerTextDraw(playerid, 439.084747+X, 106.983704+Y, "GPS");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][51], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][51], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][51], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][51], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][51], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][51], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][51], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][51], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][51], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][51], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][51], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][51], 0);

		InvTextDraws[playerid][50] = CreatePlayerTextDraw(playerid, 335.000000+X, 127.599998+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][50], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][50], 126.101715, 81.888893);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][50], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][50], 0x1A1A1AFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][50], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][50], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][50], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][50], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][50], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][50], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][50], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][50], 0);

		InvTextDraws[playerid][47] = CreatePlayerTextDraw(playerid, 309.264954+X, 123.599998+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][47], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][47], 90.072655, 87.888893);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][47], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][47], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][47], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][47], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][47], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][47], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][47], 0x33333300);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][47], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][47], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][47], 0);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][47], 78);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][47], 0.000000, 0.000000, 0.000000, 1.000000);

		InvTextDraws[playerid][46] = CreatePlayerTextDraw(playerid, 365.024231+X, 186.822235+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][46], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][46], 17.000000, 19.666666);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][46], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][46], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][46], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][46], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][46], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][46], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][46], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][46], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][46], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][46], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][46], 2386);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][46], 346.000000, 0.000000, 129.000000, 0.900000);

		InvTextDraws[playerid][45] = CreatePlayerTextDraw(playerid, 373.524231+X, 198.660751+Y, "");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][45], 0.104629, 0.586995);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][45], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][45], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][45], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][45], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][45], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][45], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][45], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][45], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][45], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][45], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][45], 0);

		InvTextDraws[playerid][44] = CreatePlayerTextDraw(playerid, 383.024231+X, 130.600006+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][44], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][44], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][44], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][44], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][44], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][44], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][44], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][44], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][44], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][44], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][44], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][44], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][44], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][44], 0.000000, 0.000000, 0.000000, 0.000000);

		InvTextDraws[playerid][43] = CreatePlayerTextDraw(playerid, 403.314240+X, 146.437195+Y, "1");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][43], 0.189748, 0.937500);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][43], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][43], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][43], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][43], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][43], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][43], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][43], 1);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][43], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][43], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][43], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][43], 0);

		InvTextDraws[playerid][42] = CreatePlayerTextDraw(playerid, 405.314240+X, 130.600006+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][42], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][42], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][42], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][42], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][42], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][42], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][42], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][42], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][42], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][42], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][42], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][42], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][42], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][42], 0.000000, 0.000000, 0.000000, 0.000000);

		InvTextDraws[playerid][41] = CreatePlayerTextDraw(playerid, 425.604248+X, 146.437195+Y, "2");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][41], 0.189748, 0.937500);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][41], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][41], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][41], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][41], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][41], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][41], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][41], 1);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][41], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][41], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][41], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][41], 0);

		InvTextDraws[playerid][40] = CreatePlayerTextDraw(playerid, 427.604279+X, 130.600006+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][40], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][40], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][40], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][40], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][40], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][40], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][40], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][40], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][40], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][40], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][40], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][40], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][40], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][40], 0.000000, 0.000000, 0.000000, 0.000000);

		InvTextDraws[playerid][39] = CreatePlayerTextDraw(playerid, 447.894287+X, 146.437195+Y, "3");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][39], 0.189748, 0.937500);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][39], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][39], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][39], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][39], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][39], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][39], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][39], 1);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][39], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][39], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][39], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][39], 0);

		InvTextDraws[playerid][38] = CreatePlayerTextDraw(playerid, 383.024231+X, 156.229645+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][38], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][38], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][38], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][38], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][38], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][38], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][38], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][38], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][38], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][38], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][38], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][38], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][38], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][38], 0.000000, 0.000000, 0.000000, 0.000000);

		InvTextDraws[playerid][37] = CreatePlayerTextDraw(playerid, 403.314240+X, 172.066833+Y, "4");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][37], 0.189748, 0.937500);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][37], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][37], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][37], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][37], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][37], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][37], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][37], 1);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][37], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][37], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][37], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][37], 0);

		InvTextDraws[playerid][36] = CreatePlayerTextDraw(playerid, 405.314240+X, 156.229645+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][36], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][36], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][36], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][36], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][36], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][36], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][36], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][36], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][36], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][36], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][36], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][36], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][36], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][36], 0.000000, 0.000000, 0.000000, 0.000000);
		PickInvent[playerid] = 73;

		InvTextDraws[playerid][35] = CreatePlayerTextDraw(playerid, 425.604248+X, 172.066833+Y, "5");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][35], 0.189748, 0.937500);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][35], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][35], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][35], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][35], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][35], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][35], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][35], 1);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][35], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][35], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][35], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][35], 0);

		InvTextDraws[playerid][34] = CreatePlayerTextDraw(playerid, 427.604279+X, 156.229645+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][34], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][34], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][34], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][34], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][34], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][34], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][34], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][34], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][34], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][34], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][34], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][34], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][34], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][34], 0.000000, 0.000000, 0.000000, 0.000000);

		InvTextDraws[playerid][33] = CreatePlayerTextDraw(playerid, 447.894287+X, 172.066833+Y, "6");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][33], 0.189748, 0.937500);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][33], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][33], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][33], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][33], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][33], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][33], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][33], 1);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][33], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][33], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][33], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][33], 0);

		InvTextDraws[playerid][32] = CreatePlayerTextDraw(playerid, 393.669250+X, 181.859283+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][32], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][32], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][32], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][32], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][32], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][32], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][32], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][32], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][32], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][32], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][32], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][32], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][32], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][32], 0.000000, 0.000000, 0.000000, 0.000000);

		InvTextDraws[playerid][31] = CreatePlayerTextDraw(playerid, 411.559265+X, 202.555573+Y, "LD_BEAT:chit");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][31], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][31], 3.400000, 3.933333);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][31], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][31], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][31], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][31], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][31], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][31], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][31], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][31], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][31], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][31], 0);

		InvTextDraws[playerid][30] = CreatePlayerTextDraw(playerid, 415.959259+X, 181.859283+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][30], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][30], 21.290020, 24.629631);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][30], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][30], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][30], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][30], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][30], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][30], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][30], 0x333333FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][30], 5);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][30], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][30], 1);
		PlayerTextDrawSetPreviewModel(playerid, InvTextDraws[playerid][30], 1649);
		PlayerTextDrawSetPreviewRot(playerid, InvTextDraws[playerid][30], 0.000000, 0.000000, 0.000000, 0.000000);

		InvTextDraws[playerid][29] = CreatePlayerTextDraw(playerid, 415.959259+X, 202.555573+Y, "LD_BEAT:chit");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][29], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][29], 3.400000, 3.933333);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][29], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][29], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][29], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][29], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][29], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][29], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][29], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][29], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][29], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][29], 0);

		InvTextDraws[playerid][28] = CreatePlayerTextDraw(playerid, 338.000000+X, 212.488892+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][28], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][28], 58.550858, 30.870371);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][28], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][28], 0xBE9A55FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][28], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][28], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][28], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][28], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][28], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][28], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][28], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][28], 1);

		InvTextDraws[playerid][27] = CreatePlayerTextDraw(playerid, 367.275421+X, 222.641113+Y, "MENU");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][27], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][27], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][27], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][27], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][27], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][27], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][27], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][27], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][27], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][27], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][27], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][27], 0);

		InvTextDraws[playerid][26] = CreatePlayerTextDraw(playerid, 399.550842+X, 212.488892+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][26], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][26], 58.550858, 30.870371);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][26], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][26], 0xBE9A55FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][26], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][26], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][26], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][26], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][26], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][26], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][26], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][26], 1);

		InvTextDraws[playerid][25] = CreatePlayerTextDraw(playerid, 428.826263+X, 222.641113+Y, "SETTINGS");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][25], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][25], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][25], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][25], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][25], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][25], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][25], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][25], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][25], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][25], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][25], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][25], 0);

		InvTextDraws[playerid][24] = CreatePlayerTextDraw(playerid, 338.000000+X, 246.359268+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][24], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][24], 58.550858, 30.870371);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][24], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][24], 0xBE9A55FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][24], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][24], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][24], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][24], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][24], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][24], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][24], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][24], 1);

		InvTextDraws[playerid][23] = CreatePlayerTextDraw(playerid, 367.275421+X, 256.511505+Y, "CARS");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][23], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][23], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][23], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][23], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][23], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][23], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][23], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][23], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][23], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][23], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][23], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][23], 0);

		InvTextDraws[playerid][22] = CreatePlayerTextDraw(playerid, 399.550842+X, 246.359268+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][22], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][22], 58.550858, 30.870371);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][22], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][22], 0xBE9A55FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][22], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][22], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][22], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][22], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][22], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][22], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][22], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][22], 1);

		InvTextDraws[playerid][21] = CreatePlayerTextDraw(playerid, 428.826263+X, 256.511505+Y, "BUSINESS");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][21], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][21], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][21], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][21], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][21], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][21], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][21], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][21], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][21], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][21], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][21], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][21], 0);

		InvTextDraws[playerid][20] = CreatePlayerTextDraw(playerid, 338.000000+X, 280.229645+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][20], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][20], 58.550858, 30.870371);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][20], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][20], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][20], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][20], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][20], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][20], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][20], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][20], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][20], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][20], 1);

		InvTextDraws[playerid][19] = CreatePlayerTextDraw(playerid, 367.275421+X, 290.381866+Y, "DONATE");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][19], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][19], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][19], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][19], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][19], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][19], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][19], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][19], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][19], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][19], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][19], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][19], 0);

		InvTextDraws[playerid][18] = CreatePlayerTextDraw(playerid, 340.000000+X, 307.100006+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][18], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][18], 54.550858, 2.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][18], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][18], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][18], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][18], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][18], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][18], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][18], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][18], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][18], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][18], 0);

		InvTextDraws[playerid][17] = CreatePlayerTextDraw(playerid, 399.550842+X, 280.229645+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][17], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][17], 58.550858, 30.870371);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][17], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][17], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][17], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][17], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][17], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][17], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][17], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][17], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][17], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][17], 1);

		InvTextDraws[playerid][16] = CreatePlayerTextDraw(playerid, 428.826263+X, 290.381866+Y, "FAMILY");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][16], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][16], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][16], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][16], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][16], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][16], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][16], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][16], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][16], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][16], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][16], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][16], 0);

		InvTextDraws[playerid][15] = CreatePlayerTextDraw(playerid, 401.550842+X, 307.100006+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][15], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][15], 54.550858, 2.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][15], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][15], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][15], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][15], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][15], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][15], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][15], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][15], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][15], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][15], 0);

		InvTextDraws[playerid][14] = CreatePlayerTextDraw(playerid, 380.024231+X, 133.600006+Y, "");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][14], 0.125555, 0.704395);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][14], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][14], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][14], 0xAAAAAAFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][14], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][14], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][14], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][14], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][14], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][14], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][14], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][14], 0);

		InvTextDraws[playerid][13] = CreatePlayerTextDraw(playerid, 380.024231+X, 141.643951+Y, "");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][13], 0.125555, 0.704395);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][13], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][13], 3);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][13], 0xCD3432FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][13], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][13], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][13], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][13], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][13], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][13], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][13], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][13], 0);

		InvTextDraws[playerid][12] = CreatePlayerTextDraw(playerid, 462.101715+X, 100.000000+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][12], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][12], 164.000000, 245.666672);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][12], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][12], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][12], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][12], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][12], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][12], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][12], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][12], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][12], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][12], 0);

		InvTextDraws[playerid][11] = CreatePlayerTextDraw(playerid, 468.101715+X, 106.517044+Y, "INVENTORY");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][11], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][11], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][11], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][11], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][11], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][11], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][11], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][11], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][11], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][11], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][11], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][11], 0);

		InvTextDraws[playerid][10] = CreatePlayerTextDraw(playerid, 462.101715+X, 123.599998+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][10], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][10], 164.000000, 1.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][10], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][10], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][10], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][10], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][10], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][10], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][10], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][10], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][10], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][10], 0);

		InvTextDraws[playerid][9] = CreatePlayerTextDraw(playerid, 538.001709+X, 314.100006+Y, "LD_BEAT:chit");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][9], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][9], 5.100000, 5.900000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][9], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][9], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][9], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][9], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][9], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][9], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][9], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][9], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][9], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][9], 1);

		InvTextDraws[playerid][8] = CreatePlayerTextDraw(playerid, 544.101685+X, 314.100006+Y, "LD_BEAT:chit");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][8], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][8], 5.100000, 5.900000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][8], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][8], 0x333333FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][8], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][8], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][8], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][8], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][8], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][8], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][8], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][8], 1);

		InvTextDraws[playerid][7] = CreatePlayerTextDraw(playerid, 580.601685+X, 323.000000+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][7], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][7], 42.500000, 19.666666);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][7], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][7], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][7], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][7], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][7], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][7], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][7], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][7], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][7], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][7], 1);

		InvTextDraws[playerid][6] = CreatePlayerTextDraw(playerid, 601.851685+X, 327.550385+Y, "CLOSE");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][6], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][6], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][6], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][6], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][6], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][6], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][6], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][6], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][6], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][6], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][6], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][6], 0);

		InvTextDraws[playerid][5] = CreatePlayerTextDraw(playerid, 606.101685+X, 102.466667+Y, "LD_BEAT:chit");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][5], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][5], 17.000000, 19.666666);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][5], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][5], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][5], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][5], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][5], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][5], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][5], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][5], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][5], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][5], 1);

		InvTextDraws[playerid][4] = CreatePlayerTextDraw(playerid, 614.601685+X, 107.017044+Y, "S");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][4], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][4], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][4], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][4], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][4], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][4], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][4], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][4], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][4], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][4], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][4], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][4], 0);

		InvTextDraws[playerid][3] = CreatePlayerTextDraw(playerid, 589.101685+X, 102.466667+Y, "LD_BEAT:chit");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][3], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][3], 17.000000, 19.666666);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][3], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][3], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][3], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][3], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][3], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][3], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][3], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][3], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][3], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][3], 1);

		InvTextDraws[playerid][2] = CreatePlayerTextDraw(playerid, 597.601685+X, 107.017044+Y, "P");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][2], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][2], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][2], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][2], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][2], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][2], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][2], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][2], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][2], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][2], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][2], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][2], 0);

		InvTextDraws[playerid][1] = CreatePlayerTextDraw(playerid, 572.101685+X, 102.466667+Y, "LD_BEAT:chit");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][1], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][1], 17.000000, 19.666666);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][1], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][1], 0x111111FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][1], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][1], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][1], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][1], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][1], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][1], 4);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][1], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][1], 1);

		InvTextDraws[playerid][0] = CreatePlayerTextDraw(playerid, 580.601685+X, 107.017044+Y, "C");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][0], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][0], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][0], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][0], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][0], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][0], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][0], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][0], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][0], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][0], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][0], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][0], 0);
		
		TDinvTrash[playerid][3] = CreatePlayerTextDraw(playerid, 338.000000+X, 312.372253+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, TDinvTrash[playerid][3], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, TDinvTrash[playerid][3], 58.550858, 30.294449);
		PlayerTextDrawAlignment(playerid, TDinvTrash[playerid][3], 1);
		PlayerTextDrawColor(playerid, TDinvTrash[playerid][3], PlayerInfo[playerid][pColorInv]);
		PlayerTextDrawUseBox(playerid, TDinvTrash[playerid][3], 0);
		PlayerTextDrawBoxColor(playerid, TDinvTrash[playerid][3], 0x80808080);
		PlayerTextDrawSetShadow(playerid, TDinvTrash[playerid][3], 2);
		PlayerTextDrawSetOutline(playerid, TDinvTrash[playerid][3], 0);
		PlayerTextDrawBackgroundColor(playerid, TDinvTrash[playerid][3], 0x000000FF);
		PlayerTextDrawFont(playerid, TDinvTrash[playerid][3], 4);
		PlayerTextDrawSetProportional(playerid, TDinvTrash[playerid][3], 1);
		PlayerTextDrawSetSelectable(playerid, TDinvTrash[playerid][3], 1);

		TDinvTrash[playerid][2] = CreatePlayerTextDraw(playerid, 399.550842+X, 312.372253+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, TDinvTrash[playerid][2], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, TDinvTrash[playerid][2], 58.550858, 30.294449);
		PlayerTextDrawAlignment(playerid, TDinvTrash[playerid][2], 1);
		PlayerTextDrawColor(playerid, TDinvTrash[playerid][2], PlayerInfo[playerid][pColorInv]);
		PlayerTextDrawUseBox(playerid, TDinvTrash[playerid][2], 0);
		PlayerTextDrawBoxColor(playerid, TDinvTrash[playerid][2], 0x80808080);
		PlayerTextDrawSetShadow(playerid, TDinvTrash[playerid][2], 2);
		PlayerTextDrawSetOutline(playerid, TDinvTrash[playerid][2], 0);
		PlayerTextDrawBackgroundColor(playerid, TDinvTrash[playerid][2], 0x000000FF);
		PlayerTextDrawFont(playerid, TDinvTrash[playerid][2], 4);
		PlayerTextDrawSetProportional(playerid, TDinvTrash[playerid][2], 1);
		PlayerTextDrawSetSelectable(playerid, TDinvTrash[playerid][2], 1);
		
		InvTextDraws[playerid][61] = CreatePlayerTextDraw(playerid, 395.800842+X, 340.166687+Y, "usebox");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][61], 0.000000, -0.103300);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][61], 338.500000+X, 0.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][61], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][61], 0xE1E1E1FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][61], 1);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][61], 0x111111FF);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][61], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][61], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][61], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][61], 0);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][61], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][61], 0);

		InvTextDraws[playerid][59] = CreatePlayerTextDraw(playerid, 457.351685+X, 340.166687+Y, "usebox");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][59], 0.000000, -0.103300);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][59], 400.050842+X, 0.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][59], 1);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][59], 0xE1E1E1FF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][59], 1);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][59], 0x111111FF);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][59], 2);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][59], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][59], 0x000000FF);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][59], 0);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][59], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][59], 0);

		InvTextDraws[playerid][60] = CreatePlayerTextDraw(playerid, 428.826263+X, 322.236511+Y, "REWARDS");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][60], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][60], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][60], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][60], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][60], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][60], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][60], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][60], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][60], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][60], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][60], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][60], 0);

		InvTextDraws[playerid][62] = CreatePlayerTextDraw(playerid, 367.275421+X, 322.236511+Y, "QUEST");
		PlayerTextDrawLetterSize(playerid, InvTextDraws[playerid][62], 0.188333, 1.056592);
		PlayerTextDrawTextSize(playerid, InvTextDraws[playerid][62], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, InvTextDraws[playerid][62], 2);
		PlayerTextDrawColor(playerid, InvTextDraws[playerid][62], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, InvTextDraws[playerid][62], 0);
		PlayerTextDrawBoxColor(playerid, InvTextDraws[playerid][62], 0x80808080);
		PlayerTextDrawSetShadow(playerid, InvTextDraws[playerid][62], 0);
		PlayerTextDrawSetOutline(playerid, InvTextDraws[playerid][62], 0);
		PlayerTextDrawBackgroundColor(playerid, InvTextDraws[playerid][62], 0x00000000);
		PlayerTextDrawFont(playerid, InvTextDraws[playerid][62], 2);
		PlayerTextDrawSetProportional(playerid, InvTextDraws[playerid][62], 1);
		PlayerTextDrawSetSelectable(playerid, InvTextDraws[playerid][62], 0);

		TDinvTrash[playerid][1] = CreatePlayerTextDraw(playerid, 486.351715+X, 328.606964+Y, "TRASH");
		PlayerTextDrawLetterSize(playerid, TDinvTrash[playerid][1], 0.150666, 0.845274);
		PlayerTextDrawTextSize(playerid, TDinvTrash[playerid][1], 1280.000000, 1280.000000);
		PlayerTextDrawAlignment(playerid, TDinvTrash[playerid][1], 2);
		PlayerTextDrawColor(playerid, TDinvTrash[playerid][1], 0xFFFFFFFF);
		PlayerTextDrawUseBox(playerid, TDinvTrash[playerid][1], 0);
		PlayerTextDrawBoxColor(playerid, TDinvTrash[playerid][1], 0x80808080);
		PlayerTextDrawSetShadow(playerid, TDinvTrash[playerid][1], 0);
		PlayerTextDrawSetOutline(playerid, TDinvTrash[playerid][1], 0);
		PlayerTextDrawBackgroundColor(playerid, TDinvTrash[playerid][1], 0x00000000);
		PlayerTextDrawFont(playerid, TDinvTrash[playerid][1], 2);
		PlayerTextDrawSetProportional(playerid, TDinvTrash[playerid][1], 1);
		PlayerTextDrawSetSelectable(playerid, TDinvTrash[playerid][1], 0);

		TDinvTrash[playerid][0] = CreatePlayerTextDraw(playerid, 465.101715+X, 323.000000+Y, "LD_SPAC:white");
		PlayerTextDrawLetterSize(playerid, TDinvTrash[playerid][0], 0.480000, 1.120000);
		PlayerTextDrawTextSize(playerid, TDinvTrash[playerid][0], 42.500000, 19.666666);
		PlayerTextDrawAlignment(playerid, TDinvTrash[playerid][0], 1);
		PlayerTextDrawColor(playerid, TDinvTrash[playerid][0], 0xBE5555FF);
		PlayerTextDrawUseBox(playerid, TDinvTrash[playerid][0], 0);
		PlayerTextDrawBoxColor(playerid, TDinvTrash[playerid][0], 0x80808080);
		PlayerTextDrawSetShadow(playerid, TDinvTrash[playerid][0], 2);
		PlayerTextDrawSetOutline(playerid, TDinvTrash[playerid][0], 0);
		PlayerTextDrawBackgroundColor(playerid, TDinvTrash[playerid][0], 0x000000FF);
		PlayerTextDrawFont(playerid, TDinvTrash[playerid][0], 4);
		PlayerTextDrawSetProportional(playerid, TDinvTrash[playerid][0], 1);
		PlayerTextDrawSetSelectable(playerid, TDinvTrash[playerid][0], 1);

		Govnishe[playerid][0] = CreatePlayerTextDraw(playerid, 465.101715+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][1] = CreatePlayerTextDraw(playerid, 491.601715+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][2] = CreatePlayerTextDraw(playerid, 518.101685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][3] = CreatePlayerTextDraw(playerid, 544.601685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][4] = CreatePlayerTextDraw(playerid, 571.101685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][5] = CreatePlayerTextDraw(playerid, 597.601685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][6] = CreatePlayerTextDraw(playerid, 465.101715+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][7] = CreatePlayerTextDraw(playerid, 491.601715+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][8] = CreatePlayerTextDraw(playerid, 518.101685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][9] = CreatePlayerTextDraw(playerid, 544.601685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][10] = CreatePlayerTextDraw(playerid, 571.101685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][11] = CreatePlayerTextDraw(playerid, 597.601685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][12] = CreatePlayerTextDraw(playerid, 465.101715+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][13] = CreatePlayerTextDraw(playerid, 491.601715+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][14] = CreatePlayerTextDraw(playerid, 518.101685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][15] = CreatePlayerTextDraw(playerid, 544.601685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][16] = CreatePlayerTextDraw(playerid, 571.101685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][17] = CreatePlayerTextDraw(playerid, 597.601685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][18] = CreatePlayerTextDraw(playerid, 465.101715+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][19] = CreatePlayerTextDraw(playerid, 491.601715+X, 219.100006+Y, "LD_SPAC:white");



		Govnishe[playerid][20] = CreatePlayerTextDraw(playerid, 518.101685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][21] = CreatePlayerTextDraw(playerid, 544.601685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][22] = CreatePlayerTextDraw(playerid, 571.101685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][23] = CreatePlayerTextDraw(playerid, 597.601685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][24] = CreatePlayerTextDraw(playerid, 465.101715+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][25] = CreatePlayerTextDraw(playerid, 491.601715+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][26] = CreatePlayerTextDraw(playerid, 518.101685+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][27] = CreatePlayerTextDraw(playerid, 544.601685+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][28] = CreatePlayerTextDraw(playerid, 571.101685+X, 249.600006+Y, "LD_SPAC:white");


		Govnishe[playerid][29] = CreatePlayerTextDraw(playerid, 597.601685+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][30] = CreatePlayerTextDraw(playerid, 465.101715+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][31] = CreatePlayerTextDraw(playerid, 491.601715+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][32] = CreatePlayerTextDraw(playerid, 518.101685+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][33] = CreatePlayerTextDraw(playerid, 544.601685+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][34] = CreatePlayerTextDraw(playerid, 571.101685+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][35] = CreatePlayerTextDraw(playerid, 597.601685+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][36] = CreatePlayerTextDraw(playerid, 465.101715+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][37] = CreatePlayerTextDraw(playerid, 491.601715+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][38] = CreatePlayerTextDraw(playerid, 518.101685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][39] = CreatePlayerTextDraw(playerid, 544.601685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][40] = CreatePlayerTextDraw(playerid, 571.101685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][41] = CreatePlayerTextDraw(playerid, 597.601685+X, 127.599998+Y, "LD_SPAC:white");

		Govnishe[playerid][42] = CreatePlayerTextDraw(playerid, 465.101715+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][43] = CreatePlayerTextDraw(playerid, 491.601715+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][44] = CreatePlayerTextDraw(playerid, 518.101685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][45] = CreatePlayerTextDraw(playerid, 544.601685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][46] = CreatePlayerTextDraw(playerid, 571.101685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][47] = CreatePlayerTextDraw(playerid, 597.601685+X, 158.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][48] = CreatePlayerTextDraw(playerid, 465.101715+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][49] = CreatePlayerTextDraw(playerid, 491.601715+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][50] = CreatePlayerTextDraw(playerid, 518.101685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][51] = CreatePlayerTextDraw(playerid, 544.601685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][52] = CreatePlayerTextDraw(playerid, 571.101685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][53] = CreatePlayerTextDraw(playerid, 597.601685+X, 188.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][54] = CreatePlayerTextDraw(playerid, 465.101715+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][55] = CreatePlayerTextDraw(playerid, 491.601715+X, 219.100006+Y, "LD_SPAC:white");



		Govnishe[playerid][56] = CreatePlayerTextDraw(playerid, 518.101685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][57] = CreatePlayerTextDraw(playerid, 544.601685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][58] = CreatePlayerTextDraw(playerid, 571.101685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][59] = CreatePlayerTextDraw(playerid, 597.601685+X, 219.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][60] = CreatePlayerTextDraw(playerid, 465.101715+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][61] = CreatePlayerTextDraw(playerid, 491.601715+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][62] = CreatePlayerTextDraw(playerid, 518.101685+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][63] = CreatePlayerTextDraw(playerid, 544.601685+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][64] = CreatePlayerTextDraw(playerid, 571.101685+X, 249.600006+Y, "LD_SPAC:white");


		Govnishe[playerid][65] = CreatePlayerTextDraw(playerid, 597.601685+X, 249.600006+Y, "LD_SPAC:white");

		Govnishe[playerid][66] = CreatePlayerTextDraw(playerid, 465.101715+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][67] = CreatePlayerTextDraw(playerid, 491.601715+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][68] = CreatePlayerTextDraw(playerid, 518.101685+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][69] = CreatePlayerTextDraw(playerid, 544.601685+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][70] = CreatePlayerTextDraw(playerid, 571.101685+X, 280.100006+Y, "LD_SPAC:white");

		Govnishe[playerid][71] = CreatePlayerTextDraw(playerid, 597.601685+X, 280.100006+Y, "LD_SPAC:white");

		for(new i = 0; i < 72; i++)
		{
		    PlayerTextDrawLetterSize(playerid, Govnishe[playerid][i], 0.480000, 1.120000);
		    PlayerTextDrawTextSize(playerid, Govnishe[playerid][i], 25.500000, 29.500000);
		    PlayerTextDrawAlignment(playerid, Govnishe[playerid][i], 1);
		    PlayerTextDrawColor(playerid, Govnishe[playerid][i], 0xFFFFFFFF);
		    PlayerTextDrawUseBox(playerid, Govnishe[playerid][i], 0);
		    PlayerTextDrawBoxColor(playerid, Govnishe[playerid][i], 0x80808080);
		    PlayerTextDrawSetShadow(playerid, Govnishe[playerid][i], 2);
		    PlayerTextDrawSetOutline(playerid, Govnishe[playerid][i], 0);
		    PlayerTextDrawBackgroundColor(playerid, Govnishe[playerid][i], 0x333333FF);
		    PlayerTextDrawFont(playerid, Govnishe[playerid][i], 5);
		    PlayerTextDrawSetProportional(playerid, Govnishe[playerid][i], 1);
		    PlayerTextDrawSetSelectable(playerid, Govnishe[playerid][i], 1);
	    }
		GovnisheKletki[playerid][0] = CreatePlayerTextDraw(playerid, 489.601715+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][1] = CreatePlayerTextDraw(playerid, 516.101685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][2] = CreatePlayerTextDraw(playerid, 542.601685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][3] = CreatePlayerTextDraw(playerid, 569.101685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][4] = CreatePlayerTextDraw(playerid, 595.601685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][5] = CreatePlayerTextDraw(playerid, 622.101685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][6] = CreatePlayerTextDraw(playerid, 489.601715+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][7] = CreatePlayerTextDraw(playerid, 516.101685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][8] = CreatePlayerTextDraw(playerid, 542.601685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][9] = CreatePlayerTextDraw(playerid, 569.101685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][10] = CreatePlayerTextDraw(playerid, 595.601685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][11] = CreatePlayerTextDraw(playerid, 622.101685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][12] = CreatePlayerTextDraw(playerid, 489.601715+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][13] = CreatePlayerTextDraw(playerid, 516.101685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][14] = CreatePlayerTextDraw(playerid, 542.601685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][15] = CreatePlayerTextDraw(playerid, 569.101685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][16] = CreatePlayerTextDraw(playerid, 595.601685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][17] = CreatePlayerTextDraw(playerid, 622.101685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][18] = CreatePlayerTextDraw(playerid, 489.601715+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][19] = CreatePlayerTextDraw(playerid, 516.101685+X, 242.183334+Y, "LD_SPAC:white");



		GovnisheKletki[playerid][20] = CreatePlayerTextDraw(playerid, 542.601685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][21] = CreatePlayerTextDraw(playerid, 569.101685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][22] = CreatePlayerTextDraw(playerid, 595.601685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][23] = CreatePlayerTextDraw(playerid, 622.101685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][24] = CreatePlayerTextDraw(playerid, 489.601715+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][25] = CreatePlayerTextDraw(playerid, 516.101685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][26] = CreatePlayerTextDraw(playerid, 542.601685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][27] = CreatePlayerTextDraw(playerid, 569.101685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][28] = CreatePlayerTextDraw(playerid, 595.601685+X, 272.683350+Y, "LD_SPAC:white");


		GovnisheKletki[playerid][29] = CreatePlayerTextDraw(playerid, 622.101685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][30] = CreatePlayerTextDraw(playerid, 489.601715+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][31] = CreatePlayerTextDraw(playerid, 516.101685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][32] = CreatePlayerTextDraw(playerid, 542.601685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][33] = CreatePlayerTextDraw(playerid, 569.101685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][34] = CreatePlayerTextDraw(playerid, 595.601685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][35] = CreatePlayerTextDraw(playerid, 622.101685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][36] = CreatePlayerTextDraw(playerid, 489.601715+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][37] = CreatePlayerTextDraw(playerid, 516.101685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][38] = CreatePlayerTextDraw(playerid, 542.601685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][39] = CreatePlayerTextDraw(playerid, 569.101685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][40] = CreatePlayerTextDraw(playerid, 595.601685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][41] = CreatePlayerTextDraw(playerid, 622.101685+X, 150.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][42] = CreatePlayerTextDraw(playerid, 489.601715+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][43] = CreatePlayerTextDraw(playerid, 516.101685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][44] = CreatePlayerTextDraw(playerid, 542.601685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][45] = CreatePlayerTextDraw(playerid, 569.101685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][46] = CreatePlayerTextDraw(playerid, 595.601685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][47] = CreatePlayerTextDraw(playerid, 622.101685+X, 181.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][48] = CreatePlayerTextDraw(playerid, 489.601715+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][49] = CreatePlayerTextDraw(playerid, 516.101685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][50] = CreatePlayerTextDraw(playerid, 542.601685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][51] = CreatePlayerTextDraw(playerid, 569.101685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][52] = CreatePlayerTextDraw(playerid, 595.601685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][53] = CreatePlayerTextDraw(playerid, 622.101685+X, 211.683334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][54] = CreatePlayerTextDraw(playerid, 489.601715+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][55] = CreatePlayerTextDraw(playerid, 516.101685+X, 242.183334+Y, "LD_SPAC:white");



		GovnisheKletki[playerid][56] = CreatePlayerTextDraw(playerid, 542.601685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][57] = CreatePlayerTextDraw(playerid, 569.101685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][58] = CreatePlayerTextDraw(playerid, 595.601685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][59] = CreatePlayerTextDraw(playerid, 622.101685+X, 242.183334+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][60] = CreatePlayerTextDraw(playerid, 489.601715+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][61] = CreatePlayerTextDraw(playerid, 516.101685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][62] = CreatePlayerTextDraw(playerid, 542.601685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][63] = CreatePlayerTextDraw(playerid, 569.101685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][64] = CreatePlayerTextDraw(playerid, 595.601685+X, 272.683350+Y, "LD_SPAC:white");


		GovnisheKletki[playerid][65] = CreatePlayerTextDraw(playerid, 622.101685+X, 272.683350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][66] = CreatePlayerTextDraw(playerid, 489.601715+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][67] = CreatePlayerTextDraw(playerid, 516.101685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][68] = CreatePlayerTextDraw(playerid, 542.601685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][69] = CreatePlayerTextDraw(playerid, 569.101685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][70] = CreatePlayerTextDraw(playerid, 595.601685+X, 303.183350+Y, "LD_SPAC:white");

		GovnisheKletki[playerid][71] = CreatePlayerTextDraw(playerid, 622.101685+X, 303.183350+Y, "LD_SPAC:white");
		for(new i = 0; i < 72; i++)
		{
			PlayerTextDrawLetterSize(playerid, GovnisheKletki[playerid][i], 0.126499, 0.625000);
			PlayerTextDrawTextSize(playerid, GovnisheKletki[playerid][i], 1280.000000, 1280.000000);
			PlayerTextDrawAlignment(playerid, GovnisheKletki[playerid][i], 3);
			PlayerTextDrawColor(playerid, GovnisheKletki[playerid][i], 0xAAAAAAFF);
			PlayerTextDrawUseBox(playerid, GovnisheKletki[playerid][i], 0);
			PlayerTextDrawBoxColor(playerid, GovnisheKletki[playerid][i], 0x80808080);
			PlayerTextDrawSetShadow(playerid, GovnisheKletki[playerid][i], 0);
			PlayerTextDrawSetOutline(playerid, GovnisheKletki[playerid][i], 1);
			PlayerTextDrawBackgroundColor(playerid, GovnisheKletki[playerid][i], 0x00000000);
			PlayerTextDrawFont(playerid, GovnisheKletki[playerid][i], 2);
			PlayerTextDrawSetProportional(playerid, GovnisheKletki[playerid][i], 1);
			PlayerTextDrawSetSelectable(playerid, GovnisheKletki[playerid][i], 0);
		}
