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


protected:
	DECLARE_EVENT_TABLE()
	void OnPaint(wxPaintEvent& event);
	void OnIdle(wxIdleEvent& event);
	void OnEraseBackground(wxEraseEvent& event);
	void OnLeftDClick(wxMouseEvent& event);


public:
	bool m_isPlay;
	PANEL_TYPE m_GotoNextPanel; // ����Ŭ���� �Ѿ �г�
	int m_clearBkgndCount; // 100���� �ѹ� ��, ��׶��带 Ŭ�����Ѵ�.
	wxBrush m_blackBrush;


protected:
	int m_curImgIndex;
	int m_oldTick;
	bool m_isActivate; // Movie�� �Ҹ��ڰ� ȣ��Ǹ� false ���ȴ�. �� �� OnIdle() ó���� ���� �ʰ� �Ѵ�.
	wxSize m_bufferSize;
	wxSize m_bufferScaledSize;
	wxImage m_currentImage;
	wxImage m_currentBitmap;
	wxBitmap m_backupBitmap;
};
