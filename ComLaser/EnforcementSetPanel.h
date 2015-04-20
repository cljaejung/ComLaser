#pragma once


class cEnforcementSetPanel : public wxPanel
{
public:
	cEnforcementSetPanel(wxFrame*frame);
	virtual ~cEnforcementSetPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};

