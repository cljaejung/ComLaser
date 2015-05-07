/////////////////////////////////////////////////////////////////////////////
// Name:        cloginpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     16/04/2015 18:01:30
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 16/04/2015 18:01:30

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cloginpanel.h"
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

#include "cloginpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cLoginPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cLoginPanel, wxPanel )


/*!
 * cLoginPanel event table definition
 */

BEGIN_EVENT_TABLE( cLoginPanel, wxPanel )

////@begin cLoginPanel event table entries
////@end cLoginPanel event table entries

END_EVENT_TABLE()


/*!
 * cLoginPanel constructors
 */

cLoginPanel::cLoginPanel()
{
    Init();
}

cLoginPanel::cLoginPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cLoginPanel creator
 */

bool cLoginPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cLoginPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cLoginPanel creation
    return true;
}


/*!
 * cLoginPanel destructor
 */

cLoginPanel::~cLoginPanel()
{
////@begin cLoginPanel destruction
////@end cLoginPanel destruction
}


/*!
 * Member initialisation
 */

void cLoginPanel::Init()
{
////@begin cLoginPanel member initialisation
    m_textDeviceID = NULL;
    m_comboUserName = NULL;
    m_textPassWord = NULL;
////@end cLoginPanel member initialisation
}


/*!
 * Control creation for cLoginPanel
 */

void cLoginPanel::CreateControls()
{    
////@begin cLoginPanel content construction
    cLoginPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticText* itemStaticText5 = new wxStaticText( itemPanel1, wxID_STATIC, _("TP-CAM Pro\nVER 1.50A"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText5->SetForegroundColour(wxColour(255, 128, 0));
    itemStaticText5->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_LEFT|wxALL, 5);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer6, 1, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticBitmap* itemStaticBitmap7 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer6->Add(itemStaticBitmap7, 1, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer8, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer8->Add(itemBoxSizer9, 1, wxGROW|wxLEFT, 50);

    wxPanel* itemPanel10 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel10->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel10->SetBackgroundColour(wxColour(192, 192, 192));
    itemBoxSizer9->Add(itemPanel10, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    itemPanel10->SetSizer(itemBoxSizer11);

    wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer11->Add(itemBoxSizer12, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer14, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText15 = new wxStaticText( itemPanel10, wxID_STATIC, _("Calendar"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer16, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText17 = new wxStaticText( itemPanel10, wxID_STATIC, _("Device ID"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText17->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer16->Add(itemStaticText17, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer16->Add(itemBoxSizer18, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    m_textDeviceID = new wxTextCtrl( itemPanel10, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxSize(300, -1), wxTE_READONLY );
    m_textDeviceID->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer18->Add(m_textDeviceID, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer20, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText21 = new wxStaticText( itemPanel10, wxID_STATIC, _("User Name"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText21->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer20->Add(itemStaticText21, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer20->Add(itemBoxSizer22, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxArrayString m_comboUserNameStrings;
    m_comboUserName = new wxComboBox( itemPanel10, ID_COMBOBOX, wxEmptyString, wxDefaultPosition, wxSize(270, 32), m_comboUserNameStrings, wxCB_DROPDOWN );
    m_comboUserName->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer22->Add(m_comboUserName, 0, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer20->Add(itemBoxSizer24, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton25 = new wxButton( itemPanel10, ID_BUTTON_USERNAME, _("Button"), wxDefaultPosition, wxSize(32, 32), 0 );
    itemBoxSizer24->Add(itemButton25, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 1);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer13->Add(itemBoxSizer26, 0, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText27 = new wxStaticText( itemPanel10, wxID_STATIC, _("Password"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText27->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));
    itemBoxSizer26->Add(itemStaticText27, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer26->Add(itemBoxSizer28, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    m_textPassWord = new wxTextCtrl( itemPanel10, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(270, -1), 0 );
    m_textPassWord->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer28->Add(m_textPassWord, 1, wxALIGN_RIGHT|wxALL, 0);

    wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer26->Add(itemBoxSizer30, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton31 = new wxButton( itemPanel10, ID_BUTTON_PASSWORD, _("Keyboard"), wxDefaultPosition, wxSize(32, 32), 0 );
    itemBoxSizer30->Add(itemButton31, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer32 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer12->Add(itemBoxSizer32, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap33 = new wxStaticBitmap( itemPanel10, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer32->Add(itemStaticBitmap33, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer34 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer8->Add(itemBoxSizer34, 0, wxALIGN_BOTTOM|wxLEFT|wxRIGHT|wxTOP, 5);

    wxButton* itemButton35 = new wxButton( itemPanel1, ID_BUTTON_START, _("Start"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer34->Add(itemButton35, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton36 = new wxButton( itemPanel1, ID_BUTTON_EXIT, _("Exit"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer34->Add(itemButton36, 0, wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxPanel* itemPanel38 = new wxPanel( itemPanel1, ID_PANEL1, wxDefaultPosition, wxSize(-1, 20), wxTAB_TRAVERSAL );
    itemPanel38->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel38->SetBackgroundColour(wxColour(0, 0, 0));
    itemBoxSizer37->Add(itemPanel38, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

////@end cLoginPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cLoginPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cLoginPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cLoginPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cLoginPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cLoginPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cLoginPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cLoginPanel icon retrieval
}
