
#include "stdafx.h"
#include "Controller.h"
#include <fstream>



// ���� ����
cController g_controller;


cController::cController()
{
	ReadResoucePath("ResourceTable.txt");
	ReadKeyboardTable("KeyTable.txt");

}


// ĸ�ĵ� ������ �д´�.
bool cController::ReadCaptureFiles()
{
	m_captureImages.reserve(128);
	m_captureImages.push_back(sCaptureImage(0, _("capture/Koala.jpg"), 124, _("17:05:25")));
	m_captureImages.push_back(sCaptureImage(1, _("capture/Lighthouse.jpg"), 224, _("17:05:25")));
	m_captureImages.push_back(sCaptureImage(2, _("capture/Penguins.jpg"), 324, _("17:05:25")));

	return true;
}



// Ű���� ���̺� ������ �о, m_keyTable[][] �� �����Ѵ�.
// �����б⸦ �����ϸ� false�� �����Ѵ�.
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
		if (str.empty()) // �о���� ���ڰ� ������ �����Ѵ�.
			break;

		int id;
		char buff[32];
		sscanf(str.c_str(), "%d,%s", &id, buff);

		
		// ����� ��.
		printf("%d, %s\n", id, buff);
	}

	return true;
}


// ���ҽ� ���� ��θ� ������ ������ �д´�.
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

		// ����� ��.
		printf("%d, %s\n", key, value);
	}

	return true;
}
