//
// Ű���� ���̾�α�
// ȯ�漳���� �°�,  �ش� �� �´� Ű���带 ����Ѵ�.
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
