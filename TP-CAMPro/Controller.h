// ���� ��Ʈ�� Ŭ����
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
