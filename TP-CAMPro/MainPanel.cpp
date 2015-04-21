
#include "stdafx.h"
#include "MainPanel.h"
#include "CLFrame.h"
#include "Bitmap3Button.h"
#include "DateDisplay.h"
#include "BatteryDisplay.h"

enum {
	ID_PANEL,
	ID_BUTTON_ENFORCEMENTSET,
	ID_BUTTON_CAMERASET,
	ID_BUTTON_FILEMNG,
	ID_BUTTON_ENFORCEMENT,
	ID_BUTTON_EXIT,
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
	EVT_BUTTON(ID_BUTTON_EXIT, cMainPanel::OnButtonExit)
END_EVENT_TABLE()

cMainPanel::cMainPanel(wxFrame*frame) :
	wxPanel(frame)
{

	cMainPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("TP-CAM Pro\nVER 1.50A"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText5->SetForegroundColour(wxColour(255, 255, 255));
	itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_LEFT | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 1, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	//wxButton* itemButton7 = new wxButton(itemPanel1, ID_BUTTON_DATESET, _("Date Setting"), wxDefaultPosition, wxDefaultSize, 0);
	cDateDisplay * itemButton7 = new cDateDisplay(itemPanel1);
	itemBoxSizer6->Add(itemButton7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW | wxALL, 5);

	//wxStaticBitmap* itemStaticBitmap9 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	wxStaticBitmap* itemStaticBitmap9 = new cBatteryDisplay(itemPanel1, wxID_STATIC, _("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemStaticBitmap9, 0, wxALIGN_RIGHT | wxALL, 5);


	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer7, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cBitmap3Button* itemButton8 = new cBitmap3Button(itemPanel1, ID_BUTTON_ENFORCEMENTSET, _("ref_img/Enfm_Set.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton9 = new cBitmap3Button(itemPanel1, ID_BUTTON_CAMERASET, _("ref_img/Cam_Set.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton10 = new cBitmap3Button(itemPanel1, ID_BUTTON_OPERATORSET, _("ref_img/User_Set.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton11 = new cBitmap3Button(itemPanel1, ID_BUTTON_FILEMNG, _("ref_img/File_Mgmt.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton12 = new cBitmap3Button(itemPanel1, ID_BUTTON_ENFORCEMENT, _("ref_img/Enfm.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton12, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);


	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer16, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer17, 1, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap18 = new wxStaticBitmap(itemPanel1, wxID_STATIC, 
		wxBitmap(_("ref_img/ComLASER_Logo.bmp"), wxBITMAP_TYPE_BMP), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer17->Add(itemStaticBitmap18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer16->Add(itemBoxSizer19, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton20 = new cBitmap3Button(itemPanel1, ID_BUTTON_EXIT, _("ref_img/EXIT.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer19->Add(itemButton20, 0, wxALIGN_CENTER_HORIZONTAL, 5);

	/*
	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer13, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap14 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxBitmap(_("ref_img/ComLASER_Logo.bmp"), wxBITMAP_TYPE_BMP), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemStaticBitmap14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton15 = new cBitmap3Button(itemPanel1, ID_BUTTON5, _("ref_img/EXIT.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemButton15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);
	*/

	SetBackgroundColour(wxColour("Black"));

	Connect(wxEVT_ERASE_BACKGROUND, wxEraseEventHandler(cMainPanel::OnEraseBackground), NULL, this);
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


void cMainPanel::OnEraseBackground(wxEraseEvent& event)
{
	event.Skip();
}


void cMainPanel::OnButtonExit(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->Close();
}