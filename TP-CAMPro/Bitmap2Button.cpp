
#include "stdafx.h"
#include "Bitmap2Button.h"


cBitmap2Button::cBitmap2Button(wxWindow *parent,
	wxWindowID id,
	const wxString& fileName,
	const wxPoint& pos,
	const wxSize& size,
	long style,
	const wxString& name,
	BUTTON2_TYPE::TYPE buttonImageType
	)
	: m_isPressed(false)
	, m_isEnterWindow(false)
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

	wxBitmap bmp(w, h);
	Create(parent, id, bmp, wxDefaultPosition, wxDefaultSize, style, name);

	// 버튼이미지 업데이트
	SetButtonBitmap(fileName);


	Connect(wxEVT_ERASE_BACKGROUND, wxEraseEventHandler(cBitmap2Button::OnEraseBackground), NULL, this);
	Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(cBitmap2Button::OnLeftDown), NULL, this);
	Connect(wxEVT_LEFT_UP, wxMouseEventHandler(cBitmap2Button::OnLeftUp), NULL, this);
	Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(cBitmap2Button::OnEnterWindow), NULL, this);
	Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(cBitmap2Button::OnLeaveWindow), NULL, this);
}


void cBitmap2Button::OnEnterWindow(wxMouseEvent& event)
{
	if (!m_hoverImg.IsOk())
		return;

	m_isEnterWindow = true;
	SetBitmap(m_hoverImg);
	Refresh();
	event.Skip();
}


void cBitmap2Button::OnLeaveWindow(wxMouseEvent& event)
{
	if (!m_normalImg.IsOk())
		return;

	m_isPressed = false;
	m_isEnterWindow = false;
	SetBitmap(m_normalImg);
	Refresh();
	event.Skip();
}


void cBitmap2Button::OnLeftDown(wxMouseEvent& event)
{
	if (!m_normalImg.IsOk())
		return;

	if (m_isEnterWindow)
	{
		m_isPressed = true;
		SetBitmap(m_normalImg);
		Refresh();
	}
	event.Skip();
}


void cBitmap2Button::OnLeftUp(wxMouseEvent& event)
{
	if (!m_hoverImg.IsOk())
		return;

	if (m_isEnterWindow)
	{
		m_isPressed = false;
		SetBitmap(m_hoverImg);
		Refresh();

		// 버튼 클릭 이벤트를 보낸다.
		wxCommandEvent evt(wxEVT_COMMAND_BUTTON_CLICKED, GetId());
		ProcessEvent(evt);
	}
	event.Skip();
}


void cBitmap2Button::OnEraseBackground(wxEraseEvent& event)
{
	// 깝빡거림 방지.
	//event.Skip();
}


// 버튼 이미지를 설정한다.
void cBitmap2Button::SetButtonBitmap(const wxString &fileName)
{
	if (fileName.IsEmpty())
		return;

	const wxString ext = GetFileExt();
	m_normalImg.LoadFile(fileName + _("_0") + ext);
	m_hoverImg.LoadFile(fileName + _("_1") + ext);

	SetBitmap(m_normalImg);
	Refresh();
	Layout();
	Fit();
}


// 버튼 이미지 확장자를 리턴한다.
wxString cBitmap2Button::GetFileExt()
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