
#include "stdafx.h"
#include "EnforcementFullPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"
#include "MoviePanel.h"
#include "Bitmap3ButtonEx.h"


enum {
	ID_PANEL,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cEnforcementFullPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_CANCEL, cEnforcementFullPanel::OnButtonCancel)
END_EVENT_TABLE()


cEnforcementFullPanel::cEnforcementFullPanel(wxFrame*frame) :
	wxPanel(frame)
{
	cEnforcementFullPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxALL, 5);

	cMoviePanel* itemPanel5 = new cMoviePanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxSize(580, 430), wxSIMPLE_BORDER | wxTAB_TRAVERSAL);
	itemPanel5->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemPanel5->m_GotoNextPanel = PANEL_ENFORCEMENTFULL;
	//itemPanel5->m_isPlay = false;
	itemBoxSizer4->Add(itemPanel5, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_TOP | wxALL, 5);

	cBitmap3ButtonEx* itemButton7 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_CANCEL, 
		g_controller.m_ResoucePath[ "fullcancel_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemButton7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText8 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static Text"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText8->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText8->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer6->Add(itemStaticText8, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap9 = new wxStaticBitmap(itemPanel1, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer6->Add(itemStaticBitmap9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText10 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static Text"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText10->SetForegroundColour(wxColour(255, 255, 128));
	itemStaticText10->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer6->Add(itemStaticText10, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);



	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_captureNumber = itemStaticText8;
	m_captureSpeed = itemStaticText10;
	m_captureImage = itemStaticBitmap9;


	UpdatePanel(_("9991"), _("124 km/h"), _("movie/bmp1.bmp"));
}


void cEnforcementFullPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_ENFORCEMENT);
}


// 정보를 업데이트 한다.
void cEnforcementFullPanel::UpdatePanel(const wxString &captureNumber, const wxString &captureSpeed, const wxString &fileName)
{
	m_captureNumber->SetLabel(captureNumber);
	m_captureSpeed->SetLabel(captureSpeed);

	wxImage img(fileName);
	wxImage scaleImg = img.Scale(100, 80);
	m_captureImage->SetBitmap(wxBitmap(scaleImg));

	Refresh();
	Layout();
	Fit();
}
