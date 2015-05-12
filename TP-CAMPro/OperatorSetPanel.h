// 사용자 설정 화면
//

#pragma once


class cOperatorSetPanel : public wxPanel
{
public:
	cOperatorSetPanel(wxFrame*frame);


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonUserName(wxCommandEvent &);
	void OnButtonPassWord(wxCommandEvent &);
	void OnButtonNewPassWord(wxCommandEvent &);
	void OnButtonConfirm(wxCommandEvent &);
	void OnButtonAdd(wxCommandEvent &);
	void OnButtonDelete(wxCommandEvent &);
	void OnButtonChange(wxCommandEvent &);


protected:
	wxComboBox *m_comboUserName;
	wxTextCtrl *m_textPassword;
	wxTextCtrl *m_textNewPassword;
	wxTextCtrl *m_textComfirmNewPassword;
};
