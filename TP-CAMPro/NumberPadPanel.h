// ���� �е� UI

#pragma once


class cNumberPadPanel : public wxPanel
{
public:
	cNumberPadPanel(wxWindow *parent);
	

	wxTextCtrl *m_textCtrl;
	int m_number;


protected:
	DECLARE_EVENT_TABLE()
	void OnButtonNumber(wxCommandEvent&);
	void OnButtonDelete(wxCommandEvent&);
};
