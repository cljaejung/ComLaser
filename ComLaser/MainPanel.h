#pragma once


class cMainPanel : public wxPanel
{
public:
	cMainPanel(wxFrame*frame);
	virtual ~cMainPanel();


protected:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOperatorSet(wxCommandEvent &);
	void OnButtonDateSet(wxCommandEvent &);
	void OnButtonEnforcementSet(wxCommandEvent &);
	void OnButtonCameraSet(wxCommandEvent &);
};
