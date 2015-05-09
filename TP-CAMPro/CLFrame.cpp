
#include "stdafx.h"
#include "CLFrame.h"
#include "MainPanel.h"
#include "LoginPanel.h"
#include "OperatorSetPanel.h"
#include "DateSetPanel.h"
#include "EnforcementSetPanel.h"
#include "CameraSetPanel.h"
#include "CameraFullPanel.h"
#include "FileMngPanel.h"
#include "FileMngFullPanel.h"
#include "EnforcementPanel.h"
#include "EnforcementFullPanel.h"
#include "MoviePanel.h"


// ----------------------------------------------------------------------------
// resources
// ----------------------------------------------------------------------------
#if !defined(__WXMSW__) && !defined(__WXPM__)
	#include "../sample.xpm"
#endif



// ----------------------------------------------------------------------------
// constants
// ----------------------------------------------------------------------------
// IDs for the controls and the menu commands
enum
{
	Minimal_Quit = wxID_EXIT,
	Minimal_About = wxID_ABOUT
};

// ----------------------------------------------------------------------------
// event tables and other macros for wxWidgets
// ----------------------------------------------------------------------------
BEGIN_EVENT_TABLE(cCLFrame, wxFrame)
	EVT_MENU(Minimal_Quit, cCLFrame::OnQuit)
	EVT_MENU(Minimal_About, cCLFrame::OnAbout)
	EVT_ERASE_BACKGROUND(cCLFrame::OnEraseBackground)
END_EVENT_TABLE()



// ----------------------------------------------------------------------------
// main frame
// ----------------------------------------------------------------------------

// frame constructor
cCLFrame::cCLFrame(const wxString& title)
: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(720, 480), 0)
{
	// set the frame icon
	SetIcon(wxICON(sample));

	SetBackgroundColour(wxColour(_("Black")));

	m_loginPanel = NULL;
	m_operatorPanel = NULL;
	m_datePanel = NULL;
	m_enforcementSetPanel = NULL;
	m_cameraPanel = NULL;
	m_cameraFullPanel = NULL;
	m_fileMngPanel = NULL;
	m_fileMngFullPanel = NULL;
	m_enforcementPanel = NULL;
	m_enforcementFullPanel = NULL;


	cCLFrame* itemPanel1 = this;
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	m_mainPanel = new cMainPanel(this);
	m_loginPanel = new cLoginPanel(this);
	m_operatorPanel = new cOperatorSetPanel(this);
	m_datePanel = new cDateSetPanel(this);
	m_enforcementSetPanel = new cEnforcementSetPanel(this);
	m_cameraPanel = new cCameraSetPanel(this);
	m_cameraFullPanel = new cCameraFullPanel(this);
	m_fileMngPanel = new cFileMngPanel(this);
	m_fileMngFullPanel = new cFileMngFullPanel(this);
	m_enforcementPanel = new cEnforcementPanel(this);
	m_enforcementFullPanel = new cEnforcementFullPanel(this);
	//cMoviePanel *moviePanel = new cMoviePanel(this);

	itemBoxSizer2->Add(m_mainPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_loginPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_operatorPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_datePanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_enforcementSetPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_cameraPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_cameraFullPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_fileMngPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_fileMngFullPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_enforcementPanel, 1, wxEXPAND);
	itemBoxSizer2->Add(m_enforcementFullPanel, 1, wxEXPAND);
	//itemBoxSizer2->Add(moviePanel, 1, wxEXPAND); // test panel

	ChangePanel(PANEL_LOGIN);

	//m_mainPanel->Hide(); // test panel

	
	Center(); // 윈도우를 가운데로 옮긴다.
	Layout(); // UI 위치 재조정.
}


// event handlers

void cCLFrame::OnQuit(wxCommandEvent& WXUNUSED(event))
{
	// true is to force the frame to close
	Close(true);
}

void cCLFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
	wxMessageBox(wxString::Format(
		_T("This is the ComLaser App\n")
		_T("running under %s."),
		wxGetOsDescription().c_str()
		),
		_T("About ComLaser"),
		wxOK | wxICON_INFORMATION,
		this);
}


void cCLFrame::OnEraseBackground(wxEraseEvent& event)
{
}


void cCLFrame::ChangePanel(const PANEL_TYPE panel)
{
	if (PANEL_NONE == panel)
		return;

	m_mainPanel->Hide();
	if (m_loginPanel)
		m_loginPanel->Hide();
	if (m_operatorPanel)
		m_operatorPanel->Hide();
	if (m_datePanel)
		m_datePanel->Hide();
	if (m_enforcementSetPanel)
		m_enforcementSetPanel->Hide();
	if (m_cameraPanel)
		m_cameraPanel->Hide();
	if (m_cameraFullPanel)
		m_cameraFullPanel->Hide();
	if (m_fileMngPanel)
		m_fileMngPanel->Hide();
	if (m_fileMngFullPanel)
		m_fileMngFullPanel->Hide();
	if (m_enforcementPanel)
		m_enforcementPanel->Hide();
	if (m_enforcementFullPanel)
		m_enforcementFullPanel->Hide();

	wxPanel *showPanel = NULL;

	switch (panel)
	{
	case PANEL_MAIN: m_mainPanel->Show(); showPanel = m_mainPanel;  break;
	case PANEL_LOGIN: m_loginPanel->Show(); showPanel = m_loginPanel;  break;
	case PANEL_OPERATORSET: m_operatorPanel->Show(); showPanel = m_operatorPanel;  break;
	case PANEL_DATESET: m_datePanel->Show(); showPanel = m_datePanel;  break;
	case PANEL_ENFORCEMENTSET:  m_enforcementSetPanel->Show(); showPanel = m_enforcementSetPanel;  break;
	case PANEL_CAMERASET: m_cameraPanel->Show(); showPanel = m_cameraPanel;  break;
	case PANEL_CAMERAFULL: m_cameraFullPanel->Show(); showPanel = m_cameraFullPanel;  break;
	case PANEL_FILEMNG: m_fileMngPanel->Show(); showPanel = m_fileMngPanel;  break;
	case PANEL_FILEMNGFULL: m_fileMngFullPanel->Show(); showPanel = m_fileMngFullPanel;  break;
	case PANEL_ENFORCEMENT: m_enforcementPanel->Show(); showPanel = m_enforcementPanel;  break;
	case PANEL_ENFORCEMENTFULL: m_enforcementFullPanel->Show(); showPanel = m_enforcementFullPanel;  break;
	default:
		break;
	}

	if (showPanel)
	{ 
		showPanel->Refresh();
		showPanel->Layout();
		showPanel->Fit();
	}

	Layout();
}
