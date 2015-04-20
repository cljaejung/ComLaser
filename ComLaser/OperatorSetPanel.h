#pragma once


class cOperatorSetPanel : public wxPanel
{
public:
	cOperatorSetPanel(wxFrame*frame);
	virtual ~cOperatorSetPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonExit(wxCommandEvent &);
};
