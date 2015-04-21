/////////////////////////////////////////////////////////////////////////////
// Name:        cenforcementfullpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 22:00:06
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CENFORCEMENTFULLPANEL_H_
#define _CENFORCEMENTFULLPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cenforcementfullpanel.h"
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
#define ID_CENFORCEMENTFULLPANEL 10000
#define ID_PANEL 10001
#define ID_BUTTON_CANCEL 10002
#define SYMBOL_CENFORCEMENTFULLPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CENFORCEMENTFULLPANEL_TITLE _("cEnforcementFullPanel")
#define SYMBOL_CENFORCEMENTFULLPANEL_IDNAME ID_CENFORCEMENTFULLPANEL
#define SYMBOL_CENFORCEMENTFULLPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CENFORCEMENTFULLPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cEnforcementFullPanel class declaration
 */

class cEnforcementFullPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cEnforcementFullPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cEnforcementFullPanel();
    cEnforcementFullPanel( wxWindow* parent, wxWindowID id = SYMBOL_CENFORCEMENTFULLPANEL_IDNAME, const wxPoint& pos = SYMBOL_CENFORCEMENTFULLPANEL_POSITION, const wxSize& size = SYMBOL_CENFORCEMENTFULLPANEL_SIZE, long style = SYMBOL_CENFORCEMENTFULLPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CENFORCEMENTFULLPANEL_IDNAME, const wxPoint& pos = SYMBOL_CENFORCEMENTFULLPANEL_POSITION, const wxSize& size = SYMBOL_CENFORCEMENTFULLPANEL_SIZE, long style = SYMBOL_CENFORCEMENTFULLPANEL_STYLE );

    /// Destructor
    ~cEnforcementFullPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cEnforcementFullPanel event handler declarations

////@end cEnforcementFullPanel event handler declarations

////@begin cEnforcementFullPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cEnforcementFullPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cEnforcementFullPanel member variables
////@end cEnforcementFullPanel member variables
};

#endif
    // _CENFORCEMENTFULLPANEL_H_
