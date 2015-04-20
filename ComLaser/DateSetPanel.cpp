
#include "stdafx.h"
#include "DateSetPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"

enum {
	ID_PANEL1,
	ID_PANEL,
	ID_BUTTON_OK,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cDateSetPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_CANCEL, cDateSetPanel::OnButtonCancel)
END_EVENT_TABLE()


cDateSetPanel::cDateSetPanel(wxFrame*frame) :
wxPanel(frame)
{


	cDateSetPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap4 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer5, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxPanel* itemPanel6 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer5->Add(itemPanel6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxPanel* itemPanel7 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel7->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer5->Add(itemPanel7, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer8, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton9 = new wxButton(itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton10 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

}

cDateSetPanel::~cDateSetPanel()
{

}


void cDateSetPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}
