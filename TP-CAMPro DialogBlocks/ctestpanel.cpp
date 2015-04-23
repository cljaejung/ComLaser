/////////////////////////////////////////////////////////////////////////////
// Name:        ctestpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     22/04/2015 15:13:19
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "ctestpanel.h"
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

#include "ctestpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cTestPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cTestPanel, wxPanel )


/*!
 * cTestPanel event table definition
 */

BEGIN_EVENT_TABLE( cTestPanel, wxPanel )

////@begin cTestPanel event table entries
////@end cTestPanel event table entries

END_EVENT_TABLE()


/*!
 * cTestPanel constructors
 */

cTestPanel::cTestPanel()
{
    Init();
}

cTestPanel::cTestPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cTestPanel creator
 */

bool cTestPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cTestPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cTestPanel creation
    return true;
}


/*!
 * cTestPanel destructor
 */

cTestPanel::~cTestPanel()
{
////@begin cTestPanel destruction
////@end cTestPanel destruction
}


/*!
 * Member initialisation
 */

void cTestPanel::Init()
{
////@begin cTestPanel member initialisation
    m_Button1 = NULL;
////@end cTestPanel member initialisation
}


/*!
 * Control creation for cTestPanel
 */

void cTestPanel::CreateControls()
{    
////@begin cTestPanel content construction
    cTestPanel* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    m_Button1 = new wxButton( itemPanel1, ID_BUTTON, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(m_Button1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton4 = new wxButton( itemPanel1, ID_BUTTON1, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemButton4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton5 = new wxButton( itemPanel1, ID_BUTTON2, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemButton5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton6 = new wxButton( itemPanel1, ID_BUTTON3, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemButton6, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton7 = new wxButton( itemPanel1, ID_BUTTON4, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemButton7, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton8 = new wxButton( itemPanel1, ID_BUTTON5, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemButton8, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer9, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton10 = new wxButton( itemPanel1, ID_BUTTON6, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton11 = new wxButton( itemPanel1, ID_BUTTON7, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton12 = new wxButton( itemPanel1, ID_BUTTON8, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemButton12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton13 = new wxButton( itemPanel1, ID_BUTTON9, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemButton13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton14 = new wxButton( itemPanel1, ID_BUTTON10, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemButton14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer15, 1, wxGROW|wxALL, 5);

    wxButton* itemButton16 = new wxButton( itemPanel1, ID_BUTTON11, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer15->Add(itemButton16, 1, wxGROW|wxALL, 5);

    wxButton* itemButton17 = new wxButton( itemPanel1, ID_BUTTON12, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer15->Add(itemButton17, 1, wxGROW|wxALL, 5);

    wxBitmapButton* itemBitmapButton18 = new wxBitmapButton( itemPanel1, ID_BITMAPBUTTON, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
    itemBoxSizer15->Add(itemBitmapButton18, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap19 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer15->Add(itemStaticBitmap19, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end cTestPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cTestPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cTestPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cTestPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cTestPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cTestPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cTestPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cTestPanel icon retrieval
}
