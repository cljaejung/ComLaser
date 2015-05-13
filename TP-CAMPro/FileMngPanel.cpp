
#include "stdafx.h"
#include "FileMngPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"
#include "BatteryDisplay.h"
#include "DateDisplay.h"
#include "Bitmap3ButtonEx.h"
#include "FileMngFullPanel.h"
#include "wx/url.h"
#include "ImagePanel.h"
#include "Bitmap2ButtonEx.h"


enum {
	ID_PANEL1,
	ID_BUTTON_PREV,
	ID_BUTTON_NEXT,
	ID_LISTCTRL,
	ID_BUTTON_OK,
	ID_PANEL,
	ID_SLIDER_IMAGE,
	ID_BUTTON_FULL,
	ID_BUTTON_MEMCOPY,
	ID_BUTTON_FILETRANSFER,
	ID_BUTTON_MEMCLEAR,
	ID_STATIC_BITMAP,
};


BEGIN_EVENT_TABLE(cFileMngPanel, wxPanel)
	EVT_BUTTON(ID_BUTTON_OK, cFileMngPanel::OnButtonOK)
	EVT_BUTTON(ID_BUTTON_PREV, cFileMngPanel::OnButtonPrev)
	EVT_BUTTON(ID_BUTTON_NEXT, cFileMngPanel::OnButtonNext)

	EVT_BUTTON(ID_BUTTON_MEMCOPY, cFileMngPanel::OnButtonMemCopy)
	EVT_BUTTON(ID_BUTTON_FILETRANSFER, cFileMngPanel::OnButtonFileTransfer)
	EVT_BUTTON(ID_BUTTON_MEMCLEAR, cFileMngPanel::OnButtonMemClear)

	EVT_LIST_ITEM_SELECTED(ID_LISTCTRL, cFileMngPanel::OnListctrlSelected)
	EVT_COMMAND_SCROLL_CHANGED(ID_SLIDER_IMAGE, cFileMngPanel::OnSliderImageScrollChanged)
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

	//wxImage img(_("ref_img/FILE_MGMT_ICON_70_eng.bmp"), wxBITMAP_TYPE_BMP);
	cImagePanel* itemStaticBitmap5 = new cImagePanel(itemPanel1, _("ref_img/FILE_MGMT_ICON_70_eng.bmp"));
		//wxBitmap(img), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer4->Add(itemStaticBitmap5, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	//wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxVERTICAL);
	//itemBoxSizer3->Add(itemBoxSizer6, 0, wxALIGN_BOTTOM | wxLEFT | wxRIGHT | wxTOP, 5);

	//wxStaticText* itemStaticText7 = new wxStaticText(itemPanel1, wxID_STATIC, _("File Management"), wxDefaultPosition, wxDefaultSize, 0);
	//itemStaticText7->SetForegroundColour(wxColour(255, 255, 255));
	//itemStaticText7->SetFont(wxFont(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	//itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer8, 1, wxGROW | wxLEFT | wxTOP | wxBOTTOM, 5);

	cDateDisplay* itemStaticText9 = new cDateDisplay(itemPanel1, true);
	itemStaticText9->SetForegroundColour(wxColour(255, 255, 255));
	itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer10, 0, wxGROW | wxRIGHT | wxTOP | wxBOTTOM, 5);

	wxStaticBitmap* itemStaticBitmap11 = new cBatteryDisplay(itemPanel1, wxID_STATIC, 
		_("ref_img/BATT_ext2.bmp"), wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer10->Add(itemStaticBitmap11, 0, wxALIGN_RIGHT | wxALL, 5);


	wxBoxSizer* itemBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer12, 1, wxGROW | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer13, 1, wxGROW | wxLEFT | wxRIGHT, 5);

	wxPanel* itemPanel14 = new wxPanel(itemPanel1, ID_PANEL1, wxDefaultPosition, wxSize(200,200), wxTAB_TRAVERSAL);
	itemPanel14->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer13->Add(itemPanel14, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemPanel14->SetSizer(itemBoxSizer15);

	wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer16, 1, wxGROW | wxALL, 5);

	m_FileListCtrl = new wxListCtrl(itemPanel14, ID_LISTCTRL, wxDefaultPosition, wxSize(100, 100), wxLC_REPORT);
	m_FileListCtrl->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("")));
	itemBoxSizer16->Add(m_FileListCtrl, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer15->Add(itemBoxSizer18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton19 = new cBitmap3ButtonEx(itemPanel14, ID_BUTTON_OK, _("ref_img/BTN_OK.bmp"), wxDefaultPosition, wxDefaultSize, 0);
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

	m_CaptureImage = new wxStaticBitmap(itemPanel22, ID_STATIC_BITMAP, 
		wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer124->Add(m_CaptureImage, 1, wxGROW | wxALL, 1);




	wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer20->Add(itemBoxSizer23, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer24 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);


	cBitmap3ButtonEx* itemButton25 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_PREV, _("ref_img/LEFT_ARROW.png"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer24->Add(itemButton25, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer26, 1, wxGROW | wxALL, 0);

	m_sliderCaptureImage = new wxSlider(itemPanel1, ID_SLIDER_IMAGE, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer26->Add(m_sliderCaptureImage, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer23->Add(itemBoxSizer28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton29 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_NEXT, _("ref_img/RIGHT_ARROW.png"), wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer28->Add(itemButton29, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);


	wxBoxSizer* itemBoxSizer33 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer12->Add(itemBoxSizer33, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer34 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer33->Add(itemBoxSizer34, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer35 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer34->Add(itemBoxSizer35, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cPng2ButtonEx* itemButton36 = new cPng2ButtonEx(itemPanel1, ID_BUTTON_MEMCOPY, _("ref_img/MemoryCopy"), wxDefaultPosition, wxSize(70, 40), 0);
	itemBoxSizer35->Add(itemButton36, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer38 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer33->Add(itemBoxSizer38, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer39 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer38->Add(itemBoxSizer39, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton40 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_FILETRANSFER, _("ref_img/FileTransfer.bmp"));// , wxDefaultPosition, wxSize(70, 40), 0);
	itemBoxSizer39->Add(itemButton40, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer42 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer33->Add(itemBoxSizer42, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer43 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer42->Add(itemBoxSizer43, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cPng2ButtonEx* itemButton44 = new cPng2ButtonEx(itemPanel1, ID_BUTTON_MEMCLEAR, _("ref_img/MemoryClear"));// , wxDefaultPosition, wxSize(70, 40), 0);
	itemBoxSizer43->Add(itemButton44, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);




	//////////////////////////////////////////////////////////////////////////
	m_selectItem = -1;

	m_FileListCtrl->InsertColumn(0, _("Num"));
	m_FileListCtrl->InsertColumn(1, _("Time"));
	m_FileListCtrl->InsertColumn(2, _("Speed"));
	m_FileListCtrl->SetColumnWidth(0, 65);
	m_FileListCtrl->SetColumnWidth(1, 100);
	m_FileListCtrl->SetColumnWidth(2, 105);


	g_controller.ReadCaptureFiles();

	m_sliderCaptureImage->SetRange(0, g_controller.m_captureImages.size() - 1);


	int id = 0;
	vector<sCaptureImage>::iterator it = g_controller.m_captureImages.begin();
	while (it != g_controller.m_captureImages.end())
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
	m_CaptureImage->Connect(ID_STATIC_BITMAP, wxEVT_LEFT_DCLICK,
		wxMouseEventHandler(cFileMngPanel::OnLeftDClick), NULL, this);
}

cFileMngPanel::~cFileMngPanel()
{

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

	SelectImage(idx, true);

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

	if ((m_selectItem >= 0) && ((int)g_controller.m_captureImages.size() > m_selectItem))
	{
		frame->m_fileMngFullPanel->Init(m_selectItem);
	}
}


// 전 파일 버튼 클릭
void cFileMngPanel::OnButtonPrev(wxCommandEvent &)
{
	SelectImage(m_selectItem - 1);
}


// 다음 파일 버튼 클릭
void cFileMngPanel::OnButtonNext(wxCommandEvent &)
{
	SelectImage(m_selectItem + 1);
}


// 메모리 복사 버튼 눌렀을 때, 호출됨
void cFileMngPanel::OnButtonMemCopy(wxCommandEvent &)
{

}


// 파일 이동 버튼 눌렀을 때, 호출됨.
void cFileMngPanel::OnButtonFileTransfer(wxCommandEvent &)
{

}


// 메모리 제거 버튼 눌렀을 때, 호출됨
void cFileMngPanel::OnButtonMemClear(wxCommandEvent &)
{

}


/*!
* wxEVT_SCROLL_CHANGED event handler for ID_SLIDER_IMAGE
*/
void cFileMngPanel::OnSliderImageScrollChanged(wxScrollEvent& event)
{
	const int pos = event.GetPosition();
	if ((int)g_controller.m_captureImages.size() <= pos)
		return;

	SelectImage(pos);
	
	event.Skip();
}


// 이미지를 리스트 컨트롤에서 선택하고, 화면에 출력한다.
// fromListCtrl : 리스트 컨트롤에서 이벤트를 발생 했을 때 true 가 된다.
void cFileMngPanel::SelectImage(const int imageIndex, const bool fromListCtrl)
{
	const int curItem = m_selectItem;
	m_selectItem = imageIndex;

	if (m_selectItem >= (int)g_controller.m_captureImages.size())
		m_selectItem = g_controller.m_captureImages.size() - 1;
	if (m_selectItem < 0)
		m_selectItem = 0;

	if (g_controller.m_captureImages.size() >(u_int)m_selectItem)
	{
		ShowImage(g_controller.m_captureImages[m_selectItem].fileName);

		if (!fromListCtrl)
		{
			// Deselect item (wxLIST_STATE_FOCUSED - dotted border)
			m_FileListCtrl->SetItemState(curItem, 0, wxLIST_STATE_SELECTED | wxLIST_STATE_FOCUSED);

			// Select item
			m_FileListCtrl->SetItemState(m_selectItem, wxLIST_STATE_SELECTED, wxLIST_STATE_SELECTED);
		}
	}

	m_sliderCaptureImage->SetValue(m_selectItem);
	m_FileListCtrl->SetFocus();
}


void cFileMngPanel::ShowImage(const wxString &fileName)
{
	// 이미지 로딩.
	wxImage image;
	image.LoadFile(fileName);
	wxRect rect = m_CaptureImage->GetParent()->GetClientRect();
	wxImage scaleImage = image.Scale(rect.width, rect.height); // 이미지 크기 변환

	m_CaptureImage->SetBitmap(wxBitmap(scaleImage));
	m_CaptureImage->GetParent()->Refresh();
}
