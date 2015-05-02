// ���� �е� UI

#pragma once


class cNumberPadPanel : public wxPanel
{
public:
	cNumberPadPanel(wxWindow *parent, const int initNumber=0);
	

	wxTextCtrl *m_textCtrl;
	int m_number;


protected:
	DECLARE_EVENT_TABLE()
	void OnButtonNumber(wxCommandEvent&);
	void OnButtonDelete(wxCommandEvent&);
	void OnTextctrlTextUpdated(wxCommandEvent& event);
};
