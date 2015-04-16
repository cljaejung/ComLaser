
#include "stdafx.h"
#include "CLFrame.h"
//#include "MainPanel.h"
//#include "OperatorPanel.h"


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
	: wxFrame(NULL, wxID_ANY, title)
{
	// set the frame icon
	SetIcon(wxICON(sample));


#if wxUSE_MENUS
	// create a menu bar
	wxMenu *fileMenu = new wxMenu;
	// the "About" item should be in the help menu
	wxMenu *helpMenu = new wxMenu;
	helpMenu->Append(Minimal_About, _T("&About...\tF1"), _T("Show about dialog"));
	fileMenu->Append(Minimal_Quit, _T("E&xit\tAlt-X"), _T("Quit this program"));
	// now append the freshly created menu to the menu bar...
	wxMenuBar *menuBar = new wxMenuBar();
	menuBar->Append(fileMenu, _T("&File"));
	menuBar->Append(helpMenu, _T("&Help"));
	// ... and attach this menu bar to the frame
	SetMenuBar(menuBar);
#endif // wxUSE_MENUS

	CreateStatusBar(2);
	SetStatusText(_T("Welcome to ComLaser!"));


	cCLFrame* itemPanel1 = this;
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

//	m_mainPanel = new cMainPanel(this);
//	m_loginPanel = new cOperatorPanel(this);
//	itemBoxSizer2->Add(m_mainPanel, 1, wxEXPAND);
//	itemBoxSizer2->Add(m_loginPanel, 1, wxEXPAND);

//	m_loginPanel->Hide();
//	Layout();
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
