
#include "stdafx.h"
#include "MainPanel.h"

enum {
	ID_PANEL,
	ID_BUTTON,
	ID_BUTTON1,
	ID_BUTTON2,
	ID_BUTTON3,
	ID_BUTTON4,
	ID_BUTTON5
};

cMainPanel::cMainPanel(wxFrame*frame) :
	wxPanel(frame)
{

	cMainPanel* itemPanel1 = this;

	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText4 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer5, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* itemButton6 = new wxButton(itemPanel1, ID_BUTTON, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemButton6, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton7 = new wxButton(itemPanel1, ID_BUTTON1, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemButton7, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton8 = new wxButton(itemPanel1, ID_BUTTON2, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemButton8, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton9 = new wxButton(itemPanel1, ID_BUTTON3, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemButton9, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton10 = new wxButton(itemPanel1, ID_BUTTON4, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer5->Add(itemButton10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer11, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxStaticText* itemStaticText12 = new wxStaticText(itemPanel1, wxID_STATIC, _("Static text"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer11->Add(itemStaticText12, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxButton* itemButton13 = new wxButton(itemPanel1, ID_BUTTON5, _("Button"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer11->Add(itemButton13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);


}

cMainPanel::~cMainPanel()
{

}
