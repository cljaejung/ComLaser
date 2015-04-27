
#include "stdafx.h"
#include "NumberPadDialog.h"
#include "NumberPadPanel.h"


enum
{
	ID_PANEL,
};


cNumberPadDialog::cNumberPadDialog(wxWindow *parent) :
	wxDialog(parent, wxID_ANY, "NumberPad", wxDefaultPosition, wxSize(380, 300),
	wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER)
{

	cNumberPadDialog* itemDialog1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemDialog1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW| wxALL, 0);

	m_NumberPadPanel = new cNumberPadPanel(itemDialog1);
	m_NumberPadPanel->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer3->Add(m_NumberPadPanel, 1, wxGROW | wxALL, 0);


	Center();
}


//// ���̾�α׸� ��� �� ó���� ���� �������̵� �Լ�.
//int cNumberPadDialog::ShowModal()
//{
	//m_NumberPadPanel->m_number = 0;
	//m_NumberPadPanel->m_textCtrl->SetLabel("0");
//
//	return wxDialog::ShowModal();
//}
//

// ���� ����.
int cNumberPadDialog::GetNumber()
{
	return m_NumberPadPanel->m_number;
}