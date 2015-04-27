#pragma once


class cMoviePanel : public wxPanel
{
public:
	cMoviePanel(wxWindow *parent,
		wxWindowID winid = wxID_ANY,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = wxTAB_TRAVERSAL | wxNO_BORDER,
		const wxString& name = wxPanelNameStr);


	bool m_isPlay;
	PANEL_TYPE m_GotoNextPanel; // 더블클릭시 넘어갈 패널


protected:
	int m_curImgIndex;
	int m_oldTick;
	wxImage m_currentImage;
	wxImage m_currentBitmap;
	wxBitmap m_backupBitmap;

protected:
	DECLARE_EVENT_TABLE()
	void OnPaint(wxPaintEvent& event);
	void OnIdle(wxIdleEvent& event);
	void OnEraseBackground(wxEraseEvent& event);
	void OnLeftDClick(wxMouseEvent& event);
};
