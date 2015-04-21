/////////////////////////////////////////////////////////////////////////////
// Name:        cenforcementfullpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 22:00:06
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cenforcementfullpanel.h"
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

#include "cenforcementfullpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cEnforcementFullPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cEnforcementFullPanel, wxPanel )


/*!
 * cEnforcementFullPanel event table definition
 */

BEGIN_EVENT_TABLE( cEnforcementFullPanel, wxPanel )

////@begin cEnforcementFullPanel event table entries
////@end cEnforcementFullPanel event table entries

END_EVENT_TABLE()


/*!
 * cEnforcementFullPanel constructors
 */

cEnforcementFullPanel::cEnforcementFullPanel()
{
    Init();
}

cEnforcementFullPanel::cEnforcementFullPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cEnforcementFullPanel creator
 */

bool cEnforcementFullPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cEnforcementFullPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cEnforcementFullPanel creation
    return true;
}


/*!
 * cEnforcementFullPanel destructor
 */

cEnforcementFullPanel::~cEnforcementFullPanel()
{
////@begin cEnforcementFullPanel destruction
////@end cEnforcementFullPanel destruction
}


/*!
 * Member initialisation
 */

void cEnforcementFullPanel::Init()
{
////@begin cEnforcementFullPanel member initialisation
////@end cEnforcementFullPanel member initialisation
}


/*!
 * Control creation for cEnforcementFullPanel
 */

void cEnforcementFullPanel::CreateControls()
{    
////@begin cEnforcementFullPanel content construction
    cEnforcementFullPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW|wxALL, 5);

    wxPanel* itemPanel5 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel5->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer4->Add(itemPanel5, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_TOP|wxALL, 5);

    wxButton* itemButton7 = new wxButton( itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer6->Add(itemButton7, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText8 = new wxStaticText( itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText8->SetForegroundColour(wxColour(255, 255, 128));
    itemStaticText8->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer6->Add(itemStaticText8, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap9 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer6->Add(itemStaticBitmap9, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText10 = new wxStaticText( itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText10->SetForegroundColour(wxColour(255, 255, 128));
    itemStaticText10->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer6->Add(itemStaticText10, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

////@end cEnforcementFullPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cEnforcementFullPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cEnforcementFullPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cEnforcementFullPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cEnforcementFullPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cEnforcementFullPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cEnforcementFullPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cEnforcementFullPanel icon retrieval
}
