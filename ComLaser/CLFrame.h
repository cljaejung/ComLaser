#pragma once

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif


class cMainPanel;
class cOperatorPanel;
class cCLFrame : public wxFrame
{
public:
	// ctor(s)
	cCLFrame(const wxString& title);

	// event handlers (these functions should _not_ be virtual)
	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);


public:
//	cMainPanel *m_mainPanel;
//	cOperatorPanel *m_loginPanel;


private:
	// any class wishing to process wxWidgets events must use this macro
	DECLARE_EVENT_TABLE()
};

