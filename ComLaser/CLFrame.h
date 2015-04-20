#pragma once

class cMainPanel;
class cOperatorSetPanel;
class cDateSetPanel;
class cEnforcementSetPanel;
class cCameraSetPanel;
class cCameraFullPanel;
class cCLFrame : public wxFrame
{
public:
	// ctor(s)
	cCLFrame(const wxString& title);

	cMainPanel *m_mainPanel;
	cOperatorSetPanel *m_operatorPanel;
	cDateSetPanel *m_datePanel;
	cEnforcementSetPanel *m_enforcementPanel;
	cCameraSetPanel *m_cameraPanel;
	cCameraFullPanel *m_cameraFullPanel;

	void ChangePanel(const PANEL_TYPE panel);


protected:
	// event handlers (these functions should _not_ be virtual)
	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);

private:
	// any class wishing to process wxWidgets events must use this macro
	DECLARE_EVENT_TABLE()
};

