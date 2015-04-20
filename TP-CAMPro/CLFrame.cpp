
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
END_EVENT_TABLE()



// ----------------------------------------------------------------------------
// main frame
// ----------------------------------------------------------------------------

// frame constructor
cCLFrame::cCLFrame(const wxString& title)
	: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(720,480))
{
	// set the frame icon
	SetIcon(wxICON(sample));

	SetBackgroundColour(wxColour("Black"));


//#if wxUSE_MENUS
//	// create a menu bar
//	wxMenu *fileMenu = new wxMenu;
//	// the "About" item should be in the help menu
//	wxMenu *helpMenu = new wxMenu;
//	helpMenu->Append(Minimal_About, _T("&About...\tF1"), _T("Show about dialog"));
//	fileMenu->Append(Minimal_Quit, _T("E&xit\tAlt-X"), _T("Quit this program"));
//	// now append the freshly created menu to the menu bar...
//	wxMenuBar *menuBar = new wxMenuBar();
//	menuBar->Append(fileMenu, _T("&File"));
//	menuBar->Append(helpMenu, _T("&Help"));
//	// ... and attach this menu bar to the frame
//	SetMenuBar(menuBar);
//#endif // wxUSE_MENUS

//	CreateStatusBar(2);
//	SetStatusText(_T("Welcome to ComLaser!"));


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

	ChangePanel(PANEL_MAIN);

	Layout();
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


void cCLFrame::ChangePanel(const PANEL_TYPE panel)
{
	m_mainPanel->Hide();
	m_loginPanel->Hide();
	m_operatorPanel->Hide();
	m_datePanel->Hide();
	m_enforcementSetPanel->Hide();
	m_cameraPanel->Hide();
	m_cameraFullPanel->Hide();
	m_fileMngPanel->Hide();
	m_fileMngFullPanel->Hide();
	m_enforcementPanel->Hide();
	m_enforcementFullPanel->Hide();

	switch (panel)
	{
	case PANEL_MAIN: m_mainPanel->Show(); break;
	case PANEL_LOGIN: m_loginPanel->Show(); break;
	case PANEL_OPERATORSET: m_operatorPanel->Show(); break;
	case PANEL_DATESET: m_datePanel->Show(); break;
	case PANEL_ENFORCEMENTSET:  m_enforcementSetPanel->Show(); break;
	case PANEL_CAMERASET: m_cameraPanel->Show(); break;
	case PANEL_CAMERAFULL: m_cameraFullPanel->Show(); break;
	case PANEL_FILEMNG: m_fileMngPanel->Show(); break;
	case PANEL_FILEMNGFULL: m_fileMngFullPanel->Show(); break;
	case PANEL_ENFORCEMENT: m_enforcementPanel->Show(); break;
	case PANEL_ENFORCEMENTFULL: m_enforcementFullPanel->Show(); break;
	default:
		break;
	}

	Layout();
}
