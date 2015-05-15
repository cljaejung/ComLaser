
#include "stdafx.h"
#include "Controller.h"
#include <fstream>
#include <string>



/*
wxString g_keyTable[ INPUT_MODE::MAX_TYPE][ID_BUTTON33 + 1] =
{
// Alphabet Lower
{
_("q"), _("w"), _("e"), _("r"), _("t"), _("y"), _("u"), _("i"), _("o"), _("p"),
_("a"), _("s"), _("d"), _("f"), _("g"), _("h"), _("j"), _("k"), _("l"), _(" "),
_("Shift"), _("z"), _("x"), _("c"), _("v"), _("b"), _("n"), _("m"), _("Backspace"),
_("?123"), _(","), _(" "), _("."), _("Enter")
},

// Alphabet Upper
{
_("Q"), _("W"), _("E"), _("R"), _("T"), _("Y"), _("U"), _("I"), _("O"), _("P"),
_("A"), _("S"), _("D"), _("F"), _("G"), _("H"), _("J"), _("K"), _("L"), _(" "),
_("Shift"), _("Z"), _("X"), _("C"), _("V"), _("B"), _("N"), _("M"), _("Backspace"),
_("?123"), _(","), _(" "), _("."), _("Enter")
},

// Alphabet Upper Stay
{
_("Q"), _("W"), _("E"), _("R"), _("T"), _("Y"), _("U"), _("I"), _("O"), _("P"),
_("A"), _("S"), _("D"), _("F"), _("G"), _("H"), _("J"), _("K"), _("L"), _(" "),
_("Shift"), _("Z"), _("X"), _("C"), _("V"), _("B"), _("N"), _("M"), _("Backspace"),
_("?123"), _(","), _(" "), _("."), _("Enter")
},

// Number
{
_("1"), _("2"), _("3"), _("4"), _("5"), _("6"), _("7"), _("8"), _("9"), _("0"),
_("@"), _("!"), _("#"), _("%"), _("&&"), _("*"), _("-"), _("+"), _("("), _(")"),
_("Alt"), _(","), _("\""), _("'"), _(":"), _(";"), _("/"), _("?"), _("Backspace"),
_("ABC"), _("$"), _(" "), _("."), _("Enter")
},

// Special Character
{
_("~"), _("`"), _("˚"), _("|"), _("·"), _("√ "), _("÷"), _("×"), _("{"), _("}"),
_("♡"), _("♥"), _("☆"), _("★"), _("□"), _("■"), _("_"), _("="), _("["), _("]"),
_("Alt"), _("™"), _("®"), _("ⓒ"), _("^"), _("＼"), _("<"), _(">"), _("Backspace"),
_("ABC"), _("$"), _(" "), _("."), _("Enter")
},
};
*/




// 전역 변수
cController g_controller;


cController::cController()
{
	ReadResoucePath("ui/ResourceTable.txt");

#ifdef __WXMSW__ // Windows Version Loading
	ReadKeyboardTable("ui/KeyTable.txt");
#else
	ReadKeyboardTable("ui/KeyTable_Linux.txt");
#endif
}


// 캡쳐된 파일을 읽는다.
bool cController::ReadCaptureFiles()
{
	printf("ReadCaptureFiles() \n");

	m_captureImages.reserve(128);
	m_captureImages.push_back(sCaptureImage(0, _("capture/Koala.jpg"), 124, _("17:05:25")));
	m_captureImages.push_back(sCaptureImage(1, _("capture/Lighthouse.jpg"), 224, _("17:05:25")));
	m_captureImages.push_back(sCaptureImage(2, _("capture/Penguins.jpg"), 324, _("17:05:25")));

	return true;
}


// 키보드 테이블 파일을 읽어서, m_keyTable[][] 에 저장한다.
// 파일읽기를 실패하면 false를 리턴한다.
bool cController::ReadKeyboardTable(const string &fileName)
{
	printf("ReadKeyboardTable( %s ) \n", fileName.c_str());

	//std::wstring wsTmp(fileName.begin(), fileName.end());
	std::fstream fs(fileName.c_str());
	if (!fs.is_open())
		return false;

	int index = 0;
	char buff[256];
	while (fs.getline(buff, sizeof(buff)))
	{
		int id = 0;
		char value[256];
		sscanf(buff, "%d,%s", &id, value);

		if (id == 32)
		{
			m_keyTable[index / 34][index % 34] = " ";
		}
		else if (id > 0)
		{
			// 멀티바이트 문자를 유니코드로 변환한다.
			// wxString을 통해 변환하면, 제대로 안된다.
			const wstring wstr = global::str2wstr(value);

			m_keyTable[index / 34][index % 34] = wstr;

			//printf("%d, %s \n", id, value); 디버깅용.
			//printf("wstr =  %d %ls\n", id, wstr.c_str());// 디버깅용.
		}

		++index;

		// 디버깅 용.
		//printf("%d, %s\n", id, value);
	}

	return true;
}


// 리소스 파일 경로를 저장한 파일을 읽는다.
bool cController::ReadResoucePath(const string &fileName)
{
	printf("ReadResoucePath( %s ) \n", fileName.c_str());

	std::fstream fs(fileName.c_str());
	if (!fs.is_open())
		return false;

	char buff[256];
	while (fs.getline(buff, sizeof(buff)))
	{
		char key[32];
		char value[256];
		sscanf(buff, "%s %s", key, value);
		m_ResoucePath[key] = value;

		// 디버깅 용.
		//printf("%s, %s\n", key, value);
	}

	return true;
}
