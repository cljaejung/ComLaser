#pragma once


class cCameraSetPanel : public wxPanel
{
public:
	cCameraSetPanel(wxFrame*frame);
	virtual ~cCameraSetPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonFull(wxCommandEvent &);
};

