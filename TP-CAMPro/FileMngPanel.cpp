
#include "stdafx.h"
#include "FileMngPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3Button.h"
#include "FileMngFullPanel.h"
#include "wx/url.h"

enum {
	ID_PANEL1,
	ID_BUTTON_PREV,
	ID_BUTTON_NEXT,
	ID_LISTCTRL,
	ID_BUTTON_OK,
	ID_PANEL,
	ID_SLIDER_AVI,
	ID_BUTTON_FULL,
	ID_BUTTON_MEMCOPY,
	ID_BUTTON_FILETRANSFER,
	ID_BUTTON_MEMCLEAR,
	ID_STATIC_BITMAP,
};


BEGIN_EVENT_TABLE(cFileMngPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_OK, cFileMngPanel::OnButtonOK)
	EVT_LIST_ITEM_SELECTED(ID_LISTCTRL, cFileMngPanel::OnListctrlSelected)
END_EVENT_TABLE()


cFileMngPanel::cFileMngPanel(wxFrame*frame) :
wxPanel(frame)
{
	cFileMngPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 0, wxGROW | wxLEFT | wxRIGHT | wxTOP, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxImage img(_("ref_img/FILE_MGMT_ICON.bmp"), wxBITMAP_TYPE_BMP);
	wxBitmap bmp = img.Scale(70, 70);
	wxStaticBitmap* itemStaticBitmap5 = new wxStaticBitmap(itemPanel1, wxID_STATIC, bmp, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM | wxLEFT | wxRIGHT | wxTOP, 5);

	wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("File Management"), wxDefaultPosition, wxDefaultSize, 0);
	itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
	itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW | wxALL, 5);

	cDateDisplay* itemStaticText9 = new cDateDisplay(itemPanel1, true);
	itemStaticText9->SetForegroundColour(wxColour(255, 255, 255));
	itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW | wxALL, 5);

	wxStaticBitmap* itemStaticBitmap11 = new cBatteryDisplay(itemPanel1, wxID_STATIC, 
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT | wxALL, 5);


	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW | wxLEFT | wxRIGHT, 5);

	wxPanel* itemPanel14 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxSize(300,200), wxTAB_TRAVERSAL);
	itemPanel14->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer13->Add(itemPanel14, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemPanel14->SetSizer(itemBoxSizer15);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer16, 1, wxGROW | wxALL, 5);

	m_FileListCtrl = new wxListCtrl(itemPanel14, ID_LISTCTRL, wxDefaultPosition, wxSize(100, 100), wxLC_REPORT);
	m_FileListCtrl->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("")));
	itemBoxSizer16->Add(m_FileListCtrl, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	cBitmap3Button* itemButton19 = new cBitmap3Button(itemPanel14, ID_BUTTON_OK, _("ref_img/BTN_OK.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer18->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer20 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer20, 1, wxGROW | wxLEFT | wxRIGHT, 5);

	wxBoxSizer* itemBoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer20->Add(itemBoxSizer21, 1, wxGROW, 5);

	wxPanel* itemPanel22 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxBORDER|wxTAB_TRAVERSAL);
	itemPanel22->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	m_ImagePanel = itemPanel22;
	itemBoxSizer21->Add(itemPanel22, 1, wxGROW | wxALL, 0);


	wxBoxSizer* itemBoxSizer123 = new wxBoxSizer(wxVERTICAL);
	itemPanel22->SetSizer(itemBoxSizer123);

	wxBoxSizer* itemBoxSizer124 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer123->Add(itemBoxSizer124, 1, wxGROW | wxALL, 0);

	m_StaticBitmap = new wxStaticBitmap(itemPanel22, ID_STATIC_BITMAP, 
		wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer124->Add(m_StaticBitmap, 1, wxGROW | wxALL, 1);




	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer20->Add(itemBoxSizer23, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);


	wxButton* itemButton25 = new wxButton(itemPanel1, ID_BUTTON_PREV, _("<<"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer24->Add(itemButton25, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer26, 1, wxGROW | wxALL, 0);

	wxSlider* itemSlider27 = new wxSlider(itemPanel1, ID_SLIDER_AVI, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer26->Add(itemSlider27, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	wxButton* itemButton29 = new wxButton(itemPanel1, ID_BUTTON_NEXT, _(">>"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer28->Add(itemButton29, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer30 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer30, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer31, 1, wxGROW | wxALL, 5);

	wxButton* itemButton32 = new wxButton(itemPanel1, ID_BUTTON_MEMCOPY, _("Memory\nCopy"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer31->Add(itemButton32, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer33, 1, wxGROW | wxALL, 5);

	wxButton* itemButton34 = new wxButton(itemPanel1, ID_BUTTON_FILETRANSFER, _("File\nTransfer"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer33->Add(itemButton34, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer35 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer30->Add(itemBoxSizer35, 1, wxGROW | wxALL, 5);

	wxButton* itemButton36 = new wxButton(itemPanel1, ID_BUTTON_MEMCLEAR, _("Memory\nClear"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer35->Add(itemButton36, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);


	//////////////////////////////////////////////////////////////////////////
	m_selectItem = -1;

	m_FileListCtrl->InsertColumn(0, "Num");
	m_FileListCtrl->InsertColumn(1, "Time");
	m_FileListCtrl->InsertColumn(2, "Speed");
	m_FileListCtrl->SetColumnWidth(0, 65);
	m_FileListCtrl->SetColumnWidth(1, 95);
	m_FileListCtrl->SetColumnWidth(2, 90);


	ReadCaptureFiles();

	int id = 0;
	vector<sCaptureImage>::iterator it = m_captureImages.begin();
	while (it != m_captureImages.end())
	{
		const int idx = id;
		m_FileListCtrl->InsertItem(idx, wxString::Format("%d", id+1));
		m_FileListCtrl->SetItem(idx, 1, it->time);
		m_FileListCtrl->SetItem(idx, 2, wxString::Format("%1.0fKm/h", it->speed));
		m_FileListCtrl->SetItemData(idx, idx);

		++it;
		++id;
	}


	// 이미지 더블클릭시 풀화면 전환 이벤트
	m_StaticBitmap->Connect(ID_STATIC_BITMAP, wxEVT_LEFT_DCLICK,
		wxMouseEventHandler(cFileMngPanel::OnLeftDClick), NULL, this);
}

cFileMngPanel::~cFileMngPanel()
{

}


// 캡쳐된 파일을 읽는다.
bool cFileMngPanel::ReadCaptureFiles()
{
	m_captureImages.reserve(128);
	m_captureImages.push_back(sCaptureImage(0, "capture/Koala.jpg", 124, "17:05:25"));
	m_captureImages.push_back(sCaptureImage(1, "capture/Lighthouse.jpg", 224, "17:05:25"));
	m_captureImages.push_back(sCaptureImage(2, "capture/Penguins.jpg", 324, "17:05:25"));

	return true;
}


void cFileMngPanel::OnButtonOK(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_MAIN);
}


// 리스트 콘트롤 아이템을 클릭하면 호출되는 이벤트
void cFileMngPanel::OnListctrlSelected(wxListEvent& event)
{
	const int idx = event.GetData();
	if (idx < 0)
		return;

	m_selectItem = idx;

	// 이미지 로딩.
	wxImage image;
	image.LoadFile(m_captureImages[idx].fileName);
	wxRect rect = m_StaticBitmap->GetParent()->GetClientRect();
	wxImage scaleImage = image.Scale(rect.width, rect.height); // 이미지 크기 변환

	m_StaticBitmap->SetBitmap(wxBitmap(scaleImage));
	m_StaticBitmap->GetParent()->Refresh();

	event.Skip();
}


// 이미지 패널 더블클릭시 호출된다.
void cFileMngPanel::OnLeftDClick(wxMouseEvent& event)
{
	event.Skip();

	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_FILEMNGFULL); // 씬 전환

	if ((m_selectItem >= 0) && ((int)m_captureImages.size() > m_selectItem))
	{
		// 파일매니저 풀화면을 다시 갱신한다.
		frame->m_fileMngFullPanel->Layout();

		// 파일 매니져 전체화면에서의 비트맵 객체를 가져온다.
		wxStaticBitmap *fullBmp = frame->m_fileMngFullPanel->m_Image;

		// 이미지를 로딩해서, 전체 화면 크기에 맞게 크기를 조절한다.
		wxImage image;
		image.LoadFile(m_captureImages[m_selectItem].fileName);
		wxRect rect = fullBmp->GetParent()->GetClientRect();
		wxImage scaleImage = image.Scale(rect.width, rect.height); // 이미지 크기 변환
		fullBmp->SetBitmap(wxBitmap(scaleImage));
		fullBmp->GetParent()->Refresh();
	}
}

