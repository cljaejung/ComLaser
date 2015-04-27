
#include "stdafx.h"
#include "KeyboardEngPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"


enum {
	ID_TEXTCTRL = 100,
	ID_BUTTON0 = 0, //  q
	ID_BUTTON1, // w
	ID_BUTTON2, // e
	ID_BUTTON3, // r
	ID_BUTTON4, // t
	ID_BUTTON5, // y
	ID_BUTTON6, // u
	ID_BUTTON7, // i
	ID_BUTTON8,  // o
	ID_BUTTON9,  // p
	ID_BUTTON10, // a
	ID_BUTTON11,  // s
	ID_BUTTON12,  // d
	ID_BUTTON13,  // f
	ID_BUTTON14,  // g
	ID_BUTTON15,  // h
	ID_BUTTON16,  // j
	ID_BUTTON17, // k
	ID_BUTTON18, // l
	ID_BUTTON19, // Shift
	ID_BUTTON20, // z
	ID_BUTTON21, // x
	ID_BUTTON22, // c
	ID_BUTTON23, // v
	ID_BUTTON24, // b
	ID_BUTTON25, // n
	ID_BUTTON26, // m
	ID_BUTTON27, // backspace
	ID_BUTTON28, // ?123
	ID_BUTTON29, // ,
	ID_BUTTON30, // space
	ID_BUTTON31, // .
	ID_BUTTON32, // Enter
};

wxString g_keyTable[ID_BUTTON32+1] = {
	"q", "w", "e", "r", "t", "y", "u", "i", "o", "p",
	"a", "s", "d", "f", "g", "h", "j", "k", "l",
	"Shift", "z", "x", "c", "v", "b", "n", "m", "Backspace",
	"?123", ",", "Space", ".", "Enter"
};



BEGIN_EVENT_TABLE(cKeyboardEngPanel, wxPanel)
	EVT_COMMAND_RANGE(ID_BUTTON0, ID_BUTTON32, wxEVT_COMMAND_BUTTON_CLICKED, cKeyboardEngPanel::OnButtonKeyboard)
END_EVENT_TABLE()


cKeyboardEngPanel::cKeyboardEngPanel(wxWindow*parent) :
	wxPanel(parent)
{

	cKeyboardEngPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);

	//m_textCtrl = new wxTextCtrl(itemPanel1, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
	//itemBoxSizer3->Add(m_textCtrl, 1, wxALIGN_CENTER_VERTICAL | wxALL, 4);
	m_textCtrl = new wxTextCtrl(itemPanel1, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	m_textCtrl->SetFont(wxFont(16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer3->Add(m_textCtrl, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer5, 1, wxGROW | wxLEFT | wxRIGHT, 4);

	wxButton* itemButton6 = new wxButton(itemPanel1, ID_BUTTON0, _("q"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton6, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton7 = new wxButton(itemPanel1, ID_BUTTON1, _("w"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton7, 0, wxALIGN_CENTER_VERTICAL, 1);

	wxButton* itemButton8 = new wxButton(itemPanel1, ID_BUTTON2, _("e"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton9 = new wxButton(itemPanel1, ID_BUTTON3, _("r"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton10 = new wxButton(itemPanel1, ID_BUTTON4, _("t"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton11 = new wxButton(itemPanel1, ID_BUTTON5, _("y"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton12 = new wxButton(itemPanel1, ID_BUTTON6, _("u"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton12, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton13 = new wxButton(itemPanel1, ID_BUTTON7, _("i"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton13, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton14 = new wxButton(itemPanel1, ID_BUTTON8, _("o"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton14, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton15 = new wxButton(itemPanel1, ID_BUTTON9, _("p"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer5->Add(itemButton15, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer16, 1, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT, 4);

	wxButton* itemButton17 = new wxButton(itemPanel1, ID_BUTTON10, _("a"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton17, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton18 = new wxButton(itemPanel1, ID_BUTTON11, _("s"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton19 = new wxButton(itemPanel1, ID_BUTTON12, _("d"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton20 = new wxButton(itemPanel1, ID_BUTTON13, _("f"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton20, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton21 = new wxButton(itemPanel1, ID_BUTTON14, _("g"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton21, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton22 = new wxButton(itemPanel1, ID_BUTTON15, _("h"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton22, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton23 = new wxButton(itemPanel1, ID_BUTTON16, _("j"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton23, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton24 = new wxButton(itemPanel1, ID_BUTTON17, _("k"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton24, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton25 = new wxButton(itemPanel1, ID_BUTTON18, _("l"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer16->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer26, 1, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT, 4);

	wxButton* itemButton27 = new wxButton(itemPanel1, ID_BUTTON19, _("Shift"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer26->Add(itemButton27, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxButton* itemButton28 = new wxButton(itemPanel1, ID_BUTTON20, _("z"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer26->Add(itemButton28, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton29 = new wxButton(itemPanel1, ID_BUTTON21, _("x"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer26->Add(itemButton29, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton30 = new wxButton(itemPanel1, ID_BUTTON22, _("c"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer26->Add(itemButton30, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton31 = new wxButton(itemPanel1, ID_BUTTON23, _("v"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer26->Add(itemButton31, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton32 = new wxButton(itemPanel1, ID_BUTTON24, _("b"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer26->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton33 = new wxButton(itemPanel1, ID_BUTTON25, _("n"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer26->Add(itemButton33, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton34 = new wxButton(itemPanel1, ID_BUTTON26, _("m"), wxDefaultPosition, wxSize(68, -1), 0);
	itemBoxSizer26->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton35 = new wxButton(itemPanel1, ID_BUTTON27, _("BackSpace"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer26->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer36, 1, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT, 4);

	wxButton* itemButton37 = new wxButton(itemPanel1, ID_BUTTON28, _("?123"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer36->Add(itemButton37, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxButton* itemButton38 = new wxButton(itemPanel1, ID_BUTTON29, _(","), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer36->Add(itemButton38, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton39 = new wxButton(itemPanel1, ID_BUTTON30, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer36->Add(itemButton39, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton40 = new wxButton(itemPanel1, ID_BUTTON31, _("."), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer36->Add(itemButton40, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxButton* itemButton41 = new wxButton(itemPanel1, ID_BUTTON32, _("Enter"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer36->Add(itemButton41, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

}


void cKeyboardEngPanel::OnButtonKeyboard(wxCommandEvent &evt)
{
	wxString str;
	if (ID_BUTTON27 == evt.GetId()) // BackSpace
	{
		// 현재 커서의 앞 문자 하나를 지운다.
		long insertionPoint = m_textCtrl->GetInsertionPoint();
		if (insertionPoint > 0)
		{
			m_textCtrl->Replace(insertionPoint-1, insertionPoint, "");
			m_textCtrl->SetInsertionPoint(insertionPoint-1);
		}
		m_textCtrl->SetFocus();

		return; // exit
	}
	else if (ID_BUTTON30 == evt.GetId()) // Space
	{
		str = " "; // 빈 문자를 넣는다.
	}
	else if (ID_BUTTON32 == evt.GetId()) // Enter
	{
		str = "\n"; // 개행 문자를 넣는다.
	}
	else if (ID_BUTTON28 == evt.GetId()) // ?123
	{
		return; // 아직 아무일 없음.
	}
	else
	{
		str = g_keyTable[evt.GetId()];
	}

	// 현재 커서에서 문자를 입력한다.
	const long insertionPoint = m_textCtrl->GetInsertionPoint();
	if (m_textCtrl->GetLineLength(0) == insertionPoint)
	{
		m_textCtrl->AppendText(str);
	}
	else
	{
		m_textCtrl->Replace(insertionPoint, insertionPoint + 1,
			str + m_textCtrl->GetRange(insertionPoint, insertionPoint + 1));
		m_textCtrl->SetInsertionPoint(insertionPoint + 1);
	}
	m_textCtrl->SetFocus();
}
