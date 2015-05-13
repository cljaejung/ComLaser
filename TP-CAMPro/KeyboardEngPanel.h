// 영문 키보드 패널
//
#pragma once

namespace INPUT_MODE
{
	enum TYPE
	{
		ALPHA_LOWER, // 알파벳 소문자
		ALPHA_UPPER, // 알파벳 대문자
		ALPHA_UPPER_STAY, // 대문자 입력모드 유지 상태
		NUMBER,
		//SPECIAL,
		MAX_TYPE
	};
}



class cBitmap2ButtonEx;
class cKeyboardEngPanel : public wxPanel
{
public:
	cKeyboardEngPanel(wxWindow *parent, const wxString &initialText = _(""), 
		const bool IsPassword=false, const int maximumChar=20);

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
};
