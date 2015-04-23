/////////////////////////////////////////////////////////////////////////////
// Name:        ckeyboarddialog.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     23/04/2015 17:47:45
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "ckeyboarddialog.h"
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

#include "ckeyboarddialog.h"

////@begin XPM images
////@end XPM images


/*!
 * cKeyboardDialog type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cKeyboardDialog, wxDialog )


/*!
 * cKeyboardDialog event table definition
 */

BEGIN_EVENT_TABLE( cKeyboardDialog, wxDialog )

////@begin cKeyboardDialog event table entries
////@end cKeyboardDialog event table entries

END_EVENT_TABLE()


/*!
 * cKeyboardDialog constructors
 */

cKeyboardDialog::cKeyboardDialog()
{
    Init();
}

cKeyboardDialog::cKeyboardDialog( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, caption, pos, size, style);
}


/*!
 * cKeyboardDialog creator
 */

bool cKeyboardDialog::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cKeyboardDialog creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY|wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cKeyboardDialog creation
    return true;
}


/*!
 * cKeyboardDialog destructor
 */

cKeyboardDialog::~cKeyboardDialog()
{
////@begin cKeyboardDialog destruction
////@end cKeyboardDialog destruction
}


/*!
 * Member initialisation
 */

void cKeyboardDialog::Init()
{
////@begin cKeyboardDialog member initialisation
////@end cKeyboardDialog member initialisation
}


/*!
 * Control creation for cKeyboardDialog
 */

void cKeyboardDialog::CreateControls()
{    
////@begin cKeyboardDialog content construction
    cKeyboardDialog* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 0);

    wxPanel* itemPanel4 = new wxPanel( itemDialog1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel4->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer3->Add(itemPanel4, 0, wxGROW|wxALL, 0);

////@end cKeyboardDialog content construction

}


/*!
 * Should we show tooltips?
 */

bool cKeyboardDialog::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cKeyboardDialog::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cKeyboardDialog bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cKeyboardDialog bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cKeyboardDialog::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cKeyboardDialog icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cKeyboardDialog icon retrieval
}
