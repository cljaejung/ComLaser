
#include "stdafx.h"
#include "MoviePanel.h"
#include "Global.h"
#include "CLFrame.h"



BEGIN_EVENT_TABLE(cMoviePanel, wxPanel)
	EVT_IDLE(cMoviePanel::OnIdle)
	EVT_PAINT(cMoviePanel::OnPaint)
	EVT_ERASE_BACKGROUND(cMoviePanel::OnEraseBackground)
	EVT_LEFT_DCLICK(cMoviePanel::OnLeftDClick)
END_EVENT_TABLE()



cMoviePanel::cMoviePanel(wxWindow *parent,
	wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
	: wxPanel(parent, winid, pos, size, style | wxNO_FULL_REPAINT_ON_RESIZE | wxCLIP_CHILDREN, name)
	, m_backupBitmap(size.GetWidth(), size.GetHeight())
{

	cMoviePanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_isPlay = true;
	m_curImgIndex = 1;
	m_oldTick = 0;
	m_GotoNextPanel = PANEL_CAMERAFULL;

}



void cMoviePanel::OnIdle(wxIdleEvent& event)
{
	if (!this->IsShownOnScreen())
		return;

	// 1초에 24프레임으로 이미지를 바꾼다.
	const int deltaMilliSeconds = global::GetTickCount() - m_oldTick;
	
	if (deltaMilliSeconds > 33)
	{
		// next image
		if (m_isPlay)
		{
			m_curImgIndex++;
			if (m_curImgIndex > 40)
				m_curImgIndex = 1;
		}

		// 이미지 로딩.
		m_currentBitmap.LoadFile(wxString::Format("movie/bmp%d.bmp", m_curImgIndex), wxBITMAP_TYPE_BMP);
		if (m_currentBitmap.IsOk())
			m_currentBitmap.Rescale(m_backupBitmap.GetWidth(), m_backupBitmap.GetHeight());

		m_oldTick = global::GetTickCount();
		
		Refresh(); // 화면을 갱신시킨다.
	}	
}


// 백그라운드를 다시 그리는 처리는 하지 않는다.
void cMoviePanel::OnEraseBackground(wxEraseEvent& event)
{
//	event.Skip();
}


// 화면출력
void cMoviePanel::OnPaint(wxPaintEvent& event)
{
	if (!m_currentBitmap.IsOk())
		return;

	wxPaintDC dc(this);

	// 더블버퍼링.
	wxMemoryDC memDC;
	memDC.SelectObject(m_backupBitmap);
	memDC.DrawBitmap(m_currentBitmap, wxPoint(0, 0));

	dc.Blit(wxPoint(0, 0), wxSize(720, 480), &memDC, wxPoint(0, 0));
}


// 마우스 더블클릭시 호출
void cMoviePanel::OnLeftDClick(wxMouseEvent& event)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(m_GotoNextPanel);
}

