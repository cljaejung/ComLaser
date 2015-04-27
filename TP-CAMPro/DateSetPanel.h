#pragma once


class cDateSetPanel : public wxPanel
{
public:
	cDateSetPanel(wxFrame*frame);
	virtual ~cDateSetPanel();

	void UpdateCurrentTime();


protected:
	wxButton *m_btnMonth;
	wxButton *m_btnDay;
	wxButton *m_btnYear;
	wxButton *m_btnHour;
	wxButton *m_btnMinutes;
	wxButton *m_btnTime;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};
