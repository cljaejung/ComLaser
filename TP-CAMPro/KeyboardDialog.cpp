
#include "stdafx.h"
#include "KeyboardDialog.h"
#include "KeyboardEngPanel.h"

enum
{
	ID_PANEL,
};


cKeyboardDialog::cKeyboardDialog(wxWindow *parent) :
	wxDialog(parent, wxID_ANY, "KeyBoard", wxDefaultPosition, wxSize(710,200), 
		wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER)
{
	cKeyboardDialog* itemDialog1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemDialog1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);

	wxPanel* itemPanel4 = new cKeyboardEngPanel(itemDialog1);
	itemPanel4->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer3->Add(itemPanel4, 0, wxGROW | wxALL, 0);

	Center();
}
