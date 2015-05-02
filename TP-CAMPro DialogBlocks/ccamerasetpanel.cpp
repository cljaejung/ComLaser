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
    itemStaticText15->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

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
    itemStaticText19->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer18->Add(itemStaticText19, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxSlider* itemSlider20 = new wxSlider( itemPanel12, ID_SLIDER_GAIN, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_LABELS|wxSL_TOP|wxSL_SELRANGE );
    itemSlider20->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer18->Add(itemSlider20, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer21, 0, wxGROW|wxALL, 3);

    wxStaticText* itemStaticText22 = new wxStaticText( itemPanel12, wxID_STATIC, _("Shutter Speed"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText22->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer21->Add(itemStaticText22, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer21->Add(itemBoxSizer23, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxArrayString itemChoice24Strings;
    itemChoice24Strings.Add(_("2 ms"));
    itemChoice24Strings.Add(_("3 ms"));
    itemChoice24Strings.Add(_("4 ms"));
    itemChoice24Strings.Add(_("5 ms"));
    wxChoice* itemChoice24 = new wxChoice( itemPanel12, ID_CHOICE_SHUTTERSPEED, wxDefaultPosition, wxDefaultSize, itemChoice24Strings, 0 );
    itemChoice24->SetStringSelection(_("2 ms"));
    itemChoice24->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer23->Add(itemChoice24, 0, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer25, 0, wxGROW|wxALL, 3);

    wxStaticText* itemStaticText26 = new wxStaticText( itemPanel12, wxID_STATIC, _("S/W Zoom"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText26->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer25->Add(itemStaticText26, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer25->Add(itemBoxSizer27, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxArrayString itemChoice28Strings;
    itemChoice28Strings.Add(_("On"));
    itemChoice28Strings.Add(_("Off"));
    wxChoice* itemChoice28 = new wxChoice( itemPanel12, ID_CHOICE_ZOOM, wxDefaultPosition, wxDefaultSize, itemChoice28Strings, 0 );
    itemChoice28->SetStringSelection(_("On"));
    itemChoice28->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer27->Add(itemChoice28, 0, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer29, 0, wxGROW|wxALL, 3);

    wxStaticText* itemStaticText30 = new wxStaticText( itemPanel12, wxID_STATIC, _("Capture Test"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText30->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer29->Add(itemStaticText30, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer29->Add(itemBoxSizer31, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxArrayString itemChoice32Strings;
    itemChoice32Strings.Add(_("On"));
    itemChoice32Strings.Add(_("Off"));
    wxChoice* itemChoice32 = new wxChoice( itemPanel12, ID_CHOICE_CAPTURETEST, wxDefaultPosition, wxDefaultSize, itemChoice32Strings, 0 );
    itemChoice32->SetStringSelection(_("On"));
    itemChoice32->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer31->Add(itemChoice32, 0, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer33, 1, wxALIGN_CENTER_HORIZONTAL|wxTOP, 10);

    wxButton* itemButton34 = new wxButton( itemPanel12, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer33->Add(itemButton34, 0, wxALIGN_BOTTOM|wxALL, 5);

    wxButton* itemButton35 = new wxButton( itemPanel12, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer33->Add(itemButton35, 0, wxALIGN_BOTTOM|wxALL, 5);

    wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer10->Add(itemBoxSizer36, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer36->Add(itemBoxSizer37, 0, wxGROW|wxTOP, 5);

    wxStaticText* itemStaticText38 = new wxStaticText( itemPanel1, wxID_STATIC, _("  Capture Distance"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText38->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText38->SetBackgroundColour(wxColour(0, 128, 128));
    itemStaticText38->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer37->Add(itemStaticText38, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer39 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer36->Add(itemBoxSizer39, 1, wxGROW|wxBOTTOM, 5);

    wxPanel* itemPanel40 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(350, 288), wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel40->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer39->Add(itemPanel40, 1, wxGROW|wxALL, 0);

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
