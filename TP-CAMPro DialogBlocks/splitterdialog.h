/////////////////////////////////////////////////////////////////////////////
// Name:        splitterdialog.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 18:38:16
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _SPLITTERDIALOG_H_
#define _SPLITTERDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "splitterdialog.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/splitter.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
class wxSplitterWindow;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_SPLITTERDIALOG 16000
#define ID_SPLITTERDIALOG_SPLITTERWINDOW 16015
#define ID_SPLITTERDIALOG_LISTBOX 16016
#define ID_SPLITTERDIALOG_PANEL 16017
#define ID_SPLITTERDIALOG_TEXTCTRL 16018
#define ID_SPLITTERDIALOG_TEXTCTRL1 16019
#define SYMBOL_SPLITTERDIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_SPLITTERDIALOG_TITLE _("SplitterDialog")
#define SYMBOL_SPLITTERDIALOG_IDNAME ID_SPLITTERDIALOG
#define SYMBOL_SPLITTERDIALOG_SIZE wxSize(450, 400)
#define SYMBOL_SPLITTERDIALOG_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * SplitterDialog class declaration
 */

class SplitterDialog: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( SplitterDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    SplitterDialog( );
    SplitterDialog( wxWindow* parent, wxWindowID id = SYMBOL_SPLITTERDIALOG_IDNAME, const wxString& caption = SYMBOL_SPLITTERDIALOG_TITLE, const wxPoint& pos = SYMBOL_SPLITTERDIALOG_POSITION, const wxSize& size = SYMBOL_SPLITTERDIALOG_SIZE, long style = SYMBOL_SPLITTERDIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_SPLITTERDIALOG_IDNAME, const wxString& caption = SYMBOL_SPLITTERDIALOG_TITLE, const wxPoint& pos = SYMBOL_SPLITTERDIALOG_POSITION, const wxSize& size = SYMBOL_SPLITTERDIALOG_SIZE, long style = SYMBOL_SPLITTERDIALOG_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin SplitterDialog event handler declarations

////@end SplitterDialog event handler declarations

////@begin SplitterDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end SplitterDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin SplitterDialog member variables
    wxSplitterWindow* m_splitter;
////@end SplitterDialog member variables
};

#endif
    // _SPLITTERDIALOG_H_
