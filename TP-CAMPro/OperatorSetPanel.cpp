
#include "stdafx.h"
#include "OperatorSetPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "Bitmap3ButtonEx.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "KeyboardDialog.h"
#include "ImagePanel.h"
#include "Bitmap2ButtonEx.h"


enum {
	ID_PANEL,
	ID_COMBOBOX_USERNAME,
	ID_BUTTON_USERNAME,
	ID_TEXTCTRL_PASSWORD,
	ID_BUTTON_PASSWORD,
	ID_TEXTCTRL_NEWPASSWORD,
	ID_BUTTON_NEWPASSWORD,
	ID_TEXTCTRL_CONFIRM,
	ID_BUTTON_CONFIRM,
	ID_BUTTON_ADD,
	ID_BUTTON_DELETE,
	ID_BUTTON_CHANGE2,
	ID_BUTTON_OK,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cOperatorSetPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_OK, cOperatorSetPanel::OnButtonOK)
	EVT_BUTTON(ID_BUTTON_CANCEL, cOperatorSetPanel::OnButtonCancel)
	EVT_BUTTON(ID_BUTTON_USERNAME, cOperatorSetPanel::OnButtonUserName)
	EVT_BUTTON(ID_BUTTON_PASSWORD, cOperatorSetPanel::OnButtonPassWord)
	EVT_BUTTON(ID_BUTTON_NEWPASSWORD, cOperatorSetPanel::OnButtonNewPassWord)
	EVT_BUTTON(ID_BUTTON_CONFIRM, cOperatorSetPanel::OnButtonConfirm)
	EVT_BUTTON(ID_BUTTON_ADD, cOperatorSetPanel::OnButtonAdd)
	EVT_BUTTON(ID_BUTTON_DELETE, cOperatorSetPanel::OnButtonDelete)
	EVT_BUTTON(ID_BUTTON_CHANGE2, cOperatorSetPanel::OnButtonChange)
END_EVENT_TABLE()


cOperatorSetPanel::cOperatorSetPanel(wxFrame*frame) :
	wxPanel(frame)
{

	cOperatorSetPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	//wxImage img(_("ref_img/USER_SET_ICON_70_eng.bmp"), wxBITMAP_TYPE_BMP);
	cImagePanel* itemStaticBitmap5 = new cImagePanel(itemPanel1, g_controller.m_ResoucePath["user_set_icon70"]);// wxID_STATIC,
		//wxBitmap(img), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	//wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	//itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM | wxALL, 5);

	//wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("Operator Setting"), wxDefaultPosition, wxDefaultSize, 0);
	//itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
	//itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false));// , wxT("Consolas")));
	//itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

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

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW | wxALL, 0);

	wxPanel* itemPanel14 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel14->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel14->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer13->Add(itemPanel14, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemPanel14->SetSizer(itemBoxSizer15);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer16, 0, wxGROW | wxALL, 10);

	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxStaticText* itemStaticText18 = new wxStaticText(itemPanel14, wxID_STATIC, _("User Name"), wxDefaultPosition, wxSize(200, -1), 0);
	itemStaticText18->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false));// , wxT("Arial")));
	itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer19, 0, wxGROW | wxALL, 0);

	wxArrayString itemComboBox20Strings;
	itemComboBox20Strings.Add(_("ComLaser1"));
	itemComboBox20Strings.Add(_("ComLaser2"));
	wxComboBox* itemComboBox20 = new wxComboBox(itemPanel14, ID_COMBOBOX_USERNAME, _("ComLaser1"), wxDefaultPosition, wxSize(200, -1), itemComboBox20Strings, wxCB_DROPDOWN);
	itemComboBox20->SetStringSelection(_("ComLaser1"));
	itemComboBox20->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer19->Add(itemComboBox20, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer21, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton22 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_USERNAME, 
		g_controller.m_ResoucePath["keyboard_button"], wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer21->Add(itemButton22, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer23, 0, wxGROW | wxALL, 10);

	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxStaticText* itemStaticText25 = new wxStaticText(itemPanel14, wxID_STATIC, _("Password"), wxDefaultPosition, wxSize(200, -1), 0);
	itemStaticText25->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false));//, wxT("Arial")));
	itemBoxSizer24->Add(itemStaticText25, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxTextCtrl* itemTextCtrl27 = new wxTextCtrl(itemPanel14, ID_TEXTCTRL_PASSWORD, wxEmptyString, wxDefaultPosition, wxSize(200, -1), wxTE_PASSWORD);
	itemTextCtrl27->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false));// , wxT("Arial")));
	itemBoxSizer26->Add(itemTextCtrl27, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton29 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_PASSWORD, 
		g_controller.m_ResoucePath["keyboard_button"], wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer28->Add(itemButton29, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer30, 0, wxGROW | wxALL, 10);

	wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer30->Add(itemBoxSizer31, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxStaticText* itemStaticText32 = new wxStaticText(itemPanel14, wxID_STATIC, _("New Password"), wxDefaultPosition, wxSize(200, -1), 0);
	itemStaticText32->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false));// , wxT("Arial")));
	itemBoxSizer31->Add(itemStaticText32, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer30->Add(itemBoxSizer33, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxTextCtrl* itemTextCtrl34 = new wxTextCtrl(itemPanel14, ID_TEXTCTRL_NEWPASSWORD, wxEmptyString, wxDefaultPosition, wxSize(200, -1), wxTE_PASSWORD);
	itemTextCtrl34->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false));// , wxT("Arial")));
	itemBoxSizer33->Add(itemTextCtrl34, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer35 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer30->Add(itemBoxSizer35, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton36 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_NEWPASSWORD, 
		g_controller.m_ResoucePath["keyboard_button"], wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer35->Add(itemButton36, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer37, 0, wxGROW | wxALL, 10);

	wxBoxSizer* itemBoxSizer38 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer37->Add(itemBoxSizer38, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxStaticText* itemStaticText39 = new wxStaticText(itemPanel14, wxID_STATIC, _("Confirm"), wxDefaultPosition, wxSize(200, -1), 0);
	itemStaticText39->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false));// , wxT("Arial")));
	itemBoxSizer38->Add(itemStaticText39, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer40 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer37->Add(itemBoxSizer40, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxTextCtrl* itemTextCtrl41 = new wxTextCtrl(itemPanel14, ID_TEXTCTRL_CONFIRM, wxEmptyString, wxDefaultPosition, wxSize(200, -1), wxTE_PASSWORD);
	itemTextCtrl41->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false));// , wxT("Arial")));
	itemBoxSizer40->Add(itemTextCtrl41, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer42 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer37->Add(itemBoxSizer42, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton43 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_CONFIRM, 
		g_controller.m_ResoucePath["keyboard_button"], wxDefaultPosition, wxSize(32, 32), 0);
	itemBoxSizer42->Add(itemButton43, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 1);

	wxBoxSizer* itemBoxSizer44 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer44, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cBitmap3ButtonEx* itemButton45 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_ADD, 
		g_controller.m_ResoucePath["add_button"]);// , wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer44->Add(itemButton45, 0, wxALIGN_BOTTOM | wxALL, 5);

	cBitmap3ButtonEx* itemButton46 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_DELETE, 
		g_controller.m_ResoucePath["delete_button"]);// , wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer44->Add(itemButton46, 0, wxALIGN_BOTTOM | wxALL, 5);

	cBitmap3ButtonEx* itemButton47 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_CHANGE2, 
		g_controller.m_ResoucePath["change_button"]);//, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer44->Add(itemButton47, 0, wxALIGN_BOTTOM | wxALL, 5);


	wxBoxSizer* itemBoxSizer48 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer48, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3ButtonEx* itemButton49 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_OK, 
		g_controller.m_ResoucePath["ok_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer48->Add(itemButton49, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cBitmap3ButtonEx* itemButton50 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_CANCEL, 
		g_controller.m_ResoucePath["cancel_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer48->Add(itemButton50, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_comboUserName = itemComboBox20;
	m_textPassword = itemTextCtrl27;
	m_textNewPassword = itemTextCtrl34;
	m_textComfirmNewPassword = itemTextCtrl41;
}


void cOperatorSetPanel::OnButtonUserName(wxCommandEvent &)
{
	cKeyboardDialog dlg(this, m_comboUserName->GetValue());
	if (wxID_OK == dlg.ShowModal())
		m_comboUserName->SetValue(dlg.m_text);
}


void cOperatorSetPanel::OnButtonPassWord(wxCommandEvent &)
{
	cKeyboardDialog dlg(this, m_textPassword->GetValue(), true);
	if (wxID_OK == dlg.ShowModal())
		m_textPassword->SetValue(dlg.m_text);
}


void cOperatorSetPanel::OnButtonNewPassWord(wxCommandEvent &)
{
	cKeyboardDialog dlg(this, m_textNewPassword->GetValue(), true);
	if (wxID_OK == dlg.ShowModal())
		m_textNewPassword->SetValue(dlg.m_text);
}


void cOperatorSetPanel::OnButtonConfirm(wxCommandEvent &)
{
	cKeyboardDialog dlg(this, m_textComfirmNewPassword->GetValue(), true);
	if (wxID_OK == dlg.ShowModal())
		m_textComfirmNewPassword->SetValue(dlg.m_text);
}


void cOperatorSetPanel::OnButtonAdd(wxCommandEvent &)
{

}

void cOperatorSetPanel::OnButtonDelete(wxCommandEvent &)
{

}

void cOperatorSetPanel::OnButtonChange(wxCommandEvent &)
{

}


void cOperatorSetPanel::OnButtonOK(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cOperatorSetPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}

