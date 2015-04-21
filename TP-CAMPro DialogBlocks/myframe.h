/////////////////////////////////////////////////////////////////////////////
// Name:        myframe.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     15/06/2006 15:26:10
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _MYFRAME_H_
#define _MYFRAME_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "myframe.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/frame.h"
#include "wx/toolbar.h"
#include "wx/statusbr.h"
#include "wx/splitter.h"
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
#define ID_FRAME 17000
#define ID_FRAME_TOOLBAR 17002
#define ID_FRAME_STATUSBAR 17003
#define ID_FRAME_SPLITTERWINDOW 17004
#define ID_FRAME_LISTBOX 17005
#define ID_FRAME_HTMLWINDOW 17006
#define SYMBOL_MYFRAME_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxMINIMIZE_BOX|wxMAXIMIZE_BOX|wxCLOSE_BOX
#define SYMBOL_MYFRAME_TITLE _("Simple frame")
#define SYMBOL_MYFRAME_IDNAME ID_FRAME
#define SYMBOL_MYFRAME_SIZE wxSize(450, 350)
#define SYMBOL_MYFRAME_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * MyFrame class declaration
 */

class MyFrame: public wxFrame
{    
    DECLARE_CLASS( MyFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    MyFrame( );
    MyFrame( wxWindow* parent, wxWindowID id = SYMBOL_MYFRAME_IDNAME, const wxString& caption = SYMBOL_MYFRAME_TITLE, const wxPoint& pos = SYMBOL_MYFRAME_POSITION, const wxSize& size = SYMBOL_MYFRAME_SIZE, long style = SYMBOL_MYFRAME_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_MYFRAME_IDNAME, const wxString& caption = SYMBOL_MYFRAME_TITLE, const wxPoint& pos = SYMBOL_MYFRAME_POSITION, const wxSize& size = SYMBOL_MYFRAME_SIZE, long style = SYMBOL_MYFRAME_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin MyFrame event handler declarations

////@end MyFrame event handler declarations

////@begin MyFrame member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end MyFrame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin MyFrame member variables
////@end MyFrame member variables
};

#endif
    // _MYFRAME_H_
