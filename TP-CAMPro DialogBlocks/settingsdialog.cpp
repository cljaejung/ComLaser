/////////////////////////////////////////////////////////////////////////////
// Name:        settingsdialog.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 16:17:34
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "settingsdialog.h"
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
#include "wx/bookctrl.h"
////@end includes

#include "settingsdialog.h"

////@begin XPM images
////@end XPM images

/*!
 * SettingsDialog type definition
 */

IMPLEMENT_DYNAMIC_CLASS( SettingsDialog, wxPropertySheetDialog )

/*!
 * SettingsDialog event table definition
 */

BEGIN_EVENT_TABLE( SettingsDialog, wxPropertySheetDialog )

////@begin SettingsDialog event table entries
////@end SettingsDialog event table entries

END_EVENT_TABLE()

/*!
 * SettingsDialog constructors
 */

SettingsDialog::SettingsDialog( )
{
}

SettingsDialog::SettingsDialog( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * SettingsDialog creator
 */

bool SettingsDialog::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin SettingsDialog member initialisation
////@end SettingsDialog member initialisation

////@begin SettingsDialog creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS|wxDIALOG_EX_CONTEXTHELP);
    wxPropertySheetDialog::Create( parent, id, caption, pos, size, style );

    SetSheetStyle(wxPROPSHEET_DEFAULT);
    CreateButtons(wxOK|wxCANCEL|wxHELP);
    CreateControls();
    LayoutDialog();
    Centre();
////@end SettingsDialog creation
    return true;
}

/*!
 * Control creation for SettingsDialog
 */

void SettingsDialog::CreateControls()
{    
////@begin SettingsDialog content construction
    SettingsDialog* itemPropertySheetDialog1 = this;

    wxPanel* itemPanel2 = new wxPanel( GetBookCtrl(), ID_SETTINGS_DIALOG_PANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
    itemPanel2->SetSizer(itemBoxSizer3);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText5 = new wxStaticText( itemPanel2, wxID_STATIC, _("These are general settings."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer4->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxCheckBox* itemCheckBox7 = new wxCheckBox( itemPanel2, ID_SETTINGS_DIALOG_CHECKBOX, _("Option 1"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox7->SetValue(false);
    itemBoxSizer4->Add(itemCheckBox7, 0, wxALIGN_LEFT|wxALL, 5);

    wxCheckBox* itemCheckBox8 = new wxCheckBox( itemPanel2, ID_SETTINGS_DIALOG_CHECKBOX1, _("Option 2"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox8->SetValue(false);
    itemBoxSizer4->Add(itemCheckBox8, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer4->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText10 = new wxStaticText( itemPanel2, wxID_STATIC, _("Log filename:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer4->Add(itemStaticText10, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer4->Add(itemBoxSizer11, 0, wxGROW, 5);
    wxTextCtrl* itemTextCtrl12 = new wxTextCtrl( itemPanel2, ID_SETTINGS_DIALOG_TEXTCTRL, _T(""), wxDefaultPosition, wxSize(180, -1), 0 );
    itemBoxSizer11->Add(itemTextCtrl12, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton13 = new wxButton( itemPanel2, ID_SETTINGS_DIALOG_BUTTON, _("Browse..."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer11->Add(itemButton13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    GetBookCtrl()->AddPage(itemPanel2, _("General"));

    wxPanel* itemPanel14 = new wxPanel( GetBookCtrl(), ID_SETTINGS_DIALOG_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
    itemPanel14->SetSizer(itemBoxSizer15);

    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer15->Add(itemBoxSizer16, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText17 = new wxStaticText( itemPanel14, wxID_STATIC, _("These are advanced settings."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer16->Add(itemStaticText17, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer16->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxCheckBox* itemCheckBox19 = new wxCheckBox( itemPanel14, ID_SETTINGS_DIALOG_CHECKBOX2, _("Check me at your peril"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox19->SetValue(false);
    itemBoxSizer16->Add(itemCheckBox19, 0, wxALIGN_LEFT|wxALL, 5);

    wxCheckBox* itemCheckBox20 = new wxCheckBox( itemPanel14, ID_SETTINGS_DIALOG_CHECKBOX3, _("Might blow everything up"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox20->SetValue(false);
    itemBoxSizer16->Add(itemCheckBox20, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer16->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText22 = new wxStaticText( itemPanel14, wxID_STATIC, _("Could be dodgy:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer16->Add(itemStaticText22, 0, wxALIGN_LEFT|wxALL, 5);

    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer16->Add(itemBoxSizer23, 0, wxGROW|wxALL, 5);
    wxRadioButton* itemRadioButton24 = new wxRadioButton( itemPanel14, ID_SETTINGS_DIALOG_RADIOBUTTON, _("Freeze"), wxDefaultPosition, wxDefaultSize, 0 );
    itemRadioButton24->SetValue(true);
    itemBoxSizer23->Add(itemRadioButton24, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxRadioButton* itemRadioButton25 = new wxRadioButton( itemPanel14, ID_SETTINGS_DIALOG_RADIOBUTTON1, _("Overheat"), wxDefaultPosition, wxDefaultSize, 0 );
    itemRadioButton25->SetValue(false);
    itemBoxSizer23->Add(itemRadioButton25, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxRadioButton* itemRadioButton26 = new wxRadioButton( itemPanel14, ID_SETTINGS_DIALOG_RADIOBUTTON2, _("Catch fire"), wxDefaultPosition, wxDefaultSize, 0 );
    itemRadioButton26->SetValue(false);
    itemBoxSizer23->Add(itemRadioButton26, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    GetBookCtrl()->AddPage(itemPanel14, _("Advanced"));

    wxPanel* itemPanel27 = new wxPanel( GetBookCtrl(), ID_SETTINGS_DIALOG_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
    itemPanel27->SetSizer(itemBoxSizer28);

    wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer28->Add(itemBoxSizer29, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText30 = new wxStaticText( itemPanel27, wxID_STATIC, _("These are pointless settings."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer29->Add(itemStaticText30, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer29->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxCheckBox* itemCheckBox32 = new wxCheckBox( itemPanel27, ID_SETTINGS_DIALOG_CHECKBOX4, _("Does nothing"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox32->SetValue(false);
    itemBoxSizer29->Add(itemCheckBox32, 0, wxALIGN_LEFT|wxALL, 5);

    wxCheckBox* itemCheckBox33 = new wxCheckBox( itemPanel27, ID_SETTINGS_DIALOG_CHECKBOX5, _("No-one remembers what this one does"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox33->SetValue(false);
    itemBoxSizer29->Add(itemCheckBox33, 0, wxALIGN_LEFT|wxALL, 5);

    wxCheckBox* itemCheckBox34 = new wxCheckBox( itemPanel27, ID_SETTINGS_DIALOG_CHECKBOX6, _("Was useful once, then things changed"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox34->SetValue(false);
    itemBoxSizer29->Add(itemCheckBox34, 0, wxALIGN_LEFT|wxALL, 5);

    wxCheckBox* itemCheckBox35 = new wxCheckBox( itemPanel27, ID_SETTINGS_DIALOG_CHECKBOX7, _("Nope, no idea"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox35->SetValue(false);
    itemBoxSizer29->Add(itemCheckBox35, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer29->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText37 = new wxStaticText( itemPanel27, wxID_STATIC, _("We put the rest of them here:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer29->Add(itemStaticText37, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemCheckListBox38Strings;
    itemCheckListBox38Strings.Add(_("Forgettable setting"));
    itemCheckListBox38Strings.Add(_("Colours something mauve"));
    itemCheckListBox38Strings.Add(_("Rings a bell in head office"));
    itemCheckListBox38Strings.Add(_("Tickles the boss"));
    wxCheckListBox* itemCheckListBox38 = new wxCheckListBox( itemPanel27, ID_SETTINGS_DIALOG_CHECKLISTBOX, wxDefaultPosition, wxSize(-1, 100), itemCheckListBox38Strings, wxLB_SINGLE );
    itemBoxSizer29->Add(itemCheckListBox38, 0, wxGROW|wxALL, 5);

    itemBoxSizer29->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    GetBookCtrl()->AddPage(itemPanel27, _("Redundant"));

////@end SettingsDialog content construction
}

/*!
 * Should we show tooltips?
 */

bool SettingsDialog::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap SettingsDialog::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin SettingsDialog bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end SettingsDialog bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon SettingsDialog::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin SettingsDialog icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end SettingsDialog icon retrieval
}
