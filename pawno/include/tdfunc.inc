/*----------------------------------------------------------------------------------------------------*-

Автор:
	Lewis Co.

Версия:
	0.1.0
	
Описание:
	Новые функции Textdraw
 
Права: 
    Copyright © 2018-2019 Lewis Co.

Функции:
	native GetTextDrawColor(PlayerText:text);
	native bool:IsTextDrawUseBox(Text:text);
	native GetTextDrawBoxColor(Text:text);
	native GetTextDrawBackgroundColor(Text:text);
	native GetTextDrawFont(Text:text);
	native bool:IsTextDrawSetSelectable(Text:text);
	native bool:IsTextDrawShowForAll(Text:text);
	native GetTextDrawPreviewModel(Text:text);
	native Float:GetTextDrawPreviewRot(Text:text);

-*----------------------------------------------------------------------------------------------------*/

#if !defined _samp_included
	#tryinclude <a_samp>
	#if !defined _samp_included
		#error could not locate a_samp.inc file, please check your server includes
	#endif
#endif

// -------------------------------------------------------------------------------------*-

enum t_func_inf
{
	t_C_value,
 	bool:t_UB_value,
 	t_BC_value,
	t_BGC_value,
	t_F_value,
	bool:t_SSL_value,
 	bool:t_SFA_value,
	t_SPM_value,
 	Float:t_SPR_coord[4]
}
new db_t[Text:MAX_TEXT_DRAWS][t_func_inf];

// -------------------------------------------------------------------------------------*-

stock NewTextDrawColor(PlayerText:text, color)
{
	db_t[text][t_C_value] = color;
	return PlayerTextDrawColor(text, color);
}

stock GetTextDrawColor(Text:text)
{
    return db_t[text][t_C_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawUseBox(Text:text, bool:use)
{
	db_t[text][t_UB_value] = use;
	return TextDrawUseBox(text, use);
}

stock IsTextDrawUseBox(Text:text)
{
    return db_t[text][t_UB_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawBoxColor(Text:text, color)
{
	db_t[text][t_BC_value] = color;
	return TextDrawBoxColor(text, color);
}

stock GetTextDrawBoxColor(Text:text)
{
    return db_t[text][t_BC_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawBackgroundColor(Text:text, color)
{
	db_t[text][t_BGC_value] = color;
	return TextDrawBackgroundColor(text, color);
}

stock GetTextDrawBackgroundColor(Text:text)
{
    return db_t[text][t_BGC_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawFont(Text:text, font)
{
	db_t[text][t_F_value] = font;
	return TextDrawFont(text, font);
}

stock GetTextDrawFont(Text:text)
{
    return db_t[text][t_F_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawSetSelectable(Text:text, bool:set)
{
	db_t[text][t_SSL_value] = set;
	return TextDrawSetSelectable(text, set);
}

stock IsTextDrawSetSelectable(Text:text)
{
    return db_t[text][t_SSL_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawShowForAll(Text:text)
{
	db_t[text][t_SFA_value] = true;
	return TextDrawShowForAll(text);
}

stock IsTextDrawShowForAll(Text:text)
{
    return db_t[text][t_SFA_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawHideForAll(Text:text)
{
	db_t[text][t_SFA_value] = false;
	return TextDrawHideForAll(text);
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawSetPreviewModel(Text:text, modelindex)
{
	db_t[text][t_SPM_value] = modelindex;
	return TextDrawSetPreviewModel(text, modelindex);
}

stock GetTextDrawPreviewModel(Text:text)
{
    return db_t[text][t_SPM_value];
}

// -------------------------------------------------------------------------------------*-

stock NewTextDrawSetPreviewRot(Text:text, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fZoom = 1.0)
{
	db_t[text][t_SPR_coord][0] = fRotX;
	db_t[text][t_SPR_coord][1] = fRotY;
	db_t[text][t_SPR_coord][2] = fRotZ;
	db_t[text][t_SPR_coord][3] = fZoom;
	return TextDrawSetPreviewRot(text, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fZoom = 1.0);
}

// -------------------------------------------------------------------------------------*-

#define TextDrawUseBox 				NewTextDrawUseBox
#define TextDrawColor 				NewTextDrawColor
#define TextDrawBoxColor 			NewTextDrawBoxColor
#define TextDrawBackgroundColor 	NewTextDrawBackgroundColor
#define TextDrawFont 				NewTextDrawFont
#define TextDrawSetSelectable		NewTextDrawSetSelectable
#define TextDrawShowForAll 			NewTextDrawShowForAll
#define TextDrawHideForAll 			NewTextDrawHideForAll
#define TextDrawSetPreviewModel 	NewTextDrawSetPreviewModel
#define TextDrawSetPreviewRot 		NewTextDrawSetPreviewRot

// -------------------------------------------------------------------------------------*-
