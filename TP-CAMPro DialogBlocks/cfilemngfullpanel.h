/////////////////////////////////////////////////////////////////////////////
// Name:        cfilemngfullpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:41:38
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CFILEMNGFULLPANEL_H_
#define _CFILEMNGFULLPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cfilemngfullpanel.h"
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
#define ID_CFILEMNGFULLPANEL 10000
#define ID_PANEL 10001
#define ID_BUTTON_PREV 10003
#define ID_SLIDER_AVI 10004
#define ID_BUTTON_NEXT 10005
#define ID_BUTTON_CANCEL 10002
#define SYMBOL_CFILEMNGFULLPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CFILEMNGFULLPANEL_TITLE _("cFileMngFullPanel")
#define SYMBOL_CFILEMNGFULLPANEL_IDNAME ID_CFILEMNGFULLPANEL
#define SYMBOL_CFILEMNGFULLPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CFILEMNGFULLPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cFileMngFullPanel class declaration
 */

class cFileMngFullPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cFileMngFullPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cFileMngFullPanel();
    cFileMngFullPanel( wxWindow* parent, wxWindowID id = SYMBOL_CFILEMNGFULLPANEL_IDNAME, const wxPoint& pos = SYMBOL_CFILEMNGFULLPANEL_POSITION, const wxSize& size = SYMBOL_CFILEMNGFULLPANEL_SIZE, long style = SYMBOL_CFILEMNGFULLPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CFILEMNGFULLPANEL_IDNAME, const wxPoint& pos = SYMBOL_CFILEMNGFULLPANEL_POSITION, const wxSize& size = SYMBOL_CFILEMNGFULLPANEL_SIZE, long style = SYMBOL_CFILEMNGFULLPANEL_STYLE );

    /// Destructor
    ~cFileMngFullPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cFileMngFullPanel event handler declarations

////@end cFileMngFullPanel event handler declarations

////@begin cFileMngFullPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cFileMngFullPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cFileMngFullPanel member variables
////@end cFileMngFullPanel member variables
};

#endif
    // _CFILEMNGFULLPANEL_H_
