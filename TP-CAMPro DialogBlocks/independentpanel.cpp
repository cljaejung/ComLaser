/////////////////////////////////////////////////////////////////////////////
// Name:        independentpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     08/06/2006 14:41:45
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "independentpanel.h"
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

#include "independentpanel.h"

////@begin XPM images
////@end XPM images

/*!
 * MySeparatePanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( MySeparatePanel, wxPanel )

/*!
 * MySeparatePanel event table definition
 */

BEGIN_EVENT_TABLE( MySeparatePanel, wxPanel )

////@begin MySeparatePanel event table entries
////@end MySeparatePanel event table entries

END_EVENT_TABLE()

/*!
 * MySeparatePanel constructors
 */

MySeparatePanel::MySeparatePanel( )
{
}

MySeparatePanel::MySeparatePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, pos, size, style);
}

/*!
 * MySeparatePanel creator
 */

bool MySeparatePanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin MySeparatePanel member initialisation
////@end MySeparatePanel member initialisation

////@begin MySeparatePanel creation
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
        GetSizer()->Fit(this);
////@end MySeparatePanel creation
    return true;
}

/*!
 * Control creation for MySeparatePanel
 */

void MySeparatePanel::CreateControls()
{    
////@begin MySeparatePanel content construction
    MySeparatePanel* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxStaticText* itemStaticText3 = new wxStaticText( itemPanel1, wxID_STATIC, _("Below we're using a 2x3 wxFlexGridSizer, with right-aligned labels.\nWe've centred the sizer so it doesn't grow to fit the resized dialog.\nTry making it expand horizontally. It'll seem to right-align - that's\nbecause we've specified that the first column (only) can grow."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemStaticText3, 0, wxALIGN_LEFT|wxALL|wxADJUST_MINSIZE, 5);

    wxFlexGridSizer* itemFlexGridSizer4 = new wxFlexGridSizer(3, 2, 0, 0);
    itemFlexGridSizer4->AddGrowableCol(0);
    itemBoxSizer2->Add(itemFlexGridSizer4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText5 = new wxStaticText( itemPanel1, wxID_STATIC, _("Count:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer4->Add(itemStaticText5, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL|wxADJUST_MINSIZE, 5);

    wxString itemComboBox6Strings[] = {
        _("One"),
        _("Two"),
        _("Three")
    };
    wxComboBox* itemComboBox6 = new wxComboBox( itemPanel1, ID_COMPLEXDIALOG_COMBOBOX, _("One"), wxDefaultPosition, wxDefaultSize, 3, itemComboBox6Strings, wxCB_DROPDOWN );
    itemComboBox6->SetStringSelection(_("One"));
    itemFlexGridSizer4->Add(itemComboBox6, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText7 = new wxStaticText( itemPanel1, wxID_STATIC, _("Selection:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer4->Add(itemStaticText7, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL|wxADJUST_MINSIZE, 5);

    wxString* itemComboBox8Strings = NULL;
    wxComboBox* itemComboBox8 = new wxComboBox( itemPanel1, ID_COMPLEXDIALOG_COMBOBOX1, _T(""), wxDefaultPosition, wxDefaultSize, 0, itemComboBox8Strings, wxCB_DROPDOWN );
    itemFlexGridSizer4->Add(itemComboBox8, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText9 = new wxStaticText( itemPanel1, wxID_STATIC, _("Another:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer4->Add(itemStaticText9, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL|wxADJUST_MINSIZE, 5);

    wxString* itemComboBox10Strings = NULL;
    wxComboBox* itemComboBox10 = new wxComboBox( itemPanel1, ID_COMPLEXDIALOG_COMBOBOX2, _T(""), wxDefaultPosition, wxDefaultSize, 0, itemComboBox10Strings, wxCB_DROPDOWN );
    itemFlexGridSizer4->Add(itemComboBox10, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText11 = new wxStaticText( itemPanel1, wxID_STATIC, _("The code for this panel is generated in separate .h and .cpp files, \nbecause the \"Separate files\" property is checked, and a class name\nhas been specified."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemStaticText11, 0, wxALIGN_LEFT|wxALL|wxADJUST_MINSIZE, 5);

////@end MySeparatePanel content construction
}

/*!
 * Should we show tooltips?
 */

bool MySeparatePanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap MySeparatePanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin MySeparatePanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end MySeparatePanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon MySeparatePanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin MySeparatePanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end MySeparatePanel icon retrieval
}
