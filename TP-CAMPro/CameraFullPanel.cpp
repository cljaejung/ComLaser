
#include "stdafx.h"
#include "CameraFullPanel.h"
#include "CLFrame.h"
#include "MoviePanel.h"
#include "Bitmap3ButtonEx.h"


enum {
	ID_PANEL,
	ID_PANEL1,
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
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxUP | wxRIGHT | wxLEFT, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer5, 0, wxGROW | wxALL, 0);

	wxPanel* itemPanel6 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel6->SetBackgroundColour(wxColour(0, 128, 128));
	itemBoxSizer5->Add(itemPanel6, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
	itemPanel6->SetSizer(itemBoxSizer7);

	wxStaticText* itemStaticText8 = new wxStaticText(itemPanel6, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText8->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText8->SetBackgroundColour(wxColour(0, 128, 128));
	itemStaticText8->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer7->Add(itemStaticText8, 1, wxGROW | wxALL, 0);


	//wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	//itemBoxSizer4->Add(itemBoxSizer5, 0, wxGROW | wxALL, 0);

	//wxStaticText* itemStaticText6 = new wxStaticText(itemPanel1, wxID_STATIC, _(" Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	//itemStaticText6->SetForegroundColour(wxColour(255, 255, 255));
	//itemStaticText6->SetBackgroundColour(wxColour(0, 128, 0));
	//itemStaticText6->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	//itemBoxSizer5->Add(itemStaticText6, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer9, 1, wxGROW | wxALL, 0);

	cMoviePanel* itemPanel10 = new cMoviePanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(580, 385), wxTAB_TRAVERSAL);
	itemPanel10->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel10->m_GotoNextPanel = PANEL_CAMERAFULL;
	itemBoxSizer9->Add(itemPanel10, 1, wxGROW | wxTOP | wxBOTTOM, 4);

	cBitmap3ButtonEx* itemButton11 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_CANCEL, 
		g_controller.m_ResoucePath["fullcancel_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemButton11, 0, wxALIGN_TOP | wxALL, 5);


	//wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	//itemBoxSizer4->Add(itemBoxSizer7, 1, wxGROW | wxALL, 0);

	//cMoviePanel* itemPanel8 = new cMoviePanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(580, 385), wxTAB_TRAVERSAL);
	//itemPanel8->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	//itemPanel8->m_GotoNextPanel = PANEL_CAMERAFULL;
	//itemBoxSizer7->Add(itemPanel8, 1, wxGROW | wxTOP | wxBOTTOM, 4);

	//cBitmap3ButtonEx* itemButton9 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_CANCEL, 
	//	g_controller.m_ResoucePath[ "fullcancel_button"], wxDefaultPosition, wxDefaultSize, 0);
	//itemBoxSizer3->Add(itemButton9, 0, wxALIGN_TOP | wxALL, 5);

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

