
#include "stdafx.h"
#include "DateDisplay.h"
#include "wx/datetime.h"
#include "CLFrame.h"
#include "DateSetPanel.h"



BEGIN_EVENT_TABLE(cDateDisplay, wxPanel)
	EVT_LEFT_DOWN(cDateDisplay::OnLeftDown)
END_EVENT_TABLE()



cDateDisplay::cDateDisplay(wxWindow *parent, const bool IsSmallSize, const wxColour &bgColor ) :
	wxPanel(parent)
	, m_isSmallSize(IsSmallSize)
{
	cDateDisplay* itemPanel1 = this;

	SetBackgroundColour(bgColor);
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT | wxTOP, 0);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _(""), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer5, 0, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT | wxBOTTOM, 0);

	wxStaticText* itemStaticText6 = new wxStaticText(itemPanel1, wxID_STATIC, _(""), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemStaticText6, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("PM"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemStaticText7, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxBOTTOM, 5);


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_oldH = 0;
	m_oldM = 0;
	m_oldS = 0;
	m_oldDay = 0;
	m_oldMonth = 0;
	m_oldYear = 0;
	m_isAM = 0;

	m_mdy = itemStaticText4;
	m_hms = itemStaticText6;
	m_amPm = itemStaticText7;
	m_amPm->Hide();


	// 폰트 초기화.
	m_font = wxFont(m_isSmallSize ? 14 : 24, wxFONTFAMILY_SWISS,
		wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	m_font2 = wxFont(m_isSmallSize ? 10 : 12, wxFONTFAMILY_SWISS,
		wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	itemStaticText4->SetFont(m_font);
	itemStaticText4->SetForegroundColour(wxColour(150, 150, 255));

	itemStaticText6->SetFont(m_font);
	itemStaticText6->SetForegroundColour(wxColour(250, 180, 10));

	itemStaticText7->SetFont(m_font2);
	itemStaticText7->SetForegroundColour(wxColour(255,255,255));

	m_timer.SetOwner(this);
	m_timer.Start(500);

	//SetBackgroundColour(wxColour("Black"));
	//Connect(wxEVT_IDLE, wxIdleEventHandler(cDateDisplay::OnIdle), NULL, this);
	Connect(wxEVT_TIMER, wxTimerEventHandler(cDateDisplay::OnTimer), NULL, this);

	// 마우스 왼쪽 버튼을 클릭시 이벤트를 호출하게 한다.
	itemStaticText4->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(cDateDisplay::OnLeftDown), NULL, this);
	itemStaticText6->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(cDateDisplay::OnLeftDown), NULL, this);
	itemStaticText7->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(cDateDisplay::OnLeftDown), NULL, this);

	UpdateDate();
}


cDateDisplay::~cDateDisplay()
{
}


void cDateDisplay::UpdateDate()
{
	wxDateTime dt = wxDateTime::Now();
	if (dt.IsValid())
	{
		// hour:minuite:second
		if (m_oldH != dt.GetHour() || m_oldM != dt.GetMinute() || m_oldS != dt.GetSecond())
		{
			m_hms->SetLabel(wxString::Format("%02d:%02d:%02d", dt.GetHour(), dt.GetMinute(), dt.GetSecond()));
			m_oldH = dt.GetHour();
			m_oldM = dt.GetMinute();
			m_oldS = dt.GetSecond();
		}

		// month day year
		if (m_oldDay != dt.GetDay() || m_oldMonth != dt.GetMonth() || m_oldYear != dt.GetYear())
		{
			wxString strMonth = dt.GetMonthName(dt.GetMonth(), wxDateTime::Name_Abbr);
			m_mdy->SetLabel(wxString::Format("%s %d %d", strMonth.c_str(), dt.GetDay(), dt.GetYear()));
			m_oldDay = dt.GetDay();
			m_oldMonth = dt.GetMonth();
			m_oldYear = dt.GetYear();
		}


		// AM/PM
		bool am = dt.GetHour() < 12;
		if (m_isAM != am)
		{
			m_amPm->SetLabel(wxString::Format("%s", am ? "AM" : "PM"));
			m_isAM = am;
		}


		Layout();
		Fit();
	}
}

// 시간을 주기적으로 업데이트 한다
void cDateDisplay::OnTimer(wxTimerEvent& event)
{
	UpdateDate();
	event.Skip();
}


// 시간 설정창으로 넘어간다.
void cDateDisplay::OnLeftDown(wxMouseEvent& event)
{
	event.Skip();

	if (m_isSmallSize)
		return; // 작은 화면일 때는 시간 설정 창으로 가지 않는다.

	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_DATESET);
	frame->m_datePanel->UpdateCurrentTime();
}

