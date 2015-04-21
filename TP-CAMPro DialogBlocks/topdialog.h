/////////////////////////////////////////////////////////////////////////////
// Name:        topdialog.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     15/06/2006 10:26:45
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _TOPDIALOG_H_
#define _TOPDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "topdialog.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/html/htmlwin.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_TOPDIALOG 16001
#define ID_TOPDIALOG_HTMLWINDOW 16002
#define ID_TOPDIALOG_BUTTON 16003
#define ID_TOPDIALOG_BUTTON1 16004
#define ID_TOPDIALOG_BUTTON2 16005
#define ID_TOPDIALOG_BUTTON3 16020
#define ID_TOPDIALOG_BUTTON4 16021
#define ID_TOPDIALOG_BUTTON5 16022
#define ID_TOPDIALOG_BUTTON6 16023
#define SYMBOL_TOPDIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_TOPDIALOG_TITLE _("TopDialog")
#define SYMBOL_TOPDIALOG_IDNAME ID_TOPDIALOG
#define SYMBOL_TOPDIALOG_SIZE wxSize(400, 300)
#define SYMBOL_TOPDIALOG_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * TopDialog class declaration
 */

class TopDialog: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( TopDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    TopDialog( );
    TopDialog( wxWindow* parent, wxWindowID id = SYMBOL_TOPDIALOG_IDNAME, const wxString& caption = SYMBOL_TOPDIALOG_TITLE, const wxPoint& pos = SYMBOL_TOPDIALOG_POSITION, const wxSize& size = SYMBOL_TOPDIALOG_SIZE, long style = SYMBOL_TOPDIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_TOPDIALOG_IDNAME, const wxString& caption = SYMBOL_TOPDIALOG_TITLE, const wxPoint& pos = SYMBOL_TOPDIALOG_POSITION, const wxSize& size = SYMBOL_TOPDIALOG_SIZE, long style = SYMBOL_TOPDIALOG_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin TopDialog event handler declarations

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_TOPDIALOG_BUTTON
    void OnButton4Click( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_TOPDIALOG_BUTTON1
    void OnButton5Click( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_TOPDIALOG_BUTTON2
    void OnButton6Click( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_TOPDIALOG_BUTTON3
    void OnButton7Click( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_TOPDIALOG_BUTTON4
    void OnButton8Click( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_TOPDIALOG_BUTTON5
    void OnButton9Click( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_TOPDIALOG_BUTTON6
    void OnButton10Click( wxCommandEvent& event );

#if defined(__WXMSW__) || defined(__WXGTK__)
    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_CANCEL
    void OnCancelClick( wxCommandEvent& event );

#endif
////@end TopDialog event handler declarations

////@begin TopDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end TopDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin TopDialog member variables
////@end TopDialog member variables
};

#endif
    // _TOPDIALOG_H_
