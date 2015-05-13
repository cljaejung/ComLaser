
#include "stdafx.h"
#include "Bitmap3ButtonEx.h"
#include "wx/event.h"


enum
{
	ID_BITMAP = 100,
};

BEGIN_EVENT_TABLE(cBitmap3ButtonEx, wxPanel)
EVT_PAINT(cBitmap3ButtonEx::OnPaint)
EVT_LEFT_DOWN(cBitmap3ButtonEx::OnLeftDown)
EVT_LEFT_UP(cBitmap3ButtonEx::OnLeftUp)
EVT_ENTER_WINDOW(cBitmap3ButtonEx::OnEnterWindow)
EVT_LEAVE_WINDOW(cBitmap3ButtonEx::OnLeaveWindow)
EVT_ERASE_BACKGROUND(cBitmap3ButtonEx::OnEraseBackground)
END_EVENT_TABLE()


// �⺻ ��ü�� �����Ѵ�.
cBitmap3ButtonEx::cBitmap3ButtonEx(
	wxWindow *parent, 
	const wxWindowID id,
	const wxPoint& pos,
	const wxSize& size,
	const long style
	)
	: wxPanel(parent, id, pos, size, style)
	, m_state(BTN3_STATE::NORMAL)
{
	cBitmap3ButtonEx* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);
}


cBitmap3ButtonEx::cBitmap3ButtonEx(wxWindow *parent,
	wxWindowID id,
	const wxString& fileName,
	const wxPoint& pos,
	const wxSize& size,
	const long style)
	: wxPanel(parent, id, pos, size, style)
	, m_state(BTN3_STATE::NORMAL)
{

	cBitmap3ButtonEx* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);

	if (!fileName.IsEmpty())
	{
		wxImage img(fileName);
		if (img.IsOk())
		{
			const int w = img.GetWidth() / 3;
			const int h = img.GetHeight();
			SetMinSize(wxSize(w, h));
		}

		// ��ư�̹��� ������Ʈ
		SetButtonBitmap(fileName);
	}
}


// ȭ�鿡 ��ư �̹����� ����Ѵ�.
void cBitmap3ButtonEx::OnPaint(wxPaintEvent& event)
{
	wxPaintDC dc(this);
	if (m_btnImage[m_state].IsOk())
		dc.DrawBitmap( m_btnImage[ m_state], wxPoint(0, 0));
}


void cBitmap3ButtonEx::OnEnterWindow(wxMouseEvent& event)
{
	m_state = BTN3_STATE::HOVER;
	Refresh();
	event.Skip();
}


void cBitmap3ButtonEx::OnLeaveWindow(wxMouseEvent& event)
{
	m_state = BTN3_STATE::NORMAL;
	Refresh();
	event.Skip();
}


void cBitmap3ButtonEx::OnLeftDown(wxMouseEvent& event)
{
	if (BTN3_STATE::HOVER == m_state)
	{
		m_state = BTN3_STATE::PRESSED;
		Refresh();
	}
	event.Skip();
}


void cBitmap3ButtonEx::OnLeftUp(wxMouseEvent& event)
{
	if (BTN3_STATE::PRESSED == m_state)
	{
		m_state = BTN3_STATE::HOVER;
		Refresh();

		// ��ư Ŭ�� �̺�Ʈ�� ������.
		wxCommandEvent evt(wxEVT_COMMAND_BUTTON_CLICKED, GetId());
		ProcessEvent(evt);
	}
	event.Skip();
}


void cBitmap3ButtonEx::OnEraseBackground(wxEraseEvent& event)
{
	// �����Ÿ� ����.
	//event.Skip();
}


// ��ư �̹����� �����Ѵ�.
void cBitmap3ButtonEx::SetButtonBitmap(const wxString &fileName)
{
	if (fileName.IsEmpty())
		return;

	wxImage img(fileName);
	if (!img.IsOk())
		return;

	const int w = img.GetWidth() / 3;
	const int h = img.GetHeight();

	int x = 0;
	m_btnImage[BTN3_STATE::NORMAL] = wxBitmap(img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h))));
	x += w;
	m_btnImage[BTN3_STATE::PRESSED] = wxBitmap(img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h))));
	x += w;
	m_btnImage[BTN3_STATE::HOVER] = wxBitmap(img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h))));

	Refresh();
	Layout();
	Fit();
}

