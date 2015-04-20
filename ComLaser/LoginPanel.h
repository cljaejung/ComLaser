#pragma once


class cLoginPanel : public wxPanel
{
public:
	cLoginPanel(wxFrame*frame);
	virtual ~cLoginPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonExit(wxCommandEvent &);
};
