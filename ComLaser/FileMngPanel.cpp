
#include "stdafx.h"
#include "FileMngPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"


enum {
	ID_LISTCTRL,
	ID_BUTTON_OK,
	ID_PANEL,
	ID_SLIDER_AVI,
	ID_BUTTON_FULL,
	ID_BUTTON_MEMCOPY,
	ID_BUTTON_FILETRANSFER,
	ID_BUTTON_MEMCLEAR,
};


BEGIN_EVENT_TABLE(cFileMngPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_OK, cFileMngPanel::OnButtonOK)
	EVT_BUTTON(ID_BUTTON_FULL, cFileMngPanel::OnButtonFull)
END_EVENT_TABLE()


cFileMngPanel::cFileMngPanel(wxFrame*frame) :
wxPanel(frame)
{
	cFileMngPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("File Management"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap6 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer7, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxListCtrl* itemListCtrl9 = new wxListCtrl(itemPanel1, ID_LISTCTRL, wxDefaultPosition, wxSize(100, 100), wxLC_REPORT);
	itemBoxSizer8->Add(itemListCtrl9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton10 = new wxButton(itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemButton10, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxPanel* itemPanel12 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel12->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer11->Add(itemPanel12, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxSlider* itemSlider13 = new wxSlider(itemPanel1, ID_SLIDER_AVI, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer11->Add(itemSlider13, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton14 = new wxButton(itemPanel1, ID_BUTTON_FULL, _("Full"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer11->Add(itemButton14, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton16 = new wxButton(itemPanel1, ID_BUTTON_MEMCOPY, _("Memory\nCopy"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton16, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton17 = new wxButton(itemPanel1, ID_BUTTON_FILETRANSFER, _("File\nTransfer"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton17, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton18 = new wxButton(itemPanel1, ID_BUTTON_MEMCLEAR, _("Memory\nClear"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


}

cFileMngPanel::~cFileMngPanel()
{

}


void cFileMngPanel::OnButtonOK(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cFileMngPanel::OnButtonFull(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_FILEMNGFULL);
}
