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
	void OnEraseBackground(wxEraseEvent&);
	void OnButtonOperatorSet(wxCommandEvent &);
	void OnButtonDateSet(wxCommandEvent &);
	void OnButtonEnforcementSet(wxCommandEvent &);
	void OnButtonCameraSet(wxCommandEvent &);
	void OnButtonFileMng(wxCommandEvent &);
	void OnButtonEnforcement(wxCommandEvent &);
};
