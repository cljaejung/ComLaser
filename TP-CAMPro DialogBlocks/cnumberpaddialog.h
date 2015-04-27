/////////////////////////////////////////////////////////////////////////////
// Name:        cnumberpaddialog.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 23:24:16
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CNUMBERPADDIALOG_H_
#define _CNUMBERPADDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cnumberpaddialog.h"
#endif

/*!
 * Includes
 */

////@begin includes
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
#define ID_CNUMBERPADDIALOG 10000
#define ID_PANEL 10001
#define SYMBOL_CNUMBERPADDIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX|wxTAB_TRAVERSAL
#define SYMBOL_CNUMBERPADDIALOG_TITLE _("cNumberPadDialog")
#define SYMBOL_CNUMBERPADDIALOG_IDNAME ID_CNUMBERPADDIALOG
#define SYMBOL_CNUMBERPADDIALOG_SIZE wxSize(400, 300)
#define SYMBOL_CNUMBERPADDIALOG_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cNumberPadDialog class declaration
 */

class cNumberPadDialog: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( cNumberPadDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cNumberPadDialog();
    cNumberPadDialog( wxWindow* parent, wxWindowID id = SYMBOL_CNUMBERPADDIALOG_IDNAME, const wxString& caption = SYMBOL_CNUMBERPADDIALOG_TITLE, const wxPoint& pos = SYMBOL_CNUMBERPADDIALOG_POSITION, const wxSize& size = SYMBOL_CNUMBERPADDIALOG_SIZE, long style = SYMBOL_CNUMBERPADDIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CNUMBERPADDIALOG_IDNAME, const wxString& caption = SYMBOL_CNUMBERPADDIALOG_TITLE, const wxPoint& pos = SYMBOL_CNUMBERPADDIALOG_POSITION, const wxSize& size = SYMBOL_CNUMBERPADDIALOG_SIZE, long style = SYMBOL_CNUMBERPADDIALOG_STYLE );

    /// Destructor
    ~cNumberPadDialog();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cNumberPadDialog event handler declarations

////@end cNumberPadDialog event handler declarations

////@begin cNumberPadDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cNumberPadDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cNumberPadDialog member variables
////@end cNumberPadDialog member variables
};

#endif
    // _CNUMBERPADDIALOG_H_
