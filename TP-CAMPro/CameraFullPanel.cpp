
#include "stdafx.h"
#include "CameraFullPanel.h"
#include "CLFrame.h"


enum {
	ID_PANEL,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cCameraFullPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_CANCEL, cCameraFullPanel::OnButtonCancel)
END_EVENT_TABLE()


cCameraFullPanel::cCameraFullPanel(wxFrame*frame) :
wxPanel(frame)
{

	cCameraFullPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer5, 0, wxGROW | wxALL, 0);

	wxStaticText* itemStaticText6 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText6->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText6->SetBackgroundColour(wxColour(0, 128, 0));
	itemStaticText6->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer5->Add(itemStaticText6, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer7, 1, wxGROW | wxALL, 0);

	wxPanel* itemPanel8 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(580, 385), wxRAISED_BORDER | wxTAB_TRAVERSAL);
	itemPanel8->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer7->Add(itemPanel8, 1, wxGROW | wxTOP | wxBOTTOM, 4);

	wxButton* itemButton9 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemButton9, 0, wxALIGN_TOP | wxALL, 5);

}

cCameraFullPanel::~cCameraFullPanel()
{

}


void cCameraFullPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_CAMERASET);
}

