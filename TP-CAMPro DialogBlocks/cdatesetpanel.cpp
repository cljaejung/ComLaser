/////////////////////////////////////////////////////////////////////////////
// Name:        cdatesetpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:09:04
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cdatesetpanel.h"
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

#include "cdatesetpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cDateSetPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cDateSetPanel, wxPanel )


/*!
 * cDateSetPanel event table definition
 */

BEGIN_EVENT_TABLE( cDateSetPanel, wxPanel )

////@begin cDateSetPanel event table entries
////@end cDateSetPanel event table entries

END_EVENT_TABLE()


/*!
 * cDateSetPanel constructors
 */

cDateSetPanel::cDateSetPanel()
{
    Init();
}

cDateSetPanel::cDateSetPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cDateSetPanel creator
 */

bool cDateSetPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cDateSetPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cDateSetPanel creation
    return true;
}


/*!
 * cDateSetPanel destructor
 */

cDateSetPanel::~cDateSetPanel()
{
////@begin cDateSetPanel destruction
////@end cDateSetPanel destruction
}


/*!
 * Member initialisation
 */

void cDateSetPanel::Init()
{
////@begin cDateSetPanel member initialisation
////@end cDateSetPanel member initialisation
}


/*!
 * Control creation for cDateSetPanel
 */

void cDateSetPanel::CreateControls()
{    
////@begin cDateSetPanel content construction
    cDateSetPanel* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap4 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticBitmap4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer5, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxPanel* itemPanel6 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer5->Add(itemPanel6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxPanel* itemPanel7 = new wxPanel( itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel7->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer5->Add(itemPanel7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer8, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton9 = new wxButton( itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer8->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton10 = new wxButton( itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer8->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end cDateSetPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cDateSetPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cDateSetPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cDateSetPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cDateSetPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cDateSetPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cDateSetPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cDateSetPanel icon retrieval
}
