/////////////////////////////////////////////////////////////////////////////
// Name:        ckeyboardengpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     23/04/2015 16:57:33
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CKEYBOARDENGPANEL_H_
#define _CKEYBOARDENGPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "ckeyboardengpanel.h"
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
#define ID_CKEYBOARDENGPANEL 10000
#define ID_BUTTON 10012
#define ID_TEXTCTRL 10001
#define ID_BUTTON0 10003
#define ID_BUTTON1 10004
#define ID_BUTTON2 10005
#define ID_BUTTON3 10006
#define ID_BUTTON4 10007
#define ID_BUTTON5 10008
#define ID_BUTTON6 10009
#define ID_BUTTON7 10010
#define ID_BUTTON8 10011
#define ID_BUTTON9 10002
#define ID_BUTTON10 10002
#define ID_BUTTON11 10013
#define ID_BUTTON12 10014
#define ID_BUTTON13 10015
#define ID_BUTTON14 10016
#define ID_BUTTON15 10017
#define ID_BUTTON16 10018
#define ID_BUTTON17 10019
#define ID_BUTTON18 10020
#define ID_BUTTON19 10021
#define ID_BUTTON20 10022
#define ID_BUTTON21 10023
#define ID_BUTTON22 10024
#define ID_BUTTON23 10025
#define ID_BUTTON24 10026
#define ID_BUTTON25 10027
#define ID_BUTTON26 10028
#define ID_BUTTON27 10029
#define ID_BUTTON28 10030
#define ID_BUTTON29 10031
#define ID_BUTTON30 10032
#define ID_BUTTON31 10033
#define ID_BUTTON32 10034
#define SYMBOL_CKEYBOARDENGPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CKEYBOARDENGPANEL_TITLE _("cKeyboardEngPanel")
#define SYMBOL_CKEYBOARDENGPANEL_IDNAME ID_CKEYBOARDENGPANEL
#define SYMBOL_CKEYBOARDENGPANEL_SIZE wxSize(720, 300)
#define SYMBOL_CKEYBOARDENGPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cKeyboardEngPanel class declaration
 */

class cKeyboardEngPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cKeyboardEngPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cKeyboardEngPanel();
    cKeyboardEngPanel( wxWindow* parent, wxWindowID id = SYMBOL_CKEYBOARDENGPANEL_IDNAME, const wxPoint& pos = SYMBOL_CKEYBOARDENGPANEL_POSITION, const wxSize& size = SYMBOL_CKEYBOARDENGPANEL_SIZE, long style = SYMBOL_CKEYBOARDENGPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CKEYBOARDENGPANEL_IDNAME, const wxPoint& pos = SYMBOL_CKEYBOARDENGPANEL_POSITION, const wxSize& size = SYMBOL_CKEYBOARDENGPANEL_SIZE, long style = SYMBOL_CKEYBOARDENGPANEL_STYLE );

    /// Destructor
    ~cKeyboardEngPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cKeyboardEngPanel event handler declarations

    /// wxEVT_COMMAND_TEXT_ENTER event handler for ID_TEXTCTRL
    void OnTextctrlEnter( wxCommandEvent& event );

////@end cKeyboardEngPanel event handler declarations

////@begin cKeyboardEngPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cKeyboardEngPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cKeyboardEngPanel member variables
    wxTextCtrl* m_textCtrl;
////@end cKeyboardEngPanel member variables
};

#endif
    // _CKEYBOARDENGPANEL_H_
