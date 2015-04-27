/////////////////////////////////////////////////////////////////////////////
// Name:        cdatesetpanel.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     20/04/2015 21:09:04
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "cdatesetpanel.h"
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

#include "cdatesetpanel.h"

////@begin XPM images
////@end XPM images


/*!
 * cDateSetPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( cDateSetPanel, wxPanel )


/*!
 * cDateSetPanel event table definition
 */

BEGIN_EVENT_TABLE( cDateSetPanel, wxPanel )

////@begin cDateSetPanel event table entries
////@end cDateSetPanel event table entries

END_EVENT_TABLE()


/*!
 * cDateSetPanel constructors
 */

cDateSetPanel::cDateSetPanel()
{
    Init();
}

cDateSetPanel::cDateSetPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*!
 * cDateSetPanel creator
 */

bool cDateSetPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin cDateSetPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end cDateSetPanel creation
    return true;
}


/*!
 * cDateSetPanel destructor
 */

cDateSetPanel::~cDateSetPanel()
{
////@begin cDateSetPanel destruction
////@end cDateSetPanel destruction
}


/*!
 * Member initialisation
 */

void cDateSetPanel::Init()
{
////@begin cDateSetPanel member initialisation
    m_btnMonth = NULL;
    m_btnDay = NULL;
    m_btnYear = NULL;
    m_btnHour = NULL;
    m_btnMinutes = NULL;
    m_btnTime = NULL;
////@end cDateSetPanel member initialisation
}


/*!
 * Control creation for cDateSetPanel
*/

void cDateSetPanel::CreateControls()
{    
////@begin cDateSetPanel content construction
    cDateSetPanel* itemPanel1 = this;

    this->SetBackgroundColour(wxColour(0, 0, 0));
    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW|wxLEFT|wxTOP|wxBOTTOM, 5);

    wxStaticText* itemStaticText5 = new wxStaticText( itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText5->SetForegroundColour(wxColour(255, 255, 255));
    itemBoxSizer4->Add(itemStaticText5, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer3->Add(itemBoxSizer6, 0, wxGROW|wxRIGHT|wxTOP|wxBOTTOM, 5);

    wxStaticBitmap* itemStaticBitmap7 = new wxStaticBitmap( itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer6->Add(itemStaticBitmap7, 0, wxALIGN_RIGHT|wxALL, 5);

    wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer8, 0, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer8->Add(itemBoxSizer9, 1, wxGROW|wxALL, 5);

    wxPanel* itemPanel10 = new wxPanel( itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER|wxTAB_TRAVERSAL );
    itemPanel10->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel10->SetBackgroundColour(wxColour(54, 54, 54));
    itemBoxSizer9->Add(itemPanel10, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
    itemPanel10->SetSizer(itemBoxSizer11);

    wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer11->Add(itemBoxSizer12, 0, wxALIGN_LEFT|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap13 = new wxStaticBitmap( itemPanel10, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer12->Add(itemStaticBitmap13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText14 = new wxStaticText( itemPanel10, wxID_STATIC, _("Date"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText14->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText14->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer12->Add(itemStaticText14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer11->Add(itemBoxSizer15, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton16 = new wxButton( itemPanel10, ID_BUTTON_MONTH_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer15->Add(itemButton16, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton17 = new wxButton( itemPanel10, ID_BUTTON_DAY_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer15->Add(itemButton17, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton18 = new wxButton( itemPanel10, ID_BUTTON_YEAR_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer15->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer11->Add(itemBoxSizer19, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    m_btnMonth = new wxButton( itemPanel10, ID_BUTTON_MONTH, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer19->Add(m_btnMonth, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_btnDay = new wxButton( itemPanel10, ID_BUTTON_DAY, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer19->Add(m_btnDay, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_btnYear = new wxButton( itemPanel10, ID_BUTTON_YEAR, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer19->Add(m_btnYear, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer11->Add(itemBoxSizer23, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton24 = new wxButton( itemPanel10, ID_BUTTON_MONTH_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer23->Add(itemButton24, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton25 = new wxButton( itemPanel10, ID_BUTTON_DAY_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer23->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton26 = new wxButton( itemPanel10, ID_BUTTON_YEAR_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer23->Add(itemButton26, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer27 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer8->Add(itemBoxSizer27, 1, wxGROW|wxALL, 5);

    wxPanel* itemPanel28 = new wxPanel( itemPanel1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER|wxTAB_TRAVERSAL );
    itemPanel28->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel28->SetBackgroundColour(wxColour(54, 54, 54));
    itemBoxSizer27->Add(itemPanel28, 1, wxGROW|wxALL, 5);

    wxBoxSizer* itemBoxSizer29 = new wxBoxSizer(wxVERTICAL);
    itemPanel28->SetSizer(itemBoxSizer29);

    wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer29->Add(itemBoxSizer30, 0, wxALIGN_LEFT|wxALL, 5);

    wxStaticBitmap* itemStaticBitmap31 = new wxStaticBitmap( itemPanel28, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer30->Add(itemStaticBitmap31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText32 = new wxStaticText( itemPanel28, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText32->SetForegroundColour(wxColour(255, 255, 255));
    itemStaticText32->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
    itemBoxSizer30->Add(itemStaticText32, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer29->Add(itemBoxSizer33, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton34 = new wxButton( itemPanel28, ID_BUTTON_HOUR_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer33->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton35 = new wxButton( itemPanel28, ID_BUTTON_MINUTES_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer33->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton36 = new wxButton( itemPanel28, ID_BUTTON_TIME_UP, _("+"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer33->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer29->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    m_btnHour = new wxButton( itemPanel28, ID_BUTTON_HOUR, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(m_btnHour, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_btnMinutes = new wxButton( itemPanel28, ID_BUTTON_MINUTES, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(m_btnMinutes, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_btnTime = new wxButton( itemPanel28, ID_BUTTON_TIME, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer37->Add(m_btnTime, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer41 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer29->Add(itemBoxSizer41, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton42 = new wxButton( itemPanel28, ID_BUTTON_HOUR_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer41->Add(itemButton42, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton43 = new wxButton( itemPanel28, ID_BUTTON_MINUTES_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer41->Add(itemButton43, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton44 = new wxButton( itemPanel28, ID_BUTTON_TIME_DOWN, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer41->Add(itemButton44, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer45 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer2->Add(itemBoxSizer45, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton46 = new wxButton( itemPanel1, ID_BUTTON_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer45->Add(itemButton46, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton47 = new wxButton( itemPanel1, ID_BUTTON_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer45->Add(itemButton47, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end cDateSetPanel content construction
}


/*!
 * Should we show tooltips?
 */

bool cDateSetPanel::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap cDateSetPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin cDateSetPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end cDateSetPanel bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon cDateSetPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin cDateSetPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end cDateSetPanel icon retrieval
}
