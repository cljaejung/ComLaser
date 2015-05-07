
#include "stdafx.h"
#include "EnforcementPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"
#include "MoviePanel.h"


enum {
	ID_PANEL,
	ID_BUTTON_DONE,
	ID_BUTTON_FULL,
	ID_PANEL1,
	ID_PANEL2,
	ID_PANEL3,
	ID_PANEL4,
	ID_PANEL5,
	ID_PANEL6,
	ID_PANEL7,
	ID_PANEL8,
};


BEGIN_EVENT_TABLE(cEnforcementPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_DONE, cEnforcementPanel::OnButtonDone)
END_EVENT_TABLE()


cEnforcementPanel::cEnforcementPanel(wxFrame*frame) :
	wxPanel(frame)
{


	cEnforcementPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxTOP, 5);

	wxImage img(_("ref_img/ENFM_ICON_80.bmp"), wxBITMAP_TYPE_BMP);
	wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxBitmap(img), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM | wxLEFT | wxRIGHT | wxTOP, 5);

	wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("Enforcement"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW | wxLEFT| wxTOP, 5);

	cDateDisplay* itemStaticText9 = new cDateDisplay(itemPanel1, true);
	itemStaticText9->SetForegroundColour(wxColour(255, 255, 255));
	itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW | wxRIGHT | wxTOP | wxBOTTOM, 5);

	wxStaticBitmap* itemStaticBitmap11 = new cBatteryDisplay(itemPanel1, wxID_STATIC, 
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer14, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer14->Add(itemBoxSizer15, 1, wxGROW | wxALL, 0);

	cMoviePanel* itemPanel16 = new cMoviePanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER | wxTAB_TRAVERSAL);
	itemPanel16->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel16->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer15->Add(itemPanel16, 1, wxGROW | wxALL, 5);


	
	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer17, 0, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer18, 1, wxGROW | wxALL, 1);

	wxPanel* itemPanel19 = new wxPanel(itemPanel1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel19->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel19->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer18->Add(itemPanel19, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxVERTICAL);
	itemPanel19->SetSizer(itemBoxSizer20);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer20->Add(itemBoxSizer21, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxStaticText* itemStaticText22 = new wxStaticText(itemPanel19, wxID_STATIC, _("9991"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText22->SetBackgroundColour(wxColour(192, 192, 192));
	itemStaticText22->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer21->Add(itemStaticText22, 1, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer23, 1, wxGROW | wxALL, 1);

	wxPanel* itemPanel24 = new wxPanel(itemPanel1, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel24->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel24->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer23->Add(itemPanel24, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer25 = new wxBoxSizer(wxVERTICAL);
	itemPanel24->SetSizer(itemBoxSizer25);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer25->Add(itemBoxSizer26, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxStaticText* itemStaticText27 = new wxStaticText(itemPanel24, wxID_STATIC, _("17:05:25"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText27->SetBackgroundColour(wxColour(192, 192, 192));
	itemStaticText27->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer26->Add(itemStaticText27, 1, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer28, 1, wxGROW | wxALL, 1);

	wxPanel* itemPanel29 = new wxPanel(itemPanel1, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel29->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel29->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer28->Add(itemPanel29, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxVERTICAL);
	itemPanel29->SetSizer(itemBoxSizer30);

	wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer31, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxStaticText* itemStaticText32 = new wxStaticText(itemPanel29, wxID_STATIC, _("124 km/h"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText32->SetBackgroundColour(wxColour(192, 192, 192));
	itemStaticText32->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer31->Add(itemStaticText32, 1, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer33, 0, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer34 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer33->Add(itemBoxSizer34, 1, wxGROW | wxALL, 1);

	wxPanel* itemPanel35 = new wxPanel(itemPanel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel35->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel35->SetBackgroundColour(wxColour(64, 128, 128));
	itemBoxSizer34->Add(itemPanel35, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxVERTICAL);
	itemPanel35->SetSizer(itemBoxSizer36);

	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer36->Add(itemBoxSizer37, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxStaticText* itemStaticText38 = new wxStaticText(itemPanel35, wxID_STATIC, _("Capture\n Speed"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText38->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText38->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer37->Add(itemStaticText38, 1, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer39 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer33->Add(itemBoxSizer39, 1, wxGROW | wxALL, 1);

	wxPanel* itemPanel40 = new wxPanel(itemPanel1, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel40->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel40->SetBackgroundColour(wxColour(64, 128, 128));
	itemBoxSizer39->Add(itemPanel40, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer41 = new wxBoxSizer(wxVERTICAL);
	itemPanel40->SetSizer(itemBoxSizer41);

	wxBoxSizer* itemBoxSizer42 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer41->Add(itemBoxSizer42, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxStaticText* itemStaticText43 = new wxStaticText(itemPanel40, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText43->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText43->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer42->Add(itemStaticText43, 1, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer44 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer44, 0, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer45 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer44->Add(itemBoxSizer45, 1, wxGROW | wxALL, 1);

	wxPanel* itemPanel46 = new wxPanel(itemPanel1, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel46->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel46->SetBackgroundColour(wxColour(64, 128, 128));
	itemBoxSizer45->Add(itemPanel46, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer47 = new wxBoxSizer(wxVERTICAL);
	itemPanel46->SetSizer(itemBoxSizer47);

	wxBoxSizer* itemBoxSizer48 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer47->Add(itemBoxSizer48, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxStaticText* itemStaticText49 = new wxStaticText(itemPanel46, wxID_STATIC, _("Capture\nDistance"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText49->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText49->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer48->Add(itemStaticText49, 1, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer50 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer44->Add(itemBoxSizer50, 1, wxGROW | wxALL, 1);

	wxPanel* itemPanel51 = new wxPanel(itemPanel1, ID_PANEL8, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel51->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel51->SetBackgroundColour(wxColour(64, 128, 128));
	itemBoxSizer50->Add(itemPanel51, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer52 = new wxBoxSizer(wxVERTICAL);
	itemPanel51->SetSizer(itemBoxSizer52);

	wxBoxSizer* itemBoxSizer53 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer52->Add(itemBoxSizer53, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxStaticText* itemStaticText54 = new wxStaticText(itemPanel51, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText54->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText54->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer53->Add(itemStaticText54, 1, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer55 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer55, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cBitmap3Button* itemButton56 = new cBitmap3Button(itemPanel1, ID_BUTTON_DONE, _("ref_img/BTN_DONE.png"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer55->Add(itemButton56, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer57 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer57, 1, wxGROW | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer58 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer57->Add(itemBoxSizer58, 1, wxGROW | wxALL, 0);

	cMoviePanel* itemPanel59 = new cMoviePanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxSize(348, 350), wxSIMPLE_BORDER | wxTAB_TRAVERSAL);
	itemPanel59->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel59->m_GotoNextPanel = PANEL_ENFORCEMENTFULL;
	itemPanel59->m_isPlay = false;
	itemBoxSizer58->Add(itemPanel59, 1, wxGROW | wxALL, 5);



	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_textNumber = itemStaticText22;
	m_textTime = itemStaticText27;
	m_textSpeed = itemStaticText32;
	m_captureSpeed = itemStaticText43;
	m_captureDistance = itemStaticText54;

	m_cameraPanel = itemPanel16;
	m_capturePanel = itemPanel59;

}

cEnforcementPanel::~cEnforcementPanel()
{

}


void cEnforcementPanel::OnButtonDone(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cEnforcementPanel::OnButtonFull(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_ENFORCEMENTFULL);
}
