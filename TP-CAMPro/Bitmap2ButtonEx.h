#pragma once


#include "Bitmap3ButtonEx.h"


class cBitmap2ButtonEx : public cBitmap3ButtonEx
{
public:
	cBitmap2ButtonEx(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0,
		BUTTON2_TYPE::TYPE buttonImageType = BUTTON2_TYPE::BMP);

	void SetButton2Bitmap(const wxString &fileName);


protected:
	wxString GetFileExt();
	BUTTON2_TYPE::TYPE m_buttonImgType;
};




// cBitmap2Button Ŭ������ �Ȱ��� ����� ������, ������ png �������� �ε��Ѵ�.
class cPng2ButtonEx : public cBitmap2ButtonEx
{
public:
	cPng2ButtonEx(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0)
		: cBitmap2ButtonEx(parent, id, fileName, pos, size, style, BUTTON2_TYPE::PNG)
	{
		// nothing ~ 
	}
};
