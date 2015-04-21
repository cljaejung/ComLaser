
#include "stdafx.h"
#include "FileMngPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"

enum {
	ID_PANEL1,
	ID_BUTTON_PREV,
	ID_BUTTON_NEXT,
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

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxImage img(_("ref_img/FILE_MGMT_ICON.bmp"), wxBITMAP_TYPE_BMP);
	wxBitmap bmp = img.Scale(70, 70);
	wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap(itemPanel1, wxID_STATIC, bmp, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM | wxLEFT | wxRIGHT | wxTOP, 5);

	wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("File Management"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW | wxALL, 5);

	cDateDisplay* itemStaticText9 = new cDateDisplay(itemPanel1, true);
	itemStaticText9->SetForegroundColour(wxColour(255, 255, 255));
	itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap11 = new cBatteryDisplay(itemPanel1, wxID_STATIC, 
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT | wxALL, 5);


	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW | wxLEFT | wxRIGHT, 5);

	wxPanel* itemPanel14 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel14->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer13->Add(itemPanel14, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemPanel14->SetSizer(itemBoxSizer15);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer16, 1, wxGROW | wxALL, 5);

	m_FileListCtrl = new wxListCtrl(itemPanel14, ID_LISTCTRL, wxDefaultPosition, wxSize(100, 100), wxLC_REPORT);
	m_FileListCtrl->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer16->Add(m_FileListCtrl, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	cBitmap3Button* itemButton19 = new cBitmap3Button(itemPanel14, ID_BUTTON_OK, _("ref_img/BTN_OK.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer18->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer20, 1, wxGROW | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer20->Add(itemBoxSizer21, 1, wxGROW, 5);

	wxPanel* itemPanel22 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxDOUBLE_BORDER|wxTAB_TRAVERSAL);
	itemPanel22->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer21->Add(itemPanel22, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer20->Add(itemBoxSizer23, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxButton* itemButton25 = new wxButton(itemPanel1, ID_BUTTON_PREV, _("<<"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer24->Add(itemButton25, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer26, 1, wxGROW | wxALL, 0);

	wxSlider* itemSlider27 = new wxSlider(itemPanel1, ID_SLIDER_AVI, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer26->Add(itemSlider27, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxButton* itemButton29 = new wxButton(itemPanel1, ID_BUTTON_NEXT, _(">>"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer28->Add(itemButton29, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer30, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer31, 1, wxGROW | wxALL, 5);

	wxButton* itemButton32 = new wxButton(itemPanel1, ID_BUTTON_MEMCOPY, _("Memory\nCopy"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer31->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer33, 1, wxGROW | wxALL, 5);

	wxButton* itemButton34 = new wxButton(itemPanel1, ID_BUTTON_FILETRANSFER, _("File\nTransfer"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer35 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer35, 1, wxGROW | wxALL, 5);

	wxButton* itemButton36 = new wxButton(itemPanel1, ID_BUTTON_MEMCLEAR, _("Memory\nClear"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer35->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton38 = new wxButton(itemPanel1, ID_BUTTON_FULL, _("Full"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer37->Add(itemButton38, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);



	//////////////////////////////////////////////////////////////////////////
	m_FileListCtrl->InsertColumn(0, "Num");
	m_FileListCtrl->InsertColumn(1, "Time");
	m_FileListCtrl->InsertColumn(2, "Speed");
	m_FileListCtrl->SetColumnWidth(0, 65);
	m_FileListCtrl->SetColumnWidth(1, 95);
	m_FileListCtrl->SetColumnWidth(2, 90);
	for (int i = 0; i < 18; ++i)
	{
		m_FileListCtrl->InsertItem(i, wxString::Format("%d", i + 9991));
		m_FileListCtrl->SetItem(i, 1, "17:05:25");
		m_FileListCtrl->SetItem(i, 2, "124km/h");
	}

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
