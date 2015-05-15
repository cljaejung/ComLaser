// 영문 키보드 패널
//
#pragma once



class cBitmap2ButtonEx;
class cKeyboardEngPanel : public wxPanel
{
public:
	cKeyboardEngPanel(wxWindow *parent, const wxString &initialText = _(""), 
		const bool IsPassword=false, const int maximumChar=40);

	void SetInputMode(const INPUT_MODE::TYPE mode);


protected:
	void UpdateButtonSize();


public:
	wxTextCtrl *m_textCtrl;
	vector<cBitmap2ButtonEx*> m_keyboardButton;

	wxString *m_currentKeyTable;
	INPUT_MODE::TYPE m_mode;

	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonKeyboard(wxCommandEvent&);
	void OnButtonX(wxCommandEvent&);
	void OnTextctrlEnter(wxCommandEvent& event);
};
