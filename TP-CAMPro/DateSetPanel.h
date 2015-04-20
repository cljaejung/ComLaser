#pragma once


class cDateSetPanel : public wxPanel
{
public:
	cDateSetPanel(wxFrame*frame);
	virtual ~cDateSetPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};
