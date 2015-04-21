
#include "stdafx.h"
#include "DateDisplay.h"
#include "wx/time.h"
#include "wx/datetime.h"


cDateDisplay::cDateDisplay(wxWindow *parent) :
	wxPanel(parent)
{
	cDateDisplay* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT | wxTOP, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer5, 0, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxStaticText* itemStaticText6 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemStaticText6, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("PM"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemStaticText7, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxBOTTOM, 5);


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_mdy = itemStaticText4;
	m_hms = itemStaticText6;
	m_amPm = itemStaticText7;


	// ÆùÆ® ÃÊ±âÈ­.
	m_font = wxFont(25, wxFONTFAMILY_DEFAULT,
		wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, _("±¼¸²"));
	m_font2 = wxFont(12, wxFONTFAMILY_DEFAULT,
		wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, _("±¼¸²"));

	itemStaticText4->SetFont(m_font);
	itemStaticText4->SetForegroundColour(wxColour(150, 150, 255));

	itemStaticText6->SetFont(m_font);
	itemStaticText6->SetForegroundColour(wxColour(250, 180, 10));

	itemStaticText7->SetFont(m_font2);
	itemStaticText7->SetForegroundColour(wxColour(255,255,255));

	m_timer.SetOwner(this);
	m_timer.Start(500);

	//Connect(wxEVT_IDLE, wxIdleEventHandler(cDateDisplay::OnIdle), NULL, this);
	Connect(wxEVT_TIMER, wxTimerEventHandler(cDateDisplay::OnTimer), NULL, this);
}


void cDateDisplay::OnTimer(wxTimerEvent& event)
{
	wxDateTime dt = wxDateTime::Now();
	if (dt.IsValid())
	{
		// hour:minuite:second
		static int h = 0;
		static int m = 0;
		static int s = 0;

		if (h != dt.GetHour() || m != dt.GetMinute() || s != dt.GetSecond())
		{
			m_hms->SetLabel(wxString::Format("%02d:%02d:%02d", dt.GetHour(), dt.GetMinute(), dt.GetSecond()));
			h = dt.GetHour();
			m = dt.GetMinute();
			s = dt.GetSecond();
		}

		// month day year
		static int day = 0;
		static int month = 0;
		static int year = 0;
		if (day != dt.GetDay() || month != dt.GetMonth() || year != dt.GetYear())
		{
			wxString strMonth = dt.GetMonthName(dt.GetMonth(), wxDateTime::Name_Abbr);
			m_mdy->SetLabel(wxString::Format("%s %d %d", strMonth.c_str(), dt.GetDay(), dt.GetYear()));
			day = dt.GetDay();
			month = dt.GetMonth();
			year = dt.GetYear();
		}


		// AM/PM
		static bool isAM = false;
		bool am = dt.GetHour() < 12;
		if (isAM != am)
		{
			m_amPm->SetLabel(wxString::Format("%s", am ? "AM" : "PM"));
			isAM = am;
		}


		Layout();
		Fit();
	}

	event.Skip();
}
