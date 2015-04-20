#pragma once


class cEnforcementPanel : public wxPanel
{
public:
	cEnforcementPanel(wxFrame*frame);
	virtual ~cEnforcementPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonDone(wxCommandEvent &);
	void OnButtonFull(wxCommandEvent &);
};
