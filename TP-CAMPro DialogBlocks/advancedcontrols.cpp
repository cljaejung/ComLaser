/////////////////////////////////////////////////////////////////////////////
// Name:        advancedcontrols.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 16:17:03
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "advancedcontrols.h"
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

#include "advancedcontrols.h"

////@begin XPM images
////@end XPM images

/*!
 * AdvancedControls type definition
 */

IMPLEMENT_DYNAMIC_CLASS( AdvancedControls, wxDialog )

/*!
 * AdvancedControls event table definition
 */

BEGIN_EVENT_TABLE( AdvancedControls, wxDialog )

////@begin AdvancedControls event table entries
////@end AdvancedControls event table entries

END_EVENT_TABLE()

/*!
 * AdvancedControls constructors
 */

AdvancedControls::AdvancedControls( )
{
}

AdvancedControls::AdvancedControls( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * AdvancedControls creator
 */

bool AdvancedControls::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin AdvancedControls member initialisation
////@end AdvancedControls member initialisation

////@begin AdvancedControls creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    Centre();
////@end AdvancedControls creation
    return true;
}

/*!
 * Control creation for AdvancedControls
 */

void AdvancedControls::CreateControls()
{    
////@begin AdvancedControls content construction
    AdvancedControls* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 5);

    wxNotebook* itemNotebook4 = new wxNotebook( itemDialog1, ID_ADVANCEDCONTROLS_NOTEBOOK, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT|wxBK_TOP );

    wxPanel* itemPanel5 = new wxPanel( itemNotebook4, ID_ADVANCEDCONTROLS_PANEL, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemPanel5->SetSizer(itemBoxSizer6);

    wxHtmlWindow* itemHtmlWindow7 = new wxHtmlWindow( itemPanel5, ID_ADVANCEDCONTROLS_HTMLWINDOW, wxDefaultPosition, wxSize(10, 10), wxHW_SCROLLBAR_AUTO|wxNO_BORDER|wxHSCROLL|wxVSCROLL );
    itemHtmlWindow7->SetPage(_("<H3>wxHtmlWindow is fun</H3>\n\nYou can put all kinds of <i>styles</i> and <font color=\"red\">colours</font> in an HTML control. It's great for About boxes, reports or giving extra impact to your dialogs.<P>\n\n<table border=1 width=\"100%\">\n<tr>\n<td align=center>\nPlus:\n</td>\n<td align=center>\nYou can do tables, too.\n</td>\n</tr>\n</table>\n<p>\n\nIf you use an wxHtmlWindow in an About box, you can use code like this to fit the window to its content:<p>\n\n<font size=-1>\n<code>\nwxHtmlContainerCell* cell =<br>\n&nbsp;&nbsp;html->GetInternalRepresentation();<p>\nhtml->SetSize(cell->GetWidth(), cell->GetHeight());\n</code>\n</font>"));
    itemBoxSizer6->Add(itemHtmlWindow7, 1, wxGROW|wxALL, 5);

    itemNotebook4->AddPage(itemPanel5, _("wxHtmlWindow"));

    wxPanel* itemPanel8 = new wxPanel( itemNotebook4, ID_ADVANCEDCONTROLS_PANEL1, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
    itemPanel8->SetSizer(itemBoxSizer9);

    wxStaticText* itemStaticText10 = new wxStaticText( itemPanel8, wxID_STATIC, _("A directory control:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemStaticText10, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxGenericDirCtrl* itemGenericDirCtrl11 = new wxGenericDirCtrl( itemPanel8, ID_ADVANCEDCONTROLS_GENERICDIRCTRL, _T(""), wxDefaultPosition, wxSize(10, 10), 0, _T("All files (*.*)|*.*"), 0 );
    itemBoxSizer9->Add(itemGenericDirCtrl11, 1, wxGROW|wxALL, 5);

    itemNotebook4->AddPage(itemPanel8, _("wxDirCtrl"));

    wxPanel* itemPanel12 = new wxPanel( itemNotebook4, ID_ADVANCEDCONTROLS_PANEL2, wxDefaultPosition, wxSize(10, 10), wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
    itemPanel12->SetSizer(itemBoxSizer13);

    wxStaticText* itemStaticText14 = new wxStaticText( itemPanel12, wxID_STATIC, _("A tree control:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer13->Add(itemStaticText14, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxTreeCtrl* itemTreeCtrl15 = new wxTreeCtrl( itemPanel12, ID_ADVANCEDCONTROLS_TREECTRL, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS |wxTR_LINES_AT_ROOT|wxTR_SINGLE );
    itemBoxSizer13->Add(itemTreeCtrl15, 1, wxGROW|wxALL, 5);

    itemNotebook4->AddPage(itemPanel12, _("wxTreeCtrl"));

    wxPanel* itemPanel16 = new wxPanel( itemNotebook4, ID_ADVANCEDCONTROLS_PANEL3, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
    itemPanel16->SetSizer(itemBoxSizer17);

    wxStaticText* itemStaticText18 = new wxStaticText( itemPanel16, wxID_STATIC, _("A 20x20 grid:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer17->Add(itemStaticText18, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxGrid* itemGrid19 = new wxGrid( itemPanel16, ID_ADVANCEDCONTROLS_GRID, wxDefaultPosition, wxSize(10, 10), wxSUNKEN_BORDER|wxHSCROLL|wxVSCROLL );
    itemGrid19->SetDefaultColSize(50);
    itemGrid19->SetDefaultRowSize(25);
    itemGrid19->SetColLabelSize(25);
    itemGrid19->SetRowLabelSize(50);
    itemGrid19->CreateGrid(20, 20, wxGrid::wxGridSelectCells);
    itemBoxSizer17->Add(itemGrid19, 1, wxGROW|wxALL, 5);

    itemNotebook4->AddPage(itemPanel16, _("wxGrid"));

    wxPanel* itemPanel20 = new wxPanel( itemNotebook4, ID_ADVANCEDCONTROLS_PANEL4, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxVERTICAL);
    itemPanel20->SetSizer(itemBoxSizer21);

    itemBoxSizer21->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText23 = new wxStaticText( itemPanel20, wxID_STATIC, _("A wxCalendarCtrl:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer21->Add(itemStaticText23, 0, wxALIGN_CENTER_HORIZONTAL|wxLEFT|wxRIGHT|wxTOP, 5);

    wxCalendarCtrl* itemCalendarCtrl24 = new wxCalendarCtrl( itemPanel20, ID_ADVANCEDCONTROLS_CALENDARCTRL, wxDateTime(), wxDefaultPosition, wxDefaultSize, wxCAL_SUNDAY_FIRST|wxSUNKEN_BORDER );
    itemBoxSizer21->Add(itemCalendarCtrl24, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemBoxSizer21->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText26 = new wxStaticText( itemPanel20, wxID_STATIC, _("And a wxDatePickerCtrl:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer21->Add(itemStaticText26, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxDatePickerCtrl* itemDatePickerCtrl27 = new wxDatePickerCtrl( itemPanel20, ID_ADVANCEDCONTROLS_DATEPICKERCTRL, wxDateTime(), wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
    itemBoxSizer21->Add(itemDatePickerCtrl27, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemNotebook4->AddPage(itemPanel20, _("Dates"));

    itemBoxSizer3->Add(itemNotebook4, 1, wxGROW|wxALL, 5);

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

////@end AdvancedControls content construction
}

/*!
 * Should we show tooltips?
 */

bool AdvancedControls::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap AdvancedControls::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin AdvancedControls bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end AdvancedControls bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon AdvancedControls::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin AdvancedControls icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end AdvancedControls icon retrieval
}
