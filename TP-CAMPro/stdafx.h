// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define _CRT_SECURE_NO_WARNINGS

//#include "targetver.h"

#include <stdio.h>
//#include <tchar.h>



// TODO: reference additional headers your program requires here
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif


enum PANEL_TYPE
{
	PANEL_MAIN,
	PANEL_LOGIN,
	PANEL_OPERATORSET,
	PANEL_DATESET,
	PANEL_ENFORCEMENTSET,
	PANEL_CAMERASET,
	PANEL_CAMERAFULL,
	PANEL_FILEMNG,
	PANEL_FILEMNGFULL,
	PANEL_ENFORCEMENT,
	PANEL_ENFORCEMENTFULL,

};