// 이미지를 출력하기 위한 패널
#pragma once


class cImagePanel : public wxPanel
{
public:
	cImagePanel(wxWindow *parent, const wxString &fileName, const wxSize &size = wxDefaultSize,
		const wxColour &bgColor = wxColour(255, 255, 255)) :
		wxPanel(parent) {

		cImagePanel* itemPanel1 = this;

		SetBackgroundColour(bgColor);

		wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
		itemPanel1->SetSizer(itemBoxSizer2);

		wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
		itemBoxSizer2->Add(itemBoxSizer3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

		wxImage img(fileName);
		wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap(itemPanel1, wxID_STATIC,
			wxBitmap(img), wxDefaultPosition, size, 0);
		itemBoxSizer2->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

		Connect(wxEVT_ERASE_BACKGROUND, wxEraseEventHandler(cImagePanel::OnEraseBackground), NULL, this);
	}

	void OnEraseBackground(wxEraseEvent&) {
		// nothing~
	}

};
