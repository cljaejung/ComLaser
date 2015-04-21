/////////////////////////////////////////////////////////////////////////////
// Name:        scrollingdialog.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     13/06/2006 15:38:52
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "scrollingdialog.h"
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

#include "scrollingdialog.h"

////@begin XPM images
////@end XPM images

/*!
 * ScrollingDialog type definition
 */

IMPLEMENT_DYNAMIC_CLASS( ScrollingDialog, wxDialog )

/*!
 * ScrollingDialog event table definition
 */

BEGIN_EVENT_TABLE( ScrollingDialog, wxDialog )

////@begin ScrollingDialog event table entries
////@end ScrollingDialog event table entries

END_EVENT_TABLE()

/*!
 * ScrollingDialog constructors
 */

ScrollingDialog::ScrollingDialog( )
{
}

ScrollingDialog::ScrollingDialog( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * ScrollingDialog creator
 */

bool ScrollingDialog::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin ScrollingDialog member initialisation
////@end ScrollingDialog member initialisation

////@begin ScrollingDialog creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end ScrollingDialog creation
    return true;
}

/*!
 * Control creation for ScrollingDialog
 */

void ScrollingDialog::CreateControls()
{    
////@begin ScrollingDialog content construction
    ScrollingDialog* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText4 = new wxStaticText( itemDialog1, wxID_STATIC, _("This dialog shows a wxScrolledWindow containing controls."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_LEFT|wxALL, 5);

    wxScrolledWindow* itemScrolledWindow5 = new wxScrolledWindow( itemDialog1, ID_SCROLLINGDIALOG_SCROLLEDWINDOW, wxDefaultPosition, wxSize(300, 240), wxSUNKEN_BORDER|wxHSCROLL|wxVSCROLL );
    itemBoxSizer3->Add(itemScrolledWindow5, 1, wxGROW|wxALL, 5);
    itemScrolledWindow5->SetScrollbars(1, 1, 0, 0);
    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemScrolledWindow5->SetSizer(itemBoxSizer6);

    wxFlexGridSizer* itemFlexGridSizer7 = new wxFlexGridSizer(0, 2, 0, 0);
    itemBoxSizer6->Add(itemFlexGridSizer7, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText8 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 1:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText8, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl9 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl9, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText10 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 2:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText10, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl11 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl11, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText12 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 3:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText12, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl13 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl13, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText14 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 4:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText14, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl15 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl15, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText16 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 5:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText16, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl17 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl17, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText18 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 6:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText18, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl19 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl19, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText20 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 7:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText20, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl21 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl21, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText22 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 9:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText22, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl23 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl23, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText24 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 10:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText24, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl25 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL8, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl25, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText26 = new wxStaticText( itemScrolledWindow5, wxID_STATIC, _("Value 11:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemStaticText26, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl27 = new wxTextCtrl( itemScrolledWindow5, ID_SCROLLINGDIALOG_TEXTCTRL9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer7->Add(itemTextCtrl27, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    itemFlexGridSizer7->AddGrowableCol(1);

    itemScrolledWindow5->FitInside();

#if defined(__WXMSW__) || defined(__WXGTK__)
    wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer3->Add(itemBoxSizer28, 0, wxGROW, 5);

    itemBoxSizer28->Add(5, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton30 = new wxButton( itemDialog1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer28->Add(itemButton30, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton31 = new wxButton( itemDialog1, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer28->Add(itemButton31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton32 = new wxButton( itemDialog1, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer28->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

#endif

////@end ScrollingDialog content construction
}

/*!
 * Should we show tooltips?
 */

bool ScrollingDialog::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap ScrollingDialog::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin ScrollingDialog bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end ScrollingDialog bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon ScrollingDialog::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin ScrollingDialog icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end ScrollingDialog icon retrieval
}
