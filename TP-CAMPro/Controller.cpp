
#include "stdafx.h"
#include "Controller.h"


// ���� ����
cController g_controller;


cController::cController()
{

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
