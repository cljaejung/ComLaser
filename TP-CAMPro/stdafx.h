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


#include <list>
#include <vector>
#include <map>
#include <string>
using std::vector;
using std::list;
using std::map;
using std::string;
using std::wstring;



enum PANEL_TYPE
{
	PANEL_NONE,
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


namespace VELOCITY_UNIT
{
	enum TYPE
	{
		UNIT_KMH,
		UNIT_MPH,
	};
}


namespace WEATHER
{
	enum TYPE
	{
		AUTO,
		SUNNY,
		FINE,
		CLOUDY,
		NIGHT,
		USERSET,
	};
}



// Button State
namespace BTN3_STATE {
	enum  TYPE
	{
		NORMAL = 0,
		PRESSED,
		HOVER,
		MAX
	};
}


// Button Image Type
namespace BUTTON2_TYPE {
	enum TYPE {
		BMP,
		PNG,
	};
}


// 키보드 입력 모드
namespace INPUT_MODE
{
	enum TYPE
	{
		ALPHA_LOWER, // 알파벳 소문자
		ALPHA_UPPER, // 알파벳 대문자
		ALPHA_UPPER_STAY, // 대문자 입력모드 유지 상태
		NUMBER,
		SPECIAL,
		MAX_TYPE
	};
}



#include "Controller.h"
extern cController g_controller;

#include "Global.h"
