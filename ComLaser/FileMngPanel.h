#pragma once


class cFileMngPanel : public wxPanel
{
public:
	cFileMngPanel(wxFrame*frame);
	virtual ~cFileMngPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonFull(wxCommandEvent &);
};
