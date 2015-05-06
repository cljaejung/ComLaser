#pragma once


class cCameraSetPanel : public wxPanel
{
public:
	cCameraSetPanel(wxFrame*frame);
	virtual ~cCameraSetPanel();


protected:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonFull(wxCommandEvent &);
};

