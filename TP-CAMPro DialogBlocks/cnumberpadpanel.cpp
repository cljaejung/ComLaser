/////////////////////////////////////////////////////////////////////////////
// Name:        cnumberpadpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 23:04:10
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cnumberpadpanel.h"
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

#include "cnumberpadpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cNumberPadPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cNumberPadPanel, wxPanel )


/*!
 * cNumberPadPanel event table definition
 */

BEGIN_EVENT_TABLE( cNumberPadPanel, wxPanel )

////@begin cNumberPadPanel event table entries
////@end cNumberPadPanel event table entries

END_EVENT_TABLE()


/*!
 * cNumberPadPanel constructors
 */

cNumberPadPanel::cNumberPadPanel()
{
    Init();
}

cNumberPadPanel::cNumberPadPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cNumberPadPanel creator
 */

bool cNumberPadPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cNumberPadPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cNumberPadPanel creation
    return true;
}


/*!
 * cNumberPadPanel destructor
 */

cNumberPadPanel::~cNumberPadPanel()
{
////@begin cNumberPadPanel destruction
////@end cNumberPadPanel destruction
}


/*!
 * Member initialisation
 */

void cNumberPadPanel::Init()
{
////@begin cNumberPadPanel member initialisation
    m_textCtrl = NULL;
////@end cNumberPadPanel member initialisation
}


/*!
 * Control creation for cNumberPadPanel
 */

void cNumberPadPanel::CreateControls()
{    
////@begin cNumberPadPanel content construction
    cNumberPadPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW|wxALL, 5);

    wxButton* itemButton4 = new wxButton( itemPanel1, ID_BUTTON_DELETE, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemButton4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_textCtrl = new wxTextCtrl( itemPanel1, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RIGHT );
    m_textCtrl->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer3->Add(m_textCtrl, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer6, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer6->Add(itemBoxSizer7, 1, wxGROW|wxALL, 0);

    wxButton* itemButton8 = new wxButton( itemPanel1, ID_BUTTON1, _("1"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer7->Add(itemButton8, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer6->Add(itemBoxSizer9, 1, wxGROW|wxALL, 0);

    wxButton* itemButton10 = new wxButton( itemPanel1, ID_BUTTON2, _("2"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemButton10, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer6->Add(itemBoxSizer11, 1, wxGROW|wxALL, 0);

    wxButton* itemButton12 = new wxButton( itemPanel1, ID_BUTTON3, _("3"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer11->Add(itemButton12, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer6->Add(itemBoxSizer13, 1, wxGROW|wxALL, 0);

    wxButton* itemButton14 = new wxButton( itemPanel1, ID_BUTTON4, _("4"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer13->Add(itemButton14, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer6->Add(itemBoxSizer15, 1, wxGROW|wxALL, 0);

    wxButton* itemButton16 = new wxButton( itemPanel1, ID_BUTTON5, _("5"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer15->Add(itemButton16, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer17, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer17->Add(itemBoxSizer18, 1, wxGROW|wxALL, 0);

    wxButton* itemButton19 = new wxButton( itemPanel1, ID_BUTTON6, _("6"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer18->Add(itemButton19, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer17->Add(itemBoxSizer20, 1, wxGROW|wxALL, 0);

    wxButton* itemButton21 = new wxButton( itemPanel1, ID_BUTTON7, _("7"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer20->Add(itemButton21, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer17->Add(itemBoxSizer22, 1, wxGROW|wxALL, 0);

    wxButton* itemButton23 = new wxButton( itemPanel1, ID_BUTTON8, _("8"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer22->Add(itemButton23, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer17->Add(itemBoxSizer24, 1, wxGROW|wxALL, 0);

    wxButton* itemButton25 = new wxButton( itemPanel1, ID_BUTTON9, _("9"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer24->Add(itemButton25, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer17->Add(itemBoxSizer26, 1, wxGROW|wxALL, 0);

    wxButton* itemButton27 = new wxButton( itemPanel1, ID_BUTTON0, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer26->Add(itemButton27, 1, wxGROW|wxALL, 0);

    wxStdDialogButtonSizer* itemStdDialogButtonSizer28 = new wxStdDialogButtonSizer;

    itemBoxSizer2->Add(itemStdDialogButtonSizer28, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    wxButton* itemButton29 = new wxButton( itemPanel1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStdDialogButtonSizer28->AddButton(itemButton29);

    wxButton* itemButton30 = new wxButton( itemPanel1, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStdDialogButtonSizer28->AddButton(itemButton30);

    itemStdDialogButtonSizer28->Realize();

////@end cNumberPadPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cNumberPadPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cNumberPadPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cNumberPadPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cNumberPadPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cNumberPadPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cNumberPadPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cNumberPadPanel icon retrieval
}
