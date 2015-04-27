#pragma once

class cMainPanel;
class cLoginPanel;
class cOperatorSetPanel;
class cDateSetPanel;
class cEnforcementSetPanel;
class cCameraSetPanel;
class cCameraFullPanel;
class cFileMngPanel;
class cFileMngFullPanel;
class cEnforcementPanel;
class cEnforcementFullPanel;
class cCLFrame : public wxFrame
{
public:
	// ctor(s)
	cCLFrame(const wxString& title);

	cMainPanel *m_mainPanel;
	cLoginPanel *m_loginPanel;
	cOperatorSetPanel *m_operatorPanel;
	cDateSetPanel *m_datePanel;
	cEnforcementSetPanel *m_enforcementSetPanel;
	cCameraSetPanel *m_cameraPanel;
	cCameraFullPanel *m_cameraFullPanel;
	cFileMngPanel *m_fileMngPanel;
	cFileMngFullPanel *m_fileMngFullPanel;
	cEnforcementPanel *m_enforcementPanel;
	cEnforcementFullPanel *m_enforcementFullPanel;

	void ChangePanel(const PANEL_TYPE panel);


protected:
	// any class wishing to process wxWidgets events must use this macro
	DECLARE_EVENT_TABLE()
	// event handlers (these functions should _not_ be virtual)
	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	void OnEraseBackground(wxEraseEvent& event);
};

