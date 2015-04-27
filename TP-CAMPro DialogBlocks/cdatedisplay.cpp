/////////////////////////////////////////////////////////////////////////////
// Name:        cdatedisplay.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     21/04/2015 12:44:04
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cdatedisplay.h"
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

#include "cdatedisplay.h"

////@begin XPM images
////@end XPM images


/*!
 * cDateDisplay type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cDateDisplay, wxPanel )


/*!
 * cDateDisplay event table definition
 */

BEGIN_EVENT_TABLE( cDateDisplay, wxPanel )

////@begin cDateDisplay event table entries
    EVT_LEFT_DOWN( cDateDisplay::OnLeftDown )
    EVT_LEFT_DCLICK( cDateDisplay::OnLeftDClick )
////@end cDateDisplay event table entries

END_EVENT_TABLE()


/*!
 * cDateDisplay constructors
 */

cDateDisplay::cDateDisplay()
{
    Init();
}

cDateDisplay::cDateDisplay( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cDateDisplay creator
 */

bool cDateDisplay::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cDateDisplay creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cDateDisplay creation
    return true;
}


/*!
 * cDateDisplay destructor
 */

cDateDisplay::~cDateDisplay()
{
////@begin cDateDisplay destruction
////@end cDateDisplay destruction
}


/*!
 * Member initialisation
 */

void cDateDisplay::Init()
{
////@begin cDateDisplay member initialisation
////@end cDateDisplay member initialisation
}


/*!
 * Control creation for cDateDisplay
 */

void cDateDisplay::CreateControls()
{    
////@begin cDateDisplay content construction
    cDateDisplay* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticText* itemStaticText4 = new wxStaticText( itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer5, 0, wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT|wxBOTTOM, 5);

    wxStaticText* itemStaticText6 = new wxStaticText( itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer5->Add(itemStaticText6, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT|wxBOTTOM, 5);

    wxStaticText* itemStaticText7 = new wxStaticText( itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer5->Add(itemStaticText7, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT|wxBOTTOM, 5);

    // Connect events and objects
    itemStaticText6->Connect(wxID_STATIC, wxEVT_IDLE, wxIdleEventHandler(cDateDisplay::OnIdle), NULL, this);
////@end cDateDisplay content construction
}


/*!
 * Should we show tooltips?
 */

bool cDateDisplay::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cDateDisplay::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cDateDisplay bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cDateDisplay bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cDateDisplay::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cDateDisplay icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cDateDisplay icon retrieval
}


/*!
 * wxEVT_IDLE event handler for wxID_STATIC
 */

void cDateDisplay::OnIdle( wxIdleEvent& event )
{
////@begin wxEVT_IDLE event handler for wxID_STATIC in cDateDisplay.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_IDLE event handler for wxID_STATIC in cDateDisplay. 
}


/*!
 * wxEVT_LEFT_DOWN event handler for ID_CDATEDISPLAY
 */

void cDateDisplay::OnLeftDown( wxMouseEvent& event )
{
////@begin wxEVT_LEFT_DOWN event handler for ID_CDATEDISPLAY in cDateDisplay.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_LEFT_DOWN event handler for ID_CDATEDISPLAY in cDateDisplay. 
}


/*!
 * wxEVT_LEFT_DCLICK event handler for ID_CDATEDISPLAY
 */

void cDateDisplay::OnLeftDClick( wxMouseEvent& event )
{
////@begin wxEVT_LEFT_DCLICK event handler for ID_CDATEDISPLAY in cDateDisplay.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_LEFT_DCLICK event handler for ID_CDATEDISPLAY in cDateDisplay. 
}

