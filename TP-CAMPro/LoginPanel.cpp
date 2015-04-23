
#include "stdafx.h"
#include "LoginPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"


enum {
	ID_BUTTON_EXIT,
	ID_TEXTCTRL,
	ID_TEXTCTRL1,
	ID_COMBOCTRL,
	ID_BUTTON_START,
	ID_BUTTON_KEYBOARD,
	ID_PANEL,
	ID_PANEL1,
	ID_BUTTON,
};

BEGIN_EVENT_TABLE(cLoginPanel, wxPanel)
EVT_BUTTON(ID_BUTTON_EXIT, cLoginPanel::OnButtonExit)
END_EVENT_TABLE()


cLoginPanel::cLoginPanel(wxFrame*frame) :
wxPanel(frame)
{
	cLoginPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT | wxTOP, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("TP-CAM Pro\nVER 1.50A"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText5->SetForegroundColour(wxColour(255, 128, 0));
	itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 1, wxGROW | wxLEFT | wxRIGHT | wxTOP, 5);

	wxStaticBitmap* itemStaticBitmap7 = new cBatteryDisplay(itemPanel1, wxID_STATIC, 
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemStaticBitmap7, 1, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer8, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer8->Add(itemBoxSizer9, 1, wxGROW | wxLEFT, 50);

	wxPanel* itemPanel10 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel10->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel10->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer9->Add(itemPanel10, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	itemPanel10->SetSizer(itemBoxSizer11);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer11->Add(itemBoxSizer12, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer14, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cDateDisplay* itemStaticText15 = new cDateDisplay(itemPanel10, false, wxColour(192,192,192));
	itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer16, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText17 = new wxStaticText(itemPanel10, wxID_STATIC, _("Device ID"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText17->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer16->Add(itemStaticText17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl18 = new wxTextCtrl(itemPanel10, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer16->Add(itemTextCtrl18, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer19, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText20 = new wxStaticText(itemPanel10, wxID_STATIC, _("User Name"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText20->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer19->Add(itemStaticText20, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxComboCtrl* itemComboCtrl21 = new wxComboCtrl(itemPanel10, ID_COMBOCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(itemComboCtrl21, 1, wxGROW | wxALL, 5);

	wxButton* itemButton22 = new wxButton(itemPanel10, ID_BUTTON, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(itemButton22, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer23, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText24 = new wxStaticText(itemPanel10, wxID_STATIC, _("Password"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText24->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer23->Add(itemStaticText24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl25 = new wxTextCtrl(itemPanel10, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemTextCtrl25, 1, wxGROW | wxALL, 5);

	wxButton* itemButton26 = new wxButton(itemPanel10, ID_BUTTON_KEYBOARD, _("Keyboard"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer23->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer27, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap28 = new wxStaticBitmap(itemPanel10, wxID_STATIC, 
		wxBitmap(_("ref_img/ComLASER_Logo.bmp"), wxBITMAP_TYPE_BMP), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer27->Add(itemStaticBitmap28, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer8->Add(itemBoxSizer29, 0, wxALIGN_BOTTOM | wxALL, 5);

	wxButton* itemButton30 = new wxButton(itemPanel1, ID_BUTTON_START, _("Start"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer29->Add(itemButton30, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cBitmap3Button* itemButton31 = new cBitmap3Button(itemPanel1, ID_BUTTON_EXIT, 
		_("ref_img/EXIT.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer29->Add(itemButton31, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer32 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer32, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxPanel* itemPanel33 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxSize(-1, 20), wxTAB_TRAVERSAL);
	itemPanel33->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel33->SetBackgroundColour(wxColour(0, 0, 0));
	itemBoxSizer32->Add(itemPanel33, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);
}

cLoginPanel::~cLoginPanel()
{

}


void cLoginPanel::OnButtonExit(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}
