/////////////////////////////////////////////////////////////////////////////
// Name:        complexdialog.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 16:16:39
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "complexdialog.h"
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
#include "independentpanel.h"
////@end includes

#include "complexdialog.h"

////@begin XPM images
////@end XPM images

/*!
 * ComplexDialog type definition
 */

IMPLEMENT_DYNAMIC_CLASS( ComplexDialog, wxDialog )

/*!
 * ComplexDialog event table definition
 */

BEGIN_EVENT_TABLE( ComplexDialog, wxDialog )

////@begin ComplexDialog event table entries
////@end ComplexDialog event table entries

END_EVENT_TABLE()

/*!
 * ComplexDialog constructors
 */

ComplexDialog::ComplexDialog( )
{
}

ComplexDialog::ComplexDialog( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * ComplexDialog creator
 */

bool ComplexDialog::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin ComplexDialog member initialisation
////@end ComplexDialog member initialisation

////@begin ComplexDialog creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end ComplexDialog creation
    return true;
}

/*!
 * Control creation for ComplexDialog
 */

void ComplexDialog::CreateControls()
{    
////@begin ComplexDialog content construction
    ComplexDialog* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText4 = new wxStaticText( itemDialog1, wxID_STATIC, _("This dialog demonstrates some sizer issues.\n\nThe notebook is set to expand (and also stretch vertically), otherwise\nit would stay a fixed minimal size when resizing the dialog."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer3->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxNotebook* itemNotebook6 = new wxNotebook( itemDialog1, ID_COMPLEXDIALOG_NOTEBOOK, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT|wxBK_TOP );

    wxPanel* itemPanel7 = new wxPanel( itemNotebook6, ID_COMPLEXDIALOG_PANEL, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
    itemPanel7->SetSizer(itemBoxSizer8);

    wxStaticText* itemStaticText9 = new wxStaticText( itemPanel7, wxID_STATIC, _("Below we have a horizontal sizer with a text control and button.\nThe horizontal sizer has no borders, and the text control\nhas its stretch factor set to one (with the double-headed arrow)\nto make it expand to fill the horizontal sizer."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer8->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText11 = new wxStaticText( itemPanel7, wxID_STATIC, _("&Filename:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer8->Add(itemStaticText11, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer8->Add(itemBoxSizer12, 0, wxGROW, 5);
    wxTextCtrl* itemTextCtrl13 = new wxTextCtrl( itemPanel7, ID_COMPLEXDIALOG_TEXTCTRL, _T(""), wxDefaultPosition, wxSize(200, -1), 0 );
    itemBoxSizer12->Add(itemTextCtrl13, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton14 = new wxButton( itemPanel7, ID_COMPLEXDIALOG_BUTTON, _("Browse..."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer12->Add(itemButton14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    itemBoxSizer8->Add(5, 5, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText16 = new wxStaticText( itemPanel7, wxID_STATIC, _("Notice how the space above this text expands as you stretch\nthe dialog vertically. This is because there is a spacer with its\nstretch factor set to 1."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer8->Add(itemStaticText16, 0, wxALIGN_LEFT|wxALL, 5);

    itemNotebook6->AddPage(itemPanel7, _("Stretching"));

    MySeparatePanel* itemPanel17 = new MySeparatePanel( itemNotebook6, ID_COMPLEXDIALOG_MYSEPARATEPANEL, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    itemNotebook6->AddPage(itemPanel17, _("wxFlexGridSizer"));

    wxPanel* itemPanel28 = new wxPanel( itemNotebook6, ID_COMPLEXDIALOG_PANEL1, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxVERTICAL);
    itemPanel28->SetSizer(itemBoxSizer29);

    wxStaticBox* itemStaticBoxSizer30Static = new wxStaticBox(itemPanel28, wxID_ANY, _("A static box sizer"));
    wxStaticBoxSizer* itemStaticBoxSizer30 = new wxStaticBoxSizer(itemStaticBoxSizer30Static, wxVERTICAL);
    itemBoxSizer29->Add(itemStaticBoxSizer30, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText31 = new wxStaticText( itemPanel28, wxID_STATIC, _("A wxStaticBoxSizer consists of a sizer that manages a wxStaticBox\nand controls inside the box. Note that contained controls are\ncreated as siblings of the wxStaticBox, not children, even though\nthey appear as children in the sizer hierarchy."), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticBoxSizer30->Add(itemStaticText31, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemStaticBoxSizer30->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText33 = new wxStaticText( itemPanel28, wxID_STATIC, _("Here's a wxCheckListBox:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticBoxSizer30->Add(itemStaticText33, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemCheckListBox34Strings;
    itemCheckListBox34Strings.Add(_("One"));
    itemCheckListBox34Strings.Add(_("Two"));
    itemCheckListBox34Strings.Add(_("Three"));
    itemCheckListBox34Strings.Add(_("Four"));
    wxCheckListBox* itemCheckListBox34 = new wxCheckListBox( itemPanel28, ID_COMPLEXDIALOG_CHECKLISTBOX, wxDefaultPosition, wxDefaultSize, itemCheckListBox34Strings, wxLB_SINGLE );
    itemStaticBoxSizer30->Add(itemCheckListBox34, 1, wxGROW|wxALL, 5);

    itemNotebook6->AddPage(itemPanel28, _("wxStaticBoxSizer"));

    itemBoxSizer3->Add(itemNotebook6, 1, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText35 = new wxStaticText( itemDialog1, wxID_STATIC, _("Toggle the platform selection (first drop-down in the toolbar) between\n__WXMSW__ and __WXMAC__ to see the difference in buttons below\nthis text. This is controlled by the Platform property."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText35, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer3->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

#if defined(__WXMSW__) || defined(__WXGTK__)
    wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer3->Add(itemBoxSizer37, 0, wxGROW, 5);

    itemBoxSizer37->Add(5, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton39 = new wxButton( itemDialog1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(itemButton39, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton40 = new wxButton( itemDialog1, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(itemButton40, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton41 = new wxButton( itemDialog1, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(itemButton41, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

#endif

#if defined(__WXMAC__)
    wxBoxSizer* itemBoxSizer42 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer3->Add(itemBoxSizer42, 0, wxGROW, 5);

    wxButton* itemButton43 = new wxButton( itemDialog1, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer42->Add(itemButton43, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    itemBoxSizer42->Add(5, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton45 = new wxButton( itemDialog1, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer42->Add(itemButton45, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton46 = new wxButton( itemDialog1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer42->Add(itemButton46, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

#endif

////@end ComplexDialog content construction
}

/*!
 * Should we show tooltips?
 */

bool ComplexDialog::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap ComplexDialog::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin ComplexDialog bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end ComplexDialog bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon ComplexDialog::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin ComplexDialog icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end ComplexDialog icon retrieval
}
