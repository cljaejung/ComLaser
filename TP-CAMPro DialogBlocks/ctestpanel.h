/////////////////////////////////////////////////////////////////////////////
// Name:        ctestpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     22/04/2015 15:13:19
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CTESTPANEL_H_
#define _CTESTPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "ctestpanel.h"
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
#define ID_CTESTPANEL 10000
#define ID_BUTTON 10001
#define ID_BUTTON1 10002
#define ID_BUTTON2 10003
#define ID_BUTTON3 10004
#define ID_BUTTON4 10005
#define ID_BUTTON5 10006
#define ID_BUTTON6 10007
#define ID_BUTTON7 10008
#define ID_BUTTON8 10009
#define ID_BUTTON9 10010
#define ID_BUTTON10 10011
#define ID_BUTTON11 10012
#define ID_BUTTON12 10013
#define ID_BITMAPBUTTON 10014
#define SYMBOL_CTESTPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CTESTPANEL_TITLE _("cTestPanel")
#define SYMBOL_CTESTPANEL_IDNAME ID_CTESTPANEL
#define SYMBOL_CTESTPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CTESTPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cTestPanel class declaration
 */

class cTestPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cTestPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cTestPanel();
    cTestPanel( wxWindow* parent, wxWindowID id = SYMBOL_CTESTPANEL_IDNAME, const wxPoint& pos = SYMBOL_CTESTPANEL_POSITION, const wxSize& size = SYMBOL_CTESTPANEL_SIZE, long style = SYMBOL_CTESTPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CTESTPANEL_IDNAME, const wxPoint& pos = SYMBOL_CTESTPANEL_POSITION, const wxSize& size = SYMBOL_CTESTPANEL_SIZE, long style = SYMBOL_CTESTPANEL_STYLE );

    /// Destructor
    ~cTestPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cTestPanel event handler declarations

////@end cTestPanel event handler declarations

////@begin cTestPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cTestPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cTestPanel member variables
    wxButton* m_Button1;
////@end cTestPanel member variables
};

#endif
    // _CTESTPANEL_H_
