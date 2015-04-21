#pragma once


class cBitmap3Button : public wxStaticBitmap
{
public:
	cBitmap3Button(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0,
		const wxString& name = wxStaticBitmapNameStr);


protected:
	wxImage m_normalImg;
	wxImage m_hoverImg;
	wxImage m_pressImg;
	bool m_isPressed;
	bool m_isEnterWindow;


protected:
	void OnEraseBackground(wxEraseEvent&);
	void OnEnterWindow(wxMouseEvent& event);
	void OnLeaveWindow(wxMouseEvent& event);
	void OnLeftDown(wxMouseEvent& event);
	void OnLeftUp(wxMouseEvent& event);
};
