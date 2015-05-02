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
	virtual ~cMoviePanel();


	bool m_isPlay;
	PANEL_TYPE m_GotoNextPanel; // 더블클릭시 넘어갈 패널


protected:
	int m_curImgIndex;
	int m_oldTick;
	bool m_isActivate; // Movie가 소멸자가 호출되면 false 가된다. 이 후 OnIdle() 처리를 하지 않게 한다.
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
