/////////////////////////////////////////////////////////////////////////////
// Name:        basiccontrols.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 16:17:21
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _BASICCONTROLS_H_
#define _BASICCONTROLS_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "basiccontrols.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/notebook.h"
#include "wx/tglbtn.h"
#include "wx/statline.h"
#include "wx/statusbr.h"
#include "wx/spinctrl.h"
#include "wx/spinbutt.h"
#include "wx/scrolbar.h"
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
#define ID_BASICCONTROLS 10003
#define ID_BASICCONTROLS_NOTEBOOK 10004
#define ID_BASICCONTROLS_PANEL 10006
#define ID_BASICCONTROLS_BUTTON 10007
#define ID_BASICCONTROLS_BITMAPBUTTON 10009
#define ID_BASICCONTROLS_TOGGLEBUTTON 10011
#define ID_BASICCONTROLS_CHECKBOX 10033
#define ID_BASICCONTROLS_RADIOBUTTON 10034
#define ID_BASICCONTROLS_RADIOBOX 10035
#define ID_BASICCONTROLS_LISTBOX 10036
#define ID_BASICCONTROLS_CHECKLISTBOX 10037
#define ID_BASICCONTROLS_CHOICE 10038
#define ID_BASICCONTROLS_COMBOBOX 10039
#define ID_BASICCONTROLS_PANEL1 10040
#define ID_BASICCONTROLS_GAUGE 10041
#define ID_BASICCONTROLS_STATUSBAR 10042
#define ID_BASICCONTROLS_PANEL2 10043
#define ID_BASICCONTROLS_TEXTCTRL 10044
#define ID_BASICCONTROLS_TEXTCTRL1 10045
#define ID_BASICCONTROLS_SPINCTRL 10046
#define ID_BASICCONTROLS_SPINBUTTON 10047
#define ID_BASICCONTROLS_PANEL3 10048
#define ID_BASICCONTROLS_SLIDER 10049
#define ID_BASICCONTROLS_SCROLLBAR 10050
#define ID_BASICCONTROLS_SPINBUTTON1 10051
#define SYMBOL_BASICCONTROLS_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_BASICCONTROLS_TITLE _("BasicControls")
#define SYMBOL_BASICCONTROLS_IDNAME ID_BASICCONTROLS
#define SYMBOL_BASICCONTROLS_SIZE wxSize(400, 300)
#define SYMBOL_BASICCONTROLS_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * BasicControls class declaration
 */

class BasicControls: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( BasicControls )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    BasicControls( );
    BasicControls( wxWindow* parent, wxWindowID id = SYMBOL_BASICCONTROLS_IDNAME, const wxString& caption = SYMBOL_BASICCONTROLS_TITLE, const wxPoint& pos = SYMBOL_BASICCONTROLS_POSITION, const wxSize& size = SYMBOL_BASICCONTROLS_SIZE, long style = SYMBOL_BASICCONTROLS_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_BASICCONTROLS_IDNAME, const wxString& caption = SYMBOL_BASICCONTROLS_TITLE, const wxPoint& pos = SYMBOL_BASICCONTROLS_POSITION, const wxSize& size = SYMBOL_BASICCONTROLS_SIZE, long style = SYMBOL_BASICCONTROLS_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin BasicControls event handler declarations

////@end BasicControls event handler declarations

////@begin BasicControls member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end BasicControls member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin BasicControls member variables
////@end BasicControls member variables
};

#endif
    // _BASICCONTROLS_H_
