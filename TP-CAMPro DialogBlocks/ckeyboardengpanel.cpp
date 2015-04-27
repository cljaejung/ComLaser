/////////////////////////////////////////////////////////////////////////////
// Name:        ckeyboardengpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     23/04/2015 16:57:33
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "ckeyboardengpanel.h"
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

#include "ckeyboardengpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cKeyboardEngPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cKeyboardEngPanel, wxPanel )


/*!
 * cKeyboardEngPanel event table definition
 */

BEGIN_EVENT_TABLE( cKeyboardEngPanel, wxPanel )

////@begin cKeyboardEngPanel event table entries
////@end cKeyboardEngPanel event table entries

END_EVENT_TABLE()


/*!
 * cKeyboardEngPanel constructors
 */

cKeyboardEngPanel::cKeyboardEngPanel()
{
    Init();
}

cKeyboardEngPanel::cKeyboardEngPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cKeyboardEngPanel creator
 */

bool cKeyboardEngPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cKeyboardEngPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cKeyboardEngPanel creation
    return true;
}


/*!
 * cKeyboardEngPanel destructor
 */

cKeyboardEngPanel::~cKeyboardEngPanel()
{
////@begin cKeyboardEngPanel destruction
////@end cKeyboardEngPanel destruction
}


/*!
 * Member initialisation
 */

void cKeyboardEngPanel::Init()
{
////@begin cKeyboardEngPanel member initialisation
    m_textCtrl = NULL;
////@end cKeyboardEngPanel member initialisation
}


/*!
 * Control creation for cKeyboardEngPanel
 */

void cKeyboardEngPanel::CreateControls()
{    
////@begin cKeyboardEngPanel content construction
    cKeyboardEngPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 0);

    m_textCtrl = new wxTextCtrl( itemPanel1, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    m_textCtrl->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer3->Add(m_textCtrl, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer5, 1, wxGROW|wxLEFT|wxRIGHT, 4);

    wxButton* itemButton6 = new wxButton( itemPanel1, ID_BUTTON0, _("q"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton6, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton7 = new wxButton( itemPanel1, ID_BUTTON1, _("w"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton7, 0, wxALIGN_CENTER_VERTICAL, 1);

    wxButton* itemButton8 = new wxButton( itemPanel1, ID_BUTTON2, _("e"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton9 = new wxButton( itemPanel1, ID_BUTTON3, _("r"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton10 = new wxButton( itemPanel1, ID_BUTTON4, _("t"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton11 = new wxButton( itemPanel1, ID_BUTTON5, _("y"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton12 = new wxButton( itemPanel1, ID_BUTTON6, _("u"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton12, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton13 = new wxButton( itemPanel1, ID_BUTTON7, _("i"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton13, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton14 = new wxButton( itemPanel1, ID_BUTTON8, _("o"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton14, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton15 = new wxButton( itemPanel1, ID_BUTTON9, _("p"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer5->Add(itemButton15, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer16, 1, wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT, 4);

    wxButton* itemButton17 = new wxButton( itemPanel1, ID_BUTTON10, _("a"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton17, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton18 = new wxButton( itemPanel1, ID_BUTTON11, _("s"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton19 = new wxButton( itemPanel1, ID_BUTTON12, _("d"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton20 = new wxButton( itemPanel1, ID_BUTTON13, _("f"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton20, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton21 = new wxButton( itemPanel1, ID_BUTTON14, _("g"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton21, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton22 = new wxButton( itemPanel1, ID_BUTTON15, _("h"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton22, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton23 = new wxButton( itemPanel1, ID_BUTTON16, _("j"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton23, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton24 = new wxButton( itemPanel1, ID_BUTTON17, _("k"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton24, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton25 = new wxButton( itemPanel1, ID_BUTTON18, _("l"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer16->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer26, 1, wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT, 4);

    wxButton* itemButton27 = new wxButton( itemPanel1, ID_BUTTON19, _("Shift"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer26->Add(itemButton27, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxButton* itemButton28 = new wxButton( itemPanel1, ID_BUTTON20, _("z"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer26->Add(itemButton28, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton29 = new wxButton( itemPanel1, ID_BUTTON21, _("x"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer26->Add(itemButton29, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton30 = new wxButton( itemPanel1, ID_BUTTON22, _("c"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer26->Add(itemButton30, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton31 = new wxButton( itemPanel1, ID_BUTTON23, _("v"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer26->Add(itemButton31, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton32 = new wxButton( itemPanel1, ID_BUTTON24, _("b"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer26->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton33 = new wxButton( itemPanel1, ID_BUTTON25, _("n"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer26->Add(itemButton33, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton34 = new wxButton( itemPanel1, ID_BUTTON26, _("m"), wxDefaultPosition, wxSize(68, -1), 0 );
    itemBoxSizer26->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton35 = new wxButton( itemPanel1, ID_BUTTON27, _("BackSpace"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer26->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer36, 1, wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT, 4);

    wxButton* itemButton37 = new wxButton( itemPanel1, ID_BUTTON28, _("?123"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer36->Add(itemButton37, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

    wxButton* itemButton38 = new wxButton( itemPanel1, ID_BUTTON29, _(","), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer36->Add(itemButton38, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton39 = new wxButton( itemPanel1, ID_BUTTON30, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer36->Add(itemButton39, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton40 = new wxButton( itemPanel1, ID_BUTTON31, _("."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer36->Add(itemButton40, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);

    wxButton* itemButton41 = new wxButton( itemPanel1, ID_BUTTON32, _("Enter"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer36->Add(itemButton41, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5);

////@end cKeyboardEngPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cKeyboardEngPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cKeyboardEngPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cKeyboardEngPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cKeyboardEngPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cKeyboardEngPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cKeyboardEngPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cKeyboardEngPanel icon retrieval
}
