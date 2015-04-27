/////////////////////////////////////////////////////////////////////////////
// Name:        cnumberpaddialog.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 23:24:16
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cnumberpaddialog.h"
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

#include "cnumberpaddialog.h"

////@begin XPM images
////@end XPM images


/*!
 * cNumberPadDialog type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cNumberPadDialog, wxDialog )


/*!
 * cNumberPadDialog event table definition
 */

BEGIN_EVENT_TABLE( cNumberPadDialog, wxDialog )

////@begin cNumberPadDialog event table entries
////@end cNumberPadDialog event table entries

END_EVENT_TABLE()


/*!
 * cNumberPadDialog constructors
 */

cNumberPadDialog::cNumberPadDialog()
{
    Init();
}

cNumberPadDialog::cNumberPadDialog( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, caption, pos, size, style);
}


/*!
 * cNumberPadDialog creator
 */

bool cNumberPadDialog::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cNumberPadDialog creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY|wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cNumberPadDialog creation
    return true;
}


/*!
 * cNumberPadDialog destructor
 */

cNumberPadDialog::~cNumberPadDialog()
{
////@begin cNumberPadDialog destruction
////@end cNumberPadDialog destruction
}


/*!
 * Member initialisation
 */

void cNumberPadDialog::Init()
{
////@begin cNumberPadDialog member initialisation
////@end cNumberPadDialog member initialisation
}


/*!
 * Control creation for cNumberPadDialog
 */

void cNumberPadDialog::CreateControls()
{    
////@begin cNumberPadDialog content construction
    cNumberPadDialog* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 0);

    wxPanel* itemPanel4 = new wxPanel( itemDialog1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel4->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer3->Add(itemPanel4, 1, wxGROW|wxALL, 0);

////@end cNumberPadDialog content construction
}


/*!
 * Should we show tooltips?
 */

bool cNumberPadDialog::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cNumberPadDialog::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cNumberPadDialog bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cNumberPadDialog bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cNumberPadDialog::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cNumberPadDialog icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cNumberPadDialog icon retrieval
}
