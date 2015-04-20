
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

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxPanel* itemPanel6 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer4->Add(itemPanel6, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton7 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemButton7, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);


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

