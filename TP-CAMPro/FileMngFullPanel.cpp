
#include "stdafx.h"
#include "FileMngFullPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"


enum {
	ID_BUTTON_PREV,
	ID_BUTTON_NEXT,
	ID_SLIDER_AVI,
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

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxLEFT | wxRIGHT, 10);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer5, 1, wxGROW, 0);

	wxPanel* itemPanel6 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer5->Add(itemPanel6, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer7, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxButton* itemButton9 = new wxButton(itemPanel1, ID_BUTTON_PREV, _("<<"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer8->Add(itemButton9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer10, 1, wxGROW | wxALL, 0);

	wxSlider* itemSlider11 = new wxSlider(itemPanel1, ID_SLIDER_AVI, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer10->Add(itemSlider11, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer12, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxButton* itemButton13 = new wxButton(itemPanel1, ID_BUTTON_NEXT, _(">>"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer12->Add(itemButton13, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer14, 0, wxGROW | wxALL, 5);

	wxButton* itemButton15 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer14->Add(itemButton15, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

}

cFileMngFullPanel::~cFileMngFullPanel()
{

}


void cFileMngFullPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_FILEMNG);
}
