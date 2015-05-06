
#include "stdafx.h"
#include "FileMngFullPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"
#include "Bitmap3Button.h"


enum {
	ID_STATIC_BITMAP,
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

	wxPanel* itemPanel6 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER | wxTAB_TRAVERSAL);
	itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer5->Add(itemPanel6, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
	itemPanel6->SetSizer(itemBoxSizer7);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer7->Add(itemBoxSizer8, 1, wxGROW | wxALL, 0);

	m_Image = new wxStaticBitmap(itemPanel6, ID_STATIC_BITMAP, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(m_Image, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer10, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3Button* itemButton12 = new cBitmap3Button(itemPanel1, ID_BUTTON_PREV, _("ref_img/LEFT_ARROW.png"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer11->Add(itemButton12, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer13, 1, wxGROW | wxALL, 0);

	wxSlider* itemSlider14 = new wxSlider(itemPanel1, ID_SLIDER_AVI, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer13->Add(itemSlider14, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3Button* itemButton16 = new cBitmap3Button(itemPanel1, ID_BUTTON_NEXT, _("ref_img/RIGHT_ARROW.png"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer15->Add(itemButton16, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer17, 0, wxGROW | wxALL, 5);

	cBitmap3Button* itemButton18 = new cBitmap3Button(itemPanel1, ID_BUTTON_CANCEL, _("ref_img/BTN_CANCEL.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer17->Add(itemButton18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);


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

