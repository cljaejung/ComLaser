/////////////////////////////////////////////////////////////////////////////
// Name:        ccamerasetpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:07:59
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CCAMERASETPANEL_H_
#define _CCAMERASETPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "ccamerasetpanel.h"
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
#define ID_CCAMERASETPANEL 10000
#define ID_PANEL1 10010
#define ID_CHOICE_WEATHER 10001
#define ID_SLIDER_GAIN 10002
#define ID_CHOICE_SHUTTERSPEED 10003
#define ID_CHOICE_ZOOM 10004
#define ID_CHOICE_CAPTURETEST 10005
#define ID_BUTTON_OK 10006
#define ID_BUTTON_CANCEL 10007
#define ID_BUTTON_FULL 10008
#define ID_PANEL 10009
#define SYMBOL_CCAMERASETPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CCAMERASETPANEL_TITLE _("cCameraSetPanel")
#define SYMBOL_CCAMERASETPANEL_IDNAME ID_CCAMERASETPANEL
#define SYMBOL_CCAMERASETPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CCAMERASETPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cCameraSetPanel class declaration
 */

class cCameraSetPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cCameraSetPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cCameraSetPanel();
    cCameraSetPanel( wxWindow* parent, wxWindowID id = SYMBOL_CCAMERASETPANEL_IDNAME, const wxPoint& pos = SYMBOL_CCAMERASETPANEL_POSITION, const wxSize& size = SYMBOL_CCAMERASETPANEL_SIZE, long style = SYMBOL_CCAMERASETPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CCAMERASETPANEL_IDNAME, const wxPoint& pos = SYMBOL_CCAMERASETPANEL_POSITION, const wxSize& size = SYMBOL_CCAMERASETPANEL_SIZE, long style = SYMBOL_CCAMERASETPANEL_STYLE );

    /// Destructor
    ~cCameraSetPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cCameraSetPanel event handler declarations

////@end cCameraSetPanel event handler declarations

////@begin cCameraSetPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cCameraSetPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cCameraSetPanel member variables
////@end cCameraSetPanel member variables
};

#endif
    // _CCAMERASETPANEL_H_
