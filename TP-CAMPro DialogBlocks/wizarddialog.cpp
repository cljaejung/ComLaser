/////////////////////////////////////////////////////////////////////////////
// Name:        wizarddialog.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     15/06/2006 10:28:15
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "wizarddialog.h"
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

#include "wizarddialog.h"

////@begin XPM images
////@end XPM images

/*!
 * WizardDialog type definition
 */

IMPLEMENT_DYNAMIC_CLASS( WizardDialog, wxWizard )

/*!
 * WizardDialog event table definition
 */

BEGIN_EVENT_TABLE( WizardDialog, wxWizard )

////@begin WizardDialog event table entries
////@end WizardDialog event table entries

END_EVENT_TABLE()

/*!
 * WizardDialog constructors
 */

WizardDialog::WizardDialog( )
{
}

WizardDialog::WizardDialog( wxWindow* parent, wxWindowID id, const wxPoint& pos )
{
    Create(parent, id, pos);
}

/*!
 * WizardDialog creator
 */

bool WizardDialog::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos )
{
////@begin WizardDialog member initialisation
////@end WizardDialog member initialisation

////@begin WizardDialog creation
    SetExtraStyle(wxWIZARD_EX_HELPBUTTON);
    wxBitmap wizardBitmap(GetBitmapResource(wxT("wizard.png")));
    wxWizard::Create( parent, id, _("WizardDialog"), wizardBitmap, pos, wxDEFAULT_DIALOG_STYLE|wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX );

    CreateControls();
////@end WizardDialog creation
    return true;
}

/*!
 * Control creation for WizardDialog
 */

void WizardDialog::CreateControls()
{    
////@begin WizardDialog content construction
    wxWizard* itemWizard1 = this;

    FirstPage* itemWizardPageSimple2 = new FirstPage( itemWizard1 );
    itemWizard1->GetPageAreaSizer()->Add(itemWizardPageSimple2);

    SecondPage* itemWizardPageSimple13 = new SecondPage( itemWizard1 );
    itemWizard1->GetPageAreaSizer()->Add(itemWizardPageSimple13);

    ThirdPage* itemWizardPageSimple26 = new ThirdPage( itemWizard1 );
    itemWizard1->GetPageAreaSizer()->Add(itemWizardPageSimple26);

    wxWizardPageSimple* lastPage = NULL;
    if (lastPage)
        wxWizardPageSimple::Chain(lastPage, itemWizardPageSimple2);
    lastPage = itemWizardPageSimple2;
    if (lastPage)
        wxWizardPageSimple::Chain(lastPage, itemWizardPageSimple13);
    lastPage = itemWizardPageSimple13;
    if (lastPage)
        wxWizardPageSimple::Chain(lastPage, itemWizardPageSimple26);
    lastPage = itemWizardPageSimple26;
////@end WizardDialog content construction
}

/*!
 * Runs the wizard.
 */

bool WizardDialog::Run()
{
    wxWindowList::compatibility_iterator node = GetChildren().GetFirst();
    while (node)
    {
        wxWizardPage* startPage = wxDynamicCast(node->GetData(), wxWizardPage);
        if (startPage) return RunWizard(startPage);
        node = node->GetNext();
    }
    return false;
}

/*!
 * Should we show tooltips?
 */

bool WizardDialog::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap WizardDialog::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin WizardDialog bitmap retrieval
    wxUnusedVar(name);
    if (name == _T("wizard.png"))
    {
        wxBitmap bitmap(_T("wizard.png"), wxBITMAP_TYPE_PNG);
        return bitmap;
    }
    return wxNullBitmap;
////@end WizardDialog bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon WizardDialog::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin WizardDialog icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end WizardDialog icon retrieval
}

/*!
 * FirstPage type definition
 */

IMPLEMENT_DYNAMIC_CLASS( FirstPage, wxWizardPageSimple )

/*!
 * FirstPage event table definition
 */

BEGIN_EVENT_TABLE( FirstPage, wxWizardPageSimple )

////@begin FirstPage event table entries
////@end FirstPage event table entries

END_EVENT_TABLE()

/*!
 * FirstPage constructors
 */

FirstPage::FirstPage( )
{
}

FirstPage::FirstPage( wxWizard* parent )
{
    Create( parent );
}

/*!
 * FirstPage creator
 */

bool FirstPage::Create( wxWizard* parent )
{
////@begin FirstPage member initialisation
////@end FirstPage member initialisation

////@begin FirstPage creation
    wxBitmap wizardBitmap(wxNullBitmap);
    wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

    CreateControls();
    if (GetSizer())
        GetSizer()->Fit(this);
////@end FirstPage creation
    return true;
}

/*!
 * Control creation for FirstPage
 */

void FirstPage::CreateControls()
{    
////@begin FirstPage content construction
    FirstPage* itemWizardPageSimple2 = this;

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
    itemWizardPageSimple2->SetSizer(itemBoxSizer3);

    wxStaticText* itemStaticText4 = new wxStaticText( itemWizardPageSimple2, wxID_STATIC, _("Hello, and welcome to this wizard."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer3->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText6 = new wxStaticText( itemWizardPageSimple2, wxID_STATIC, _("Your name:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText6, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxTextCtrl* itemTextCtrl7 = new wxTextCtrl( itemWizardPageSimple2, ID_WIZARD_DIALOG_TEXTCTRL, _T(""), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemTextCtrl7, 0, wxGROW|wxALL, 5);

    itemBoxSizer3->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText9 = new wxStaticText( itemWizardPageSimple2, wxID_STATIC, _("Your organisation:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText9, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxTextCtrl* itemTextCtrl10 = new wxTextCtrl( itemWizardPageSimple2, ID_WIZARD_DIALOG_TEXTCTRL1, _T(""), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemTextCtrl10, 0, wxGROW|wxALL, 5);

    itemBoxSizer3->Add(5, 5, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText12 = new wxStaticText( itemWizardPageSimple2, wxID_STATIC, _("Now click on Next to go to the next page of this wizard."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText12, 0, wxALIGN_LEFT|wxALL, 5);

////@end FirstPage content construction
}

/*!
 * Should we show tooltips?
 */

bool FirstPage::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap FirstPage::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin FirstPage bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end FirstPage bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon FirstPage::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin FirstPage icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end FirstPage icon retrieval
}

/*!
 * SecondPage type definition
 */

IMPLEMENT_DYNAMIC_CLASS( SecondPage, wxWizardPageSimple )

/*!
 * SecondPage event table definition
 */

BEGIN_EVENT_TABLE( SecondPage, wxWizardPageSimple )

////@begin SecondPage event table entries
////@end SecondPage event table entries

END_EVENT_TABLE()

/*!
 * SecondPage constructors
 */

SecondPage::SecondPage( )
{
}

SecondPage::SecondPage( wxWizard* parent )
{
    Create( parent );
}

/*!
 * SecondPage creator
 */

bool SecondPage::Create( wxWizard* parent )
{
////@begin SecondPage member initialisation
////@end SecondPage member initialisation

////@begin SecondPage creation
    wxBitmap wizardBitmap(wxNullBitmap);
    wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

    CreateControls();
    if (GetSizer())
        GetSizer()->Fit(this);
////@end SecondPage creation
    return true;
}

/*!
 * Control creation for SecondPage
 */

void SecondPage::CreateControls()
{    
////@begin SecondPage content construction
    SecondPage* itemWizardPageSimple13 = this;

    wxBoxSizer* itemBoxSizer14 = new wxBoxSizer(wxVERTICAL);
    itemWizardPageSimple13->SetSizer(itemBoxSizer14);

    wxStaticText* itemStaticText15 = new wxStaticText( itemWizardPageSimple13, wxID_STATIC, _("This page demonstrates a few further controls."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer14->Add(itemStaticText15, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer14->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxCheckBox* itemCheckBox17 = new wxCheckBox( itemWizardPageSimple13, ID_WIZARD_DIALOG_CHECKBOX, _("Option 1"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox17->SetValue(false);
    itemBoxSizer14->Add(itemCheckBox17, 0, wxALIGN_LEFT|wxALL, 5);

    wxCheckBox* itemCheckBox18 = new wxCheckBox( itemWizardPageSimple13, ID_WIZARD_DIALOG_CHECKBOX1, _("Option 2"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox18->SetValue(false);
    itemBoxSizer14->Add(itemCheckBox18, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer14->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText20 = new wxStaticText( itemWizardPageSimple13, wxID_STATIC, _("Choose from several things:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer14->Add(itemStaticText20, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemComboBox21Strings;
    itemComboBox21Strings.Add(_("One thing"));
    itemComboBox21Strings.Add(_("Two things"));
    itemComboBox21Strings.Add(_("Three things"));
    wxComboBox* itemComboBox21 = new wxComboBox( itemWizardPageSimple13, ID_WIZARD_DIALOG_COMBOBOX, _("One thing"), wxDefaultPosition, wxDefaultSize, itemComboBox21Strings, wxCB_DROPDOWN );
    itemComboBox21->SetStringSelection(_("One thing"));
    itemBoxSizer14->Add(itemComboBox21, 0, wxGROW|wxALL, 5);

    itemBoxSizer14->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText23 = new wxStaticText( itemWizardPageSimple13, wxID_STATIC, _("Check the properties you want to have applied:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer14->Add(itemStaticText23, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemCheckListBox24Strings;
    itemCheckListBox24Strings.Add(_("Property 1"));
    itemCheckListBox24Strings.Add(_("Property 2"));
    itemCheckListBox24Strings.Add(_("Property 3"));
    wxCheckListBox* itemCheckListBox24 = new wxCheckListBox( itemWizardPageSimple13, ID_WIZARD_DIALOG_CHECKLISTBOX, wxDefaultPosition, wxSize(-1, 80), itemCheckListBox24Strings, wxLB_SINGLE );
    itemBoxSizer14->Add(itemCheckListBox24, 0, wxGROW|wxALL, 5);

    itemBoxSizer14->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

////@end SecondPage content construction
}

/*!
 * Should we show tooltips?
 */

bool SecondPage::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap SecondPage::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin SecondPage bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end SecondPage bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon SecondPage::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin SecondPage icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end SecondPage icon retrieval
}

/*!
 * ThirdPage type definition
 */

IMPLEMENT_DYNAMIC_CLASS( ThirdPage, wxWizardPageSimple )

/*!
 * ThirdPage event table definition
 */

BEGIN_EVENT_TABLE( ThirdPage, wxWizardPageSimple )

////@begin ThirdPage event table entries
////@end ThirdPage event table entries

END_EVENT_TABLE()

/*!
 * ThirdPage constructors
 */

ThirdPage::ThirdPage( )
{
}

ThirdPage::ThirdPage( wxWizard* parent )
{
    Create( parent );
}

/*!
 * ThirdPage creator
 */

bool ThirdPage::Create( wxWizard* parent )
{
////@begin ThirdPage member initialisation
////@end ThirdPage member initialisation

////@begin ThirdPage creation
    wxBitmap wizardBitmap(wxNullBitmap);
    wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

    CreateControls();
    if (GetSizer())
        GetSizer()->Fit(this);
////@end ThirdPage creation
    return true;
}

/*!
 * Control creation for ThirdPage
 */

void ThirdPage::CreateControls()
{    
////@begin ThirdPage content construction
    ThirdPage* itemWizardPageSimple26 = this;

    wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
    itemWizardPageSimple26->SetSizer(itemBoxSizer27);

    wxHtmlWindow* itemHtmlWindow28 = new wxHtmlWindow( itemWizardPageSimple26, ID_WIZARD_DIALOG_HTMLWINDOW, wxDefaultPosition, wxSize(200, 150), wxHW_SCROLLBAR_AUTO|wxSUNKEN_BORDER|wxHSCROLL|wxVSCROLL );
    itemHtmlWindow28->SetPage(_("<font size=-1>\n<H3>Congratulations!</H3>\n\nYou came to the end of the wizard. Your options are summarised below.<p>\n\n<table width=\"100%\">\n<tr>\n<td>\n<b>Name</b>\n</td>\n<td>\nJoe Bloggs\n</td>\n</tr>\n<tr>\n<td>\n<b>Option 1</b>\n</td>\n<td>\nYes\n</td>\n</tr>\n<tr>\n<td>\n<b>Option 2</b>\n</td>\n<td>\nNo\n</td>\n</tr>\n</table>\n\n<p>\n\nPlease press Finish to apply your choices.<p>\n\n</font>"));
    itemBoxSizer27->Add(itemHtmlWindow28, 1, wxGROW|wxALL, 5);

////@end ThirdPage content construction
}

/*!
 * Should we show tooltips?
 */

bool ThirdPage::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap ThirdPage::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin ThirdPage bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end ThirdPage bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon ThirdPage::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin ThirdPage icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end ThirdPage icon retrieval
}
