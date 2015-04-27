#pragma once


class cDateSetPanel : public wxPanel
{
public:
	cDateSetPanel(wxFrame*frame);
	virtual ~cDateSetPanel();

	void UpdateCurrentTime();
	void UpdateCurrentTime(const wxDateTime::Month &m, const int day, const int year, const int hour, const int minutes);
	void UpdateCurrentTime(const wxDateTime &dt);
	void CheckDay(const wxDateTime::Month &m, const int year);


protected:
	wxButton *m_btnMonth;
	wxButton *m_btnDay;
	wxButton *m_btnYear;
	wxButton *m_btnHour;
	wxButton *m_btnMinutes;
	wxButton *m_btnTime;

	wxDateTime::Month m_Month;
	int m_Day;
	int m_Year;
	int m_Hour;
	int m_Minutes;

	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonMonthUp(wxCommandEvent &);
	void OnButtonDayUp(wxCommandEvent &);
	void OnButtonYearUp(wxCommandEvent &);
	void OnButtonMonthDown(wxCommandEvent &);
	void OnButtonDayDown(wxCommandEvent &);
	void OnButtonYearDown(wxCommandEvent &);
	void OnButtonHourUp(wxCommandEvent &);
	void OnButtonMinutesUp(wxCommandEvent &);
	void OnButtonHourDown(wxCommandEvent &);
	void OnButtonMinutesDown(wxCommandEvent &);
};
