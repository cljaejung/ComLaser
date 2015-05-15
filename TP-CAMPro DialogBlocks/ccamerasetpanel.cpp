/////////////////////////////////////////////////////////////////////////////
// Name:        ccamerasetpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:07:59
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "ccamerasetpanel.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "ccamerasetpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cCameraSetPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cCameraSetPanel, wxPanel )


/*!
 * cCameraSetPanel event table definition
 */

BEGIN_EVENT_TABLE( cCameraSetPanel, wxPanel )

////@begin cCameraSetPanel event table entries
    EVT_CHOICE( ID_CHOICE_WEATHER, cCameraSetPanel::OnChoiceWeatherSelected )
    EVT_COMMAND_SCROLL_CHANGED( ID_SLIDER_GAIN, cCameraSetPanel::OnSliderGainScrollChanged )
////@end cCameraSetPanel event table entries

END_EVENT_TABLE()


/*!
 * cCameraSetPanel constructors
 */

cCameraSetPanel::cCameraSetPanel()
{
    Init();
}

cCameraSetPanel::cCameraSetPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cCameraSetPanel creator
 */

bool cCameraSetPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cCameraSetPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cCameraSetPanel creation
    return true;
}


/*!
 * cCameraSetPanel destructor
 */

cCameraSetPanel::~cCameraSetPanel()
{
////@begin cCameraSetPanel destruction
////@end cCameraSetPanel destruction
}


/*!
 * Member initialisation
 */

void cCameraSetPanel::Init()
{
////@begin cCameraSetPanel member initialisation
    m_gainSlider = NULL;
    m_textGain = NULL;
    m_choiceShutterSpeed = NULL;
    m_textCaptureDistance = NULL;
////@end cCameraSetPanel member initialisation
}


/*!
 * Control creation for cCameraSetPanel
 */

void cCameraSetPanel::CreateControls()
{    
////@begin cCameraSetPanel content construction
    cCameraSetPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticBitmap* itemStaticBitmap4 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticBitmap4, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticText* itemStaticText5 = new wxStaticText( itemPanel1, wxID_STATIC, _("Camera Setting"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText5->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText5->SetFont(wxFont(22, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_BOTTOM|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer6, 1, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticText* itemStaticText7 = new wxStaticText( itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
    itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_RIGHT|wxLEFT|wxTOP|wxBOTTOM, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer8, 0, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticBitmap* itemStaticBitmap9 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer8->Add(itemStaticBitmap9, 0, wxALIGN_RIGHT|wxRIGHT|wxTOP|wxBOTTOM, 5);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer10, 1, wxGROW|wxLEFT|wxRIGHT|wxBOTTOM, 5);

    wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer10->Add(itemBoxSizer11, 1, wxGROW|wxTOP|wxBOTTOM, 5);

    wxPanel* itemPanel12 = new wxPanel( itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel12->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel12->SetBackgroundColour(wxColour(192, 192, 192));
    itemBoxSizer11->Add(itemPanel12, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemPanel12->SetSizer(itemBoxSizer13);

    wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer14, 0, wxGROW|wxALL, 3);

    wxStaticText* itemStaticText15 = new wxStaticText( itemPanel12, wxID_STATIC, _("Weather"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText15->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer14->Add(itemBoxSizer16, 1, wxGROW|wxALL, 0);

    wxArrayString itemChoice17Strings;
    itemChoice17Strings.Add(_("Auto"));
    itemChoice17Strings.Add(_("Sunny"));
    itemChoice17Strings.Add(_("Fine"));
    itemChoice17Strings.Add(_("Cloudy"));
    itemChoice17Strings.Add(_("Night"));
    itemChoice17Strings.Add(_("User Setting"));
    wxChoice* itemChoice17 = new wxChoice( itemPanel12, ID_CHOICE_WEATHER, wxDefaultPosition, wxDefaultSize, itemChoice17Strings, 0 );
    itemChoice17->SetStringSelection(_("Auto"));
    itemChoice17->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer16->Add(itemChoice17, 1, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer18, 0, wxGROW|wxALL, 3);

    wxStaticText* itemStaticText19 = new wxStaticText( itemPanel12, wxID_STATIC, _("Gain"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText19->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer18->Add(itemStaticText19, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    m_gainSlider = new wxSlider( itemPanel12, ID_SLIDER_GAIN, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_TOP|wxSL_SELRANGE );
    m_gainSlider->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer18->Add(m_gainSlider, 1, wxGROW|wxALL, 0);

    m_textGain = new wxStaticText( itemPanel12, wxID_STATIC, _("Static text"), wxDefaultPosition, wxSize(60, -1), 0 );
    m_textGain->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer18->Add(m_textGain, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer22, 0, wxGROW|wxALL, 3);

    wxStaticText* itemStaticText23 = new wxStaticText( itemPanel12, wxID_STATIC, _("Shutter Speed "), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText23->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer22->Add(itemStaticText23, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer22->Add(itemBoxSizer24, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxArrayString m_choiceShutterSpeedStrings;
    m_choiceShutterSpeedStrings.Add(_("0.1ms"));
    m_choiceShutterSpeedStrings.Add(_("0.2ms"));
    m_choiceShutterSpeedStrings.Add(_("0.5ms"));
    m_choiceShutterSpeedStrings.Add(_("1 ms"));
    m_choiceShutterSpeedStrings.Add(_("2 ms"));
    m_choiceShutterSpeedStrings.Add(_("3 ms"));
    m_choiceShutterSpeedStrings.Add(_("4 ms"));
    m_choiceShutterSpeed = new wxChoice( itemPanel12, ID_CHOICE_SHUTTERSPEED, wxDefaultPosition, wxSize(100, -1), m_choiceShutterSpeedStrings, 0 );
    m_choiceShutterSpeed->SetStringSelection(_("2 ms"));
    m_choiceShutterSpeed->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer24->Add(m_choiceShutterSpeed, 0, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer26, 0, wxGROW|wxALL, 3);

    wxStaticText* itemStaticText27 = new wxStaticText( itemPanel12, wxID_STATIC, _("S/W Zoom"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText27->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer26->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer26->Add(itemBoxSizer28, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxArrayString itemChoice29Strings;
    itemChoice29Strings.Add(_("On"));
    itemChoice29Strings.Add(_("Off"));
    wxChoice* itemChoice29 = new wxChoice( itemPanel12, ID_CHOICE_ZOOM, wxDefaultPosition, wxSize(100, -1), itemChoice29Strings, 0 );
    itemChoice29->SetStringSelection(_("On"));
    itemChoice29->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer28->Add(itemChoice29, 0, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer30, 0, wxALIGN_RIGHT|wxALL, 3);

    wxButton* itemButton31 = new wxButton( itemPanel12, ID_BUTTON_CAPTURETEST, _("CaptureTest"), wxDefaultPosition, wxDefaultSize, 0 );
    itemButton31->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer30->Add(itemButton31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer32 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer32, 1, wxALIGN_CENTER_HORIZONTAL|wxTOP, 10);

    wxButton* itemButton33 = new wxButton( itemPanel12, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer32->Add(itemButton33, 0, wxALIGN_BOTTOM|wxALL, 5);

    wxButton* itemButton34 = new wxButton( itemPanel12, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer32->Add(itemButton34, 0, wxALIGN_BOTTOM|wxALL, 5);

    wxBoxSizer* itemBoxSizer35 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer10->Add(itemBoxSizer35, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer35->Add(itemBoxSizer36, 0, wxGROW|wxTOP, 5);

    wxPanel* itemPanel37 = new wxPanel( itemPanel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel37->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel37->SetBackgroundColour(wxColour(0, 128, 128));
    itemBoxSizer36->Add(itemPanel37, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer38 = new wxBoxSizer(wxVERTICAL);
    itemPanel37->SetSizer(itemBoxSizer38);

    m_textCaptureDistance = new wxStaticText( itemPanel37, wxID_STATIC, _("  Capture Distance"), wxDefaultPosition, wxDefaultSize, 0 );
    m_textCaptureDistance->SetForegroundColour(wxColour(255, 255, 255));
    m_textCaptureDistance->SetBackgroundColour(wxColour(0, 128, 128));
    m_textCaptureDistance->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer38->Add(m_textCaptureDistance, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer40 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer35->Add(itemBoxSizer40, 1, wxGROW|wxBOTTOM, 5);

    wxPanel* itemPanel41 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(350, 288), wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel41->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer40->Add(itemPanel41, 1, wxGROW|wxALL, 0);

////@end cCameraSetPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cCameraSetPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cCameraSetPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cCameraSetPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cCameraSetPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cCameraSetPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cCameraSetPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cCameraSetPanel icon retrieval
}


/*!
 * wxEVT_SCROLL_CHANGED event handler for ID_SLIDER_GAIN
 */

void cCameraSetPanel::OnSliderGainScrollChanged( wxScrollEvent& event )
{
////@begin wxEVT_SCROLL_CHANGED event handler for ID_SLIDER_GAIN in cCameraSetPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_SCROLL_CHANGED event handler for ID_SLIDER_GAIN in cCameraSetPanel. 
}


/*!
 * wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CHOICE_WEATHER
 */

void cCameraSetPanel::OnChoiceWeatherSelected( wxCommandEvent& event )
{
////@begin wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CHOICE_WEATHER in cCameraSetPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CHOICE_WEATHER in cCameraSetPanel. 
}

