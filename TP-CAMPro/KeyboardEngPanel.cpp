
#include "stdafx.h"
#include "KeyboardEngPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"
#include "KeyboardDialog.h"
#include "Bitmap2Button.h"


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
	ID_BUTTON19, //           )
	ID_BUTTON20, // Shift
	ID_BUTTON21, // z
	ID_BUTTON22, // x
	ID_BUTTON23, // c
	ID_BUTTON24, // v
	ID_BUTTON25, // b
	ID_BUTTON26, // n
	ID_BUTTON27, // m
	ID_BUTTON28, // backspace
	ID_BUTTON29, // ?123
	ID_BUTTON30, // ,
	ID_BUTTON31, // space
	ID_BUTTON32, // .
	ID_BUTTON33, // Enter
};

wxString g_keyTable[5][ID_BUTTON33 + 1] =
{
	// Alphabet Lower
	{
		_("q"), _("w"), _("e"), _("r"), _("t"), _("y"), _("u"), _("i"), _("o"), _("p"),
		_("a"), _("s"), _("d"), _("f"), _("g"), _("h"), _("j"), _("k"), _("l"), _(" "),
		_("Shift"), _("z"), _("x"), _("c"), _("v"), _("b"), _("n"), _("m"), _("Backspace"),
		_("?123"), _(","), _(" "), _("."), _("Enter")
	},

	// Alphabet Upper
	{
		_("Q"), _("W"), _("E"), _("R"), _("T"), _("Y"), _("U"), _("I"), _("O"), _("P"),
		_("A"), _("S"), _("D"), _("F"), _("G"), _("H"), _("J"), _("K"), _("L"), _(" "),
		_("Shift"), _("Z"), _("X"), _("C"), _("V"), _("B"), _("N"), _("M"), _("Backspace"),
		_("?123"), _(","), _(" "), _("."), _("Enter")
	},
	
	// Alphabet Upper Stay
	{
		_("Q"), _("W"), _("E"), _("R"), _("T"), _("Y"), _("U"), _("I"), _("O"), _("P"),
		_("A"), _("S"), _("D"), _("F"), _("G"), _("H"), _("J"), _("K"), _("L"), _(" "),
		_("Shift"), _("Z"), _("X"), _("C"), _("V"), _("B"), _("N"), _("M"), _("Backspace"),
		_("?123"), _(","), _(" "), _("."), _("Enter")
	},

	// Number
	{
		_("1"), _("2"), _("3"), _("4"), _("5"), _("6"), _("7"), _("8"), _("9"), _("0"),
		_("@"), _("!"), _("#"), _("%"), _("&&"), _("*"), _("-"), _("+"), _("("), _(")"),
		_("Alt"), _(","), _("\""), _("'"), _(":"), _(";"), _("/"), _("?"), _("Backspace"),
		_("ABC"), _("$"), _(" "), _("."), _("Enter")
	},

	// Special Character
	{
		_("~"), _("`"), _("˚"), _("|"), _("·"), _("√ "), _("÷"), _("×"), _("{"), _("}"),
		_("♡"), _("♥"), _("☆"), _("★"), _("□"), _("■"), _("_"), _("="), _("["), _("]"),
		_("Alt"), _("™"), _("®"), _("ⓒ"), _("^"), _("＼"), _("<"), _(">"), _("Backspace"),
		_("ABC"), _("$"), _(" "), _("."), _("Enter")
	},

};


wxString g_keyImgTable[5][ID_BUTTON33 + 1] = {
	// Alphabet Lower
	{
		_("ref_img/Keyboard/qq"),
		_("ref_img/Keyboard/ww"),
		_("ref_img/Keyboard/ee"),
		_("ref_img/Keyboard/rr"),
		_("ref_img/Keyboard/tt"),
		_("ref_img/Keyboard/yy"),
		_("ref_img/Keyboard/uu"),
		_("ref_img/Keyboard/ii"),
		_("ref_img/Keyboard/oo"),
		_("ref_img/Keyboard/pp"),

		_("ref_img/Keyboard/aa"),
		_("ref_img/Keyboard/ss"),
		_("ref_img/Keyboard/dd"),
		_("ref_img/Keyboard/ff"),
		_("ref_img/Keyboard/gg"),
		_("ref_img/Keyboard/hh"),
		_("ref_img/Keyboard/jj"),
		_("ref_img/Keyboard/kk"),
		_("ref_img/Keyboard/ll"),
		_("ref_img/Keyboard/ll"),

		_("ref_img/Keyboard/Shift"),
		_("ref_img/Keyboard/zz"),
		_("ref_img/Keyboard/xx"),
		_("ref_img/Keyboard/cc"),
		_("ref_img/Keyboard/vv"),
		_("ref_img/Keyboard/bb"),
		_("ref_img/Keyboard/nn"),
		_("ref_img/Keyboard/mm"),
		_("ref_img/Keyboard/Back"),

		_("ref_img/Keyboard/123"),
		_("ref_img/Keyboard/Comma"),
		_("ref_img/Keyboard/Space"),
		_("ref_img/Keyboard/Dot"),
		_("ref_img/Keyboard/Enter"),
	},

	// Alphabet Upper
	{
		_("ref_img/Keyboard/Q"),
		_("ref_img/Keyboard/W"),
		_("ref_img/Keyboard/E"),
		_("ref_img/Keyboard/R"),
		_("ref_img/Keyboard/T"),
		_("ref_img/Keyboard/Y"),
		_("ref_img/Keyboard/U"),
		_("ref_img/Keyboard/I"),
		_("ref_img/Keyboard/O"),
		_("ref_img/Keyboard/P"),

		_("ref_img/Keyboard/A"),
		_("ref_img/Keyboard/S"),
		_("ref_img/Keyboard/D"),
		_("ref_img/Keyboard/F"),
		_("ref_img/Keyboard/G"),
		_("ref_img/Keyboard/H"),
		_("ref_img/Keyboard/J"),
		_("ref_img/Keyboard/K"),
		_("ref_img/Keyboard/L"),
		_("ref_img/Keyboard/L"),

		_("ref_img/Keyboard/Shift"),
		_("ref_img/Keyboard/Z"),
		_("ref_img/Keyboard/X"),
		_("ref_img/Keyboard/C"),
		_("ref_img/Keyboard/V"),
		_("ref_img/Keyboard/B"),
		_("ref_img/Keyboard/N"),
		_("ref_img/Keyboard/M"),
		_("ref_img/Keyboard/Back"),

		_("ref_img/Keyboard/123"),
		_("ref_img/Keyboard/Comma"),
		_("ref_img/Keyboard/Space"),
		_("ref_img/Keyboard/Dot"),
		_("ref_img/Keyboard/Enter"),
	},


	// Alphabet Upper Stay
	{
		_("ref_img/Keyboard/Q"),
		_("ref_img/Keyboard/W"),
		_("ref_img/Keyboard/E"),
		_("ref_img/Keyboard/R"),
		_("ref_img/Keyboard/T"),
		_("ref_img/Keyboard/Y"),
		_("ref_img/Keyboard/U"),
		_("ref_img/Keyboard/I"),
		_("ref_img/Keyboard/O"),
		_("ref_img/Keyboard/P"),

		_("ref_img/Keyboard/A"),
		_("ref_img/Keyboard/S"),
		_("ref_img/Keyboard/D"),
		_("ref_img/Keyboard/F"),
		_("ref_img/Keyboard/G"),
		_("ref_img/Keyboard/H"),
		_("ref_img/Keyboard/J"),
		_("ref_img/Keyboard/K"),
		_("ref_img/Keyboard/L"),
		_("ref_img/Keyboard/L"),

		_("ref_img/Keyboard/Shift"),
		_("ref_img/Keyboard/Z"),
		_("ref_img/Keyboard/X"),
		_("ref_img/Keyboard/C"),
		_("ref_img/Keyboard/V"),
		_("ref_img/Keyboard/B"),
		_("ref_img/Keyboard/N"),
		_("ref_img/Keyboard/M"),
		_("ref_img/Keyboard/Back"),

		_("ref_img/Keyboard/123"),
		_("ref_img/Keyboard/Comma"),
		_("ref_img/Keyboard/Space"),
		_("ref_img/Keyboard/Dot"),
		_("ref_img/Keyboard/Enter"),
	},
	
	
	// Number
	{
		_("ref_img/Keyboard/1"),
		_("ref_img/Keyboard/2"),
		_("ref_img/Keyboard/3"),
		_("ref_img/Keyboard/4"),
		_("ref_img/Keyboard/5"),
		_("ref_img/Keyboard/6"),
		_("ref_img/Keyboard/7"),
		_("ref_img/Keyboard/8"),
		_("ref_img/Keyboard/9"),
		_("ref_img/Keyboard/0"),

		_("ref_img/Keyboard/At"),
		_("ref_img/Keyboard/Exc"),
		_("ref_img/Keyboard/Sharp"),
		_("ref_img/Keyboard/Percent"),
		_("ref_img/Keyboard/And"),
		_("ref_img/Keyboard/Star"),
		_("ref_img/Keyboard/Minus"),
		_("ref_img/Keyboard/Plus"),
		_("ref_img/Keyboard/LParen"),
		_("ref_img/Keyboard/RParen"),

		_("ref_img/Keyboard/ALT"),
		_("ref_img/Keyboard/Comma_s"),
		_("ref_img/Keyboard/DoubleQuation"),
		_("ref_img/Keyboard/Accent"),
		_("ref_img/Keyboard/Colon"),
		_("ref_img/Keyboard/Semicolon"),
		_("ref_img/Keyboard/Slash"),
		_("ref_img/Keyboard/Question"),
		_("ref_img/Keyboard/Back"),

		_("ref_img/Keyboard/ABC"),
		_("ref_img/Keyboard/Dollar"),
		_("ref_img/Keyboard/Space"),
		_("ref_img/Keyboard/Dot"),
		_("ref_img/Keyboard/Enter"),
	},


	// Special
	{
		_("ref_img/Keyboard/Equiv"),
		_("ref_img/Keyboard/Quate"),
		_("ref_img/Keyboard/Degree"),
		_("ref_img/Keyboard/Or"),
		_("ref_img/Keyboard/DotProduct"),
		_("ref_img/Keyboard/Root"),
		_("ref_img/Keyboard/Divide"),
		_("ref_img/Keyboard/Multi"),
		_("ref_img/Keyboard/LBrace"),
		_("ref_img/Keyboard/RBrace"),

		_("ref_img/Keyboard/HeartW"),
		_("ref_img/Keyboard/HeartB"),
		_("ref_img/Keyboard/StarW"),
		_("ref_img/Keyboard/StarB"),
		_("ref_img/Keyboard/RectW"),
		_("ref_img/Keyboard/RectB"),
		_("ref_img/Keyboard/Underbar"),
		_("ref_img/Keyboard/Equal"),
		_("ref_img/Keyboard/LBracket"),
		_("ref_img/Keyboard/RBracket"),

		_("ref_img/Keyboard/ALT"),
		_("ref_img/Keyboard/TM"),
		_("ref_img/Keyboard/CircleR"),
		_("ref_img/Keyboard/CircleC"),
		_("ref_img/Keyboard/Caret"),
		_("ref_img/Keyboard/Backslash"),
		_("ref_img/Keyboard/Lessthan"),
		_("ref_img/Keyboard/Greatethan"),
		_("ref_img/Keyboard/Back"),

		_("ref_img/Keyboard/ABC"),
		_("ref_img/Keyboard/Dollar"),
		_("ref_img/Keyboard/Space"),
		_("ref_img/Keyboard/Dot"),
		_("ref_img/Keyboard/Enter"),
	},
};




BEGIN_EVENT_TABLE(cKeyboardEngPanel, wxPanel)
	EVT_COMMAND_RANGE(ID_BUTTON0, ID_BUTTON33, wxEVT_COMMAND_BUTTON_CLICKED, cKeyboardEngPanel::OnButtonKeyboard)
END_EVENT_TABLE()


cKeyboardEngPanel::cKeyboardEngPanel(wxWindow *parent, const wxString &initialText, 
	const bool IsPassword, const int maximumChar)
	: wxPanel(parent)
	, m_mode(INPUT_MODE::ALPHA_LOWER)
{

	const wxSize btnSize(68, 70);

	cKeyboardEngPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 0);

	m_textCtrl = new wxTextCtrl(itemPanel1, ID_TEXTCTRL, initialText, wxDefaultPosition, wxDefaultSize, IsPassword ? wxTE_PASSWORD : 0);
	m_textCtrl->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	m_textCtrl->SetMaxLength(maximumChar);
	itemBoxSizer3->Add(m_textCtrl, 1, wxGROW | wxALL, 2);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer5, 1, wxGROW | wxLEFT | wxRIGHT, 10);

	cBitmap2Button* itemButton6 = new cBitmap2Button(itemPanel1, ID_BUTTON0, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton6, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton7 = new cBitmap2Button(itemPanel1, ID_BUTTON1, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton7, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton8 = new cBitmap2Button(itemPanel1, ID_BUTTON2, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton9 = new cBitmap2Button(itemPanel1, ID_BUTTON3, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton10 = new cBitmap2Button(itemPanel1, ID_BUTTON4, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton11 = new cBitmap2Button(itemPanel1, ID_BUTTON5, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton11, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton12 = new cBitmap2Button(itemPanel1, ID_BUTTON6, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton12, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton13 = new cBitmap2Button(itemPanel1, ID_BUTTON7, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton13, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton14 = new cBitmap2Button(itemPanel1, ID_BUTTON8, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton14, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton15 = new cBitmap2Button(itemPanel1, ID_BUTTON9, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer5->Add(itemButton15, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer16, 1, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT, 4);

	cBitmap2Button* itemButton17 = new cBitmap2Button(itemPanel1, ID_BUTTON10, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton17, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton18 = new cBitmap2Button(itemPanel1, ID_BUTTON11, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton19 = new cBitmap2Button(itemPanel1, ID_BUTTON12, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton20 = new cBitmap2Button(itemPanel1, ID_BUTTON13, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton20, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton21 = new cBitmap2Button(itemPanel1, ID_BUTTON14, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton21, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton22 = new cBitmap2Button(itemPanel1, ID_BUTTON15, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton22, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton23 = new cBitmap2Button(itemPanel1, ID_BUTTON16, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton23, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton24 = new cBitmap2Button(itemPanel1, ID_BUTTON17, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton24, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton25 = new cBitmap2Button(itemPanel1, ID_BUTTON18, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer16->Add(itemButton25, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton27 = new cBitmap2Button(itemPanel1, ID_BUTTON19, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer16->Add(itemButton27, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer26, 1, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT, 4);

	cBitmap2Button* itemButton228 = new cBitmap2Button(itemPanel1, ID_BUTTON20, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton228, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton28 = new cBitmap2Button(itemPanel1, ID_BUTTON21, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton28, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton29 = new cBitmap2Button(itemPanel1, ID_BUTTON22, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton29, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton30 = new cBitmap2Button(itemPanel1, ID_BUTTON23, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton30, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton31 = new cBitmap2Button(itemPanel1, ID_BUTTON24, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton31, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton32 = new cBitmap2Button(itemPanel1, ID_BUTTON25, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton33 = new cBitmap2Button(itemPanel1, ID_BUTTON26, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton33, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton34 = new cBitmap2Button(itemPanel1, ID_BUTTON27, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton35 = new cBitmap2Button(itemPanel1, ID_BUTTON28, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer26->Add(itemButton35, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer36, 1, wxALIGN_CENTER_HORIZONTAL | wxLEFT | wxRIGHT, 4);

	cBitmap2Button* itemButton37 = new cBitmap2Button(itemPanel1, ID_BUTTON29, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer36->Add(itemButton37, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);

	cBitmap2Button* itemButton38 = new cBitmap2Button(itemPanel1, ID_BUTTON30, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer36->Add(itemButton38, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton39 = new cBitmap2Button(itemPanel1, ID_BUTTON31, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer36->Add(itemButton39, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton40 = new cBitmap2Button(itemPanel1, ID_BUTTON32, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer36->Add(itemButton40, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 1);

	cBitmap2Button* itemButton41 = new cBitmap2Button(itemPanel1, ID_BUTTON33, wxEmptyString, wxDefaultPosition, btnSize, 0);
	itemBoxSizer36->Add(itemButton41, 0, wxALIGN_CENTER_VERTICAL | wxLEFT | wxRIGHT, 5);



	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// 문자가 전체 선택된 상태를 해제하고, carret을 가장 끝으로 이동시킨다. (약간의 꽁수코드가 있음)
	itemButton41->SetFocus();
	m_textCtrl->SetFocus();
	m_textCtrl->SetInsertionPointEnd();


	// 키보드 버튼 객체를 모두 m_keyboardMap에 저장한다.
	m_keyboardButton.reserve(256);
	wxWindowList &lst = GetChildren();
	wxWindowList::iterator it = lst.begin();
	while (lst.end() != it)
	{
		cBitmap2Button *btn = dynamic_cast<cBitmap2Button *>(*it);
		if (btn)
			m_keyboardButton.push_back(btn);
		++it;
	}

	UpdateButtonSize();
	SetInputMode(INPUT_MODE::ALPHA_LOWER);
}


// 버튼 크기를 재 조종한다.
void cKeyboardEngPanel::UpdateButtonSize()
{
	const int BUTTON_W = 68;
	const int BUTTON_H = 70;

	for (u_int i = 0; i < m_keyboardButton.size(); ++i)
	{
		const int id = m_keyboardButton[i]->GetId();
		wxSize size;

		switch (id)
		{
		case ID_BUTTON20: // Shift
		case ID_BUTTON28: // backspace
			size = wxSize(BUTTON_W * 1.45f, BUTTON_H); 
			break;

		case ID_BUTTON29: // ?123
		case ID_BUTTON33: // Enter
			size = wxSize(BUTTON_W * 2.f, BUTTON_H);
			break;

		case ID_BUTTON30: // ,
		case ID_BUTTON32: // .
			size = wxSize(BUTTON_W * 1.5f, BUTTON_H);
			break;

		case ID_BUTTON31: // space
			size = wxSize(BUTTON_W * 3, BUTTON_H);
			break;

		default: size = wxSize(BUTTON_W, BUTTON_H);
			break;
		}

		m_keyboardButton[i]->SetMinSize(size);
	}

}


// 키보드 버튼 입력 처리
void cKeyboardEngPanel::OnButtonKeyboard(wxCommandEvent &evt)
{
	wxString str;

	if (ID_BUTTON20 == evt.GetId()) // Shift
	{
		// 키보드 자판 타입 변경
		INPUT_MODE::TYPE nextMode = INPUT_MODE::ALPHA_LOWER;
		switch (m_mode)
		{
		case INPUT_MODE::ALPHA_LOWER:  nextMode = INPUT_MODE::ALPHA_UPPER;  break;
		case INPUT_MODE::ALPHA_UPPER: nextMode = INPUT_MODE::ALPHA_UPPER_STAY; break;
		case INPUT_MODE::ALPHA_UPPER_STAY: nextMode = INPUT_MODE::ALPHA_LOWER; break;
		case INPUT_MODE::NUMBER: nextMode = INPUT_MODE::SPECIAL; break;
		case INPUT_MODE::SPECIAL: nextMode = INPUT_MODE::NUMBER; break;
		}

		SetInputMode(nextMode);
		return; // End
	}
	else if (ID_BUTTON28 == evt.GetId()) // BackSpace
	{
		// 현재 커서의 앞 문자 하나를 지운다.
		long insertionPoint = m_textCtrl->GetInsertionPoint();
		if (insertionPoint > 0)
		{
			m_textCtrl->Replace(insertionPoint-1, insertionPoint, "");
			m_textCtrl->SetInsertionPoint(insertionPoint-1);
		}
		m_textCtrl->SetFocus();

		return; // End
	}
	else if (ID_BUTTON33 == evt.GetId()) // Enter
	{
		//str = "\n"; // 개행 문자를 넣는다.
		cKeyboardDialog *parent = dynamic_cast<cKeyboardDialog*>(GetParent());
		if (parent)
			parent->KeyboardInputFinish();
		return;
	}
	else if (ID_BUTTON29 == evt.GetId()) // ?123
	{
		SetInputMode((m_mode == INPUT_MODE::NUMBER) ? INPUT_MODE::ALPHA_LOWER : INPUT_MODE::NUMBER);
		return;
	}
	else
	{
		str = m_currentKeyTable[evt.GetId()];// [0];
		if (str == "&&") // 예외 처리.
			str = "&";

		if (INPUT_MODE::ALPHA_UPPER == m_mode) // 대문자 하나를 입력하면, 소문자 모드로 이동한다.
			SetInputMode(INPUT_MODE::ALPHA_LOWER);
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


// 키모드 입력 모드를 바꾼다.
void cKeyboardEngPanel::SetInputMode(const INPUT_MODE::TYPE mode)
{
	m_mode = mode;

	m_keyboardButton[ID_BUTTON19]->Hide();
	
	for (u_int i = 0; i < m_keyboardButton.size(); ++i)
	{
		const int id = m_keyboardButton[i]->GetId();
		//m_keyboardButton[i]->SetLabel(g_keyTable_Lower[ mode][id]);
		m_keyboardButton[i]->SetButtonBitmap(g_keyImgTable[mode][id]);
	}

	if ((INPUT_MODE::NUMBER == mode) || (INPUT_MODE::SPECIAL == mode))
	{
		m_keyboardButton[ID_BUTTON19]->Show();
	}

	m_currentKeyTable = g_keyTable[mode];

	Layout();
}
