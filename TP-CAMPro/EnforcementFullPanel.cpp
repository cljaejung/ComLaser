
#include "stdafx.h"
#include "EnforcementFullPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"


enum {
ID_PANEL,
ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cEnforcementFullPanel, wxPanel)
EVT_BUTTON(ID_BUTTON_CANCEL, cEnforcementFullPanel::OnButtonCancel)
END_EVENT_TABLE()


cEnforcementFullPanel::cEnforcementFullPanel(wxFrame*frame) :
wxPanel(frame)
{

	cEnforcementFullPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxALL, 5);

	wxPanel* itemPanel5 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel5->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer4->Add(itemPanel5, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_TOP | wxALL, 5);

	wxButton* itemButton7 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemButton7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText8 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText8->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText8->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer6->Add(itemStaticText8, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap9 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemStaticBitmap9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText10 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText10->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText10->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer6->Add(itemStaticText10, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

}

cEnforcementFullPanel::~cEnforcementFullPanel()
{

}


void cEnforcementFullPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_ENFORCEMENT);
}
