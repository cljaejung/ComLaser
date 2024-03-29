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
#include "copy.xpm"
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
    EVT_PAINT( TestPanel::OnPaint )
    EVT_ERASE_BACKGROUND( TestPanel::OnEraseBackground )
    EVT_LEFT_DOWN( TestPanel::OnLeftDown )
    EVT_LEFT_UP( TestPanel::OnLeftUp )
    EVT_ENTER_WINDOW( TestPanel::OnEnterWindow )
    EVT_LEAVE_WINDOW( TestPanel::OnLeaveWindow )
    EVT_KEY_DOWN( TestPanel::OnKeyDown )
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

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemPanel3->SetSizer(itemBoxSizer4);

    wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer4->Add(itemBoxSizer5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton6 = new wxButton( itemPanel3, ID_BUTTON, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer5->Add(itemButton6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton7 = new wxButton( itemPanel3, ID_BUTTON1, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer5->Add(itemButton7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton8 = new wxButton( itemPanel3, ID_BUTTON2, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer5->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton9 = new wxButton( itemPanel3, ID_BUTTON3, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer5->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer4->Add(itemBoxSizer10, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBitmapButton* itemBitmapButton11 = new wxBitmapButton( itemPanel3, ID_BITMAPBUTTON, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER );
    wxBitmap itemBitmapButton11BitmapSel(itemPanel1->GetBitmapResource(wxT("copy.xpm")));
    itemBitmapButton11->SetBitmapSelected(itemBitmapButton11BitmapSel);
    itemBoxSizer10->Add(itemBitmapButton11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

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
    if (name == wxT("copy.xpm"))
    {
        wxBitmap bitmap(copy_xpm);
        return bitmap;
    }
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


/*!
 * wxEVT_PAINT event handler for ID_TESTPANEL
 */

void TestPanel::OnPaint( wxPaintEvent& event )
{
////@begin wxEVT_PAINT event handler for ID_TESTPANEL in TestPanel.
    // Before editing this code, remove the block markers.
    wxPaintDC dc(this);
////@end wxEVT_PAINT event handler for ID_TESTPANEL in TestPanel. 
}


/*!
 * wxEVT_KEY_DOWN event handler for ID_TESTPANEL
 */

void TestPanel::OnKeyDown( wxKeyEvent& event )
{
////@begin wxEVT_KEY_DOWN event handler for ID_TESTPANEL in TestPanel.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_KEY_DOWN event handler for ID_TESTPANEL in TestPanel. 
}

