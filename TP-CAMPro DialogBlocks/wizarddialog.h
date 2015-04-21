/////////////////////////////////////////////////////////////////////////////
// Name:        wizarddialog.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     15/06/2006 10:28:16
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _WIZARDDIALOG_H_
#define _WIZARDDIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "wizarddialog.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/wizard.h"
#include "wx/html/htmlwin.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
class FirstPage;
class SecondPage;
class ThirdPage;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_WIZARDDIALOG 13000
#define ID_WIZARD_DIALOG_FIRSTPAGE 13011
#define ID_WIZARD_DIALOG_TEXTCTRL 13012
#define ID_WIZARD_DIALOG_TEXTCTRL1 13013
#define ID_WIZARD_DIALOG_SECONDPAGE 13014
#define ID_WIZARD_DIALOG_CHECKBOX 13015
#define ID_WIZARD_DIALOG_CHECKBOX1 13016
#define ID_WIZARD_DIALOG_COMBOBOX 13017
#define ID_WIZARD_DIALOG_CHECKLISTBOX 13018
#define ID_WIZARD_DIALOG_THIRDPAGE 13019
#define ID_WIZARD_DIALOG_HTMLWINDOW 13020
#define SYMBOL_WIZARDDIALOG_IDNAME ID_WIZARDDIALOG
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * WizardDialog class declaration
 */

class WizardDialog: public wxWizard
{    
    DECLARE_DYNAMIC_CLASS( WizardDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    WizardDialog( );
    WizardDialog( wxWindow* parent, wxWindowID id = SYMBOL_WIZARDDIALOG_IDNAME, const wxPoint& pos = wxDefaultPosition );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_WIZARDDIALOG_IDNAME, const wxPoint& pos = wxDefaultPosition );

    /// Creates the controls and sizers
    void CreateControls();

////@begin WizardDialog event handler declarations

////@end WizardDialog event handler declarations

////@begin WizardDialog member function declarations

    /// Runs the wizard.
    bool Run();

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end WizardDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin WizardDialog member variables
////@end WizardDialog member variables
};

/*!
 * FirstPage class declaration
 */

class FirstPage: public wxWizardPageSimple
{    
    DECLARE_DYNAMIC_CLASS( FirstPage )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    FirstPage( );

    FirstPage( wxWizard* parent );

    /// Creation
    bool Create( wxWizard* parent );

    /// Creates the controls and sizers
    void CreateControls();

////@begin FirstPage event handler declarations

////@end FirstPage event handler declarations

////@begin FirstPage member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end FirstPage member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin FirstPage member variables
////@end FirstPage member variables
};

/*!
 * SecondPage class declaration
 */

class SecondPage: public wxWizardPageSimple
{    
    DECLARE_DYNAMIC_CLASS( SecondPage )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    SecondPage( );

    SecondPage( wxWizard* parent );

    /// Creation
    bool Create( wxWizard* parent );

    /// Creates the controls and sizers
    void CreateControls();

////@begin SecondPage event handler declarations

////@end SecondPage event handler declarations

////@begin SecondPage member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end SecondPage member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin SecondPage member variables
////@end SecondPage member variables
};

/*!
 * ThirdPage class declaration
 */

class ThirdPage: public wxWizardPageSimple
{    
    DECLARE_DYNAMIC_CLASS( ThirdPage )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    ThirdPage( );

    ThirdPage( wxWizard* parent );

    /// Creation
    bool Create( wxWizard* parent );

    /// Creates the controls and sizers
    void CreateControls();

////@begin ThirdPage event handler declarations

////@end ThirdPage event handler declarations

////@begin ThirdPage member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end ThirdPage member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin ThirdPage member variables
////@end ThirdPage member variables
};

#endif
    // _WIZARDDIALOG_H_
