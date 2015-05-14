// 전역 컨트롤 클래스
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


	// 캡쳐된 이미지를 저장한다.
	vector<sCaptureImage> m_captureImages;
	
	// 키보드 키 테이블을 저장한다.
	wxString m_keyTable[INPUT_MODE::MAX_TYPE][34];

	// 리소스 파일 경로를 저장한다.
	map<string,string> m_ResoucePath; // key, filepath
};
