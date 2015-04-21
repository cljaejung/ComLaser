#pragma once


class wxListCtrl;
class cFileMngPanel : public wxPanel
{
public:
	cFileMngPanel(wxFrame*frame);
	virtual ~cFileMngPanel();


protected:
	wxListCtrl *m_FileListCtrl;

public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonFull(wxCommandEvent &);
};
