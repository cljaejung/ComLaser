#pragma once


class cCameraFullPanel : public wxPanel
{
public:
	cCameraFullPanel(wxFrame*frame);
	virtual ~cCameraFullPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};

