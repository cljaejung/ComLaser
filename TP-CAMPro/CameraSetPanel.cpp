#include "stdafx.h"
#include "CameraSetPanel.h"
#include "CLFrame.h"
#include "wx/choice.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "Bitmap3Button.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "MoviePanel.h"
#include "ImagePanel.h"


enum {
	ID_PANEL1,
	ID_CHOICE_WEATHER,
	ID_SLIDER_GAIN,
	ID_CHOICE_SHUTTERSPEED,
	ID_CHOICE_ZOOM,
	ID_CHOICE_CAPTURETEST,
	ID_PANEL,
	ID_BUTTON_OK,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cCameraSetPanel, wxPanel)
EVT_BUTTON(ID_BUTTON_OK, cCameraSetPanel::OnButtonOK)
EVT_BUTTON(ID_BUTTON_CANCEL, cCameraSetPanel::OnButtonCancel)
EVT_COMMAND_SCROLL_CHANGED(ID_SLIDER_GAIN, cCameraSetPanel::OnSliderGainScrollChanged)
EVT_CHOICE(ID_CHOICE_WEATHER, cCameraSetPanel::OnChoiceWeatherSelected)
EVT_CHOICE(ID_CHOICE_SHUTTERSPEED, cCameraSetPanel::OnChoiceShutterSpeedSelected)
EVT_CHOICE(ID_CHOICE_ZOOM, cCameraSetPanel::OnChoiceSWZoomSelected)
EVT_CHOICE(ID_CHOICE_CAPTURETEST, cCameraSetPanel::OnChoiceCaptureTestSelected)
END_EVENT_TABLE()


cCameraSetPanel::cCameraSetPanel(wxFrame*frame) :
wxPanel(frame)
, m_weather(WEATHER::AUTO)
, m_gain(GAIN_MIN)
, m_shutterSpeed(2.f)
, m_isZoom(true)
, m_isCaptureTest(true)
, m_choiceShutterSpeed(NULL)
, m_sliderGain(NULL)
{

    cCameraSetPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

	cImagePanel* itemStaticBitmap4 = new cImagePanel(itemPanel1, _("ref_img/CAM_SET_ICON_70_eng.bmp"));
    itemBoxSizer3->Add(itemStaticBitmap4, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer6, 1, wxGROW|wxLEFT|wxTOP, 5);

	cDateDisplay* itemStaticText7 = new cDateDisplay(itemPanel1, true);
	itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_RIGHT | wxALL, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer8, 0, wxGROW|wxRIGHT|wxTOP, 5);

	wxStaticBitmap* itemStaticBitmap9 = new cBatteryDisplay(itemPanel1, wxID_STATIC,
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
    itemBoxSizer8->Add(itemStaticBitmap9, 0, wxALIGN_RIGHT|wxALL, 5);



	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer10, 1, wxGROW | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer11, 1, wxGROW | wxTOP | wxBOTTOM, 5);

	wxPanel* itemPanel12 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	itemPanel12->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel12->SetBackgroundColour(wxColour(192, 192, 192));
	itemBoxSizer11->Add(itemPanel12, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemPanel12->SetSizer(itemBoxSizer13);

	wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer14, 0, wxGROW | wxALL, 3);

	wxStaticText* itemStaticText15 = new wxStaticText(itemPanel12, wxID_STATIC, _("Weather"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText15->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer14->Add(itemBoxSizer16, 1, wxGROW | wxALL, 0);

	wxArrayString itemChoice17Strings;
	itemChoice17Strings.Add(_("Auto"));
	itemChoice17Strings.Add(_("Sunny"));
	itemChoice17Strings.Add(_("Fine"));
	itemChoice17Strings.Add(_("Cloudy"));
	itemChoice17Strings.Add(_("Night"));
	itemChoice17Strings.Add(_("User Setting"));
	wxChoice* itemChoice17 = new wxChoice(itemPanel12, ID_CHOICE_WEATHER, wxDefaultPosition, wxDefaultSize, itemChoice17Strings, 0);
	itemChoice17->SetStringSelection(_("Auto"));
	itemChoice17->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer16->Add(itemChoice17, 1, wxALIGN_RIGHT | wxALL, 0);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer18, 0, wxGROW | wxALL, 3);

	wxStaticText* itemStaticText19 = new wxStaticText(itemPanel12, wxID_STATIC, _("Gain"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText19->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer18->Add(itemStaticText19, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	m_sliderGain = new wxSlider(itemPanel12, ID_SLIDER_GAIN, 0, 0, 1000, wxDefaultPosition, wxDefaultSize, wxSL_TOP | wxSL_SELRANGE);
	m_sliderGain->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer18->Add(m_sliderGain, 1, wxGROW | wxALL, 0);

	m_textGain = new wxStaticText(itemPanel12, wxID_STATIC, wxString::Format("%.1fdb", GAIN_MIN), wxDefaultPosition, wxSize(80, -1), 0);
	m_textGain->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer18->Add(m_textGain, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer21, 0, wxGROW | wxALL, 3);

	wxStaticText* itemStaticText22 = new wxStaticText(itemPanel12, wxID_STATIC, _("Shutter Speed "), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText22->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer21->Add(itemStaticText22, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer21->Add(itemBoxSizer23, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxArrayString itemChoice24Strings;
	itemChoice24Strings.Add(_("0.2ms"));
	itemChoice24Strings.Add(_("0.5ms"));
	itemChoice24Strings.Add(_("1 ms"));
	itemChoice24Strings.Add(_("2 ms"));
	itemChoice24Strings.Add(_("3 ms"));
	itemChoice24Strings.Add(_("4 ms"));
	m_choiceShutterSpeed = new wxChoice(itemPanel12, ID_CHOICE_SHUTTERSPEED, wxDefaultPosition, wxSize(100, -1), itemChoice24Strings, 0);
	m_choiceShutterSpeed->SetStringSelection(_("2 ms"));
	m_choiceShutterSpeed->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer23->Add(m_choiceShutterSpeed, 0, wxALIGN_RIGHT | wxALL, 0);

	wxBoxSizer* itemBoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer25, 0, wxGROW | wxALL, 3);

	wxStaticText* itemStaticText26 = new wxStaticText(itemPanel12, wxID_STATIC, _("S/W Zoom"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText26->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer25->Add(itemStaticText26, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer25->Add(itemBoxSizer27, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxArrayString itemChoice28Strings;
	itemChoice28Strings.Add(_("On"));
	itemChoice28Strings.Add(_("Off"));
	wxChoice* itemChoice28 = new wxChoice(itemPanel12, ID_CHOICE_ZOOM, wxDefaultPosition, wxSize(100, -1), itemChoice28Strings, 0);
	itemChoice28->SetStringSelection(_("On"));
	itemChoice28->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer27->Add(itemChoice28, 0, wxALIGN_RIGHT | wxALL, 0);

	wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer29, 0, wxGROW | wxALL, 3);

	wxStaticText* itemStaticText30 = new wxStaticText(itemPanel12, wxID_STATIC, _("Capture Test"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText30->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
	itemBoxSizer29->Add(itemStaticText30, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer29->Add(itemBoxSizer31, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxArrayString itemChoice32Strings;
	itemChoice32Strings.Add(_("On"));
	itemChoice32Strings.Add(_("Off"));
	wxChoice* itemChoice32 = new wxChoice(itemPanel12, ID_CHOICE_CAPTURETEST, wxDefaultPosition, wxSize(100, -1), itemChoice32Strings, 0);
	itemChoice32->SetStringSelection(_("On"));
	itemChoice32->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer31->Add(itemChoice32, 0, wxALIGN_RIGHT | wxALL, 0);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer13->Add(itemBoxSizer33, 1, wxALIGN_CENTER_HORIZONTAL | wxTOP, 10);

	cBitmap3Button* itemButton34 = new cBitmap3Button(itemPanel12, ID_BUTTON_OK, _("ref_img/BTN_OK.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton34, 0, wxALIGN_BOTTOM | wxALL, 5);

	cBitmap3Button* itemButton35 = new cBitmap3Button(itemPanel12, ID_BUTTON_CANCEL, _("ref_img/BTN_CANCEL.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton35, 0, wxALIGN_BOTTOM | wxALL, 5);

	wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer36, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer36->Add(itemBoxSizer37, 0, wxGROW | wxTOP, 5);

	m_textCaptureDistance = new wxStaticText(itemPanel1, wxID_STATIC, _("  Capture Distance"), wxDefaultPosition, wxDefaultSize, 0);
	m_textCaptureDistance->SetForegroundColour(wxColour(255, 255, 255));
	m_textCaptureDistance->SetBackgroundColour(wxColour(0, 128, 128));
	m_textCaptureDistance->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
	itemBoxSizer37->Add(m_textCaptureDistance, 1, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer39 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer36->Add(itemBoxSizer39, 1, wxGROW | wxBOTTOM, 5);

	cMoviePanel* itemPanel40 = new cMoviePanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(360, 288));
	itemPanel40->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel40->m_GotoNextPanel = PANEL_CAMERAFULL;
	itemBoxSizer39->Add(itemPanel40, 1, wxGROW | wxALL, 0);


	/////////////////////////////////////////////////////////////////////////////
	m_sliderGain->Enable(false);
	m_choiceShutterSpeed->Enable(false);


}

cCameraSetPanel::~cCameraSetPanel()
{

}


void cCameraSetPanel::OnButtonOK(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
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


/*!
* wxEVT_SCROLL_CHANGED event handler for ID_SLIDER_GAIN
*/
void cCameraSetPanel::OnSliderGainScrollChanged(wxScrollEvent& event)
{
	// 이득 범위 설정
	// -5.63db ~ 24.0db
	const float interval = fabs(GAIN_MAX - GAIN_MIN);
	const float gain = interval * ((float)event.GetSelection() / 1000.f);
	m_gain = gain + GAIN_MIN;

	m_textGain->SetLabel(wxString::Format("%.1fdb", m_gain));
	event.Skip();
}


/*!
* wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CHOICE_WEATHER
*/
void cCameraSetPanel::OnChoiceWeatherSelected(wxCommandEvent& event)
{
	event.Skip();

	m_weather = (WEATHER::TYPE) event.GetSelection();

	switch (event.GetSelection())
	{
	case WEATHER::AUTO:
	case WEATHER::SUNNY:
	case WEATHER::CLOUDY:
	case WEATHER::FINE:
	case WEATHER::NIGHT:
		if (m_sliderGain)
			m_sliderGain->Enable(false);
		if (m_choiceShutterSpeed)
			m_choiceShutterSpeed->Enable(false);
		break;

	case WEATHER::USERSET:
		if (m_sliderGain)
			m_sliderGain->Enable(true);
		if (m_choiceShutterSpeed)
			m_choiceShutterSpeed->Enable(true);
		break;

	default:
		break;
	}
}


void cCameraSetPanel::OnChoiceShutterSpeedSelected(wxCommandEvent& event)
{
	const float shutterSpeedTable[] = {0.2f, 0.5f, 1, 2, 3, 4,};

	m_shutterSpeed = shutterSpeedTable[event.GetSelection()];
}


void cCameraSetPanel::OnChoiceSWZoomSelected(wxCommandEvent& event)
{
	m_isZoom = (event.GetSelection() == 0) ? true : false;
}


void cCameraSetPanel::OnChoiceCaptureTestSelected(wxCommandEvent& event)
{
	m_isCaptureTest = (event.GetSelection() == 0) ? true : false;
}
