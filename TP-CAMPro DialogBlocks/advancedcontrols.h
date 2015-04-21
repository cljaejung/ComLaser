/////////////////////////////////////////////////////////////////////////////
// Name:        advancedcontrols.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 16:17:03
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _ADVANCEDCONTROLS_H_
#define _ADVANCEDCONTROLS_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "advancedcontrols.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/notebook.h"
#include "wx/html/htmlwin.h"
#include "wx/dirctrl.h"
#include "wx/treectrl.h"
#include "wx/grid.h"
#include "wx/calctrl.h"
#include "wx/datectrl.h"
#include "wx/dateevt.h"
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
#define ID_ADVANCEDCONTROLS 11000
#define ID_ADVANCEDCONTROLS_NOTEBOOK 11001
#define ID_ADVANCEDCONTROLS_PANEL 11002
#define ID_ADVANCEDCONTROLS_HTMLWINDOW 11003
#define ID_ADVANCEDCONTROLS_PANEL1 11004
#define ID_ADVANCEDCONTROLS_GENERICDIRCTRL 11005
#define ID_ADVANCEDCONTROLS_PANEL2 11006
#define ID_ADVANCEDCONTROLS_TREECTRL 11007
#define ID_ADVANCEDCONTROLS_PANEL3 11008
#define ID_ADVANCEDCONTROLS_GRID 11009
#define ID_ADVANCEDCONTROLS_PANEL4 11010
#define ID_ADVANCEDCONTROLS_CALENDARCTRL 11011
#define ID_ADVANCEDCONTROLS_DATEPICKERCTRL 11012
#define SYMBOL_ADVANCEDCONTROLS_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_ADVANCEDCONTROLS_TITLE _("AdvancedControls")
#define SYMBOL_ADVANCEDCONTROLS_IDNAME ID_ADVANCEDCONTROLS
#define SYMBOL_ADVANCEDCONTROLS_SIZE wxSize(460, 400)
#define SYMBOL_ADVANCEDCONTROLS_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * AdvancedControls class declaration
 */

class AdvancedControls: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( AdvancedControls )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    AdvancedControls( );
    AdvancedControls( wxWindow* parent, wxWindowID id = SYMBOL_ADVANCEDCONTROLS_IDNAME, const wxString& caption = SYMBOL_ADVANCEDCONTROLS_TITLE, const wxPoint& pos = SYMBOL_ADVANCEDCONTROLS_POSITION, const wxSize& size = SYMBOL_ADVANCEDCONTROLS_SIZE, long style = SYMBOL_ADVANCEDCONTROLS_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_ADVANCEDCONTROLS_IDNAME, const wxString& caption = SYMBOL_ADVANCEDCONTROLS_TITLE, const wxPoint& pos = SYMBOL_ADVANCEDCONTROLS_POSITION, const wxSize& size = SYMBOL_ADVANCEDCONTROLS_SIZE, long style = SYMBOL_ADVANCEDCONTROLS_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin AdvancedControls event handler declarations

////@end AdvancedControls event handler declarations

////@begin AdvancedControls member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end AdvancedControls member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin AdvancedControls member variables
////@end AdvancedControls member variables
};

#endif
    // _ADVANCEDCONTROLS_H_
