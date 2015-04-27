/////////////////////////////////////////////////////////////////////////////
// Name:        cmediapanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 18:46:59
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CMEDIAPANEL_H_
#define _CMEDIAPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cmediapanel.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/mediactrl.h"
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
#define ID_CMEDIAPANEL 10000
#define ID_MEDIACTRL 10001
#define SYMBOL_CMEDIAPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CMEDIAPANEL_TITLE _("cMediaPanel")
#define SYMBOL_CMEDIAPANEL_IDNAME ID_CMEDIAPANEL
#define SYMBOL_CMEDIAPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CMEDIAPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cMediaPanel class declaration
 */

class cMediaPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cMediaPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cMediaPanel();
    cMediaPanel( wxWindow* parent, wxWindowID id = SYMBOL_CMEDIAPANEL_IDNAME, const wxPoint& pos = SYMBOL_CMEDIAPANEL_POSITION, const wxSize& size = SYMBOL_CMEDIAPANEL_SIZE, long style = SYMBOL_CMEDIAPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CMEDIAPANEL_IDNAME, const wxPoint& pos = SYMBOL_CMEDIAPANEL_POSITION, const wxSize& size = SYMBOL_CMEDIAPANEL_SIZE, long style = SYMBOL_CMEDIAPANEL_STYLE );

    /// Destructor
    ~cMediaPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cMediaPanel event handler declarations

////@end cMediaPanel event handler declarations

////@begin cMediaPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cMediaPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cMediaPanel member variables
////@end cMediaPanel member variables
};

#endif
    // _CMEDIAPANEL_H_
