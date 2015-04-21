/////////////////////////////////////////////////////////////////////////////
// Name:        testpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     21/04/2015 08:53:54
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "testpanel.h"
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

#include "testpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * TestPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( TestPanel, wxPanel )


/*!
 * TestPanel event table definition
 */

BEGIN_EVENT_TABLE( TestPanel, wxPanel )

////@begin TestPanel event table entries
////@end TestPanel event table entries

END_EVENT_TABLE()


/*!
 * TestPanel constructors
 */

TestPanel::TestPanel()
{
    Init();
}

TestPanel::TestPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * TestPanel creator
 */

bool TestPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin TestPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end TestPanel creation
    return true;
}


/*!
 * TestPanel destructor
 */

TestPanel::~TestPanel()
{
////@begin TestPanel destruction
////@end TestPanel destruction
}


/*!
 * Member initialisation
 */

void TestPanel::Init()
{
////@begin TestPanel member initialisation
////@end TestPanel member initialisation
}


/*!
 * Control creation for TestPanel
 */

void TestPanel::CreateControls()
{    
////@begin TestPanel content construction
    TestPanel* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxPanel* itemPanel3 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel3->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemBoxSizer2->Add(itemPanel3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    // Connect events and objects
    itemPanel3->Connect(ID_PANEL, wxEVT_ERASE_BACKGROUND, wxEraseEventHandler(TestPanel::OnEraseBackground), NULL, this);
    itemPanel3->Connect(ID_PANEL, wxEVT_LEFT_DOWN, wxMouseEventHandler(TestPanel::OnLeftDown), NULL, this);
    itemPanel3->Connect(ID_PANEL, wxEVT_LEFT_UP, wxMouseEventHandler(TestPanel::OnLeftUp), NULL, this);
    itemPanel3->Connect(ID_PANEL, wxEVT_ENTER_WINDOW, wxMouseEventHandler(TestPanel::OnEnterWindow), NULL, this);
    itemPanel3->Connect(ID_PANEL, wxEVT_LEAVE_WINDOW, wxMouseEventHandler(TestPanel::OnLeaveWindow), NULL, this);
////@end TestPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool TestPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap TestPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin TestPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end TestPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon TestPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin TestPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end TestPanel icon retrieval
}


/*!
 * wxEVT_ENTER_WINDOW event handler for ID_PANEL
 */

void TestPanel::OnEnterWindow( wxMouseEvent& event )
{
////@begin wxEVT_ENTER_WINDOW event handler for ID_PANEL in TestPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_ENTER_WINDOW event handler for ID_PANEL in TestPanel. 
}


/*!
 * wxEVT_LEAVE_WINDOW event handler for ID_PANEL
 */

void TestPanel::OnLeaveWindow( wxMouseEvent& event )
{
////@begin wxEVT_LEAVE_WINDOW event handler for ID_PANEL in TestPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_LEAVE_WINDOW event handler for ID_PANEL in TestPanel. 
}


/*!
 * wxEVT_LEFT_DOWN event handler for ID_PANEL
 */

void TestPanel::OnLeftDown( wxMouseEvent& event )
{
////@begin wxEVT_LEFT_DOWN event handler for ID_PANEL in TestPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_LEFT_DOWN event handler for ID_PANEL in TestPanel. 
}


/*!
 * wxEVT_LEFT_UP event handler for ID_PANEL
 */

void TestPanel::OnLeftUp( wxMouseEvent& event )
{
////@begin wxEVT_LEFT_UP event handler for ID_PANEL in TestPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_LEFT_UP event handler for ID_PANEL in TestPanel. 
}


/*!
 * wxEVT_ERASE_BACKGROUND event handler for ID_PANEL
 */

void TestPanel::OnEraseBackground( wxEraseEvent& event )
{
////@begin wxEVT_ERASE_BACKGROUND event handler for ID_PANEL in TestPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_ERASE_BACKGROUND event handler for ID_PANEL in TestPanel. 
}

