/////////////////////////////////////////////////////////////////////////////
// Name:        coperatorsetpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:09:38
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _COPERATORSETPANEL_H_
#define _COPERATORSETPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "coperatorsetpanel.h"
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
#define ID_COPERATORSETPANEL 10000
#define ID_PANEL 10014
#define ID_COMBOBOX_USERNAME 10001
#define ID_BUTTON_USERNAME 10002
#define ID_TEXTCTRL_PASSWORD 10003
#define ID_BUTTON_PASSWORD 10004
#define ID_TEXTCTRL_NEWPASSWORD 10005
#define ID_BUTTON_NEWPASSWORD 10006
#define ID_TEXTCTRL_CONFIRM 10007
#define ID_BUTTON_CONFIRM 10008
#define ID_BUTTON_ADD 10009
#define ID_BUTTON_DELETE 10010
#define ID_BUTTON_CHANGE2 10011
#define ID_BUTTON_OK 10012
#define ID_BUTTON_CANCEL 10013
#define SYMBOL_COPERATORSETPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_COPERATORSETPANEL_TITLE _("cOperatorSetPanel")
#define SYMBOL_COPERATORSETPANEL_IDNAME ID_COPERATORSETPANEL
#define SYMBOL_COPERATORSETPANEL_SIZE wxSize(400, 300)
#define SYMBOL_COPERATORSETPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cOperatorSetPanel class declaration
 */

class cOperatorSetPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cOperatorSetPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cOperatorSetPanel();
    cOperatorSetPanel( wxWindow* parent, wxWindowID id = SYMBOL_COPERATORSETPANEL_IDNAME, const wxPoint& pos = SYMBOL_COPERATORSETPANEL_POSITION, const wxSize& size = SYMBOL_COPERATORSETPANEL_SIZE, long style = SYMBOL_COPERATORSETPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_COPERATORSETPANEL_IDNAME, const wxPoint& pos = SYMBOL_COPERATORSETPANEL_POSITION, const wxSize& size = SYMBOL_COPERATORSETPANEL_SIZE, long style = SYMBOL_COPERATORSETPANEL_STYLE );

    /// Destructor
    ~cOperatorSetPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cOperatorSetPanel event handler declarations

////@end cOperatorSetPanel event handler declarations

////@begin cOperatorSetPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cOperatorSetPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cOperatorSetPanel member variables
////@end cOperatorSetPanel member variables
};

#endif
    // _COPERATORSETPANEL_H_
