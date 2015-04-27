/////////////////////////////////////////////////////////////////////////////
// Name:        cdatesetpanel.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:09:04
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _CDATESETPANEL_H_
#define _CDATESETPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cdatesetpanel.h"
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
#define ID_CDATESETPANEL 10000
#define ID_PANEL 10001
#define ID_BUTTON_MONTH_UP 10005
#define ID_BUTTON_DAY_UP 10006
#define ID_BUTTON_YEAR_UP 10007
#define ID_BUTTON_MONTH 10008
#define ID_BUTTON_DAY 10009
#define ID_BUTTON_YEAR 10010
#define ID_BUTTON_MONTH_DOWN 10011
#define ID_BUTTON_DAY_DOWN 10012
#define ID_BUTTON_YEAR_DOWN 10013
#define ID_PANEL1 10002
#define ID_BUTTON_HOUR_UP 10014
#define ID_BUTTON_MINUTES_UP 10015
#define ID_BUTTON_TIME_UP 10016
#define ID_BUTTON_HOUR 10017
#define ID_BUTTON_MINUTES 10018
#define ID_BUTTON_TIME 10019
#define ID_BUTTON_HOUR_DOWN 10020
#define ID_BUTTON_MINUTES_DOWN 10021
#define ID_BUTTON_TIME_DOWN 10022
#define ID_BUTTON_OK 10003
#define ID_BUTTON_CANCEL 10004
#define SYMBOL_CDATESETPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_CDATESETPANEL_TITLE _("cDateSetPanel")
#define SYMBOL_CDATESETPANEL_IDNAME ID_CDATESETPANEL
#define SYMBOL_CDATESETPANEL_SIZE wxSize(400, 300)
#define SYMBOL_CDATESETPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * cDateSetPanel class declaration
 */

class cDateSetPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( cDateSetPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    cDateSetPanel();
    cDateSetPanel( wxWindow* parent, wxWindowID id = SYMBOL_CDATESETPANEL_IDNAME, const wxPoint& pos = SYMBOL_CDATESETPANEL_POSITION, const wxSize& size = SYMBOL_CDATESETPANEL_SIZE, long style = SYMBOL_CDATESETPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CDATESETPANEL_IDNAME, const wxPoint& pos = SYMBOL_CDATESETPANEL_POSITION, const wxSize& size = SYMBOL_CDATESETPANEL_SIZE, long style = SYMBOL_CDATESETPANEL_STYLE );

    /// Destructor
    ~cDateSetPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin cDateSetPanel event handler declarations

////@end cDateSetPanel event handler declarations

////@begin cDateSetPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end cDateSetPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin cDateSetPanel member variables
    wxButton* m_btnMonth;
    wxButton* m_btnDay;
    wxButton* m_btnYear;
    wxButton* m_btnHour;
    wxButton* m_btnMinutes;
    wxButton* m_btnTime;
////@end cDateSetPanel member variables
};

#endif
    // _CDATESETPANEL_H_
