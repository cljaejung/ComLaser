#pragma once



class cBitmap2Button : public wxStaticBitmap
{
public:
	cBitmap2Button(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0,
		const wxString& name = wxStaticBitmapNameStr);

	void SetButtonBitmap(const wxString &fileName);


protected:
	wxImage m_normalImg;
	wxImage m_hoverImg;
	bool m_isPressed;
	bool m_isEnterWindow;


protected:
	void OnEraseBackground(wxEraseEvent&);
	void OnEnterWindow(wxMouseEvent& event);
	void OnLeaveWindow(wxMouseEvent& event);
	void OnLeftDown(wxMouseEvent& event);
	void OnLeftUp(wxMouseEvent& event);
};
