
#include "stdafx.h"
#include "FileMngFullPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"


enum {
	ID_PANEL,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cFileMngFullPanel, wxPanel)
EVT_BUTTON(ID_BUTTON_CANCEL, cFileMngFullPanel::OnButtonCancel)
END_EVENT_TABLE()


cFileMngFullPanel::cFileMngFullPanel(wxFrame*frame) :
wxPanel(frame)
{

	cFileMngFullPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxPanel* itemPanel4 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel4->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer3->Add(itemPanel4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton5 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemButton5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

}

cFileMngFullPanel::~cFileMngFullPanel()
{

}


void cFileMngFullPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}
