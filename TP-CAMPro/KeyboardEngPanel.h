// ���� Ű���� �г�

#pragma once


class cKeyboardEngPanel : public wxPanel
{
public:
	cKeyboardEngPanel(wxWindow *parent);


protected:
	wxTextCtrl *m_textCtrl;

	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonKeyboard(wxCommandEvent&);
};
