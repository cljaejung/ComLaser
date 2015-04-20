
#include "stdafx.h"
#include "OperatorSetPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"

enum {
	ID_BUTTON_EXIT,
	ID_TEXTCTRL,
	ID_TEXTCTRL1,
	ID_COMBOCTRL,
	ID_BUTTON_START,
	ID_BUTTON_KEYBOARD,
};


BEGIN_EVENT_TABLE(cOperatorSetPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_EXIT, cOperatorSetPanel::OnButtonExit)
END_EVENT_TABLE()


cOperatorSetPanel::cOperatorSetPanel(wxFrame*frame) :
	wxPanel(frame)
{

	cOperatorSetPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer5, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer5->Add(itemBoxSizer6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer6->Add(itemBoxSizer7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText8 = new wxStaticText(itemPanel1, wxID_STATIC, _("Calendar"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemStaticText8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer6->Add(itemBoxSizer9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText10 = new wxStaticText(itemPanel1, wxID_STATIC, _("Device ID"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer9->Add(itemStaticText10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl11 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer9->Add(itemTextCtrl11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer6->Add(itemBoxSizer12, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText13 = new wxStaticText(itemPanel1, wxID_STATIC, _("User Name"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemStaticText13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxComboCtrl* itemComboCtrl14 = new wxComboCtrl(itemPanel1, ID_COMBOCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemComboCtrl14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer6->Add(itemBoxSizer15, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText16 = new wxStaticText(itemPanel1, wxID_STATIC, _("Password"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemStaticText16, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* itemTextCtrl17 = new wxTextCtrl(itemPanel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemTextCtrl17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton18 = new wxButton(itemPanel1, ID_BUTTON_KEYBOARD, _("Keyboard"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText19 = new wxStaticText(itemPanel1, wxID_STATIC, _("ComLASER"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemStaticText19, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer5->Add(itemBoxSizer20, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton21 = new wxButton(itemPanel1, ID_BUTTON_START, _("Start"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer20->Add(itemButton21, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton22 = new wxButton(itemPanel1, ID_BUTTON_EXIT, _("Exit"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer20->Add(itemButton22, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

}

cOperatorSetPanel::~cOperatorSetPanel()
{

}


void cOperatorSetPanel::OnButtonExit(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}
