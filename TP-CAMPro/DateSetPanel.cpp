
#include "stdafx.h"
#include "DateSetPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"


enum {
	ID_PANEL1,
	ID_PANEL,
	ID_BUTTON_OK,
	ID_BUTTON_CANCEL,
	ID_BUTTON_MONTH_UP,
	ID_BUTTON_DAY_UP,
	ID_BUTTON_YEAR_UP,
	ID_BUTTON_MONTH,
	ID_BUTTON_DAY,
	ID_BUTTON_YEAR, 
	ID_BUTTON_MONTH_DOWN ,
	ID_BUTTON_DAY_DOWN ,
	ID_BUTTON_YEAR_DOWN, 
	ID_BUTTON_HOUR_UP ,
	ID_BUTTON_MINUTES_UP, 
	ID_BUTTON_TIME_UP ,
	ID_BUTTON_HOUR ,
	ID_BUTTON_MINUTES, 
	ID_BUTTON_TIME ,
	ID_BUTTON_HOUR_DOWN ,
	ID_BUTTON_MINUTES_DOWN, 
	ID_BUTTON_TIME_DOWN ,

};


BEGIN_EVENT_TABLE(cDateSetPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_CANCEL, cDateSetPanel::OnButtonCancel)
	EVT_BUTTON(ID_BUTTON_OK, cDateSetPanel::OnButtonOK)
	EVT_BUTTON(ID_BUTTON_MONTH_UP, cDateSetPanel::OnButtonMonthUp)
	EVT_BUTTON(ID_BUTTON_DAY_UP, cDateSetPanel::OnButtonDayUp)
	EVT_BUTTON(ID_BUTTON_YEAR_UP, cDateSetPanel::OnButtonYearUp)
	EVT_BUTTON(ID_BUTTON_MONTH_DOWN, cDateSetPanel::OnButtonMonthDown)
	EVT_BUTTON(ID_BUTTON_DAY_DOWN, cDateSetPanel::OnButtonDayDown)
	EVT_BUTTON(ID_BUTTON_YEAR_DOWN, cDateSetPanel::OnButtonYearDown)

	EVT_BUTTON(ID_BUTTON_HOUR_UP, cDateSetPanel::OnButtonHourUp)
	EVT_BUTTON(ID_BUTTON_MINUTES_UP, cDateSetPanel::OnButtonMinutesUp)
	EVT_BUTTON(ID_BUTTON_HOUR_DOWN, cDateSetPanel::OnButtonHourDown)
	EVT_BUTTON(ID_BUTTON_MINUTES_DOWN, cDateSetPanel::OnButtonMinutesDown)
END_EVENT_TABLE()


cDateSetPanel::cDateSetPanel(wxFrame*frame) :
wxPanel(frame)
{


	cDateSetPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxLEFT | wxTOP | wxBOTTOM, 5);

	cDateDisplay* itemStaticText5 = new cDateDisplay(itemPanel1, true);
	itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxGROW | wxRIGHT | wxTOP | wxBOTTOM, 5);

	wxStaticBitmap* itemStaticBitmap7 = new cBatteryDisplay(itemPanel1, wxID_STATIC, _("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemStaticBitmap7, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer8, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer8->Add(itemBoxSizer9, 1, wxGROW | wxALL, 5);

	wxPanel* itemPanel10 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER | wxTAB_TRAVERSAL);
	itemPanel10->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel10->SetBackgroundColour(wxColour(54, 54, 54));
	itemBoxSizer9->Add(itemPanel10, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
	itemPanel10->SetSizer(itemBoxSizer11);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer11->Add(itemBoxSizer12, 0, wxALIGN_LEFT | wxALL, 5);

	wxImage image1("ref_img/clock.png");
	wxImage image2 = image1.Scale(30, 30);
	wxStaticBitmap* itemStaticBitmap13 = new wxStaticBitmap(itemPanel10, wxID_STATIC, wxBitmap(image2), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemStaticBitmap13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText14 = new wxStaticText(itemPanel10, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText14->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText14->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer12->Add(itemStaticText14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer11->Add(itemBoxSizer15, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton16 = new wxButton(itemPanel10, ID_BUTTON_MONTH_UP, _("+"), wxDefaultPosition, wxSize(80,40), 0);
	itemButton16->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer15->Add(itemButton16, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton17 = new wxButton(itemPanel10, ID_BUTTON_DAY_UP, _("+"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton17->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer15->Add(itemButton17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton18 = new wxButton(itemPanel10, ID_BUTTON_YEAR_UP, _("+"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton18->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer15->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer11->Add(itemBoxSizer19, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	m_btnMonth = new wxButton(itemPanel10, ID_BUTTON_MONTH, _("Button"), wxDefaultPosition, wxSize(80, 40), 0);
	m_btnMonth->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer19->Add(m_btnMonth, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnDay = new wxButton(itemPanel10, ID_BUTTON_DAY, _("Button"), wxDefaultPosition, wxSize(80, 40), 0);
	m_btnDay->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer19->Add(m_btnDay, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnYear = new wxButton(itemPanel10, ID_BUTTON_YEAR, _("Button"), wxDefaultPosition, wxSize(80, 40), 0);
	m_btnYear->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer19->Add(m_btnYear, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer11->Add(itemBoxSizer23, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton24 = new wxButton(itemPanel10, ID_BUTTON_MONTH_DOWN, _("-"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton24->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer23->Add(itemButton24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton25 = new wxButton(itemPanel10, ID_BUTTON_DAY_DOWN, _("-"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton25->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer23->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton26 = new wxButton(itemPanel10, ID_BUTTON_YEAR_DOWN, _("-"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton26->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer23->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer8->Add(itemBoxSizer27, 1, wxGROW | wxALL, 5);

	wxPanel* itemPanel28 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER | wxTAB_TRAVERSAL);
	itemPanel28->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel28->SetBackgroundColour(wxColour(54, 54, 54));
	itemBoxSizer27->Add(itemPanel28, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxVERTICAL);
	itemPanel28->SetSizer(itemBoxSizer29);

	wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer29->Add(itemBoxSizer30, 0, wxALIGN_LEFT | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap31 = new wxStaticBitmap(itemPanel28, wxID_STATIC, wxBitmap(image2), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer30->Add(itemStaticBitmap31, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText32 = new wxStaticText(itemPanel28, wxID_STATIC, _("Time"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText32->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText32->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer30->Add(itemStaticText32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer29->Add(itemBoxSizer33, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton34 = new wxButton(itemPanel28, ID_BUTTON_HOUR_UP, _("+"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton34->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer33->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton35 = new wxButton(itemPanel28, ID_BUTTON_MINUTES_UP, _("+"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton35->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer33->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton36 = new wxButton(itemPanel28, ID_BUTTON_TIME_UP, _("+"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton36->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer33->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer29->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	m_btnHour = new wxButton(itemPanel28, ID_BUTTON_HOUR, _("Button"), wxDefaultPosition, wxSize(80, 40), 0);
	m_btnHour->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer37->Add(m_btnHour, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnMinutes = new wxButton(itemPanel28, ID_BUTTON_MINUTES, _("Button"), wxDefaultPosition, wxSize(80, 40), 0);
	m_btnMinutes->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer37->Add(m_btnMinutes, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnTime = new wxButton(itemPanel28, ID_BUTTON_TIME, _("Button"), wxDefaultPosition, wxSize(80, 40), 0);
	m_btnTime->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer37->Add(m_btnTime, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer41 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer29->Add(itemBoxSizer41, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton42 = new wxButton(itemPanel28, ID_BUTTON_HOUR_DOWN, _("-"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton42->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer41->Add(itemButton42, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton43 = new wxButton(itemPanel28, ID_BUTTON_MINUTES_DOWN, _("-"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton43->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer41->Add(itemButton43, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton44 = new wxButton(itemPanel28, ID_BUTTON_TIME_DOWN, _("-"), wxDefaultPosition, wxSize(80, 40), 0);
	itemButton44->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer41->Add(itemButton44, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer45 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer45, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton46 = new wxButton(itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer45->Add(itemButton46, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton47 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer45->Add(itemButton47, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	
}

cDateSetPanel::~cDateSetPanel()
{

}


// 현재 시간으로 업데이트 한다.
void cDateSetPanel::UpdateCurrentTime()
{
	wxDateTime dt = wxDateTime::Now();
	UpdateCurrentTime(dt);
}


// 날짜 업데이트
void cDateSetPanel::UpdateCurrentTime(const wxDateTime::Month &m, const int day, const int year, const int hour, const int minutes)
{
	wxDateTime nowTime = wxDateTime::Now();
	wxDateTime dt(day, m, year, hour, minutes, nowTime.GetSecond(), nowTime.GetMillisecond());

	UpdateCurrentTime(dt);
}


void cDateSetPanel::UpdateCurrentTime(const wxDateTime &dt)
{
	if (!dt.IsValid())
		return;

	wxString strMonth = dt.GetMonthName(dt.GetMonth(), wxDateTime::Name_Abbr);
	m_btnMonth->SetLabel(strMonth);
	m_btnDay->SetLabel(wxString::Format("%d", dt.GetDay()));
	m_btnYear->SetLabel(wxString::Format("%d", dt.GetYear()));

	m_btnHour->SetLabel(wxString::Format("%d", dt.GetHour()));
	m_btnMinutes->SetLabel(wxString::Format("%d", dt.GetMinute()));
	m_btnTime->SetLabel(_("AM"));

	m_Month = dt.GetMonth();
	m_Day = dt.GetDay();
	m_Year = dt.GetYear();
	m_Hour = dt.GetHour();
	m_Minutes = dt.GetMinute();
}


void cDateSetPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cDateSetPanel::OnButtonOK(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cDateSetPanel::OnButtonMonthUp(wxCommandEvent &)
{
	if (wxDateTime::Dec == m_Month)
	{
		m_Month = wxDateTime::Jan;
	}
	else
	{
		m_Month = (wxDateTime::Month)((int)m_Month + 1);
	}

	CheckDay(m_Month, m_Year);

	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonDayUp(wxCommandEvent &)
{
	++m_Day;
	CheckDay(m_Month, m_Year);

	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonYearUp(wxCommandEvent &)
{
	++m_Year;
	CheckDay(m_Month, m_Year);
	
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


// 날짜가 해당하는 달의 날짜보다 크다면 최대 날짜 수로 설정된다.
void cDateSetPanel::CheckDay(const wxDateTime::Month &m, const int year)
{
	const int maxDay = wxDateTime::GetNumberOfDays(m, year);
	if (m_Day > maxDay)
		m_Day = maxDay;
}


void cDateSetPanel::OnButtonMonthDown(wxCommandEvent &)
{
	if (wxDateTime::Jan == m_Month)
	{
		m_Month = wxDateTime::Dec;
	}
	else
	{
		m_Month = (wxDateTime::Month)((int)m_Month - 1);
	}

	CheckDay(m_Month, m_Year);
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonDayDown(wxCommandEvent &)
{
	--m_Day;
	if (m_Day < 1)
		m_Day = 31;

	CheckDay(m_Month, m_Year);
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonYearDown(wxCommandEvent &)
{
	--m_Year;
	if (m_Year < 1)
		m_Year = 1;

	CheckDay(m_Month, m_Year);
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonHourUp(wxCommandEvent &)
{
	m_Hour++;
	if (m_Hour > 23)
		m_Hour = 0;
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonMinutesUp(wxCommandEvent &)
{
	++m_Minutes;
	if (m_Minutes > 59)
		m_Minutes = 0;
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonHourDown(wxCommandEvent &)
{
	--m_Hour;
	if (m_Hour < 0)
		m_Hour = 23;
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}


void cDateSetPanel::OnButtonMinutesDown(wxCommandEvent &)
{
	--m_Minutes;
	if (m_Minutes < 0)
		m_Minutes = 59;
	UpdateCurrentTime(m_Month, m_Day, m_Year, m_Hour, m_Minutes);
}
