#pragma once


class cBatteryDisplay : public wxStaticBitmap
{
public:
	cBatteryDisplay(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0,
		const wxString& name = wxStaticBitmapNameStr);

	void SetBatteryLevel(const int level);


protected:
	int m_level;
	wxImage m_batteryLevel1;
	wxImage m_batteryLevel2;
	wxImage m_batteryLevel3;
	wxImage m_batteryLevel4;
};
