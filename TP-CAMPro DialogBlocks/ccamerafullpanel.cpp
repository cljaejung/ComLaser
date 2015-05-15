/////////////////////////////////////////////////////////////////////////////
// Name:        ccamerafullpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 20:42:17
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "ccamerafullpanel.h"
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

#include "ccamerafullpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cCameraFullPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cCameraFullPanel, wxPanel )


/*!
 * cCameraFullPanel event table definition
 */

BEGIN_EVENT_TABLE( cCameraFullPanel, wxPanel )

////@begin cCameraFullPanel event table entries
////@end cCameraFullPanel event table entries

END_EVENT_TABLE()


/*!
 * cCameraFullPanel constructors
 */

cCameraFullPanel::cCameraFullPanel()
{
    Init();
}

cCameraFullPanel::cCameraFullPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cCameraFullPanel creator
 */

bool cCameraFullPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cCameraFullPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cCameraFullPanel creation
    return true;
}


/*!
 * cCameraFullPanel destructor
 */

cCameraFullPanel::~cCameraFullPanel()
{
////@begin cCameraFullPanel destruction
////@end cCameraFullPanel destruction
}


/*!
 * Member initialisation
 */

void cCameraFullPanel::Init()
{
////@begin cCameraFullPanel member initialisation
////@end cCameraFullPanel member initialisation
}


/*!
 * Control creation for cCameraFullPanel
 */

void cCameraFullPanel::CreateControls()
{    
////@begin cCameraFullPanel content construction
    cCameraFullPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer4->Add(itemBoxSizer5, 0, wxGROW|wxALL, 0);

    wxPanel* itemPanel6 = new wxPanel( itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel6->SetBackgroundColour(wxColour(0, 128, 128));
    itemBoxSizer5->Add(itemPanel6, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
    itemPanel6->SetSizer(itemBoxSizer7);

    wxStaticText* itemStaticText8 = new wxStaticText( itemPanel6, wxID_STATIC, _("Capture Distance"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText8->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText8->SetBackgroundColour(wxColour(0, 128, 0));
    itemStaticText8->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    itemBoxSizer7->Add(itemStaticText8, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer4->Add(itemBoxSizer9, 1, wxGROW|wxALL, 0);

    wxPanel* itemPanel10 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(580, 385), wxRAISED_BORDER|wxTAB_TRAVERSAL );
    itemPanel10->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer9->Add(itemPanel10, 1, wxGROW|wxTOP|wxBOTTOM, 4);

    wxButton* itemButton11 = new wxButton( itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemButton11, 0, wxALIGN_TOP|wxALL, 5);

////@end cCameraFullPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cCameraFullPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cCameraFullPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cCameraFullPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cCameraFullPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cCameraFullPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cCameraFullPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cCameraFullPanel icon retrieval
}
