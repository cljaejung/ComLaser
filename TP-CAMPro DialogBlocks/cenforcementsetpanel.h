/////////////////////////////////////////////////////////////////////////////
// Name:        cenforcementsetpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:08:33
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CENFORCEMENTSETPANEL_H_
#define _CENFORCEMENTSETPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cenforcementsetpanel.h"
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
#define ID_CENFORCEMENTSETPANEL 10000
#define ID_PANEL 10019
#define ID_COMBOBOX_LOCATION 10001
#define ID_BUTTON_LOCKEY 10002
#define ID_TEXTCTRL 10003
#define ID_BUTTON_LIMITSPEED 10004
#define ID_CHOICE_UNIT 10009
#define ID_TEXTCTRL1 10005
#define ID_BUTTON_CAPTURESPEED 10006
#define ID_TEXTCTRL2 10007
#define ID_BUTTON_CAPTUREDISTANCE 10008
#define ID_BUTTON_OK 10010
#define ID_BUTTON_CANCEL 10011
#define ID_BUTTON 10012
#define ID_BUTTON1 10013
#define ID_BUTTON2 10014
#define ID_BUTTON3 10015
#define ID_BUTTON4 10016
#define ID_BUTTON5 10017
#define ID_BUTTON6 10018
#define SYMBOL_CENFORCEMENTSETPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CENFORCEMENTSETPANEL_TITLE _("cEnforcementSetPanel")
#define SYMBOL_CENFORCEMENTSETPANEL_IDNAME ID_CENFORCEMENTSETPANEL
#define SYMBOL_CENFORCEMENTSETPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CENFORCEMENTSETPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cEnforcementSetPanel class declaration
 */

class cEnforcementSetPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cEnforcementSetPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cEnforcementSetPanel();
    cEnforcementSetPanel( wxWindow* parent, wxWindowID id = SYMBOL_CENFORCEMENTSETPANEL_IDNAME, const wxPoint& pos = SYMBOL_CENFORCEMENTSETPANEL_POSITION, const wxSize& size = SYMBOL_CENFORCEMENTSETPANEL_SIZE, long style = SYMBOL_CENFORCEMENTSETPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CENFORCEMENTSETPANEL_IDNAME, const wxPoint& pos = SYMBOL_CENFORCEMENTSETPANEL_POSITION, const wxSize& size = SYMBOL_CENFORCEMENTSETPANEL_SIZE, long style = SYMBOL_CENFORCEMENTSETPANEL_STYLE );

    /// Destructor
    ~cEnforcementSetPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cEnforcementSetPanel event handler declarations

////@end cEnforcementSetPanel event handler declarations

////@begin cEnforcementSetPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cEnforcementSetPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cEnforcementSetPanel member variables
    wxChoice* m_UnitChoice;
////@end cEnforcementSetPanel member variables
};

#endif
    // _CENFORCEMENTSETPANEL_H_
