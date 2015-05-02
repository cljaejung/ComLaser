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
	EVT_BUTTON(ID_BUTTON_OK, cEnforcementSetPanel::OnButtonOK)
	EVT_BUTTON(ID_BUTTON_CANCEL, cEnforcementSetPanel::OnButtonCancel)
	EVT_BUTTON(ID_BUTTON_LOCKEY, cEnforcementSetPanel::OnButtonLocation)
	EVT_BUTTON(ID_BUTTON_LIMITSPEED, cEnforcementSetPanel::OnButtonLimitSpeed)
	EVT_BUTTON(ID_BUTTON_CAPTURESPEED, cEnforcementSetPanel::OnButtonCaptureSpeed)
	EVT_BUTTON(ID_BUTTON_CAPTUREDISTANCE, cEnforcementSetPanel::OnButtonCaptureDistance)
	EVT_CHOICE(ID_CHOICE_UNIT, cEnforcementSetPanel::OnChoiceUnitSelected)
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

	wxImage img(_("ref_img/ENFM_SET_ICON_70.bmp"), wxBITMAP_TYPE_BMP);
	wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap(itemPanel1, wxID_STATIC, 
		wxBitmap(img), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM | wxALL, 5);

	wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("Enforcement Setting"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false));
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

	wxStaticText* itemStaticText18 = new wxStaticText(itemPanel13, wxID_STATIC, _("Location"), wxDefaultPosition, wxSize(220, -1), 0);
	itemStaticText18->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_LEFT | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer19, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 0);

	wxArrayString itemComboBox20Strings;
	itemComboBox20Strings.Add(_("19. Ojeongeop-gil, Uiwang-si"));
	m_comboLocation = new wxComboBox(itemPanel13, ID_COMBOBOX_LOCATION, _("19. Ojeongeop-gil, Uiwang-si"), wxDefaultPosition, wxSize(355, 34), itemComboBox20Strings, wxCB_DROPDOWN);
	m_comboLocation->SetStringSelection(_("19. Ojeongeop-gil, Uiwang-si"));
	m_comboLocation->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer19->Add(m_comboLocation, 0, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxTOP | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer21, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 0);

	cBitmap3Button* itemButton22 = new cBitmap3Button(itemPanel13, ID_BUTTON_LOCKEY, _("ref_img/BTN_KEYBOARD.png"), wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer21->Add(itemButton22, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer23, 0, wxGROW | wxALL, 8);

	wxStaticText* itemStaticText24 = new wxStaticText(itemPanel13, wxID_STATIC, _("Limit Speed"), wxDefaultPosition, wxSize(220, -1), 0);
	itemStaticText24->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer23->Add(itemStaticText24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_editLimitSpeed = new wxTextCtrl(itemPanel13, ID_TEXTCTRL, _("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_editLimitSpeed->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer23->Add(m_editLimitSpeed, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxTOP | wxBOTTOM, 5);

	cBitmap3Button* itemButton26 = new cBitmap3Button(itemPanel13, ID_BUTTON_LIMITSPEED, _("ref_img/BTN_KEYBOARD.png"), wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer23->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxStaticText* itemStaticText27 = new wxStaticText(itemPanel13, wxID_STATIC, _("Unit"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText27->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer23->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString m_UnitChoiceStrings;
	m_UnitChoiceStrings.Add(_("KMH (km/h)"));
	m_UnitChoiceStrings.Add(_("MPH (mph)"));
	m_UnitChoice = new wxChoice(itemPanel13, ID_CHOICE_UNIT, wxDefaultPosition, wxDefaultSize, m_UnitChoiceStrings, 0);
	m_UnitChoice->SetStringSelection(_("KMH (km/h)"));
	m_UnitChoice->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer23->Add(m_UnitChoice, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer29, 0, wxGROW | wxALL, 8);

	wxStaticText* itemStaticText30 = new wxStaticText(itemPanel13, wxID_STATIC, _("Capture Speed"), wxDefaultPosition, wxSize(220, -1), 0);
	itemStaticText30->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer29->Add(itemStaticText30, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_editCaptureSpeed = new wxTextCtrl(itemPanel13, ID_TEXTCTRL1, _("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_editCaptureSpeed->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer29->Add(m_editCaptureSpeed, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxTOP | wxBOTTOM, 5);

	cBitmap3Button* itemButton32 = new cBitmap3Button(itemPanel13, ID_BUTTON_CAPTURESPEED, _("ref_img/BTN_KEYBOARD.png"), wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer29->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer33, 0, wxGROW | wxALL, 8);

	wxStaticText* itemStaticText34 = new wxStaticText(itemPanel13, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxSize(220, -1), 0);
	itemStaticText34->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer33->Add(itemStaticText34, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_editCaptureDistance = new wxTextCtrl(itemPanel13, ID_TEXTCTRL2, _("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_editCaptureDistance->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer33->Add(m_editCaptureDistance, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxTOP | wxBOTTOM, 5);

	cBitmap3Button* itemButton36 = new cBitmap3Button(itemPanel13, ID_BUTTON_CAPTUREDISTANCE, _("ref_img/BTN_KEYBOARD.png"), wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer33->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL | wxALL, 1);





	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer37, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	cBitmap3Button* itemButton38 = new cBitmap3Button(itemPanel13, ID_BUTTON_OK, _("ref_img/BTN_OK.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(itemButton38, 0, wxALIGN_BOTTOM | wxALL, 5);

	cBitmap3Button* itemButton39 = new cBitmap3Button(itemPanel13, ID_BUTTON_CANCEL, _("ref_img/BTN_CANCEL.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(itemButton39, 0, wxALIGN_BOTTOM | wxALL, 5);

}



void cEnforcementSetPanel::OnButtonOK(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
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

	long initValue = 0;
	m_editLimitSpeed->GetValue().ToLong(&initValue);
	cNumberPadDialog dlg(this, initValue);
	if (wxID_OK == dlg.ShowModal())
		m_editLimitSpeed->SetValue(wxString::Format("%d", dlg.GetNumber()));
}


void cEnforcementSetPanel::OnButtonCaptureSpeed(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;

	long initValue = 0;
	m_editCaptureSpeed->GetValue().ToLong(&initValue);
	cNumberPadDialog dlg(this, initValue);
	if (wxID_OK == dlg.ShowModal())
		m_editCaptureSpeed->SetValue(wxString::Format("%d", dlg.GetNumber()));
}


void cEnforcementSetPanel::OnButtonCaptureDistance(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;

	long initValue = 0;
	m_editCaptureDistance->GetValue().ToLong(&initValue);
	cNumberPadDialog dlg(this, initValue);
	if (wxID_OK == dlg.ShowModal())
		m_editCaptureDistance->SetValue(wxString::Format("%d", dlg.GetNumber()));
}


// 단위 선택 컨트롤이 선택되면 호출된다.
void cEnforcementSetPanel::OnChoiceUnitSelected(wxCommandEvent& event)
{
	m_unitType = (UNIT_TYPE)event.GetSelection();
}
