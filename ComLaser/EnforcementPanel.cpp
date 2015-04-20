
#include "stdafx.h"
#include "EnforcementPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"


enum {
	ID_PANEL,
	ID_BUTTON_DONE,
	ID_BUTTON_FULL,
	ID_PANEL1,
};


BEGIN_EVENT_TABLE(cEnforcementPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_DONE, cEnforcementPanel::OnButtonDone)
	EVT_BUTTON(ID_BUTTON_FULL, cEnforcementPanel::OnButtonFull)
END_EVENT_TABLE()


cEnforcementPanel::cEnforcementPanel(wxFrame*frame) :
	wxPanel(frame)
{

	cEnforcementPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap4 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("Enforcement"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText6 = new wxStaticText(itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap7 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap7, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer8, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer8->Add(itemBoxSizer9, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxPanel* itemPanel10 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel10->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer9->Add(itemPanel10, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer9->Add(itemBoxSizer11, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText12 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer11->Add(itemStaticText12, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText13 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer11->Add(itemStaticText13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText14 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer11->Add(itemStaticText14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer9->Add(itemBoxSizer15, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText16 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture\nSpeed"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemStaticText16, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText17 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemStaticText17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer9->Add(itemBoxSizer18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText19 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture\nDistance"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer18->Add(itemStaticText19, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText20 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer18->Add(itemStaticText20, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton21 = new wxButton(itemPanel1, ID_BUTTON_DONE, _("Done"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer9->Add(itemButton21, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer8->Add(itemBoxSizer22, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxPanel* itemPanel23 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel23->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer22->Add(itemPanel23, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton24 = new wxButton(itemPanel1, ID_BUTTON_FULL, _("Full"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer22->Add(itemButton24, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


}

cEnforcementPanel::~cEnforcementPanel()
{

}


void cEnforcementPanel::OnButtonDone(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cEnforcementPanel::OnButtonFull(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_ENFORCEMENTFULL);
}
