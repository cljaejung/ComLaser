
#include "stdafx.h"
#include "KeyboardDialog.h"
#include "KeyboardEngPanel.h"

enum
{
	ID_PANEL,
};


cKeyboardDialog::cKeyboardDialog(wxWindow *parent, const wxString &initialText, 
	const bool IsPassword, const int maximumChar) 
	: wxDialog(parent, wxID_ANY, _("KeyBoard"), wxDefaultPosition, wxSize(720,360), 0)
{
	cKeyboardDialog* itemDialog1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemDialog1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);

	cKeyboardEngPanel* itemPanel4 = new cKeyboardEngPanel(itemDialog1, initialText, IsPassword, maximumChar);
	itemPanel4->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer3->Add(itemPanel4, 0, wxGROW | wxALL, 0);



	///////////////////////////////////////////////////////////////////////////////////////////////////////
	m_keyboardPanel = itemPanel4;

	//Center();
	wxPoint parentPos = GetParent()->ClientToScreen(wxPoint(0, 0));
	Move(wxPoint(0, 118) + parentPos);

}


// 키보드 입력이 끝나면 호출된다. 
// keyboardPanel 에서 호출함.
void cKeyboardDialog::KeyboardInputFinish()
{
	m_text = m_keyboardPanel->m_textCtrl->GetValue();

	EndDialog(wxID_OK);
}


// 키보드 입력을 취소할 때, 호출된다.
// keyboardPanel 에서 호출함.
void cKeyboardDialog::KeyboardInputCancel()
{
	EndDialog(wxID_CANCEL);
}
