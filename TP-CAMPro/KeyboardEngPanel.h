// 영문 키보드 패널

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
