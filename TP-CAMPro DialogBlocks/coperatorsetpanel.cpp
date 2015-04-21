/////////////////////////////////////////////////////////////////////////////
// Name:        coperatorsetpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:09:38
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "coperatorsetpanel.h"
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

#include "coperatorsetpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cOperatorSetPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cOperatorSetPanel, wxPanel )


/*!
 * cOperatorSetPanel event table definition
 */

BEGIN_EVENT_TABLE( cOperatorSetPanel, wxPanel )

////@begin cOperatorSetPanel event table entries
////@end cOperatorSetPanel event table entries

END_EVENT_TABLE()


/*!
 * cOperatorSetPanel constructors
 */

cOperatorSetPanel::cOperatorSetPanel()
{
    Init();
}

cOperatorSetPanel::cOperatorSetPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cOperatorSetPanel creator
 */

bool cOperatorSetPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cOperatorSetPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cOperatorSetPanel creation
    return true;
}


/*!
 * cOperatorSetPanel destructor
 */

cOperatorSetPanel::~cOperatorSetPanel()
{
////@begin cOperatorSetPanel destruction
////@end cOperatorSetPanel destruction
}


/*!
 * Member initialisation
 */

void cOperatorSetPanel::Init()
{
////@begin cOperatorSetPanel member initialisation
////@end cOperatorSetPanel member initialisation
}


/*!
 * Control creation for cOperatorSetPanel
 */

void cOperatorSetPanel::CreateControls()
{    
////@begin cOperatorSetPanel content construction
    cOperatorSetPanel* itemPanel1 = this;

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
    itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM|wxALL, 5);

    wxStaticText* itemStaticText7 = new wxStaticText( itemPanel1, wxID_STATIC, _("Operator Setting"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Consolas")));
    itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW|wxLEFT|wxTOP|wxBOTTOM, 5);

    wxStaticText* itemStaticText9 = new wxStaticText( itemPanel1, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText9->SetForegroundColour(wxColour(255, 255, 255));
    itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW|wxRIGHT|wxTOP|wxBOTTOM, 5);

    wxStaticBitmap* itemStaticBitmap11 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW|wxLEFT|wxRIGHT|wxBOTTOM, 30);

    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW|wxALL, 0);

    wxPanel* itemPanel14 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel14->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel14->SetBackgroundColour(wxColour(192, 192, 192));
    itemBoxSizer13->Add(itemPanel14, 1, wxGROW|wxALL, 0);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
    itemPanel14->SetSizer(itemBoxSizer15);

    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer16, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer16->Add(itemBoxSizer17, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxStaticText* itemStaticText18 = new wxStaticText( itemPanel14, wxID_STATIC, _("User Name"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText18->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer16->Add(itemBoxSizer19, 1, wxGROW|wxALL, 0);

    wxArrayString itemComboBox20Strings;
    itemComboBox20Strings.Add(_("ComLaser1"));
    itemComboBox20Strings.Add(_("ComLaser2"));
    wxComboBox* itemComboBox20 = new wxComboBox( itemPanel14, ID_COMBOBOX_USERNAME, _("ComLaser1"), wxDefaultPosition, wxDefaultSize, itemComboBox20Strings, wxCB_DROPDOWN );
    itemComboBox20->SetStringSelection(_("ComLaser1"));
    itemComboBox20->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer19->Add(itemComboBox20, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer16->Add(itemBoxSizer21, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton22 = new wxButton( itemPanel14, ID_BUTTON_USERNAME, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer21->Add(itemButton22, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer23, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer23->Add(itemBoxSizer24, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxStaticText* itemStaticText25 = new wxStaticText( itemPanel14, wxID_STATIC, _("Password"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText25->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer24->Add(itemStaticText25, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer23->Add(itemBoxSizer26, 1, wxGROW|wxALL, 0);

    wxTextCtrl* itemTextCtrl27 = new wxTextCtrl( itemPanel14, ID_TEXTCTRL_PASSWORD, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemTextCtrl27->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer26->Add(itemTextCtrl27, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer23->Add(itemBoxSizer28, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton29 = new wxButton( itemPanel14, ID_BUTTON_PASSWORD, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer28->Add(itemButton29, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer30, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer30->Add(itemBoxSizer31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxStaticText* itemStaticText32 = new wxStaticText( itemPanel14, wxID_STATIC, _("New Password"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText32->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer31->Add(itemStaticText32, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer30->Add(itemBoxSizer33, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxTextCtrl* itemTextCtrl34 = new wxTextCtrl( itemPanel14, ID_TEXTCTRL_NEWPASSWORD, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemTextCtrl34->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer33->Add(itemTextCtrl34, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer35 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer30->Add(itemBoxSizer35, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton36 = new wxButton( itemPanel14, ID_BUTTON_NEWPASSWORD, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer35->Add(itemButton36, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer37, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer38 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer37->Add(itemBoxSizer38, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxStaticText* itemStaticText39 = new wxStaticText( itemPanel14, wxID_STATIC, _("Confirm"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText39->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer38->Add(itemStaticText39, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer40 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer37->Add(itemBoxSizer40, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxTextCtrl* itemTextCtrl41 = new wxTextCtrl( itemPanel14, ID_TEXTCTRL_CONFIRM, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemTextCtrl41->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer40->Add(itemTextCtrl41, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer42 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer37->Add(itemBoxSizer42, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0);

    wxButton* itemButton43 = new wxButton( itemPanel14, ID_BUTTON_CONFIRM, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer42->Add(itemButton43, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer44 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer15->Add(itemBoxSizer44, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton45 = new wxButton( itemPanel14, ID_BUTTON_ADD, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer44->Add(itemButton45, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton46 = new wxButton( itemPanel14, ID_BUTTON_DELETE, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer44->Add(itemButton46, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton47 = new wxButton( itemPanel14, ID_BUTTON_CHANGE2, _("Change"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer44->Add(itemButton47, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer48 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer12->Add(itemBoxSizer48, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton49 = new wxButton( itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer48->Add(itemButton49, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton50 = new wxButton( itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer48->Add(itemButton50, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

////@end cOperatorSetPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cOperatorSetPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cOperatorSetPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cOperatorSetPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cOperatorSetPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cOperatorSetPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cOperatorSetPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cOperatorSetPanel icon retrieval
}
