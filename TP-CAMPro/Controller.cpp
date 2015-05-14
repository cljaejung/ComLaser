
#include "stdafx.h"
#include "Controller.h"
#include <fstream>



// 전역 변수
cController g_controller;


cController::cController()
{
	ReadResoucePath("ResourceTable.txt");
	ReadKeyboardTable("KeyTable.txt");

}


// 캡쳐된 파일을 읽는다.
bool cController::ReadCaptureFiles()
{
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
	//std::wstring wsTmp(fileName.begin(), fileName.end());
	std::fstream fs(fileName.c_str());
	if (!fs.is_open())
		return false;

	while (1)
	{
		string str;
		fs >> str;
		if (str.empty()) // 읽어들일 문자가 없으면 종료한다.
			break;

		int id;
		char buff[32];
		sscanf(str.c_str(), "%d,%s", &id, buff);

		
		// 디버깅 용.
		printf("%d, %s\n", id, buff);
	}

	return true;
}


// 리소스 파일 경로를 저장한 파일을 읽는다.
bool cController::ReadResoucePath(const string &fileName)
{
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
		printf("%d, %s\n", key, value);
	}

	return true;
}
