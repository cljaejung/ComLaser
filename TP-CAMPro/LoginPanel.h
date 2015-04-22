#pragma once


class wxButton;
class cLoginPanel : public wxPanel
{
public:
	cLoginPanel(wxFrame*frame);
	virtual ~cLoginPanel();


protected:


public:
	wxButton *m_Button1;

	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonExit(wxCommandEvent &);
};
