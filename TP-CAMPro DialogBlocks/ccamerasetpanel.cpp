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
    itemBoxSizer10->Add(itemBoxSizer11, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxPanel* itemPanel12 = new wxPanel( itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel12->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel12->SetBackgroundColour(wxColour(192, 192, 192));
    itemBoxSizer11->Add(itemPanel12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemPanel12->SetSizer(itemBoxSizer13);

    wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer14, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText15 = new wxStaticText( itemPanel12, wxID_STATIC, _("Weather"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText15->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString itemChoice16Strings;
    itemChoice16Strings.Add(_("Auto"));
    itemChoice16Strings.Add(_("Sunny"));
    itemChoice16Strings.Add(_("Fine"));
    itemChoice16Strings.Add(_("Cloudy"));
    itemChoice16Strings.Add(_("Night"));
    itemChoice16Strings.Add(_("User Setting"));
    wxChoice* itemChoice16 = new wxChoice( itemPanel12, ID_CHOICE_WEATHER, wxDefaultPosition, wxDefaultSize, itemChoice16Strings, 0 );
    itemChoice16->SetStringSelection(_("Auto"));
    itemChoice16->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer14->Add(itemChoice16, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer17, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText18 = new wxStaticText( itemPanel12, wxID_STATIC, _("Gain"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText18->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxSlider* itemSlider19 = new wxSlider( itemPanel12, ID_SLIDER_GAIN, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    itemSlider19->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer17->Add(itemSlider19, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer20, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText21 = new wxStaticText( itemPanel12, wxID_STATIC, _("Shutter Speed"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText21->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer20->Add(itemStaticText21, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString itemChoice22Strings;
    itemChoice22Strings.Add(_("2 ms"));
    itemChoice22Strings.Add(_("3 ms"));
    itemChoice22Strings.Add(_("4 ms"));
    itemChoice22Strings.Add(_("5 ms"));
    wxChoice* itemChoice22 = new wxChoice( itemPanel12, ID_CHOICE_SHUTTERSPEED, wxDefaultPosition, wxDefaultSize, itemChoice22Strings, 0 );
    itemChoice22->SetStringSelection(_("2 ms"));
    itemChoice22->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer20->Add(itemChoice22, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer23, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText24 = new wxStaticText( itemPanel12, wxID_STATIC, _("S/W Zoom"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText24->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer23->Add(itemStaticText24, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString itemChoice25Strings;
    itemChoice25Strings.Add(_("On"));
    itemChoice25Strings.Add(_("Off"));
    wxChoice* itemChoice25 = new wxChoice( itemPanel12, ID_CHOICE_ZOOM, wxDefaultPosition, wxDefaultSize, itemChoice25Strings, 0 );
    itemChoice25->SetStringSelection(_("On"));
    itemChoice25->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer23->Add(itemChoice25, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer26, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText27 = new wxStaticText( itemPanel12, wxID_STATIC, _("Capture Test"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText27->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer26->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString itemChoice28Strings;
    itemChoice28Strings.Add(_("On"));
    itemChoice28Strings.Add(_("Off"));
    wxChoice* itemChoice28 = new wxChoice( itemPanel12, ID_CHOICE_CAPTURETEST, wxDefaultPosition, wxDefaultSize, itemChoice28Strings, 0 );
    itemChoice28->SetStringSelection(_("On"));
    itemChoice28->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer26->Add(itemChoice28, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer29, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxButton* itemButton30 = new wxButton( itemPanel12, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer29->Add(itemButton30, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton31 = new wxButton( itemPanel12, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer29->Add(itemButton31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer32 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer10->Add(itemBoxSizer32, 1, wxGROW|wxLEFT|wxRIGHT, 5);

    wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer32->Add(itemBoxSizer33, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText34 = new wxStaticText( itemPanel1, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText34->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText34->SetBackgroundColour(wxColour(0, 128, 128));
    itemStaticText34->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer33->Add(itemStaticText34, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer35 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer32->Add(itemBoxSizer35, 1, wxGROW|wxALL, 0);

    wxPanel* itemPanel36 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(350, 288), wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel36->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer35->Add(itemPanel36, 1, wxGROW|wxALL, 0);

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
