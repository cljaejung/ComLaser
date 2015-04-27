/////////////////////////////////////////////////////////////////////////////
// Name:        cmoviepanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 19:03:17
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cmoviepanel.h"
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

#include "cmoviepanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cMoviePanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cMoviePanel, wxPanel )


/*!
 * cMoviePanel event table definition
 */

BEGIN_EVENT_TABLE( cMoviePanel, wxPanel )

////@begin cMoviePanel event table entries
    EVT_PAINT( cMoviePanel::OnPaint )
    EVT_ERASE_BACKGROUND( cMoviePanel::OnEraseBackground )
////@end cMoviePanel event table entries

END_EVENT_TABLE()


/*!
 * cMoviePanel constructors
 */

cMoviePanel::cMoviePanel()
{
    Init();
}

cMoviePanel::cMoviePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cMoviePanel creator
 */

bool cMoviePanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cMoviePanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cMoviePanel creation
    return true;
}


/*!
 * cMoviePanel destructor
 */

cMoviePanel::~cMoviePanel()
{
////@begin cMoviePanel destruction
////@end cMoviePanel destruction
}


/*!
 * Member initialisation
 */

void cMoviePanel::Init()
{
////@begin cMoviePanel member initialisation
////@end cMoviePanel member initialisation
}


/*!
 * Control creation for cMoviePanel
 */

void cMoviePanel::CreateControls()
{    
////@begin cMoviePanel content construction
    cMoviePanel* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 0);

////@end cMoviePanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cMoviePanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cMoviePanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cMoviePanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cMoviePanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cMoviePanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cMoviePanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cMoviePanel icon retrieval
}


/*!
 * wxEVT_IDLE event handler for wxID_STATIC
 */

void cMoviePanel::OnIdle( wxIdleEvent& event )
{
////@begin wxEVT_IDLE event handler for wxID_STATIC in cMoviePanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_IDLE event handler for wxID_STATIC in cMoviePanel. 
}


/*!
 * wxEVT_ERASE_BACKGROUND event handler for wxID_STATIC
 */

void cMoviePanel::OnEraseBackground( wxEraseEvent& event )
{
////@begin wxEVT_ERASE_BACKGROUND event handler for wxID_STATIC in cMoviePanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_ERASE_BACKGROUND event handler for wxID_STATIC in cMoviePanel. 
}


/*!
 * wxEVT_PAINT event handler for ID_CMOVIEPANEL
 */

void cMoviePanel::OnPaint( wxPaintEvent& event )
{
////@begin wxEVT_PAINT event handler for ID_CMOVIEPANEL in cMoviePanel.
    // Before editing this code, remove the block markers.
    wxPaintDC dc(this);
////@end wxEVT_PAINT event handler for ID_CMOVIEPANEL in cMoviePanel. 
}

