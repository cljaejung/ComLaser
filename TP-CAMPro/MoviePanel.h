#pragma once


class cMoviePanel : public wxPanel
{
public:
	cMoviePanel(wxWindow *parent);


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
};
