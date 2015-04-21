/////////////////////////////////////////////////////////////////////////////
// Name:        elements.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     08/06/2006 14:11:46
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "elements.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "elements.h"

////@begin XPM images
////@end XPM images

/*!
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( ElementsApp )
////@end implement app

/*!
 * ElementsApp type definition
 */

IMPLEMENT_CLASS( ElementsApp, wxApp )

/*!
 * ElementsApp event table definition
 */

BEGIN_EVENT_TABLE( ElementsApp, wxApp )

////@begin ElementsApp event table entries
////@end ElementsApp event table entries

END_EVENT_TABLE()

/*!
 * Constructor for ElementsApp
 */

ElementsApp::ElementsApp()
{
////@begin ElementsApp member initialisation
////@end ElementsApp member initialisation
}

/*!
 * Initialisation for ElementsApp
 */

bool ElementsApp::OnInit()
{    
////@begin ElementsApp initialisation
	// Remove the comment markers above and below this block
	// to make permanent changes to the code.

#if wxUSE_XPM
	wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
	wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
	wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
	wxImage::AddHandler(new wxGIFHandler);
#endif
	TopDialog* mainWindow = new TopDialog(NULL, ID_TOPDIALOG, _("TopDialog"));
	/* int returnValue = */ mainWindow->ShowModal();

	mainWindow->Destroy();
	// A modal dialog application should return false to terminate the app.
	return false;
////@end ElementsApp initialisation

    return true;
}

/*!
 * Cleanup for ElementsApp
 */
int ElementsApp::OnExit()
{    
////@begin ElementsApp cleanup
	return wxApp::OnExit();
////@end ElementsApp cleanup
}

