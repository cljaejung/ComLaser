#pragma once


class cMainPanel : public wxPanel
{
public:
	cMainPanel(wxFrame*frame);
	virtual ~cMainPanel();


protected:


public:
	

	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOperator(wxCommandEvent &);
};
