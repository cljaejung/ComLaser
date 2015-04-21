#pragma once

// 날짜와 시간을 출력한다.

class cDateDisplay : public wxPanel
{
public:
	cDateDisplay(wxWindow *parent, const bool IsSmallSize=false);

	void UpdateDate();


protected:
	wxFont m_font;
	wxFont m_font2; // AM/PM font
	wxStaticText *m_mdy; // monty , day, year
	wxStaticText *m_hms; // hour, minute, second
	wxStaticText *m_amPm; // AM/PM
	wxTimer m_timer;

	int m_oldH;
	int m_oldM;
	int m_oldS;
	int m_oldDay;
	int m_oldMonth;
	int m_oldYear;
	bool m_isAM;
	bool m_isSmallSize; // true 일때 작은 크기로 시간을 출력한다.

	void OnTimer(wxTimerEvent& event);
};
