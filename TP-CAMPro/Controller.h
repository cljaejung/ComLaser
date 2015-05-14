// ���� ��Ʈ�� Ŭ����
//
#pragma once


#include "CaptureImage.h"


class cController
{
public:
	cController();

	bool ReadCaptureFiles();
	bool ReadKeyboardTable(const string &fileName);
	bool ReadResoucePath(const string &fileName);


	// ĸ�ĵ� �̹����� �����Ѵ�.
	vector<sCaptureImage> m_captureImages;
	
	// Ű���� Ű ���̺��� �����Ѵ�.
	wxString m_keyTable[INPUT_MODE::MAX_TYPE][34];

	// ���ҽ� ���� ��θ� �����Ѵ�.
	map<string,string> m_ResoucePath; // key, filepath
};
