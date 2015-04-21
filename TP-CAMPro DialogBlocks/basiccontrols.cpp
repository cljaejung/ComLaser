/////////////////////////////////////////////////////////////////////////////
// Name:        basiccontrols.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 16:17:19
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "basiccontrols.h"
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

#include "basiccontrols.h"

////@begin XPM images
#include "find.xpm"
#include "tipicon.xpm"
////@end XPM images

/*!
 * BasicControls type definition
 */

IMPLEMENT_DYNAMIC_CLASS( BasicControls, wxDialog )

/*!
 * BasicControls event table definition
 */

BEGIN_EVENT_TABLE( BasicControls, wxDialog )

////@begin BasicControls event table entries
////@end BasicControls event table entries

END_EVENT_TABLE()

/*!
 * BasicControls constructors
 */

BasicControls::BasicControls( )
{
}

BasicControls::BasicControls( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * BasicControls creator
 */

bool BasicControls::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin BasicControls member initialisation
////@end BasicControls member initialisation

////@begin BasicControls creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end BasicControls creation
    return true;
}

/*!
 * Control creation for BasicControls
 */

void BasicControls::CreateControls()
{    
////@begin BasicControls content construction
    BasicControls* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText4 = new wxStaticText( itemDialog1, wxID_STATIC, _("This dialog shows most of the basic controls available to you."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_LEFT|wxALL, 5);

    wxNotebook* itemNotebook5 = new wxNotebook( itemDialog1, ID_BASICCONTROLS_NOTEBOOK, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT|wxBK_TOP );

    wxPanel* itemPanel6 = new wxPanel( itemNotebook5, ID_BASICCONTROLS_PANEL, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
    itemPanel6->SetSizer(itemBoxSizer7);

    wxStaticText* itemStaticText8 = new wxStaticText( itemPanel6, wxID_STATIC, _("Buttons"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText8->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer7->Add(itemStaticText8, 0, wxALIGN_LEFT|wxALL, 5);

    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer7->Add(itemBoxSizer9, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    wxButton* itemButton10 = new wxButton( itemPanel6, ID_BASICCONTROLS_BUTTON, _("Push Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer9->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBitmapButton* itemBitmapButton11 = new wxBitmapButton( itemPanel6, ID_BASICCONTROLS_BITMAPBUTTON, itemDialog1->GetBitmapResource(wxT("find.xpm")), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
    itemBoxSizer9->Add(itemBitmapButton11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxToggleButton* itemToggleButton12 = new wxToggleButton( itemPanel6, ID_BASICCONTROLS_TOGGLEBUTTON, _("Toggle Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemToggleButton12->SetValue(false);
    itemBoxSizer9->Add(itemToggleButton12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    itemBoxSizer7->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText14 = new wxStaticText( itemPanel6, wxID_STATIC, _("Check controls"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText14->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer7->Add(itemStaticText14, 0, wxALIGN_LEFT|wxALL, 5);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer7->Add(itemBoxSizer15, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    wxCheckBox* itemCheckBox16 = new wxCheckBox( itemPanel6, ID_BASICCONTROLS_CHECKBOX, _("Checkbox"), wxDefaultPosition, wxDefaultSize, 0 );
    itemCheckBox16->SetValue(false);
    itemBoxSizer15->Add(itemCheckBox16, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxRadioButton* itemRadioButton17 = new wxRadioButton( itemPanel6, ID_BASICCONTROLS_RADIOBUTTON, _("Radiobutton"), wxDefaultPosition, wxDefaultSize, 0 );
    itemRadioButton17->SetValue(false);
    itemBoxSizer15->Add(itemRadioButton17, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString itemRadioBox18Strings;
    itemRadioBox18Strings.Add(_("&One"));
    itemRadioBox18Strings.Add(_("&Two"));
    wxRadioBox* itemRadioBox18 = new wxRadioBox( itemPanel6, ID_BASICCONTROLS_RADIOBOX, _("Radiobox"), wxDefaultPosition, wxDefaultSize, itemRadioBox18Strings, 1, wxRA_SPECIFY_ROWS );
    itemRadioBox18->SetSelection(0);
    itemBoxSizer15->Add(itemRadioBox18, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    itemBoxSizer7->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText20 = new wxStaticText( itemPanel6, wxID_STATIC, _("Lists"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText20->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer7->Add(itemStaticText20, 0, wxALIGN_LEFT|wxALL, 5);

    wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer7->Add(itemBoxSizer21, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer21->Add(itemBoxSizer22, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);
    wxStaticText* itemStaticText23 = new wxStaticText( itemPanel6, wxID_STATIC, _("wxListBox:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer22->Add(itemStaticText23, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemListBox24Strings;
    itemListBox24Strings.Add(_("One"));
    itemListBox24Strings.Add(_("Two"));
    itemListBox24Strings.Add(_("Three"));
    wxListBox* itemListBox24 = new wxListBox( itemPanel6, ID_BASICCONTROLS_LISTBOX, wxDefaultPosition, wxSize(100, 100), itemListBox24Strings, wxLB_SINGLE );
    itemBoxSizer22->Add(itemListBox24, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer25 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer21->Add(itemBoxSizer25, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);
    wxStaticText* itemStaticText26 = new wxStaticText( itemPanel6, wxID_STATIC, _("wxCheckListBox:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer25->Add(itemStaticText26, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemCheckListBox27Strings;
    itemCheckListBox27Strings.Add(_("One"));
    itemCheckListBox27Strings.Add(_("Two"));
    itemCheckListBox27Strings.Add(_("Three"));
    wxCheckListBox* itemCheckListBox27 = new wxCheckListBox( itemPanel6, ID_BASICCONTROLS_CHECKLISTBOX, wxDefaultPosition, wxSize(100, 100), itemCheckListBox27Strings, wxLB_SINGLE );
    itemBoxSizer25->Add(itemCheckListBox27, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer21->Add(itemBoxSizer28, 0, wxALIGN_TOP|wxALL, 5);
    wxStaticText* itemStaticText29 = new wxStaticText( itemPanel6, wxID_STATIC, _("wxChoice:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer28->Add(itemStaticText29, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemChoice30Strings;
    itemChoice30Strings.Add(_("One"));
    itemChoice30Strings.Add(_("Two"));
    itemChoice30Strings.Add(_("Three"));
    wxChoice* itemChoice30 = new wxChoice( itemPanel6, ID_BASICCONTROLS_CHOICE, wxDefaultPosition, wxSize(130, -1), itemChoice30Strings, 0 );
    itemChoice30->SetStringSelection(_("One"));
    itemBoxSizer28->Add(itemChoice30, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText31 = new wxStaticText( itemPanel6, wxID_STATIC, _("wxComboBox:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer28->Add(itemStaticText31, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxArrayString itemComboBox32Strings;
    itemComboBox32Strings.Add(_("One"));
    itemComboBox32Strings.Add(_("Two"));
    itemComboBox32Strings.Add(_("Three"));
    wxComboBox* itemComboBox32 = new wxComboBox( itemPanel6, ID_BASICCONTROLS_COMBOBOX, _("One"), wxDefaultPosition, wxSize(130, -1), itemComboBox32Strings, wxCB_DROPDOWN );
    itemComboBox32->SetStringSelection(_("One"));
    itemBoxSizer28->Add(itemComboBox32, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemNotebook5->AddPage(itemPanel6, _("Buttons and lists"));

    wxPanel* itemPanel33 = new wxPanel( itemNotebook5, ID_BASICCONTROLS_PANEL1, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer34 = new wxBoxSizer(wxVERTICAL);
    itemPanel33->SetSizer(itemBoxSizer34);

    wxStaticText* itemStaticText35 = new wxStaticText( itemPanel33, wxID_STATIC, _("wxStaticText"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText35->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer34->Add(itemStaticText35, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticText* itemStaticText36 = new wxStaticText( itemPanel33, wxID_STATIC, _("This is static text\nwith a newline"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer34->Add(itemStaticText36, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemBoxSizer34->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    wxStaticText* itemStaticText38 = new wxStaticText( itemPanel33, wxID_STATIC, _("wxStaticLine"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText38->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer34->Add(itemStaticText38, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticLine* itemStaticLine39 = new wxStaticLine( itemPanel33, wxID_STATIC, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
    itemBoxSizer34->Add(itemStaticLine39, 0, wxGROW|wxALL, 5);

    itemBoxSizer34->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    wxStaticText* itemStaticText41 = new wxStaticText( itemPanel33, wxID_STATIC, _("wxStaticBoxSizer"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText41->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer34->Add(itemStaticText41, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticBox* itemStaticBoxSizer42Static = new wxStaticBox(itemPanel33, wxID_ANY, _("wxStaticBoxSizer"));
    wxStaticBoxSizer* itemStaticBoxSizer42 = new wxStaticBoxSizer(itemStaticBoxSizer42Static, wxVERTICAL);
    itemBoxSizer34->Add(itemStaticBoxSizer42, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    wxStaticText* itemStaticText43 = new wxStaticText( itemPanel33, wxID_STATIC, _("Static text in a static box sizer"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticBoxSizer42->Add(itemStaticText43, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemBoxSizer34->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    wxStaticText* itemStaticText45 = new wxStaticText( itemPanel33, wxID_STATIC, _("wxStaticBitmap"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText45->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer34->Add(itemStaticText45, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStaticBitmap* itemStaticBitmap46 = new wxStaticBitmap( itemPanel33, wxID_STATIC, itemDialog1->GetBitmapResource(wxT("tipicon.xpm")), wxDefaultPosition, wxSize(32, 32), 0 );
    itemBoxSizer34->Add(itemStaticBitmap46, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText47 = new wxStaticText( itemPanel33, wxID_STATIC, _("wxGauge"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText47->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer34->Add(itemStaticText47, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    itemBoxSizer34->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    wxGauge* itemGauge49 = new wxGauge( itemPanel33, ID_BASICCONTROLS_GAUGE, 100, wxDefaultPosition, wxSize(150, 20), wxGA_HORIZONTAL );
    itemGauge49->SetValue(20);
    itemBoxSizer34->Add(itemGauge49, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemBoxSizer34->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    wxStaticText* itemStaticText51 = new wxStaticText( itemPanel33, wxID_STATIC, _("wxStatusBar"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText51->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer34->Add(itemStaticText51, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxStatusBar* itemStatusBar52 = new wxStatusBar( itemPanel33, ID_BASICCONTROLS_STATUSBAR, wxST_SIZEGRIP|wxNO_BORDER );
    itemStatusBar52->SetFieldsCount(2);
    itemBoxSizer34->Add(itemStatusBar52, 0, wxGROW|wxALL, 5);

    itemBoxSizer34->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    itemNotebook5->AddPage(itemPanel33, _("Static"));

    wxPanel* itemPanel54 = new wxPanel( itemNotebook5, ID_BASICCONTROLS_PANEL2, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer55 = new wxBoxSizer(wxVERTICAL);
    itemPanel54->SetSizer(itemBoxSizer55);

    wxStaticText* itemStaticText56 = new wxStaticText( itemPanel54, wxID_STATIC, _("wxTextCtrl: single-line"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText56->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer55->Add(itemStaticText56, 0, wxALIGN_LEFT|wxALL, 5);

    wxTextCtrl* itemTextCtrl57 = new wxTextCtrl( itemPanel54, ID_BASICCONTROLS_TEXTCTRL, _T(""), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer55->Add(itemTextCtrl57, 0, wxGROW|wxALL, 5);

    itemBoxSizer55->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText59 = new wxStaticText( itemPanel54, wxID_STATIC, _("wxTextCtrl: multiline"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText59->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer55->Add(itemStaticText59, 0, wxALIGN_LEFT|wxALL, 5);

    wxTextCtrl* itemTextCtrl60 = new wxTextCtrl( itemPanel54, ID_BASICCONTROLS_TEXTCTRL1, _T(""), wxDefaultPosition, wxSize(120, 60), wxTE_MULTILINE );
    itemBoxSizer55->Add(itemTextCtrl60, 0, wxGROW|wxALL, 5);

    itemBoxSizer55->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText62 = new wxStaticText( itemPanel54, wxID_STATIC, _("wxSpinCtrl and wxSpinButton"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText62->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer55->Add(itemStaticText62, 0, wxALIGN_LEFT|wxALL, 5);

    wxBoxSizer* itemBoxSizer63 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer55->Add(itemBoxSizer63, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    wxSpinCtrl* itemSpinCtrl64 = new wxSpinCtrl( itemPanel54, ID_BASICCONTROLS_SPINCTRL, _T("0"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0 );
    itemBoxSizer63->Add(itemSpinCtrl64, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    itemBoxSizer63->Add(20, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxSpinButton* itemSpinButton66 = new wxSpinButton( itemPanel54, ID_BASICCONTROLS_SPINBUTTON, wxDefaultPosition, wxDefaultSize, wxSP_VERTICAL );
    itemSpinButton66->SetRange(0, 100);
    itemSpinButton66->SetValue(0);
    itemBoxSizer63->Add(itemSpinButton66, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    itemBoxSizer55->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemNotebook5->AddPage(itemPanel54, _("Entry"));

    wxPanel* itemPanel68 = new wxPanel( itemNotebook5, ID_BASICCONTROLS_PANEL3, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer69 = new wxBoxSizer(wxVERTICAL);
    itemPanel68->SetSizer(itemBoxSizer69);

    wxStaticText* itemStaticText70 = new wxStaticText( itemPanel68, wxID_STATIC, _("wxSlider"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText70->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer69->Add(itemStaticText70, 0, wxALIGN_LEFT|wxALL, 5);

    wxSlider* itemSlider71 = new wxSlider( itemPanel68, ID_BASICCONTROLS_SLIDER, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    itemBoxSizer69->Add(itemSlider71, 0, wxGROW|wxALL, 5);

    itemBoxSizer69->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText73 = new wxStaticText( itemPanel68, wxID_STATIC, _("wxScrollBar"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText73->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer69->Add(itemStaticText73, 0, wxALIGN_LEFT|wxALL, 5);

    wxScrollBar* itemScrollBar74 = new wxScrollBar( itemPanel68, ID_BASICCONTROLS_SCROLLBAR, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
    itemScrollBar74->SetScrollbar(0, 1, 100, 1);
    itemBoxSizer69->Add(itemScrollBar74, 0, wxGROW|wxALL, 5);

    itemBoxSizer69->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText76 = new wxStaticText( itemPanel68, wxID_STATIC, _("wxSpinButton"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText76->SetFont(wxFont(wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetPointSize(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetFamily(), wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT).GetStyle(), wxBOLD, false, wxT("")));
    itemBoxSizer69->Add(itemStaticText76, 0, wxALIGN_LEFT|wxALL, 5);

    wxSpinButton* itemSpinButton77 = new wxSpinButton( itemPanel68, ID_BASICCONTROLS_SPINBUTTON1, wxDefaultPosition, wxDefaultSize, wxSP_VERTICAL );
    itemSpinButton77->SetRange(0, 100);
    itemSpinButton77->SetValue(0);
    itemBoxSizer69->Add(itemSpinButton77, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemBoxSizer69->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemNotebook5->AddPage(itemPanel68, _("Scrolling"));

    itemBoxSizer3->Add(itemNotebook5, 1, wxGROW|wxALL, 5);

#if defined(__WXMSW__) || defined(__WXGTK__)
    wxBoxSizer* itemBoxSizer79 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer3->Add(itemBoxSizer79, 0, wxGROW, 5);

    itemBoxSizer79->Add(5, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton81 = new wxButton( itemDialog1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer79->Add(itemButton81, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton82 = new wxButton( itemDialog1, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer79->Add(itemButton82, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton83 = new wxButton( itemDialog1, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer79->Add(itemButton83, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

#endif

////@end BasicControls content construction
}

/*!
 * Should we show tooltips?
 */

bool BasicControls::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap BasicControls::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin BasicControls bitmap retrieval
    wxUnusedVar(name);
    if (name == _T("find.xpm"))
    {
        wxBitmap bitmap(find_xpm);
        return bitmap;
    }
    else if (name == _T("tipicon.xpm"))
    {
        wxBitmap bitmap(tipicon_xpm);
        return bitmap;
    }
    return wxNullBitmap;
////@end BasicControls bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon BasicControls::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin BasicControls icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end BasicControls icon retrieval
}
