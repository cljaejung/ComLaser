#pragma once


class cEnforcementSetPanel : public wxPanel
{
public:
	cEnforcementSetPanel(wxFrame*frame);
	virtual ~cEnforcementSetPanel();


protected:
	wxChoice *m_UnitChoice;

public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonLocation(wxCommandEvent &);
	void OnButtonLimitSpeed(wxCommandEvent &);
};

