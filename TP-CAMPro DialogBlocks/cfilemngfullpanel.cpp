/////////////////////////////////////////////////////////////////////////////
// Name:        cfilemngfullpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:41:38
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cfilemngfullpanel.h"
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

#include "cfilemngfullpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cFileMngFullPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cFileMngFullPanel, wxPanel )


/*!
 * cFileMngFullPanel event table definition
 */

BEGIN_EVENT_TABLE( cFileMngFullPanel, wxPanel )

////@begin cFileMngFullPanel event table entries
////@end cFileMngFullPanel event table entries

END_EVENT_TABLE()


/*!
 * cFileMngFullPanel constructors
 */

cFileMngFullPanel::cFileMngFullPanel()
{
    Init();
}

cFileMngFullPanel::cFileMngFullPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cFileMngFullPanel creator
 */

bool cFileMngFullPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cFileMngFullPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cFileMngFullPanel creation
    return true;
}


/*!
 * cFileMngFullPanel destructor
 */

cFileMngFullPanel::~cFileMngFullPanel()
{
////@begin cFileMngFullPanel destruction
////@end cFileMngFullPanel destruction
}


/*!
 * Member initialisation
 */

void cFileMngFullPanel::Init()
{
////@begin cFileMngFullPanel member initialisation
    m_Image = NULL;
////@end cFileMngFullPanel member initialisation
}


/*!
 * Control creation for cFileMngFullPanel
 */

void cFileMngFullPanel::CreateControls()
{    
////@begin cFileMngFullPanel content construction
    cFileMngFullPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW|wxLEFT|wxRIGHT, 10);

    wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer4->Add(itemBoxSizer5, 1, wxGROW, 0);

    wxPanel* itemPanel6 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER|wxTAB_TRAVERSAL );
    itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer5->Add(itemPanel6, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
    itemPanel6->SetSizer(itemBoxSizer7);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer7->Add(itemBoxSizer8, 1, wxGROW|wxALL, 0);

    m_Image = new wxStaticBitmap( itemPanel6, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer8->Add(m_Image, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer4->Add(itemBoxSizer10, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer10->Add(itemBoxSizer11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton12 = new wxButton( itemPanel1, ID_BUTTON_PREV, _("<<"), wxDefaultPosition, wxSize(30, -1), 0 );
    itemBoxSizer11->Add(itemButton12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer10->Add(itemBoxSizer13, 1, wxGROW|wxALL, 0);

    wxSlider* itemSlider14 = new wxSlider( itemPanel1, ID_SLIDER_AVI, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    itemBoxSizer13->Add(itemSlider14, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer10->Add(itemBoxSizer15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton16 = new wxButton( itemPanel1, ID_BUTTON_NEXT, _(">>"), wxDefaultPosition, wxSize(30, -1), 0 );
    itemBoxSizer15->Add(itemButton16, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer17, 0, wxGROW|wxALL, 5);

    wxButton* itemButton18 = new wxButton( itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer17->Add(itemButton18, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

////@end cFileMngFullPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cFileMngFullPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cFileMngFullPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cFileMngFullPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cFileMngFullPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cFileMngFullPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cFileMngFullPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cFileMngFullPanel icon retrieval
}
