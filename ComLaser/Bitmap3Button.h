#pragma once


class cBitmap3Button : public wxBitmapButton
{
public:
	cBitmap3Button(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = wxBU_AUTODRAW,
		const wxValidator& validator = wxDefaultValidator,
		const wxString& name = wxButtonNameStr);

};
