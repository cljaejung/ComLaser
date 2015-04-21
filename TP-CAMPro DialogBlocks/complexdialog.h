/////////////////////////////////////////////////////////////////////////////
// Name:        complexdialog.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 16:16:40
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _COMPLEXDIALOG_H_
#define _COMPLEXDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "complexdialog.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/notebook.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
class MySeparatePanel;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_COMPLEXDIALOG 15000
#define ID_COMPLEXDIALOG_NOTEBOOK 15011
#define ID_COMPLEXDIALOG_PANEL 15012
#define ID_COMPLEXDIALOG_TEXTCTRL 15013
#define ID_COMPLEXDIALOG_BUTTON 15014
#define ID_COMPLEXDIALOG_PANEL1 15019
#define ID_COMPLEXDIALOG_CHECKLISTBOX 15020
#define SYMBOL_COMPLEXDIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_COMPLEXDIALOG_TITLE _("ComplexDialog")
#define SYMBOL_COMPLEXDIALOG_IDNAME ID_COMPLEXDIALOG
#define SYMBOL_COMPLEXDIALOG_SIZE wxSize(400, 300)
#define SYMBOL_COMPLEXDIALOG_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * ComplexDialog class declaration
 */

class ComplexDialog: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( ComplexDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    ComplexDialog( );
    ComplexDialog( wxWindow* parent, wxWindowID id = SYMBOL_COMPLEXDIALOG_IDNAME, const wxString& caption = SYMBOL_COMPLEXDIALOG_TITLE, const wxPoint& pos = SYMBOL_COMPLEXDIALOG_POSITION, const wxSize& size = SYMBOL_COMPLEXDIALOG_SIZE, long style = SYMBOL_COMPLEXDIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_COMPLEXDIALOG_IDNAME, const wxString& caption = SYMBOL_COMPLEXDIALOG_TITLE, const wxPoint& pos = SYMBOL_COMPLEXDIALOG_POSITION, const wxSize& size = SYMBOL_COMPLEXDIALOG_SIZE, long style = SYMBOL_COMPLEXDIALOG_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin ComplexDialog event handler declarations

////@end ComplexDialog event handler declarations

////@begin ComplexDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end ComplexDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin ComplexDialog member variables
////@end ComplexDialog member variables
};

#endif
    // _COMPLEXDIALOG_H_
