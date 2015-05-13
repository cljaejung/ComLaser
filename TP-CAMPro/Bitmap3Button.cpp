
#include "stdafx.h"
#include "Bitmap3Button.h"
#include "wx/event.h"


cBitmap3Button::cBitmap3Button(wxWindow *parent,
	wxWindowID id,
	const wxString& fileName,
	const wxPoint& pos,
	const wxSize& size,
	long style,
	const wxString& name) 
	: m_isPressed(false)
	, m_isEnterWindow(false)
{

	wxImage img(fileName);
	const int w = img.GetWidth() / 3;
	const int h = img.GetHeight();

	wxBitmap bmp(w, h);
	Create(parent, id, bmp, pos, size, style, name);
	

	// 버튼이미지 업데이트
	SetButtonBitmap(fileName);


	Connect(wxEVT_ERASE_BACKGROUND, wxEraseEventHandler(cBitmap3Button::OnEraseBackground), NULL, this);
	Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(cBitmap3Button::OnLeftDown), NULL, this);
	Connect(wxEVT_LEFT_UP, wxMouseEventHandler(cBitmap3Button::OnLeftUp), NULL, this);
	Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(cBitmap3Button::OnEnterWindow), NULL, this);
	Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(cBitmap3Button::OnLeaveWindow), NULL, this);
}


void cBitmap3Button::OnEnterWindow(wxMouseEvent& event)
{
	m_isEnterWindow = true;
	SetBitmap(m_hoverImg);
	Refresh();
	event.Skip();
}


void cBitmap3Button::OnLeaveWindow(wxMouseEvent& event)
{
	m_isPressed = false;
	m_isEnterWindow = false;
	SetBitmap(m_normalImg);
	Refresh();
	event.Skip();
}


void cBitmap3Button::OnLeftDown(wxMouseEvent& event)
{
	if (m_isEnterWindow)
	{
		m_isPressed = true;
		SetBitmap(m_pressImg);
		Refresh();
	}
	event.Skip();
}


void cBitmap3Button::OnLeftUp(wxMouseEvent& event)
{
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


void cBitmap3Button::OnEraseBackground(wxEraseEvent& event)
{
	// 깝빡거림 방지.
	//event.Skip();
}


// 버튼 이미지를 설정한다.
void cBitmap3Button::SetButtonBitmap(const wxString &fileName)
{
	wxImage img(fileName);
	const int w = img.GetWidth() / 3;
	const int h = img.GetHeight();

	int x = 0;
	m_normalImg = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));
	x += w;
	m_pressImg = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));
	x += w;
	m_hoverImg = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));

	SetBitmap(m_normalImg);
	Refresh();
	Layout();
	Fit();
}

