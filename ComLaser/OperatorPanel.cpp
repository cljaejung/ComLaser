
#include "stdafx.h"
#include "OperatorPanel.h"
#include "CLFrame.h"
#include "MainPanel.h"

enum {
	ID_BUTTON_EXIT
};


BEGIN_EVENT_TABLE(cOperatorPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_EXIT, cOperatorPanel::OnButtonExit)
END_EVENT_TABLE()


cOperatorPanel::cOperatorPanel(wxFrame*frame) :
	wxPanel(frame)
{


	cOperatorPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxButton* itemButton3 = new wxButton(itemPanel1, ID_BUTTON_EXIT, _("Exit"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer2->Add(itemButton3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


}

cOperatorPanel::~cOperatorPanel()
{

}


void cOperatorPanel::OnButtonExit(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;

	frame->m_loginPanel->Hide();
	frame->m_mainPanel->Show();
	frame->Layout();
}
