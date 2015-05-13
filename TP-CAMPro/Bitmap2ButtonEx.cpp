
#include "stdafx.h"
#include "Bitmap2ButtonEx.h"


cBitmap2ButtonEx::cBitmap2ButtonEx(
	wxWindow *parent,
	wxWindowID id,
	const wxString& fileName,
	const wxPoint& pos,
	const wxSize& size,
	long style,
	BUTTON2_TYPE::TYPE buttonImageType
	)
	: cBitmap3ButtonEx(parent, id, pos, size, style)
	, m_buttonImgType(buttonImageType)
{
	int w = size.GetWidth();
	int h = size.GetHeight();
	if (!fileName.IsEmpty())
	{
		wxImage img(fileName + _("_0") + GetFileExt());
		w = img.GetWidth();
		h = img.GetHeight();
	}

	SetMinSize(wxSize(w, h));

	// ��ư�̹��� ������Ʈ
	SetButton2Bitmap(fileName);
}


// ��ư �̹����� �����Ѵ�.
void cBitmap2ButtonEx::SetButton2Bitmap(const wxString &fileName)
{
	if (fileName.IsEmpty())
		return;

	const wxString ext = GetFileExt();

	wxImage img1(fileName + _("_0") + ext);
	wxImage img2(fileName + _("_1") + ext);
	if (!img1.IsOk() || !img2.IsOk())
		return;

	m_btnImage[BTN3_STATE::NORMAL] = wxBitmap(img1);
	m_btnImage[BTN3_STATE::PRESSED] = wxBitmap(img1);
	m_btnImage[BTN3_STATE::HOVER] = wxBitmap(img2);

	Refresh();
	Layout();
	Fit();
}


// ��ư �̹��� Ȯ���ڸ� �����Ѵ�.
wxString cBitmap2ButtonEx::GetFileExt()
{
	wxString ext;
	if (BUTTON2_TYPE::BMP == m_buttonImgType)
		ext = _(".bmp");
	else if (BUTTON2_TYPE::PNG == m_buttonImgType)
		ext = _(".png");
	else
		ext = _(".bmp");

	return ext;
}
