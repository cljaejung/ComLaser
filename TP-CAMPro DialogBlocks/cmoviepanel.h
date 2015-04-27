/////////////////////////////////////////////////////////////////////////////
// Name:        cmoviepanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     27/04/2015 19:03:17
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CMOVIEPANEL_H_
#define _CMOVIEPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cmoviepanel.h"
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
#define ID_CMOVIEPANEL 10000
#define SYMBOL_CMOVIEPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CMOVIEPANEL_TITLE _("cMoviePanel")
#define SYMBOL_CMOVIEPANEL_IDNAME ID_CMOVIEPANEL
#define SYMBOL_CMOVIEPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CMOVIEPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cMoviePanel class declaration
 */

class cMoviePanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cMoviePanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cMoviePanel();
    cMoviePanel( wxWindow* parent, wxWindowID id = SYMBOL_CMOVIEPANEL_IDNAME, const wxPoint& pos = SYMBOL_CMOVIEPANEL_POSITION, const wxSize& size = SYMBOL_CMOVIEPANEL_SIZE, long style = SYMBOL_CMOVIEPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CMOVIEPANEL_IDNAME, const wxPoint& pos = SYMBOL_CMOVIEPANEL_POSITION, const wxSize& size = SYMBOL_CMOVIEPANEL_SIZE, long style = SYMBOL_CMOVIEPANEL_STYLE );

    /// Destructor
    ~cMoviePanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cMoviePanel event handler declarations

    /// wxEVT_PAINT event handler for ID_CMOVIEPANEL
    void OnPaint( wxPaintEvent& event );

    /// wxEVT_ERASE_BACKGROUND event handler for ID_CMOVIEPANEL
    void OnEraseBackground( wxEraseEvent& event );

////@end cMoviePanel event handler declarations

////@begin cMoviePanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cMoviePanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cMoviePanel member variables
////@end cMoviePanel member variables
};

#endif
    // _CMOVIEPANEL_H_
