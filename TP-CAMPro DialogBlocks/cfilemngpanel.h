/////////////////////////////////////////////////////////////////////////////
// Name:        cfilemngpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:28:27
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CFILEMNGPANEL_H_
#define _CFILEMNGPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cfilemngpanel.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/listctrl.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
class wxListCtrl;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_CFILEMNGPANEL 10000
#define ID_PANEL1 10016
#define ID_LISTCTRL 10001
#define ID_BUTTON_OK 10002
#define ID_PANEL 10003
#define ID_BUTTON_PREV 10017
#define ID_SLIDER_AVI 10004
#define ID_BUTTON_NEXT 10018
#define ID_BUTTON_MEMCOPY 10005
#define ID_BUTTON_FILETRANSFER 10006
#define ID_BUTTON_MEMCLEAR 10007
#define ID_BUTTON 10009
#define ID_BUTTON1 10010
#define ID_BUTTON2 10011
#define ID_BUTTON3 10012
#define ID_BUTTON4 10013
#define ID_BUTTON5 10014
#define ID_BUTTON6 10015
#define SYMBOL_CFILEMNGPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CFILEMNGPANEL_TITLE _("cFileMngPanel")
#define SYMBOL_CFILEMNGPANEL_IDNAME ID_CFILEMNGPANEL
#define SYMBOL_CFILEMNGPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CFILEMNGPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cFileMngPanel class declaration
 */

class cFileMngPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cFileMngPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cFileMngPanel();
    cFileMngPanel( wxWindow* parent, wxWindowID id = SYMBOL_CFILEMNGPANEL_IDNAME, const wxPoint& pos = SYMBOL_CFILEMNGPANEL_POSITION, const wxSize& size = SYMBOL_CFILEMNGPANEL_SIZE, long style = SYMBOL_CFILEMNGPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CFILEMNGPANEL_IDNAME, const wxPoint& pos = SYMBOL_CFILEMNGPANEL_POSITION, const wxSize& size = SYMBOL_CFILEMNGPANEL_SIZE, long style = SYMBOL_CFILEMNGPANEL_STYLE );

    /// Destructor
    ~cFileMngPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cFileMngPanel event handler declarations

    /// wxEVT_LEFT_DCLICK event handler for ID_PANEL1
    void OnLeftDClick( wxMouseEvent& event );

////@end cFileMngPanel event handler declarations

////@begin cFileMngPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cFileMngPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cFileMngPanel member variables
    wxListCtrl* m_FileListCtrl;
////@end cFileMngPanel member variables
};

#endif
    // _CFILEMNGPANEL_H_
