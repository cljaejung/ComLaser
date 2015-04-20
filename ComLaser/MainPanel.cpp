
#include "stdafx.h"
#include "MainPanel.h"
#include "CLFrame.h"


enum {
	ID_PANEL,
	ID_BUTTON_ENFORCEMENTSET,
	ID_BUTTON_CAMERASET,
	ID_BUTTON2,
	ID_BUTTON3,
	ID_BUTTON4,
	ID_BUTTON5,
	ID_BUTTON_OPERATORSET,
	ID_BUTTON_DATESET,
};


BEGIN_EVENT_TABLE(cMainPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_OPERATORSET, cMainPanel::OnButtonOperatorSet)
	EVT_BUTTON(ID_BUTTON_DATESET, cMainPanel::OnButtonDateSet)
	EVT_BUTTON(ID_BUTTON_ENFORCEMENTSET, cMainPanel::OnButtonEnforcementSet)
	EVT_BUTTON(ID_BUTTON_CAMERASET, cMainPanel::OnButtonCameraSet)
END_EVENT_TABLE()

cMainPanel::cMainPanel(wxFrame*frame) :
	wxPanel(frame)
{

	cMainPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton5 = new wxButton(itemPanel1, ID_BUTTON_DATESET, _("Date Setting"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemButton5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer6, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton7 = new wxButton(itemPanel1, ID_BUTTON_ENFORCEMENTSET, _("Enforcement\nSetting"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemButton7, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton8 = new wxButton(itemPanel1, ID_BUTTON_CAMERASET, _("Camera\nSetting"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton9 = new wxButton(itemPanel1, ID_BUTTON_OPERATORSET, _("Operator\nSetting"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton10 = new wxButton(itemPanel1, ID_BUTTON3, _("File \nManagement"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton11 = new wxButton(itemPanel1, ID_BUTTON4, _("Enforcement"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer12, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText13 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemStaticText13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton14 = new wxButton(itemPanel1, ID_BUTTON5, _("Exit"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemButton14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

}

cMainPanel::~cMainPanel()
{

}


void cMainPanel::OnButtonOperatorSet(wxCommandEvent &evt)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_OPERATORSET);
}


void cMainPanel::OnButtonDateSet(wxCommandEvent &evt)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_DATESET);
}


void cMainPanel::OnButtonEnforcementSet(wxCommandEvent &evt)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_ENFORCEMENTSET);
}


void cMainPanel::OnButtonCameraSet(wxCommandEvent &evt)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_CAMERASET);
}
