
#include "stdafx.h"
#include "MainPanel.h"
#include "CLFrame.h"
#include "Bitmap3Button.h"


enum {
	ID_PANEL,
	ID_BUTTON_ENFORCEMENTSET,
	ID_BUTTON_CAMERASET,
	ID_BUTTON_FILEMNG,
	ID_BUTTON_ENFORCEMENT,
	ID_BUTTON5,
	ID_BUTTON_OPERATORSET,
	ID_BUTTON_DATESET,
};


BEGIN_EVENT_TABLE(cMainPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_OPERATORSET, cMainPanel::OnButtonOperatorSet)
	EVT_BUTTON(ID_BUTTON_DATESET, cMainPanel::OnButtonDateSet)
	EVT_BUTTON(ID_BUTTON_ENFORCEMENTSET, cMainPanel::OnButtonEnforcementSet)
	EVT_BUTTON(ID_BUTTON_CAMERASET, cMainPanel::OnButtonCameraSet)
	EVT_BUTTON(ID_BUTTON_FILEMNG, cMainPanel::OnButtonFileMng)
	EVT_BUTTON(ID_BUTTON_ENFORCEMENT, cMainPanel::OnButtonEnforcement)
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

	//wxButton* itemButton5 = new cBitmap3Button(itemPanel1, ID_BUTTON_DATESET, _("ref_img/Cam_Set.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	//itemBoxSizer3->Add(itemButton5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBitmap bmp("ref_img/BATT_ext2.bmp", wxBITMAP_TYPE_BMP);
	wxStaticBitmap* itemStaticBitmap6 = new wxStaticBitmap(itemPanel1, wxID_STATIC, bmp, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer7, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton8 = new cBitmap3Button(itemPanel1, ID_BUTTON_ENFORCEMENT, _("ref_img/Enfm_Set.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton9 = new cBitmap3Button(itemPanel1, ID_BUTTON_CAMERASET, _("ref_img/Cam_Set.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton10 = new cBitmap3Button(itemPanel1, ID_BUTTON_OPERATORSET, _("ref_img/User_Set.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton11 = new cBitmap3Button(itemPanel1, ID_BUTTON_FILEMNG, _("ref_img/File_Mgmt.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton12 = new cBitmap3Button(itemPanel1, ID_BUTTON_ENFORCEMENT, _("ref_img/Enfm.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton12, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer13, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap14 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxBitmap(_("ref_img/ComLASER_Logo.bmp"), wxBITMAP_TYPE_BMP), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemStaticBitmap14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton15 = new cBitmap3Button(itemPanel1, ID_BUTTON5, _("ref_img/EXIT.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemButton15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);


	SetBackgroundColour(wxColour("Black"));

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


void cMainPanel::OnButtonFileMng(wxCommandEvent &evt)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_FILEMNG);
}


void cMainPanel::OnButtonEnforcement(wxCommandEvent &evt)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_ENFORCEMENT);
}
