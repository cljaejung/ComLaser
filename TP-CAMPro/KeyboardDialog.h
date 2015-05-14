//
// 키보드 다이얼로그
// 환경설정에 맞게,  해당 언어에 맞는 키보드를 출력한다.
//
#pragma once


class cKeyboardEngPanel;
class cKeyboardDialog : public wxDialog
{
public:
	cKeyboardDialog(wxWindow *parent, const wxString &initialText = wxEmptyString, 
		const bool IsPassword = false, const int maximumChar = 20);

	void KeyboardInputFinish();
	void KeyboardInputCancel();

	wxString m_text;


protected:
	cKeyboardEngPanel *m_keyboardPanel;
};
