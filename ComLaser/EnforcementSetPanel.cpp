
#include "stdafx.h"
#include "EnforcementSetPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"


enum {
	ID_COMBOBOX,
	ID_BUTTON_LOC_KEY,
	ID_TEXTCTRL,
	ID_BUTTON_LIMITSPEED,
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
END_EVENT_TABLE()


cEnforcementSetPanel::cEnforcementSetPanel(wxFrame*frame) :
wxPanel(frame)
{


	cEnforcementSetPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("Enforcement Setting"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap6 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer7, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer8, 1, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText10 = new wxStaticText(itemPanel1, wxID_STATIC, _("Location"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer9->Add(itemStaticText10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemComboBox11Strings;
	wxComboBox* itemComboBox11 = new wxComboBox(itemPanel1, ID_COMBOBOX, wxEmptyString, wxDefaultPosition, wxDefaultSize, itemComboBox11Strings, wxCB_DROPDOWN);
	itemBoxSizer9->Add(itemComboBox11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton12 = new wxButton(itemPanel1, ID_BUTTON_LOC_KEY, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer9->Add(itemButton12, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer13, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText14 = new wxStaticText(itemPanel1, wxID_STATIC, _("Limit Speed"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemStaticText14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl15 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemTextCtrl15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton16 = new wxButton(itemPanel1, ID_BUTTON_LIMITSPEED, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemButton16, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText17 = new wxStaticText(itemPanel1, wxID_STATIC, _("Unit"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemStaticText17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemComboBox18Strings;
	wxComboBox* itemComboBox18 = new wxComboBox(itemPanel1, ID_COMBOBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, itemComboBox18Strings, wxCB_DROPDOWN);
	itemBoxSizer13->Add(itemComboBox18, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer19, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText20 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture Speed"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(itemStaticText20, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl21 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(itemTextCtrl21, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton22 = new wxButton(itemPanel1, ID_BUTTON_CAPTURESPEED, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(itemButton22, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer23, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText24 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemStaticText24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl25 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemTextCtrl25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton26 = new wxButton(itemPanel1, ID_BUTTON_CAPTUREDISTANCE, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer27, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton28 = new wxButton(itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer27->Add(itemButton28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton29 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer27->Add(itemButton29, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);



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

