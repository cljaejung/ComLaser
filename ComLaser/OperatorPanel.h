#pragma once


class cOperatorPanel : public wxPanel
{
public:
	cOperatorPanel(wxFrame*frame);
	virtual ~cOperatorPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonExit(wxCommandEvent &);
};
