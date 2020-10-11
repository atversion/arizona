/*
	* ## LEASE ATENTAMENTE PARA NO CONVERTIRSE EN LAMMER!!.: :D ##
	*
	* Estè Simple INCLUDE esta hecho especialmente para www.forum.sa-mp.com
	* NO Publicar estè INCLUDE en Otros foros de SA-MP y hacerse pasar por el creador del CODE.
	*
	* Codigo Creado Por OTACON
	*
	* CREDITOS:
	*     OTACON: Realizacion y Idea de creacion del code.
	*     TÙ: Modificacion libremente respetando lo mencionado ;).
	*
	*    NOTA: Menos Creditos para los que me los critican.. JO'PUTAS! :D xD ;)
	*
	*	         Prohibido TOTALMENTE el Robo de Créditos o la
	*	           Publicación de este INCLUDE sin Mi Permiso.
*/
/*
	* ## READ CAREFULLY TO AVOID BECOMING LAMMER!.: :D ##
	*
	* This simple INCLUDE is made especially for www.forum.sa-mp.com
	* DO NOT Post the INCLUDE in Other SAMP forums and impersonating the creator of the CODE.
	*
	* Code Created By OTACON
	*
	* CREDITS:
	*     OTACON: Idea Making and code creation.
	*     YOUR: Modification freely respecting the above ;).
	*
	*    NOTE: Less Credits for those who criticize me.. JO'PUTAS! :D xD ;)
	*
	*	                 FULLY spaces Theft Credit or
	*	          Publication of this INCLUDE without my permission.
*/
/*
   native SetEasyScreenFade(slot,playerid,Text:textdrawid,colour,bool:mode,timer); //para activar un screen fade. mode=false(TextDrawBoxColor)  mode=true(TextDrawColor)
   native KillEasyScreenFade(slot,playerid,Text:textdrawid); //para desactivar un screen fade.
   public OnFunctionOfEasyScreenFade(slot,playerid); //para darle alguna funcion a un screen fade cuando termina el progreso.
*/
#define MAX_SCREEN_FADE (100) //cantidad maxima de screen fade
static DeadlEasyScreenFade[MAX_PLAYERS][MAX_SCREEN_FADE],
EasyScreenFadeStatus[MAX_PLAYERS][MAX_SCREEN_FADE];
forward OnFunctionOfEasyScreenFade(slot,playerid);
forward EasyScreenFadeUpdate(slot,playerid,Text:textdrawid,colour,bool:mode);
public EasyScreenFadeUpdate(slot,playerid,Text:textdrawid,colour,bool:mode){
#define STATUS_FADE (15)
if(!mode){TextDrawBoxColor(textdrawid,colour-(0x11*EasyScreenFadeStatus[playerid][slot]));}
else{TextDrawColor(textdrawid,colour-(0x11*EasyScreenFadeStatus[playerid][slot]));}
if(EasyScreenFadeStatus[playerid][slot]>=STATUS_FADE){
    KillTimer(DeadlEasyScreenFade[playerid][slot]);
    TextDrawHideForPlayer(playerid,textdrawid);
    EasyScreenFadeStatus[playerid][slot]=0;
    return CallLocalFunction("OnFunctionOfEasyScreenFade","dd",slot,playerid);}
TextDrawShowForPlayer(playerid,textdrawid);
return EasyScreenFadeStatus[playerid][slot]++;}
stock SetEasyScreenFade(slot,playerid,Text:textdrawid,colour,bool:mode=false,timer){
TextDrawHideForPlayer(playerid,textdrawid);
EasyScreenFadeStatus[playerid][slot]=0;
KillTimer(DeadlEasyScreenFade[playerid][slot]);
DeadlEasyScreenFade[playerid][slot]=SetTimerEx("EasyScreenFadeUpdate",timer,true,"dddxb",slot,playerid,_:textdrawid,colour,mode);}
stock KillEasyScreenFade(slot,playerid,Text:textdrawid){
TextDrawHideForPlayer(playerid,textdrawid);
EasyScreenFadeStatus[playerid][slot]=0;
KillTimer(DeadlEasyScreenFade[playerid][slot]);}