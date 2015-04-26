/////////////////////////////////////////////////////////////////////////////
// Name:        cfilemngpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:28:27
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cfilemngpanel.h"
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
#include "wx/imaglist.h"
////@end includes

#include "cfilemngpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cFileMngPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cFileMngPanel, wxPanel )


/*!
 * cFileMngPanel event table definition
 */

BEGIN_EVENT_TABLE( cFileMngPanel, wxPanel )

////@begin cFileMngPanel event table entries
////@end cFileMngPanel event table entries

END_EVENT_TABLE()


/*!
 * cFileMngPanel constructors
 */

cFileMngPanel::cFileMngPanel()
{
    Init();
}

cFileMngPanel::cFileMngPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cFileMngPanel creator
 */

bool cFileMngPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cFileMngPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cFileMngPanel creation
    return true;
}


/*!
 * cFileMngPanel destructor
 */

cFileMngPanel::~cFileMngPanel()
{
////@begin cFileMngPanel destruction
////@end cFileMngPanel destruction
}


/*!
 * Member initialisation
 */

void cFileMngPanel::Init()
{
////@begin cFileMngPanel member initialisation
    m_FileListCtrl = NULL;
////@end cFileMngPanel member initialisation
}


/*!
 * Control creation for cFileMngPanel
 */

void cFileMngPanel::CreateControls()
{    
////@begin cFileMngPanel content construction
    cFileMngPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticText* itemStaticText7 = new wxStaticText( itemPanel1, wxID_STATIC, _("File Management"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText9 = new wxStaticText( itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText9->SetForegroundColour(wxColour(255, 255, 255));
    itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap11 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW|wxLEFT|wxRIGHT|wxBOTTOM, 5);

    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW|wxLEFT|wxRIGHT, 5);

    wxPanel* itemPanel14 = new wxPanel( itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    itemPanel14->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer13->Add(itemPanel14, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
    itemPanel14->SetSizer(itemBoxSizer15);

    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer16, 1, wxGROW|wxALL, 5);

    m_FileListCtrl = new wxListCtrl( itemPanel14, ID_LISTCTRL, wxDefaultPosition, wxSize(100, 100), wxLC_REPORT );
    m_FileListCtrl->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
    itemBoxSizer16->Add(m_FileListCtrl, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer18, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxButton* itemButton19 = new wxButton( itemPanel14, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer18->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer12->Add(itemBoxSizer20, 1, wxGROW|wxLEFT|wxRIGHT, 5);

    wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer20->Add(itemBoxSizer21, 1, wxGROW, 5);

    wxPanel* itemPanel22 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(250, 300), wxDOUBLE_BORDER|wxTAB_TRAVERSAL );
    itemPanel22->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer21->Add(itemPanel22, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxVERTICAL);
    itemPanel22->SetSizer(itemBoxSizer23);

    wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer23->Add(itemBoxSizer24, 1, wxGROW|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap25 = new wxStaticBitmap( itemPanel22, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer24->Add(itemStaticBitmap25, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer20->Add(itemBoxSizer26, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer26->Add(itemBoxSizer27, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton28 = new wxButton( itemPanel1, ID_BUTTON_PREV, _("<<"), wxDefaultPosition, wxSize(30, -1), 0 );
    itemBoxSizer27->Add(itemButton28, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer26->Add(itemBoxSizer29, 1, wxGROW|wxALL, 0);

    wxSlider* itemSlider30 = new wxSlider( itemPanel1, ID_SLIDER_AVI, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    itemBoxSizer29->Add(itemSlider30, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer26->Add(itemBoxSizer31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton32 = new wxButton( itemPanel1, ID_BUTTON_NEXT, _(">>"), wxDefaultPosition, wxSize(30, -1), 0 );
    itemBoxSizer31->Add(itemButton32, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0);

    wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer12->Add(itemBoxSizer33, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer34 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer33->Add(itemBoxSizer34, 1, wxGROW|wxALL, 5);

    wxButton* itemButton35 = new wxButton( itemPanel1, ID_BUTTON_MEMCOPY, _("Memory\nCopy"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer34->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer33->Add(itemBoxSizer36, 1, wxGROW|wxALL, 5);

    wxButton* itemButton37 = new wxButton( itemPanel1, ID_BUTTON_FILETRANSFER, _("File\nTransfer"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer36->Add(itemButton37, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer38 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer33->Add(itemBoxSizer38, 1, wxGROW|wxALL, 5);

    wxButton* itemButton39 = new wxButton( itemPanel1, ID_BUTTON_MEMCLEAR, _("Memory\nClear"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer38->Add(itemButton39, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer40 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer40, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton41 = new wxButton( itemPanel1, ID_BUTTON, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton41, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton42 = new wxButton( itemPanel1, ID_BUTTON1, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton42, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton43 = new wxButton( itemPanel1, ID_BUTTON2, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton43, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton44 = new wxButton( itemPanel1, ID_BUTTON3, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton44, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton45 = new wxButton( itemPanel1, ID_BUTTON4, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton45, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton46 = new wxButton( itemPanel1, ID_BUTTON5, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton46, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton47 = new wxButton( itemPanel1, ID_BUTTON6, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer40->Add(itemButton47, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    // Connect events and objects
    itemPanel14->Connect(ID_PANEL1, wxEVT_LEFT_DCLICK, wxMouseEventHandler(cFileMngPanel::OnLeftDClick), NULL, this);
////@end cFileMngPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cFileMngPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cFileMngPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cFileMngPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cFileMngPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cFileMngPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cFileMngPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cFileMngPanel icon retrieval
}




/*!
 * wxEVT_LEFT_DCLICK event handler for ID_PANEL1
 */

void cFileMngPanel::OnLeftDClick( wxMouseEvent& event )
{
////@begin wxEVT_LEFT_DCLICK event handler for ID_PANEL1 in cFileMngPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_LEFT_DCLICK event handler for ID_PANEL1 in cFileMngPanel. 
}

