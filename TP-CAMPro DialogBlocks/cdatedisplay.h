/////////////////////////////////////////////////////////////////////////////
// Name:        cdatedisplay.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     21/04/2015 12:44:04
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CDATEDISPLAY_H_
#define _CDATEDISPLAY_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cdatedisplay.h"
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
#define ID_CDATEDISPLAY 10000
#define SYMBOL_CDATEDISPLAY_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CDATEDISPLAY_TITLE _("cDateDisplay")
#define SYMBOL_CDATEDISPLAY_IDNAME ID_CDATEDISPLAY
#define SYMBOL_CDATEDISPLAY_SIZE wxSize(400, 300)
#define SYMBOL_CDATEDISPLAY_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cDateDisplay class declaration
 */

class cDateDisplay: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cDateDisplay )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cDateDisplay();
    cDateDisplay( wxWindow* parent, wxWindowID id = SYMBOL_CDATEDISPLAY_IDNAME, const wxPoint& pos = SYMBOL_CDATEDISPLAY_POSITION, const wxSize& size = SYMBOL_CDATEDISPLAY_SIZE, long style = SYMBOL_CDATEDISPLAY_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CDATEDISPLAY_IDNAME, const wxPoint& pos = SYMBOL_CDATEDISPLAY_POSITION, const wxSize& size = SYMBOL_CDATEDISPLAY_SIZE, long style = SYMBOL_CDATEDISPLAY_STYLE );

    /// Destructor
    ~cDateDisplay();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cDateDisplay event handler declarations

    /// wxEVT_LEFT_DOWN event handler for ID_CDATEDISPLAY
    void OnLeftDown( wxMouseEvent& event );

    /// wxEVT_LEFT_DCLICK event handler for ID_CDATEDISPLAY
    void OnLeftDClick( wxMouseEvent& event );

    /// wxEVT_IDLE event handler for wxID_STATIC
    void OnIdle( wxIdleEvent& event );

////@end cDateDisplay event handler declarations

////@begin cDateDisplay member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cDateDisplay member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cDateDisplay member variables
////@end cDateDisplay member variables
};

#endif
    // _CDATEDISPLAY_H_
