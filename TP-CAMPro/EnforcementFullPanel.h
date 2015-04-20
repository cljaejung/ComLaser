#pragma once


class cEnforcementFullPanel : public wxPanel
{
public:
	cEnforcementFullPanel(wxFrame*frame);
	virtual ~cEnforcementFullPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};
