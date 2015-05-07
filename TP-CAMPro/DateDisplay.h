#pragma once

// 날짜와 시간을 출력한다.

class cDateDisplay : public wxPanel
{
public:
	cDateDisplay(wxWindow *parent, const bool IsSmallSize=false, const bool IsClickSetDate=false, const wxColour &bgColor=wxColour(0,0,0));
	virtual ~cDateDisplay();

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
	bool m_isClickSetDate; // true일 때, 클릭하면 날짜 설정화면으로 이동한다.

	DECLARE_EVENT_TABLE()
	void OnTimer(wxTimerEvent& event);
	void OnLeftDown(wxMouseEvent& event);
};
