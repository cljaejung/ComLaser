/////////////////////////////////////////////////////////////////////////////
// Name:        scrollingdialog.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     13/06/2006 15:38:53
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _SCROLLINGDIALOG_H_
#define _SCROLLINGDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "scrollingdialog.h"
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
#define ID_SCROLLINGDIALOG 12000
#define ID_SCROLLINGDIALOG_SCROLLEDWINDOW 12012
#define ID_SCROLLINGDIALOG_TEXTCTRL 12013
#define ID_SCROLLINGDIALOG_TEXTCTRL1 12014
#define ID_SCROLLINGDIALOG_TEXTCTRL2 12015
#define ID_SCROLLINGDIALOG_TEXTCTRL3 12016
#define ID_SCROLLINGDIALOG_TEXTCTRL4 12017
#define ID_SCROLLINGDIALOG_TEXTCTRL5 12018
#define ID_SCROLLINGDIALOG_TEXTCTRL6 12019
#define ID_SCROLLINGDIALOG_TEXTCTRL7 12020
#define ID_SCROLLINGDIALOG_TEXTCTRL8 12021
#define ID_SCROLLINGDIALOG_TEXTCTRL9 12022
#define SYMBOL_SCROLLINGDIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_SCROLLINGDIALOG_TITLE _("ScrollingDialog")
#define SYMBOL_SCROLLINGDIALOG_IDNAME ID_SCROLLINGDIALOG
#define SYMBOL_SCROLLINGDIALOG_SIZE wxSize(400, 300)
#define SYMBOL_SCROLLINGDIALOG_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * ScrollingDialog class declaration
 */

class ScrollingDialog: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( ScrollingDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    ScrollingDialog( );
    ScrollingDialog( wxWindow* parent, wxWindowID id = SYMBOL_SCROLLINGDIALOG_IDNAME, const wxString& caption = SYMBOL_SCROLLINGDIALOG_TITLE, const wxPoint& pos = SYMBOL_SCROLLINGDIALOG_POSITION, const wxSize& size = SYMBOL_SCROLLINGDIALOG_SIZE, long style = SYMBOL_SCROLLINGDIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_SCROLLINGDIALOG_IDNAME, const wxString& caption = SYMBOL_SCROLLINGDIALOG_TITLE, const wxPoint& pos = SYMBOL_SCROLLINGDIALOG_POSITION, const wxSize& size = SYMBOL_SCROLLINGDIALOG_SIZE, long style = SYMBOL_SCROLLINGDIALOG_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin ScrollingDialog event handler declarations

////@end ScrollingDialog event handler declarations

////@begin ScrollingDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end ScrollingDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin ScrollingDialog member variables
////@end ScrollingDialog member variables
};

#endif
    // _SCROLLINGDIALOG_H_
