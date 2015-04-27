/////////////////////////////////////////////////////////////////////////////
// Name:        cnumberpadpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 23:04:10
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CNUMBERPADPANEL_H_
#define _CNUMBERPADPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cnumberpadpanel.h"
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
#define ID_CNUMBERPADPANEL 10000
#define ID_BUTTON_DELETE 10001
#define ID_TEXTCTRL 10002
#define ID_BUTTON1 10003
#define ID_BUTTON2 10004
#define ID_BUTTON3 10005
#define ID_BUTTON4 10006
#define ID_BUTTON5 10007
#define ID_BUTTON6 10008
#define ID_BUTTON7 10009
#define ID_BUTTON8 10010
#define ID_BUTTON9 10011
#define ID_BUTTON0 10012
#define SYMBOL_CNUMBERPADPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CNUMBERPADPANEL_TITLE _("Number Pad")
#define SYMBOL_CNUMBERPADPANEL_IDNAME ID_CNUMBERPADPANEL
#define SYMBOL_CNUMBERPADPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CNUMBERPADPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cNumberPadPanel class declaration
 */

class cNumberPadPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cNumberPadPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cNumberPadPanel();
    cNumberPadPanel( wxWindow* parent, wxWindowID id = SYMBOL_CNUMBERPADPANEL_IDNAME, const wxPoint& pos = SYMBOL_CNUMBERPADPANEL_POSITION, const wxSize& size = SYMBOL_CNUMBERPADPANEL_SIZE, long style = SYMBOL_CNUMBERPADPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CNUMBERPADPANEL_IDNAME, const wxPoint& pos = SYMBOL_CNUMBERPADPANEL_POSITION, const wxSize& size = SYMBOL_CNUMBERPADPANEL_SIZE, long style = SYMBOL_CNUMBERPADPANEL_STYLE );

    /// Destructor
    ~cNumberPadPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cNumberPadPanel event handler declarations

////@end cNumberPadPanel event handler declarations

////@begin cNumberPadPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cNumberPadPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cNumberPadPanel member variables
    wxTextCtrl* m_textCtrl;
////@end cNumberPadPanel member variables
};

#endif
    // _CNUMBERPADPANEL_H_
