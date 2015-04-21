/////////////////////////////////////////////////////////////////////////////
// Name:        independentpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     08/06/2006 14:41:45
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _INDEPENDENTPANEL_H_
#define _INDEPENDENTPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "independentpanel.h"
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
class MySeparatePanel;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_COMPLEXDIALOG_MYSEPARATEPANEL 15015
#define SYMBOL_MYSEPARATEPANEL_STYLE wxNO_BORDER|wxTAB_TRAVERSAL
#define SYMBOL_MYSEPARATEPANEL_IDNAME ID_COMPLEXDIALOG_MYSEPARATEPANEL
#define SYMBOL_MYSEPARATEPANEL_SIZE wxDefaultSize
#define SYMBOL_MYSEPARATEPANEL_POSITION wxDefaultPosition
#define ID_COMPLEXDIALOG_COMBOBOX 15016
#define ID_COMPLEXDIALOG_COMBOBOX1 15017
#define ID_COMPLEXDIALOG_COMBOBOX2 15018
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * MySeparatePanel class declaration
 */

class MySeparatePanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( MySeparatePanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    MySeparatePanel( );
    MySeparatePanel( wxWindow* parent, wxWindowID id = SYMBOL_MYSEPARATEPANEL_IDNAME, const wxPoint& pos = SYMBOL_MYSEPARATEPANEL_POSITION, const wxSize& size = SYMBOL_MYSEPARATEPANEL_SIZE, long style = SYMBOL_MYSEPARATEPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_MYSEPARATEPANEL_IDNAME, const wxPoint& pos = SYMBOL_MYSEPARATEPANEL_POSITION, const wxSize& size = SYMBOL_MYSEPARATEPANEL_SIZE, long style = SYMBOL_MYSEPARATEPANEL_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin MySeparatePanel event handler declarations

////@end MySeparatePanel event handler declarations

////@begin MySeparatePanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end MySeparatePanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin MySeparatePanel member variables
////@end MySeparatePanel member variables
};

#endif
    // _INDEPENDENTPANEL_H_
