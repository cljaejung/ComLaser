/////////////////////////////////////////////////////////////////////////////
// Name:        elements.h
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     08/06/2006 14:11:46
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _ELEMENTS_H_
#define _ELEMENTS_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "elements.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
#include "topdialog.h"
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
////@end control identifiers

/*!
 * ElementsApp class declaration
 */

class ElementsApp: public wxApp
{    
    DECLARE_CLASS( ElementsApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    ElementsApp();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin ElementsApp event handler declarations

////@end ElementsApp event handler declarations

////@begin ElementsApp member function declarations

////@end ElementsApp member function declarations

////@begin ElementsApp member variables
////@end ElementsApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(ElementsApp)
////@end declare app

#endif
    // _ELEMENTS_H_
