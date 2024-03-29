/////////////////////////////////////////////////////////////////////////////
// Name:        cloginpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     16/04/2015 18:01:30
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 16/04/2015 18:01:30

#ifndef _CLOGINPANEL_H_
#define _CLOGINPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cloginpanel.h"
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
#define ID_CLOGINPANEL 10000
#define ID_PANEL 10007
#define ID_TEXTCTRL 10002
#define ID_COMBOBOX 10003
#define ID_BUTTON_USERNAME 10008
#define ID_TEXTCTRL1 10004
#define ID_BUTTON_PASSWORD 10005
#define ID_BUTTON_START 10006
#define ID_BUTTON_EXIT 10001
#define ID_PANEL1 10009
#define SYMBOL_CLOGINPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CLOGINPANEL_TITLE _("cLoginPanel")
#define SYMBOL_CLOGINPANEL_IDNAME ID_CLOGINPANEL
#define SYMBOL_CLOGINPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CLOGINPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cLoginPanel class declaration
 */

class cLoginPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cLoginPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cLoginPanel();
    cLoginPanel( wxWindow* parent, wxWindowID id = SYMBOL_CLOGINPANEL_IDNAME, const wxPoint& pos = SYMBOL_CLOGINPANEL_POSITION, const wxSize& size = SYMBOL_CLOGINPANEL_SIZE, long style = SYMBOL_CLOGINPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CLOGINPANEL_IDNAME, const wxPoint& pos = SYMBOL_CLOGINPANEL_POSITION, const wxSize& size = SYMBOL_CLOGINPANEL_SIZE, long style = SYMBOL_CLOGINPANEL_STYLE );

    /// Destructor
    ~cLoginPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cLoginPanel event handler declarations

////@end cLoginPanel event handler declarations

////@begin cLoginPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cLoginPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cLoginPanel member variables
    wxTextCtrl* m_textDeviceID;
    wxComboBox* m_comboUserName;
    wxTextCtrl* m_textPassWord;
////@end cLoginPanel member variables
};

#endif
    // _CLOGINPANEL_H_
