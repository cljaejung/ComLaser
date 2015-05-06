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
	void OnButtonOK(wxCommandEvent &);
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonUserName(wxCommandEvent &);
	void OnButtonPassWord(wxCommandEvent &);
	void OnButtonNewPassWord(wxCommandEvent &);
	void OnButtonConfirm(wxCommandEvent &);
};
