
#include "stdafx.h"
#include "NumberPadPanel.h"
#include "Bitmap3ButtonEx.h"
#include "Bitmap2ButtonEx.h"


enum
{
	ID_CNUMBERPADPANEL = 0,
	ID_BUTTON_DELETE,
	ID_TEXTCTRL,
	ID_BUTTON1,
	ID_BUTTON2,
	ID_BUTTON3,
	ID_BUTTON4,
	ID_BUTTON5,
	ID_BUTTON6,
	ID_BUTTON7,
	ID_BUTTON8,
	ID_BUTTON9,
	ID_BUTTON0,

};



BEGIN_EVENT_TABLE(cNumberPadPanel, wxPanel)
	EVT_TEXT(ID_TEXTCTRL, cNumberPadPanel::OnTextctrlTextUpdated)
	EVT_BUTTON(ID_BUTTON_DELETE, cNumberPadPanel::OnButtonDelete)
	EVT_TEXT_ENTER(ID_TEXTCTRL, cNumberPadPanel::OnTextctrlEnter)
	EVT_COMMAND_RANGE(ID_BUTTON1, ID_BUTTON0, wxEVT_COMMAND_BUTTON_CLICKED, cNumberPadPanel::OnButtonNumber)
END_EVENT_TABLE()



cNumberPadPanel::cNumberPadPanel(wxWindow *parent, const int initNumber)
	: wxPanel(parent)
{
	m_number = initNumber;
	

	cNumberPadPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);


	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer33, 0, wxALIGN_RIGHT | wxALL, 0);

	cBitmap3ButtonEx* itemButton44 = new cBitmap3ButtonEx(itemPanel1, wxID_CANCEL, 
		g_controller.m_ResoucePath[ "numberpad_close_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton44, 0, wxALIGN_BOTTOM | wxALL, 0);


	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxALL, 5);

	cBitmap3ButtonEx* itemButton4 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_DELETE, 
		g_controller.m_ResoucePath["numberpad_remove_button"], wxDefaultPosition, wxSize(36, 36), 0);
	itemBoxSizer3->Add(itemButton4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_textCtrl = new wxTextCtrl(itemPanel1, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RIGHT | wxTE_PROCESS_ENTER);
	m_textCtrl->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	m_textCtrl->SetValue(wxString::Format("%d", m_number));
	itemBoxSizer3->Add(m_textCtrl, 1, wxALIGN_CENTER_VERTICAL | wxALL, 5);
	
	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer6, 0, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer6->Add(itemBoxSizer7, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton8 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON1, _("ref_img/Keyboard/1"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer7->Add(itemButton8, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer6->Add(itemBoxSizer9, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton10 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON2, _("ref_img/Keyboard/2"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer9->Add(itemButton10, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer6->Add(itemBoxSizer11, 1, wxGROW | wxALL, 0);
	
	cBitmap2ButtonEx* itemButton12 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON3, _("ref_img/Keyboard/3"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer11->Add(itemButton12, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer6->Add(itemBoxSizer13, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton14 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON4, _("ref_img/Keyboard/4"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer13->Add(itemButton14, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer6->Add(itemBoxSizer15, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton16 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON5, _("ref_img/Keyboard/5"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer15->Add(itemButton16, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer17, 0, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer18, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton19 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON6, _("ref_img/Keyboard/6"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer18->Add(itemButton19, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer20, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton21 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON7, _("ref_img/Keyboard/7"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer20->Add(itemButton21, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer22, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton23 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON8, _("ref_img/Keyboard/8"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer22->Add(itemButton23, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer24, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton25 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON9, _("ref_img/Keyboard/9"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer24->Add(itemButton25, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer17->Add(itemBoxSizer26, 1, wxGROW | wxALL, 0);

	cBitmap2ButtonEx* itemButton27 = new cBitmap2ButtonEx(itemPanel1, ID_BUTTON0, _("ref_img/Keyboard/0"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer26->Add(itemButton27, 1, wxGROW | wxALL, 0);

	wxStdDialogButtonSizer* itemStdDialogButtonSizer28 = new wxStdDialogButtonSizer;

	itemBoxSizer2->Add(itemStdDialogButtonSizer28, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);
	cBitmap3ButtonEx* itemButton29 = new cBitmap3ButtonEx(itemPanel1, wxID_OK, 
		g_controller.m_ResoucePath["numberpad_done_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemStdDialogButtonSizer28->AddButton((wxButton*)itemButton29);

	cBitmap3ButtonEx* itemButton30 = new cBitmap3ButtonEx(itemPanel1, wxID_CANCEL, 
		g_controller.m_ResoucePath["numberpad_cancel_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemStdDialogButtonSizer28->AddButton((wxButton*)itemButton30);

	itemStdDialogButtonSizer28->Realize();


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	m_textCtrl->SetFocus();
	m_textCtrl->SelectNone();
}


// 숫자키를 누르면 호출되는 이벤트
void cNumberPadPanel::OnButtonNumber(wxCommandEvent&evt)
{
	int value = 0;
	if (evt.GetId() == ID_BUTTON0)
	{
		value = 0;
	}
	else
	{
		value = evt.GetId() - ID_BUTTON1 + 1;
	}

	const int newNumber = (m_number * 10) + value;
	if (newNumber < 0)
		return; // 타입 범위를 넘어선 값이면 취소한다.

	m_number = newNumber;
	m_textCtrl->Replace(0, m_textCtrl->GetLineText(0).size(), wxString::Format("%d", m_number));
	//m_textCtrl->SetLabel(wxString::Format("%d", m_number));
	
}


// 숫자 초기화 버튼 이벤트
void cNumberPadPanel::OnButtonDelete(wxCommandEvent&)
{
	m_number = 0;
	m_textCtrl->Replace(0, m_textCtrl->GetLineText(0).size(), _("0"));
}


// 에디트창에 직접 입력할 때, 호출된다.
void cNumberPadPanel::OnTextctrlTextUpdated(wxCommandEvent& event)
{
	// 에디트창에서 값을 가져온다.
	m_textCtrl->GetValue().ToLong((long*)&m_number);
}


// 에디트창에 엔터키를 입력하면 호출된다.
void cNumberPadPanel::OnTextctrlEnter(wxCommandEvent& event)
{
	// OK 버튼 클릭 메시지를 보낸다.
	wxCommandEvent evt(wxEVT_COMMAND_BUTTON_CLICKED, wxID_OK);
	ProcessEvent(evt);
}