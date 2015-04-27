/////////////////////////////////////////////////////////////////////////////
// Name:        cmediapanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 18:46:59
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cmediapanel.h"
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

#include "cmediapanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cMediaPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cMediaPanel, wxPanel )


/*!
 * cMediaPanel event table definition
 */

BEGIN_EVENT_TABLE( cMediaPanel, wxPanel )

////@begin cMediaPanel event table entries
////@end cMediaPanel event table entries

END_EVENT_TABLE()


/*!
 * cMediaPanel constructors
 */

cMediaPanel::cMediaPanel()
{
    Init();
}

cMediaPanel::cMediaPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cMediaPanel creator
 */

bool cMediaPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cMediaPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cMediaPanel creation
    return true;
}


/*!
 * cMediaPanel destructor
 */

cMediaPanel::~cMediaPanel()
{
////@begin cMediaPanel destruction
////@end cMediaPanel destruction
}


/*!
 * Member initialisation
 */

void cMediaPanel::Init()
{
////@begin cMediaPanel member initialisation
////@end cMediaPanel member initialisation
}


/*!
 * Control creation for cMediaPanel
 */

void cMediaPanel::CreateControls()
{    
////@begin cMediaPanel content construction
    cMediaPanel* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxMediaCtrl* itemMediaCtrl3 = new wxMediaCtrl( itemPanel1, ID_MEDIACTRL, wxEmptyString, wxDefaultPosition, wxSize(100, 100), wxNO_BORDER );
    itemBoxSizer2->Add(itemMediaCtrl3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

////@end cMediaPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cMediaPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cMediaPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cMediaPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cMediaPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cMediaPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cMediaPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cMediaPanel icon retrieval
}
