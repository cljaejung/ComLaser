#pragma once

// 날짜와 시간을 출력한다.

class cDateDisplay : public wxPanel
{
public:
	cDateDisplay(wxWindow *parent);


protected:
	wxFont m_font;
	wxFont m_font2; // AM/PM font
	wxStaticText *m_mdy; // monty , day, year
	wxStaticText *m_hms; // hour, minute, second
	wxStaticText *m_amPm; // AM/PM
	wxTimer m_timer;

	void OnTimer(wxTimerEvent& event);
};
