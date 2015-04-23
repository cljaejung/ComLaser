/////////////////////////////////////////////////////////////////////////////
// Name:        ckeyboarddialog.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     23/04/2015 17:47:45
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CKEYBOARDDIALOG_H_
#define _CKEYBOARDDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "ckeyboarddialog.h"
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
#define ID_CKEYBOARDDIALOG 10000
#define ID_PANEL 10001
#define SYMBOL_CKEYBOARDDIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxCLOSE_BOX|wxWANTS_CHARS|wxTAB_TRAVERSAL
#define SYMBOL_CKEYBOARDDIALOG_TITLE _("cKeyboardDialog")
#define SYMBOL_CKEYBOARDDIALOG_IDNAME ID_CKEYBOARDDIALOG
#define SYMBOL_CKEYBOARDDIALOG_SIZE wxSize(400, 300)
#define SYMBOL_CKEYBOARDDIALOG_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cKeyboardDialog class declaration
 */

class cKeyboardDialog: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( cKeyboardDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cKeyboardDialog();
    cKeyboardDialog( wxWindow* parent, wxWindowID id = SYMBOL_CKEYBOARDDIALOG_IDNAME, const wxString& caption = SYMBOL_CKEYBOARDDIALOG_TITLE, const wxPoint& pos = SYMBOL_CKEYBOARDDIALOG_POSITION, const wxSize& size = SYMBOL_CKEYBOARDDIALOG_SIZE, long style = SYMBOL_CKEYBOARDDIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CKEYBOARDDIALOG_IDNAME, const wxString& caption = SYMBOL_CKEYBOARDDIALOG_TITLE, const wxPoint& pos = SYMBOL_CKEYBOARDDIALOG_POSITION, const wxSize& size = SYMBOL_CKEYBOARDDIALOG_SIZE, long style = SYMBOL_CKEYBOARDDIALOG_STYLE );

    /// Destructor
    ~cKeyboardDialog();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cKeyboardDialog event handler declarations

////@end cKeyboardDialog event handler declarations

////@begin cKeyboardDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cKeyboardDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cKeyboardDialog member variables
////@end cKeyboardDialog member variables
};

#endif
    // _CKEYBOARDDIALOG_H_
