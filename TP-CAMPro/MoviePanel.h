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
	PANEL_TYPE m_GotoNextPanel; // ����Ŭ���� �Ѿ �г�


protected:
	int m_curImgIndex;
	int m_oldTick;
	bool m_isActivate; // Movie�� �Ҹ��ڰ� ȣ��Ǹ� false ���ȴ�. �� �� OnIdle() ó���� ���� �ʰ� �Ѵ�.
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
