
#include "stdafx.h"
#include "OperatorSetPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"

enum {
	ID_COMBOCTRL_USERNAME,
	ID_BUTTON_USERNAME,
	ID_TEXTCTRL_PASSWORD,
	ID_BUTTON_PASSWORD,
	ID_TEXTCTRL_NEWPASSWORD,
	ID_BUTTON_NEWPASSWORD,
	ID_TEXTCTRL_CONFIRM,
	ID_BUTTON_CONFIRM,
	ID_BUTTON_ADD,
	ID_BUTTON_DELETE,
	ID_BUTTON_CHANGE,
	ID_BUTTON_OK,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cOperatorSetPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_CANCEL, cOperatorSetPanel::OnButtonCancel)
END_EVENT_TABLE()


cOperatorSetPanel::cOperatorSetPanel(wxFrame*frame) :
	wxPanel(frame)
{

	cOperatorSetPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("Operator Setting"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer6, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer6->Add(itemBoxSizer7, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer7->Add(itemBoxSizer8, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText9 = new wxStaticText(itemPanel1, wxID_STATIC, _("User Name"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxComboCtrl* itemComboCtrl10 = new wxComboCtrl(itemPanel1, ID_COMBOCTRL_USERNAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemComboCtrl10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton11 = new wxButton(itemPanel1, ID_BUTTON_USERNAME, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer7->Add(itemBoxSizer12, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText13 = new wxStaticText(itemPanel1, wxID_STATIC, _("Password"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemStaticText13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl14 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL_PASSWORD, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemTextCtrl14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton15 = new wxButton(itemPanel1, ID_BUTTON_PASSWORD, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemButton15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer7->Add(itemBoxSizer16, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText17 = new wxStaticText(itemPanel1, wxID_STATIC, _("New Password"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer16->Add(itemStaticText17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl18 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL_NEWPASSWORD, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer16->Add(itemTextCtrl18, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton19 = new wxButton(itemPanel1, ID_BUTTON_NEWPASSWORD, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer16->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer7->Add(itemBoxSizer20, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText21 = new wxStaticText(itemPanel1, wxID_STATIC, _("Confirm"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer20->Add(itemStaticText21, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl22 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL_CONFIRM, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer20->Add(itemTextCtrl22, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton23 = new wxButton(itemPanel1, ID_BUTTON_CONFIRM, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer20->Add(itemButton23, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer7->Add(itemBoxSizer24, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton25 = new wxButton(itemPanel1, ID_BUTTON_ADD, _("Add"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer24->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton26 = new wxButton(itemPanel1, ID_BUTTON_DELETE, _("Delete"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer24->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton27 = new wxButton(itemPanel1, ID_BUTTON_CHANGE, _("Change"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer24->Add(itemButton27, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer6->Add(itemBoxSizer28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton29 = new wxButton(itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer28->Add(itemButton29, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton30 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer28->Add(itemButton30, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

}

cOperatorSetPanel::~cOperatorSetPanel()
{

}


void cOperatorSetPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}
