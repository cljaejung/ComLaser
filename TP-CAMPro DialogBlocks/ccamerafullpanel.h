/////////////////////////////////////////////////////////////////////////////
// Name:        ccamerafullpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 20:42:17
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CCAMERAFULLPANEL_H_
#define _CCAMERAFULLPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "ccamerafullpanel.h"
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
#define ID_CCAMERAFULLPANEL 10000
#define ID_PANEL1 10003
#define ID_PANEL 10001
#define ID_BUTTON_CANCEL 10002
#define SYMBOL_CCAMERAFULLPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CCAMERAFULLPANEL_TITLE _("cCameraFullPanel")
#define SYMBOL_CCAMERAFULLPANEL_IDNAME ID_CCAMERAFULLPANEL
#define SYMBOL_CCAMERAFULLPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CCAMERAFULLPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cCameraFullPanel class declaration
 */

class cCameraFullPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cCameraFullPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cCameraFullPanel();
    cCameraFullPanel( wxWindow* parent, wxWindowID id = SYMBOL_CCAMERAFULLPANEL_IDNAME, const wxPoint& pos = SYMBOL_CCAMERAFULLPANEL_POSITION, const wxSize& size = SYMBOL_CCAMERAFULLPANEL_SIZE, long style = SYMBOL_CCAMERAFULLPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CCAMERAFULLPANEL_IDNAME, const wxPoint& pos = SYMBOL_CCAMERAFULLPANEL_POSITION, const wxSize& size = SYMBOL_CCAMERAFULLPANEL_SIZE, long style = SYMBOL_CCAMERAFULLPANEL_STYLE );

    /// Destructor
    ~cCameraFullPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cCameraFullPanel event handler declarations

////@end cCameraFullPanel event handler declarations

////@begin cCameraFullPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cCameraFullPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cCameraFullPanel member variables
////@end cCameraFullPanel member variables
};

#endif
    // _CCAMERAFULLPANEL_H_
