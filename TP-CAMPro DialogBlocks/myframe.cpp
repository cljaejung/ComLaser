/////////////////////////////////////////////////////////////////////////////
// Name:        myframe.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     15/06/2006 15:26:09
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "myframe.h"
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

#include "myframe.h"

////@begin XPM images
#include "wxwin32x32.xpm"
#include "open.xpm"
#include "save.xpm"
#include "undo.xpm"
#include "redo.xpm"
#include "copy.xpm"
#include "cut.xpm"
#include "paste.xpm"
////@end XPM images

/*!
 * MyFrame type definition
 */

IMPLEMENT_CLASS( MyFrame, wxFrame )

/*!
 * MyFrame event table definition
 */

BEGIN_EVENT_TABLE( MyFrame, wxFrame )

////@begin MyFrame event table entries
////@end MyFrame event table entries

END_EVENT_TABLE()

/*!
 * MyFrame constructors
 */

MyFrame::MyFrame( )
{
}

MyFrame::MyFrame( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create( parent, id, caption, pos, size, style );
}

/*!
 * MyFrame creator
 */

bool MyFrame::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin MyFrame member initialisation
////@end MyFrame member initialisation

////@begin MyFrame creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    SetIcon(GetIconResource(wxT("wxwin32x32.xpm")));
    Centre();
////@end MyFrame creation
    return true;
}

/*!
 * Control creation for MyFrame
 */

void MyFrame::CreateControls()
{    
////@begin MyFrame content construction
    MyFrame* itemFrame1 = this;

    wxMenuBar* menuBar = new wxMenuBar;
    wxMenu* itemMenu3 = new wxMenu;
    {
        wxMenuItem* menuItem = new wxMenuItem(itemMenu3, wxID_OPEN, _("&Open...\tCtrl+O"), _("Opens a file"), wxITEM_NORMAL);
        wxBitmap bitmap(itemFrame1->GetBitmapResource(wxT("open.xpm")));
        menuItem->SetBitmap(bitmap);
        itemMenu3->Append(menuItem);
    }
    itemMenu3->Append(wxID_SAVE, _("&Save"), _("Saves a file to disk"), wxITEM_NORMAL);
    itemMenu3->AppendSeparator();
    itemMenu3->Append(wxID_EXIT, _("&Exit"), _("Exits the application"), wxITEM_NORMAL);
    menuBar->Append(itemMenu3, _("&File"));
    wxMenu* itemMenu8 = new wxMenu;
    itemMenu8->Append(wxID_COPY, _("&Copy"), _("Copies data to the clipboard"), wxITEM_NORMAL);
    itemMenu8->Append(wxID_CUT, _("&Cut"), _("Copies to the clipboard and deletes"), wxITEM_NORMAL);
    itemMenu8->Append(wxID_PASTE, _("&Paste"), _("Pastes from the clipboard"), wxITEM_NORMAL);
    menuBar->Append(itemMenu8, _("&Edit"));
    wxMenu* itemMenu12 = new wxMenu;
    itemMenu12->Append(wxID_ABOUT, _("&About..."), _("About this application"), wxITEM_NORMAL);
    menuBar->Append(itemMenu12, _("&Help"));
    itemFrame1->SetMenuBar(menuBar);

    wxToolBar* itemToolBar14 = CreateToolBar( wxTB_FLAT|wxTB_HORIZONTAL, ID_FRAME_TOOLBAR );
    wxBitmap itemtool15Bitmap(itemFrame1->GetBitmapResource(wxT("open.xpm")));
    wxBitmap itemtool15BitmapDisabled;
    itemToolBar14->AddTool(wxID_OPEN, _T(""), itemtool15Bitmap, itemtool15BitmapDisabled, wxITEM_NORMAL, _T(""), wxEmptyString);
    wxBitmap itemtool16Bitmap(itemFrame1->GetBitmapResource(wxT("save.xpm")));
    wxBitmap itemtool16BitmapDisabled;
    itemToolBar14->AddTool(wxID_SAVE, _T(""), itemtool16Bitmap, itemtool16BitmapDisabled, wxITEM_NORMAL, _T(""), wxEmptyString);
    itemToolBar14->AddSeparator();
    wxBitmap itemtool18Bitmap(itemFrame1->GetBitmapResource(wxT("undo.xpm")));
    wxBitmap itemtool18BitmapDisabled;
    itemToolBar14->AddTool(wxID_UNDO, _T(""), itemtool18Bitmap, itemtool18BitmapDisabled, wxITEM_NORMAL, _T(""), wxEmptyString);
    wxBitmap itemtool19Bitmap(itemFrame1->GetBitmapResource(wxT("redo.xpm")));
    wxBitmap itemtool19BitmapDisabled;
    itemToolBar14->AddTool(wxID_REDO, _T(""), itemtool19Bitmap, itemtool19BitmapDisabled, wxITEM_NORMAL, _T(""), wxEmptyString);
    itemToolBar14->AddSeparator();
    wxBitmap itemtool21Bitmap(itemFrame1->GetBitmapResource(wxT("copy.xpm")));
    wxBitmap itemtool21BitmapDisabled;
    itemToolBar14->AddTool(wxID_COPY, _T(""), itemtool21Bitmap, itemtool21BitmapDisabled, wxITEM_NORMAL, _T(""), wxEmptyString);
    wxBitmap itemtool22Bitmap(itemFrame1->GetBitmapResource(wxT("cut.xpm")));
    wxBitmap itemtool22BitmapDisabled;
    itemToolBar14->AddTool(wxID_CUT, _T(""), itemtool22Bitmap, itemtool22BitmapDisabled, wxITEM_NORMAL, _T(""), wxEmptyString);
    wxBitmap itemtool23Bitmap(itemFrame1->GetBitmapResource(wxT("paste.xpm")));
    wxBitmap itemtool23BitmapDisabled;
    itemToolBar14->AddTool(wxID_PASTE, _T(""), itemtool23Bitmap, itemtool23BitmapDisabled, wxITEM_NORMAL, _T(""), wxEmptyString);
    itemToolBar14->Realize();
    itemFrame1->SetToolBar(itemToolBar14);

    wxStatusBar* itemStatusBar24 = new wxStatusBar( itemFrame1, ID_FRAME_STATUSBAR, wxST_SIZEGRIP|wxNO_BORDER );
    itemStatusBar24->SetFieldsCount(2);
    itemStatusBar24->SetStatusText(_("Field One"), 0);
    itemStatusBar24->SetStatusText(_("Field Two"), 1);
    int itemStatusBar24Widths[2];
    itemStatusBar24Widths[0] = 200;
    itemStatusBar24Widths[1] = -1;
    itemStatusBar24->SetStatusWidths(2, itemStatusBar24Widths);
    itemFrame1->SetStatusBar(itemStatusBar24);

    wxSplitterWindow* itemSplitterWindow25 = new wxSplitterWindow( itemFrame1, ID_FRAME_SPLITTERWINDOW, wxDefaultPosition, wxSize(100, 100), wxSP_3DBORDER|wxSP_3DSASH|wxSP_NO_XP_THEME|wxNO_BORDER );
    itemSplitterWindow25->SetMinimumPaneSize(0);

    wxArrayString itemListBox26Strings;
    itemListBox26Strings.Add(_("Rembrandt"));
    itemListBox26Strings.Add(_("Botticelli"));
    itemListBox26Strings.Add(_("Rubens"));
    itemListBox26Strings.Add(_("Degas"));
    itemListBox26Strings.Add(_("Constable"));
    itemListBox26Strings.Add(_("da Vinci"));
    itemListBox26Strings.Add(_("Raphael"));
    itemListBox26Strings.Add(_("Giotto"));
    itemListBox26Strings.Add(_("Michelangelo"));
    wxListBox* itemListBox26 = new wxListBox( itemSplitterWindow25, ID_FRAME_LISTBOX, wxDefaultPosition, wxDefaultSize, itemListBox26Strings, wxLB_SINGLE|wxNO_BORDER );

    wxHtmlWindow* itemHtmlWindow27 = new wxHtmlWindow( itemSplitterWindow25, ID_FRAME_HTMLWINDOW, wxDefaultPosition, wxSize(200, 150), wxHW_SCROLLBAR_AUTO|wxNO_BORDER|wxHSCROLL|wxVSCROLL );
    itemHtmlWindow27->SetPage(_("<h3>wxFrame Demo</h3>\n\nThis demonstrates a wxFrame containing a wxListBox, which itself contains a wxListBox and a wxHtmlWindow. There's also a wxMenuBar,wxToolBar and wxStatusBar."));

    itemSplitterWindow25->SplitVertically(itemListBox26, itemHtmlWindow27, 100);

////@end MyFrame content construction
}

/*!
 * Should we show tooltips?
 */

bool MyFrame::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap MyFrame::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin MyFrame bitmap retrieval
    wxUnusedVar(name);
    if (name == _T("open.xpm"))
    {
        wxBitmap bitmap(open_xpm);
        return bitmap;
    }
    else if (name == _T("save.xpm"))
    {
        wxBitmap bitmap(save_xpm);
        return bitmap;
    }
    else if (name == _T("undo.xpm"))
    {
        wxBitmap bitmap(undo_xpm);
        return bitmap;
    }
    else if (name == _T("redo.xpm"))
    {
        wxBitmap bitmap(redo_xpm);
        return bitmap;
    }
    else if (name == _T("copy.xpm"))
    {
        wxBitmap bitmap(copy_xpm);
        return bitmap;
    }
    else if (name == _T("cut.xpm"))
    {
        wxBitmap bitmap(cut_xpm);
        return bitmap;
    }
    else if (name == _T("paste.xpm"))
    {
        wxBitmap bitmap(paste_xpm);
        return bitmap;
    }
    return wxNullBitmap;
////@end MyFrame bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon MyFrame::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin MyFrame icon retrieval
    wxUnusedVar(name);
    if (name == _T("wxwin32x32.xpm"))
    {
        wxIcon icon(wxwin32x32_xpm);
        return icon;
    }
    return wxNullIcon;
////@end MyFrame icon retrieval
}
