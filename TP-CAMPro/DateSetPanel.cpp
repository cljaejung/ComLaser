
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
	itemBoxSizer9->Add(itemPanel10, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

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

	wxButton* itemButton16 = new wxButton(itemPanel10, ID_BUTTON_MONTH_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton16, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton17 = new wxButton(itemPanel10, ID_BUTTON_DAY_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton18 = new wxButton(itemPanel10, ID_BUTTON_YEAR_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer11->Add(itemBoxSizer19, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	m_btnMonth = new wxButton(itemPanel10, ID_BUTTON_MONTH, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(m_btnMonth, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnDay = new wxButton(itemPanel10, ID_BUTTON_DAY, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(m_btnDay, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnYear = new wxButton(itemPanel10, ID_BUTTON_YEAR, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(m_btnYear, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer11->Add(itemBoxSizer23, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton24 = new wxButton(itemPanel10, ID_BUTTON_MONTH_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemButton24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton25 = new wxButton(itemPanel10, ID_BUTTON_DAY_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton26 = new wxButton(itemPanel10, ID_BUTTON_YEAR_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0);
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

	wxStaticText* itemStaticText32 = new wxStaticText(itemPanel28, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText32->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText32->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer30->Add(itemStaticText32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer29->Add(itemBoxSizer33, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton34 = new wxButton(itemPanel28, ID_BUTTON_HOUR_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton35 = new wxButton(itemPanel28, ID_BUTTON_MINUTES_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton36 = new wxButton(itemPanel28, ID_BUTTON_TIME_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer29->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	m_btnHour = new wxButton(itemPanel28, ID_BUTTON_HOUR, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(m_btnHour, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnMinutes = new wxButton(itemPanel28, ID_BUTTON_MINUTES, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(m_btnMinutes, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_btnTime = new wxButton(itemPanel28, ID_BUTTON_TIME, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(m_btnTime, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer41 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer29->Add(itemBoxSizer41, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton42 = new wxButton(itemPanel28, ID_BUTTON_HOUR_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer41->Add(itemButton42, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton43 = new wxButton(itemPanel28, ID_BUTTON_MINUTES_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer41->Add(itemButton43, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton44 = new wxButton(itemPanel28, ID_BUTTON_TIME_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0);
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


void cDateSetPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


// 현재 시간으로 업데이트 한다.
void cDateSetPanel::UpdateCurrentTime()
{
	wxDateTime dt = wxDateTime::Now();
	if (!dt.IsValid())
		return;

	wxDateTime::Month m = dt.GetMonth();
	wxString strMonth = dt.GetMonthName(dt.GetMonth(), wxDateTime::Name_Abbr);
	m_btnMonth->SetLabel(strMonth);
}
