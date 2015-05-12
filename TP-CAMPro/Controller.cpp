
#include "stdafx.h"
#include "Controller.h"


// 전역 변수
cController g_controller;


cController::cController()
{

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
