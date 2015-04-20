#include "stdafx.h"
#include "CameraSetPanel.h"
#include "CLFrame.h"
#include "wx/choice.h"
#include "wx/combo.h"
#include "wx/combobox.h"


enum {
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

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("Camera Setting"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticText* itemStaticText5 = new wxStaticText(itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap6 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticBitmap6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer7, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText10 = new wxStaticText(itemPanel1, wxID_STATIC, _("Weather"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer9->Add(itemStaticText10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice11Strings;
	wxChoice* itemChoice11 = new wxChoice(itemPanel1, ID_CHOICE_WEATHER, wxDefaultPosition, wxDefaultSize, itemChoice11Strings, 0);
	itemBoxSizer9->Add(itemChoice11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer12, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText13 = new wxStaticText(itemPanel1, wxID_STATIC, _("Gain"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer12->Add(itemStaticText13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxSlider* itemSlider14 = new wxSlider(itemPanel1, ID_SLIDER_GAIN, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer12->Add(itemSlider14, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer15, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText16 = new wxStaticText(itemPanel1, wxID_STATIC, _("Shutter Speed"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemStaticText16, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice17Strings;
	wxChoice* itemChoice17 = new wxChoice(itemPanel1, ID_CHOICE_SHUTTERSPEED, wxDefaultPosition, wxDefaultSize, itemChoice17Strings, 0);
	itemBoxSizer15->Add(itemChoice17, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText19 = new wxStaticText(itemPanel1, wxID_STATIC, _("S/W Zoom"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer18->Add(itemStaticText19, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice20Strings;
	wxChoice* itemChoice20 = new wxChoice(itemPanel1, ID_CHOICE_ZOOM, wxDefaultPosition, wxDefaultSize, itemChoice20Strings, 0);
	itemBoxSizer18->Add(itemChoice20, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer21, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText22 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture Test"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer21->Add(itemStaticText22, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxArrayString itemChoice23Strings;
	wxChoice* itemChoice23 = new wxChoice(itemPanel1, ID_CHOICE_CAPTURETEST, wxDefaultPosition, wxDefaultSize, itemChoice23Strings, 0);
	itemBoxSizer21->Add(itemChoice23, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer8->Add(itemBoxSizer24, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton25 = new wxButton(itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer24->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton26 = new wxButton(itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer24->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer7->Add(itemBoxSizer27, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer27->Add(itemBoxSizer28, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText29 = new wxStaticText(itemPanel1, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer28->Add(itemStaticText29, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton30 = new wxButton(itemPanel1, ID_BUTTON_FULL, _("Full"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer28->Add(itemButton30, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer27->Add(itemBoxSizer31, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxPanel* itemPanel32 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER | wxTAB_TRAVERSAL);
	itemPanel32->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer31->Add(itemPanel32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);


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

