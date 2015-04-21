/////////////////////////////////////////////////////////////////////////////
// Name:        settingsdialog.h
// Purpose:
// Author:      Anthemion Software Ltd
// Modified by:
// Created:     14/06/2006 16:17:35
// RCS-ID:
// Copyright:   (c) Anthemion Software Ltd
// Licence:
/////////////////////////////////////////////////////////////////////////////

#ifndef _SETTINGSDIALOG_H_
#define _SETTINGSDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "settingsdialog.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/propdlg.h"
////@end includes

#include "wx/bookctrl.h"

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_SETTINGSDIALOG 14000
#define ID_SETTINGS_DIALOG_PANEL 14018
#define ID_SETTINGS_DIALOG_CHECKBOX 14019
#define ID_SETTINGS_DIALOG_CHECKBOX1 14020
#define ID_SETTINGS_DIALOG_TEXTCTRL 14021
#define ID_SETTINGS_DIALOG_BUTTON 14022
#define ID_SETTINGS_DIALOG_PANEL1 14023
#define ID_SETTINGS_DIALOG_CHECKBOX2 14024
#define ID_SETTINGS_DIALOG_CHECKBOX3 14025
#define ID_SETTINGS_DIALOG_RADIOBUTTON 14026
#define ID_SETTINGS_DIALOG_RADIOBUTTON1 14027
#define ID_SETTINGS_DIALOG_RADIOBUTTON2 14028
#define ID_SETTINGS_DIALOG_PANEL2 14029
#define ID_SETTINGS_DIALOG_CHECKBOX4 14030
#define ID_SETTINGS_DIALOG_CHECKBOX5 14031
#define ID_SETTINGS_DIALOG_CHECKBOX6 14032
#define ID_SETTINGS_DIALOG_CHECKBOX7 14033
#define ID_SETTINGS_DIALOG_CHECKLISTBOX 14034
#define SYMBOL_SETTINGSDIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_SETTINGSDIALOG_TITLE _("SettingsDialog")
#define SYMBOL_SETTINGSDIALOG_IDNAME ID_SETTINGSDIALOG
#define SYMBOL_SETTINGSDIALOG_SIZE wxSize(400, 300)
#define SYMBOL_SETTINGSDIALOG_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * SettingsDialog class declaration
 */

class SettingsDialog: public wxPropertySheetDialog
{
    DECLARE_DYNAMIC_CLASS( SettingsDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    SettingsDialog( );
    SettingsDialog( wxWindow* parent, wxWindowID id = SYMBOL_SETTINGSDIALOG_IDNAME, const wxString& caption = SYMBOL_SETTINGSDIALOG_TITLE, const wxPoint& pos = SYMBOL_SETTINGSDIALOG_POSITION, const wxSize& size = SYMBOL_SETTINGSDIALOG_SIZE, long style = SYMBOL_SETTINGSDIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_SETTINGSDIALOG_IDNAME, const wxString& caption = SYMBOL_SETTINGSDIALOG_TITLE, const wxPoint& pos = SYMBOL_SETTINGSDIALOG_POSITION, const wxSize& size = SYMBOL_SETTINGSDIALOG_SIZE, long style = SYMBOL_SETTINGSDIALOG_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin SettingsDialog event handler declarations

////@end SettingsDialog event handler declarations

////@begin SettingsDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end SettingsDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin SettingsDialog member variables
////@end SettingsDialog member variables
};

#endif
    // _SETTINGSDIALOG_H_
