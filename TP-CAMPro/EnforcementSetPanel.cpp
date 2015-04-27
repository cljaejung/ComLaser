
#include "stdafx.h"
#include "EnforcementSetPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"
#include "KeyboardDialog.h"
#include "NumberPadDialog.h"



enum {
	ID_PANEL,
	ID_COMBOBOX,
	ID_COMBOBOX_LOCATION,
	ID_BUTTON_LOCKEY,
	ID_TEXTCTRL,
	ID_BUTTON_LIMITSPEED,
	ID_CHOICE_UNIT,
	ID_COMBOBOX1,
	ID_TEXTCTRL1,
	ID_BUTTON_CAPTURESPEED,
	ID_TEXTCTRL2,
	ID_BUTTON_CAPTUREDISTANCE,
	ID_BUTTON_OK,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cEnforcementSetPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_CANCEL, cEnforcementSetPanel::OnButtonCancel)
	EVT_BUTTON(ID_BUTTON_LOCKEY, cEnforcementSetPanel::OnButtonLocation)
	EVT_BUTTON(ID_BUTTON_LIMITSPEED, cEnforcementSetPanel::OnButtonLimitSpeed)
END_EVENT_TABLE()


cEnforcementSetPanel::cEnforcementSetPanel(wxFrame*frame) :
wxPanel(frame)
{


	cEnforcementSetPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxImage img(_("ref_img/ENFM_SET_ICON.bmp"), wxBITMAP_TYPE_BMP);
	wxBitmap bmp = img.Scale(70, 70);
	wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap(itemPanel1, wxID_STATIC, 
		bmp, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM | wxALL, 5);

	wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("Enforcement Setting"), wxDefaultPosition, wxDefaultSize, 0);
	wxFont font(20, wxFONTFAMILY_DEFAULT,  wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, _("±¼¸²"));
	itemStaticText7->SetFont(font);
	itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
	itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW | wxLEFT | wxTOP | wxBOTTOM, 5);

	cDateDisplay* itemStaticText9 = new cDateDisplay(itemPanel1, true);
	itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW | wxRIGHT | wxTOP | wxBOTTOM, 5);

	wxStaticBitmap* itemStaticBitmap11 = new cBatteryDisplay(itemPanel1, wxID_STATIC, 
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT | wxALL, 5);



	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW | wxLEFT | wxRIGHT | wxBOTTOM, 30);

	wxPanel* itemPanel13 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel13->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel13->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer12->Add(itemPanel13, 1, wxGROW, 0);

	wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	itemPanel13->SetSizer(itemBoxSizer14);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer14->Add(itemBoxSizer15, 1, wxGROW, 5);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer16, 0, wxGROW | wxALL, 8);

	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer17, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 0);

	wxStaticText* itemStaticText18 = new wxStaticText(itemPanel13, wxID_STATIC, _("Location"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText18->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_LEFT | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer19, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxArrayString itemComboBox20Strings;
	itemComboBox20Strings.Add(_("19. Ojeongeop-gil, Uiwang-si"));
	wxComboBox* itemComboBox20 = new wxComboBox(itemPanel13, ID_COMBOBOX_LOCATION, _("19. Ojeongeop-gil, Uiwang-si"), wxDefaultPosition, wxDefaultSize, itemComboBox20Strings, wxCB_DROPDOWN);
	itemComboBox20->SetStringSelection(_("19. Ojeongeop-gil, Uiwang-si"));
	itemComboBox20->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer19->Add(itemComboBox20, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer21, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxButton* itemButton22 = new wxButton(itemPanel13, ID_BUTTON_LOCKEY, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer21->Add(itemButton22, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer23, 0, wxGROW | wxALL, 8);

	wxStaticText* itemStaticText24 = new wxStaticText(itemPanel13, wxID_STATIC, _("Limit Speed"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText24->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer23->Add(itemStaticText24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl25 = new wxTextCtrl(itemPanel13, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemTextCtrl25->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer23->Add(itemTextCtrl25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton26 = new wxButton(itemPanel13, ID_BUTTON_LIMITSPEED, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText27 = new wxStaticText(itemPanel13, wxID_STATIC, _("Unit"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText27->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer23->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString m_UnitChoiceStrings;
	m_UnitChoiceStrings.Add(_("KMH (km/h)"));
	m_UnitChoiceStrings.Add(_("MPH (mph)"));
	m_UnitChoice = new wxChoice(itemPanel13, ID_CHOICE_UNIT, wxDefaultPosition, wxDefaultSize, m_UnitChoiceStrings, 0);
	m_UnitChoice->SetStringSelection(_("KMH (km/h)"));
	m_UnitChoice->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer23->Add(m_UnitChoice, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer29, 0, wxGROW | wxALL, 8);

	wxStaticText* itemStaticText30 = new wxStaticText(itemPanel13, wxID_STATIC, _("Capture Speed"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText30->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer29->Add(itemStaticText30, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl31 = new wxTextCtrl(itemPanel13, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemTextCtrl31->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer29->Add(itemTextCtrl31, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton32 = new wxButton(itemPanel13, ID_BUTTON_CAPTURESPEED, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer29->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer33, 0, wxGROW | wxALL, 8);

	wxStaticText* itemStaticText34 = new wxStaticText(itemPanel13, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText34->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer33->Add(itemStaticText34, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl35 = new wxTextCtrl(itemPanel13, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemTextCtrl35->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer33->Add(itemTextCtrl35, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton36 = new wxButton(itemPanel13, ID_BUTTON_CAPTUREDISTANCE, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);



	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	cBitmap3Button* itemButton38 = new cBitmap3Button(itemPanel13, ID_BUTTON_OK, _("ref_img/BTN_OK.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(itemButton38, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton39 = new cBitmap3Button(itemPanel13, ID_BUTTON_CANCEL, _("ref_img/BTN_CANCEL.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(itemButton39, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);



}

cEnforcementSetPanel::~cEnforcementSetPanel()
{

}


void cEnforcementSetPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cEnforcementSetPanel::OnButtonLocation(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	cKeyboardDialog dlg(this);
	dlg.ShowModal();
}


void cEnforcementSetPanel::OnButtonLimitSpeed(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	cNumberPadDialog dlg(this);
	dlg.ShowModal();
}
