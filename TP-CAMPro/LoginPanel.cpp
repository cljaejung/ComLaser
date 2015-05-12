
#include "stdafx.h"
#include "LoginPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"
#include "KeyboardDialog.h"
#include "Bitmap2Button.h"


enum {
	ID_BUTTON_EXIT,
	ID_TEXTCTRL,
	ID_TEXTCTRL1,
	ID_COMBOBOX,
	ID_BUTTON_START,
	ID_BUTTON_USERNAME,
	ID_BUTTON_PASSWORD,
	ID_PANEL,
	ID_PANEL1,
};

BEGIN_EVENT_TABLE(cLoginPanel, wxPanel)
EVT_BUTTON(ID_BUTTON_USERNAME, cLoginPanel::OnButtonUserName)
EVT_BUTTON(ID_BUTTON_PASSWORD, cLoginPanel::OnButtonPassWord)
EVT_BUTTON(ID_BUTTON_START, cLoginPanel::OnButtonStart)
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
	itemStaticText5->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemStaticText5->SetForegroundColour(wxColour(255, 128, 0));
	itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_LEFT | wxLEFT, 5);

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

	cDateDisplay* itemStaticText15 = new cDateDisplay(itemPanel10, false, false, wxColour(192,192,192));
	itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer16, 0, wxGROW | wxALL, 5);

	

	wxStaticText* itemStaticText17 = new wxStaticText(itemPanel10, wxID_STATIC, _("Device ID"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText17->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer16->Add(itemStaticText17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer18, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxTextCtrl* itemTextCtrl19 = new wxTextCtrl(itemPanel10, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxSize(300, -1), wxTE_READONLY);
	itemTextCtrl19->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemTextCtrl19->Enable(false);
	itemBoxSizer18->Add(itemTextCtrl19, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer20, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText21 = new wxStaticText(itemPanel10, wxID_STATIC, _("User Name"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText21->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer20->Add(itemStaticText21, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer20->Add(itemBoxSizer22, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxArrayString itemComboBox23Strings;
	wxComboBox* itemComboCtrl23 = new wxComboBox(itemPanel10, ID_COMBOBOX, _("police"), wxDefaultPosition, wxSize(270, 32), itemComboBox23Strings, wxCB_DROPDOWN);
	itemComboCtrl23->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer22->Add(itemComboCtrl23, 1, wxALIGN_RIGHT | wxALL, 0);
	
	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer20->Add(itemBoxSizer24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3Button* itemButton25 = new cBitmap3Button(itemPanel10, ID_BUTTON_USERNAME, _("ref_img/BTN_KEYBOARD.png"), wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer24->Add(itemButton25, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer26, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText27 = new wxStaticText(itemPanel10, wxID_STATIC, _("Password"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText27->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer26->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer26->Add(itemBoxSizer28, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxTextCtrl* itemTextCtrl29 = new wxTextCtrl(itemPanel10, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(270, -1), wxTE_PASSWORD);
	itemTextCtrl29->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer28->Add(itemTextCtrl29, 1, wxALIGN_RIGHT | wxALL, 0);

	wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer26->Add(itemBoxSizer30, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3Button* itemButton31 = new cBitmap3Button(itemPanel10, ID_BUTTON_PASSWORD, _("ref_img/BTN_KEYBOARD.png"), wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer30->Add(itemButton31, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer32 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer32, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxImage img(_("ref_img/ComLaser_login_logo.bmp"));
	wxStaticBitmap* itemStaticBitmap33 = new wxStaticBitmap(itemPanel10, wxID_STATIC, 
		wxBitmap(img), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer32->Add(itemStaticBitmap33, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);



	wxBoxSizer* itemBoxSizer41 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer8->Add(itemBoxSizer41, 0, wxALIGN_BOTTOM  | wxLEFT | wxRIGHT | wxTOP, 5);

	cPng2Button* itemButton42 = new cPng2Button(itemPanel1, ID_BUTTON_START, _("ref_img/start"), wxDefaultPosition, wxSize(128, 50), 0);
	itemBoxSizer41->Add(itemButton42, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cBitmap3Button* itemButton43 = new cBitmap3Button(itemPanel1, ID_BUTTON_EXIT, _("ref_img/EXIT.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer41->Add(itemButton43, 0, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer44 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer44, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxPanel* itemPanel45 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxSize(-1, 20), wxTAB_TRAVERSAL);
	itemPanel45->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel45->SetBackgroundColour(wxColour(0, 0, 0));
	itemBoxSizer44->Add(itemPanel45, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	m_textDeviceID = itemTextCtrl19;
	m_comboUserName = itemComboCtrl23;
	m_textPassWord = itemTextCtrl29;

	SetDeviceID( _("M305624"));
	//SetDeviceID( _("¢ª¡¤¡î¡À¢½¢¾¡Ù¡Ú") );

}


void cLoginPanel::SetDeviceID(const wxString &deviceID)
{
	//wxUSE_UNICODE;
	//wxChar aa[] = _("aaa");
	m_textDeviceID->SetValue(deviceID);
	//m_textDeviceID->SetValue(aa);
}


void cLoginPanel::OnButtonExit(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->Close();
}


void cLoginPanel::OnButtonStart(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cLoginPanel::OnButtonUserName(wxCommandEvent &)
{
	cKeyboardDialog dlg(this, m_comboUserName->GetValue());
	if (wxID_OK == dlg.ShowModal())
	{
		m_comboUserName->SetValue(dlg.m_text);
	}
}


void cLoginPanel::OnButtonPassWord(wxCommandEvent &)
{
	cKeyboardDialog dlg(this, m_textPassWord->GetValue(), true);
	if (wxID_OK == dlg.ShowModal())
	{
		m_textPassWord->SetValue(dlg.m_text);
	}
}
