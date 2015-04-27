
#include "stdafx.h"
#include "MoviePanel.h"
#include "Global.h"



BEGIN_EVENT_TABLE(cMoviePanel, wxPanel)
	EVT_IDLE(cMoviePanel::OnIdle)
	EVT_PAINT(cMoviePanel::OnPaint)
	EVT_ERASE_BACKGROUND(cMoviePanel::OnEraseBackground)
END_EVENT_TABLE()



cMoviePanel::cMoviePanel(wxWindow *parent)
: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_FULL_REPAINT_ON_RESIZE | wxCLIP_CHILDREN)
, m_backupBitmap(720, 480)
{

	cMoviePanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_curImgIndex = 1;
	m_oldTick = 0;

}



void cMoviePanel::OnIdle(wxIdleEvent& event)
{
	// 1�ʿ� 24���������� �̹����� �ٲ۴�.
	const int deltaMilliSeconds = global::GetTickCount() - m_oldTick;
	
	if (deltaMilliSeconds > 33)
	{
		// next image
		m_curImgIndex++;
		if (m_curImgIndex > 40)
			m_curImgIndex = 1;

		// �̹��� �ε�.
		m_currentBitmap.LoadFile(wxString::Format("movie/bmp%d.bmp", m_curImgIndex), wxBITMAP_TYPE_BMP);

		m_oldTick = global::GetTickCount();
		
		Refresh(); // ȭ���� ���Ž�Ų��.
	}	
}


// ��׶��带 �ٽ� �׸��� ó���� ���� �ʴ´�.
void cMoviePanel::OnEraseBackground(wxEraseEvent& event)
{
//	event.Skip();
}


// ȭ�����
void cMoviePanel::OnPaint(wxPaintEvent& event)
{
	if (!m_currentBitmap.IsOk())
		return;

	wxPaintDC dc(this);

	// ������۸�.
	wxMemoryDC memDC;
	memDC.SelectObject(m_backupBitmap);
	memDC.DrawBitmap(m_currentBitmap, wxPoint(0, 0));

	dc.Blit(wxPoint(0, 0), wxSize(720, 480), &memDC, wxPoint(0, 0));
}

