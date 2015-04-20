#pragma once


class cFileMngFullPanel : public wxPanel
{
public:
	cFileMngFullPanel(wxFrame*frame);
	virtual ~cFileMngFullPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};
