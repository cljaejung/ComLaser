/////////////////////////////////////////////////////////////////////////////
// Name:        cenforcementsetpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:08:33
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cenforcementsetpanel.h"
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

#include "cenforcementsetpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cEnforcementSetPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cEnforcementSetPanel, wxPanel )


/*!
 * cEnforcementSetPanel event table definition
 */

BEGIN_EVENT_TABLE( cEnforcementSetPanel, wxPanel )

////@begin cEnforcementSetPanel event table entries
////@end cEnforcementSetPanel event table entries

END_EVENT_TABLE()


/*!
 * cEnforcementSetPanel constructors
 */

cEnforcementSetPanel::cEnforcementSetPanel()
{
    Init();
}

cEnforcementSetPanel::cEnforcementSetPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cEnforcementSetPanel creator
 */

bool cEnforcementSetPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cEnforcementSetPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cEnforcementSetPanel creation
    return true;
}


/*!
 * cEnforcementSetPanel destructor
 */

cEnforcementSetPanel::~cEnforcementSetPanel()
{
////@begin cEnforcementSetPanel destruction
////@end cEnforcementSetPanel destruction
}


/*!
 * Member initialisation
 */

void cEnforcementSetPanel::Init()
{
////@begin cEnforcementSetPanel member initialisation
    m_UnitChoice = NULL;
////@end cEnforcementSetPanel member initialisation
}


/*!
 * Control creation for cEnforcementSetPanel
 */

void cEnforcementSetPanel::CreateControls()
{    
////@begin cEnforcementSetPanel content construction
    cEnforcementSetPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM|wxALL, 5);

    wxStaticText* itemStaticText7 = new wxStaticText( itemPanel1, wxID_STATIC, _("Enforcement Setting"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Consolas")));
    itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW|wxLEFT|wxTOP|wxBOTTOM, 5);

    wxStaticText* itemStaticText9 = new wxStaticText( itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText9->SetForegroundColour(wxColour(255, 255, 255));
    itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW|wxRIGHT|wxTOP|wxBOTTOM, 5);

    wxStaticBitmap* itemStaticBitmap11 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW|wxLEFT|wxRIGHT|wxBOTTOM, 30);

    wxPanel* itemPanel13 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel13->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel13->SetBackgroundColour(wxColour(192, 192, 192));
    itemBoxSizer12->Add(itemPanel13, 1, wxGROW, 0);

    wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    itemPanel13->SetSizer(itemBoxSizer14);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer14->Add(itemBoxSizer15, 1, wxGROW, 5);

    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer16, 0, wxGROW|wxALL, 8);

    wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer16->Add(itemBoxSizer17, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 0);

    wxStaticText* itemStaticText18 = new wxStaticText( itemPanel13, wxID_STATIC, _("Location"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText18->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_LEFT|wxALL, 5);

    wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer16->Add(itemBoxSizer19, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxArrayString itemComboBox20Strings;
    itemComboBox20Strings.Add(_("19. Ojeongeop-gil, Uiwang-si"));
    wxComboBox* itemComboBox20 = new wxComboBox( itemPanel13, ID_COMBOBOX_LOCATION, _("19. Ojeongeop-gil, Uiwang-si"), wxDefaultPosition, wxDefaultSize, itemComboBox20Strings, wxCB_DROPDOWN );
    itemComboBox20->SetStringSelection(_("19. Ojeongeop-gil, Uiwang-si"));
    itemComboBox20->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer19->Add(itemComboBox20, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer16->Add(itemBoxSizer21, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxButton* itemButton22 = new wxButton( itemPanel13, ID_BUTTON_LOCKEY, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer21->Add(itemButton22, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer23, 0, wxGROW|wxALL, 8);

    wxStaticText* itemStaticText24 = new wxStaticText( itemPanel13, wxID_STATIC, _("Limit Speed"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText24->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer23->Add(itemStaticText24, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl25 = new wxTextCtrl( itemPanel13, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemTextCtrl25->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer23->Add(itemTextCtrl25, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton26 = new wxButton( itemPanel13, ID_BUTTON_LIMITSPEED, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer23->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText27 = new wxStaticText( itemPanel13, wxID_STATIC, _("Unit"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText27->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer23->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString m_UnitChoiceStrings;
    m_UnitChoiceStrings.Add(_("KMH (km/h)"));
    m_UnitChoiceStrings.Add(_("MPH (mph)"));
    m_UnitChoice = new wxChoice( itemPanel13, ID_CHOICE_UNIT, wxDefaultPosition, wxDefaultSize, m_UnitChoiceStrings, 0 );
    m_UnitChoice->SetStringSelection(_("KMH (km/h)"));
    m_UnitChoice->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer23->Add(m_UnitChoice, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer29, 0, wxGROW|wxALL, 8);

    wxStaticText* itemStaticText30 = new wxStaticText( itemPanel13, wxID_STATIC, _("Capture Speed"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText30->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer29->Add(itemStaticText30, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl31 = new wxTextCtrl( itemPanel13, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemTextCtrl31->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer29->Add(itemTextCtrl31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton32 = new wxButton( itemPanel13, ID_BUTTON_CAPTURESPEED, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer29->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer33, 0, wxGROW|wxALL, 8);

    wxStaticText* itemStaticText34 = new wxStaticText( itemPanel13, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText34->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer33->Add(itemStaticText34, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl35 = new wxTextCtrl( itemPanel13, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemTextCtrl35->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer33->Add(itemTextCtrl35, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton36 = new wxButton( itemPanel13, ID_BUTTON_CAPTUREDISTANCE, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer33->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxButton* itemButton38 = new wxButton( itemPanel13, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(itemButton38, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton39 = new wxButton( itemPanel13, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(itemButton39, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer40 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer40, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton41 = new wxButton( itemPanel1, ID_BUTTON, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton41, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton42 = new wxButton( itemPanel1, ID_BUTTON1, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton42, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton43 = new wxButton( itemPanel1, ID_BUTTON2, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton43, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton44 = new wxButton( itemPanel1, ID_BUTTON3, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton44, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton45 = new wxButton( itemPanel1, ID_BUTTON4, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton45, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton46 = new wxButton( itemPanel1, ID_BUTTON5, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton46, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton47 = new wxButton( itemPanel1, ID_BUTTON6, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton47, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end cEnforcementSetPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cEnforcementSetPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cEnforcementSetPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cEnforcementSetPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cEnforcementSetPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cEnforcementSetPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cEnforcementSetPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cEnforcementSetPanel icon retrieval
}
