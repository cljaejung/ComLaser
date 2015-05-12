// 전역 컨트롤 클래스
//
#pragma once


#include "CaptureImage.h"


class cController
{
public:
	cController();

	bool ReadCaptureFiles();


	vector<sCaptureImage> m_captureImages;

};
