/////////////////////////////////////////////////////////////////////////////
// Name:        testpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     21/04/2015 08:53:54
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _TESTPANEL_H_
#define _TESTPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "testpanel.h"
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
#define ID_TESTPANEL 10000
#define ID_PANEL 10001
#define ID_BUTTON 10002
#define ID_BUTTON1 10003
#define ID_BUTTON2 10004
#define ID_BUTTON3 10005
#define ID_BITMAPBUTTON 10006
#define SYMBOL_TESTPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_TESTPANEL_TITLE _("TestPanel")
#define SYMBOL_TESTPANEL_IDNAME ID_TESTPANEL
#define SYMBOL_TESTPANEL_SIZE wxSize(400, 300)
#define SYMBOL_TESTPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * TestPanel class declaration
 */

class TestPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( TestPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    TestPanel();
    TestPanel( wxWindow* parent, wxWindowID id = SYMBOL_TESTPANEL_IDNAME, const wxPoint& pos = SYMBOL_TESTPANEL_POSITION, const wxSize& size = SYMBOL_TESTPANEL_SIZE, long style = SYMBOL_TESTPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_TESTPANEL_IDNAME, const wxPoint& pos = SYMBOL_TESTPANEL_POSITION, const wxSize& size = SYMBOL_TESTPANEL_SIZE, long style = SYMBOL_TESTPANEL_STYLE );

    /// Destructor
    ~TestPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin TestPanel event handler declarations

    /// wxEVT_PAINT event handler for ID_TESTPANEL
    void OnPaint( wxPaintEvent& event );

    /// wxEVT_ERASE_BACKGROUND event handler for ID_TESTPANEL
    void OnEraseBackground( wxEraseEvent& event );

    /// wxEVT_LEFT_DOWN event handler for ID_TESTPANEL
    void OnLeftDown( wxMouseEvent& event );

    /// wxEVT_LEFT_UP event handler for ID_TESTPANEL
    void OnLeftUp( wxMouseEvent& event );

    /// wxEVT_ENTER_WINDOW event handler for ID_TESTPANEL
    void OnEnterWindow( wxMouseEvent& event );

    /// wxEVT_LEAVE_WINDOW event handler for ID_TESTPANEL
    void OnLeaveWindow( wxMouseEvent& event );

    /// wxEVT_KEY_DOWN event handler for ID_TESTPANEL
    void OnKeyDown( wxKeyEvent& event );

////@end TestPanel event handler declarations

////@begin TestPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end TestPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin TestPanel member variables
////@end TestPanel member variables
};

#endif
    // _TESTPANEL_H_
