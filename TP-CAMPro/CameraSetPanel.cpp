#include "stdafx.h"
#include "CameraSetPanel.h"
#include "CLFrame.h"
#include "wx/choice.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "Bitmap3Button.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"


enum {
	ID_PANEL1,
	ID_CHOICE_WEATHER,
	ID_SLIDER_GAIN,
	ID_CHOICE_SHUTTERSPEED,
	ID_CHOICE_ZOOM,
	ID_CHOICE_CAPTURETEST,
	ID_BUTTON_FULL,
	ID_PANEL,
	ID_BUTTON_OK,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cCameraSetPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_CANCEL, cCameraSetPanel::OnButtonCancel)
	EVT_BUTTON(ID_BUTTON_FULL, cCameraSetPanel::OnButtonFull)
END_EVENT_TABLE()


cCameraSetPanel::cCameraSetPanel(wxFrame*frame) :
wxPanel(frame)
{

	cCameraSetPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxALL, 5);

	wxImage img(_("ref_img/CAM_Set_icon.bmp"), wxBITMAP_TYPE_BMP);
	wxBitmap bmp = img.Scale(70, 70);
	wxStaticBitmap* itemStaticBitmap4 = new wxStaticBitmap(itemPanel1, wxID_STATIC, bmp, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("Camera Setting"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText5->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText5->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 1, wxGROW | wxALL, 5);

	cDateDisplay* itemStaticText7 = new cDateDisplay(itemPanel1, true);
	itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer8, 0, wxGROW | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap9 = new cBatteryDisplay(itemPanel1, wxID_STATIC, 
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(itemStaticBitmap9, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer10, 1, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxPanel* itemPanel12 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel12->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel12->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer11->Add(itemPanel12, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemPanel12->SetSizer(itemBoxSizer13);

	wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer14, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText15 = new wxStaticText(itemPanel12, wxID_STATIC, _("Weather"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText15->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice16Strings;
	itemChoice16Strings.Add(_("Auto"));
	itemChoice16Strings.Add(_("Sunny"));
	itemChoice16Strings.Add(_("Fine"));
	itemChoice16Strings.Add(_("Cloudy"));
	itemChoice16Strings.Add(_("Night"));
	itemChoice16Strings.Add(_("User Setting"));
	wxChoice* itemChoice16 = new wxChoice(itemPanel12, ID_CHOICE_WEATHER, wxDefaultPosition, wxDefaultSize, itemChoice16Strings, 0);
	itemChoice16->SetStringSelection(_("Auto"));
	itemChoice16->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer14->Add(itemChoice16, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer17, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText18 = new wxStaticText(itemPanel12, wxID_STATIC, _("Gain"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText18->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxSlider* itemSlider19 = new wxSlider(itemPanel12, ID_SLIDER_GAIN, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemSlider19->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer17->Add(itemSlider19, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer20, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText21 = new wxStaticText(itemPanel12, wxID_STATIC, _("Shutter Speed"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText21->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer20->Add(itemStaticText21, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice22Strings;
	itemChoice22Strings.Add(_("2 ms"));
	itemChoice22Strings.Add(_("3 ms"));
	itemChoice22Strings.Add(_("4 ms"));
	itemChoice22Strings.Add(_("5 ms"));
	wxChoice* itemChoice22 = new wxChoice(itemPanel12, ID_CHOICE_SHUTTERSPEED, wxDefaultPosition, wxDefaultSize, itemChoice22Strings, 0);
	itemChoice22->SetStringSelection(_("2 ms"));
	itemChoice22->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer20->Add(itemChoice22, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer23, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText24 = new wxStaticText(itemPanel12, wxID_STATIC, _("S/W Zoom"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText24->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer23->Add(itemStaticText24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice25Strings;
	itemChoice25Strings.Add(_("On"));
	itemChoice25Strings.Add(_("Off"));
	wxChoice* itemChoice25 = new wxChoice(itemPanel12, ID_CHOICE_ZOOM, wxDefaultPosition, wxDefaultSize, itemChoice25Strings, 0);
	itemChoice25->SetStringSelection(_("On"));
	itemChoice25->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer23->Add(itemChoice25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer26, 0, wxGROW | wxALL, 5);

	wxStaticText* itemStaticText27 = new wxStaticText(itemPanel12, wxID_STATIC, _("Capture Test"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText27->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer26->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice28Strings;
	itemChoice28Strings.Add(_("On"));
	itemChoice28Strings.Add(_("Off"));
	wxChoice* itemChoice28 = new wxChoice(itemPanel12, ID_CHOICE_CAPTURETEST, wxDefaultPosition, wxDefaultSize, itemChoice28Strings, 0);
	itemChoice28->SetStringSelection(_("On"));
	itemChoice28->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer26->Add(itemChoice28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer29, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	cBitmap3Button* itemButton30 = new cBitmap3Button(itemPanel12, ID_BUTTON_OK, _("ref_img/BTN_OK.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer29->Add(itemButton30, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	cBitmap3Button* itemButton31 = new cBitmap3Button(itemPanel12, ID_BUTTON_CANCEL, _("ref_img/BTN_CANCEL.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer29->Add(itemButton31, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer32 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer32->Add(itemBoxSizer33, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText34 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText34->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText34->SetBackgroundColour(wxColour(0, 128, 128));
	itemStaticText34->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer33->Add(itemStaticText34, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton35 = new wxButton(itemPanel1, ID_BUTTON_FULL, _("Full"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer32->Add(itemBoxSizer36, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxPanel* itemPanel37 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(390, 288), wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel37->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer36->Add(itemPanel37, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);


	//SetBackgroundColour(wxColour("Black"));
}

cCameraSetPanel::~cCameraSetPanel()
{

}


void cCameraSetPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


void cCameraSetPanel::OnButtonFull(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_CAMERAFULL);
}

