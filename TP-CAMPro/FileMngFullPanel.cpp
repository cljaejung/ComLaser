
#include "stdafx.h"
#include "FileMngFullPanel.h"
#include "CLFrame.h"
#include "wx/combo.h"
#include "wx/combobox.h"
#include "wx/listctrl.h"
#include "Bitmap3ButtonEx.h"


enum {
	ID_STATIC_BITMAP,
	ID_BUTTON_PREV,
	ID_BUTTON_NEXT,
	ID_SLIDER_IMAGE,
	ID_PANEL,
	ID_BUTTON_CANCEL,
};


BEGIN_EVENT_TABLE(cFileMngFullPanel, wxPanel)
EVT_BUTTON(ID_BUTTON_CANCEL, cFileMngFullPanel::OnButtonCancel)
EVT_BUTTON(ID_BUTTON_PREV, cFileMngFullPanel::OnButtonPrev)
EVT_BUTTON(ID_BUTTON_NEXT, cFileMngFullPanel::OnButtonNext)
EVT_COMMAND_SCROLL_CHANGED(ID_SLIDER_IMAGE, cFileMngFullPanel::OnSliderImageScrollChanged)
END_EVENT_TABLE()


cFileMngFullPanel::cFileMngFullPanel(wxFrame*frame) :
wxPanel(frame)
{

	cFileMngFullPanel* itemPanel1 = this;

	this->SetBackgroundColour(wxColour(0, 0, 0));
	wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	itemPanel1->SetSizer(itemBoxSizer2);

	wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer4, 1, wxGROW | wxLEFT | wxRIGHT, 10);

	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer5, 1, wxGROW, 0);

	wxPanel* itemPanel6 = new wxPanel(itemPanel1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER | wxTAB_TRAVERSAL);
	itemPanel6->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
	itemBoxSizer5->Add(itemPanel6, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer7 = new wxBoxSizer(wxVERTICAL);
	itemPanel6->SetSizer(itemBoxSizer7);

	wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer7->Add(itemBoxSizer8, 1, wxGROW | wxALL, 0);

	m_Image = new wxStaticBitmap(itemPanel6, ID_STATIC_BITMAP, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer8->Add(m_Image, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	itemBoxSizer4->Add(itemBoxSizer10, 0, wxGROW | wxALL, 5);

	wxBoxSizer* itemBoxSizer11 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer11, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton12 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_PREV, 
		g_controller.m_ResoucePath[ "left_scroll_button"], wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer11->Add(itemButton12, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer13 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer13, 1, wxGROW | wxALL, 0);

	m_sliderImage = new wxSlider(itemPanel1, ID_SLIDER_IMAGE, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	itemBoxSizer13->Add(m_sliderImage, 1, wxGROW | wxALL, 0);

	wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer10->Add(itemBoxSizer15, 0, wxALIGN_CENTER_VERTICAL | wxALL, 0);

	cBitmap3ButtonEx* itemButton16 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_NEXT,
		g_controller.m_ResoucePath[ "right_scroll_button"], wxDefaultPosition, wxSize(30, -1), 0);
	itemBoxSizer15->Add(itemButton16, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);

	wxBoxSizer* itemBoxSizer17 = new wxBoxSizer(wxVERTICAL);
	itemBoxSizer3->Add(itemBoxSizer17, 0, wxGROW | wxALL, 5);

	cBitmap3ButtonEx* itemButton18 = new cBitmap3ButtonEx(itemPanel1, ID_BUTTON_CANCEL, 
		g_controller.m_ResoucePath[ "fullcancel_button"], wxDefaultPosition, wxDefaultSize, 0);
	itemBoxSizer17->Add(itemButton18, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 0);
}


// 파일 관리 화면 초기화.
bool cFileMngFullPanel::Init(const int imageIndex)
{
	// 파일매니저 풀화면을 다시 갱신한다.
	Layout();

	m_sliderImage->SetRange(0, g_controller.m_captureImages.size() - 1);

	// 현재 이미지 인덱스를 파일 관리 전체 화면 객체에 저장한다.
	//m_imageIndex = imageIndex;

	SelectImage(imageIndex);

	// 이미지를 로딩해서, 전체 화면 크기에 맞게 크기를 조절한다.
	////wxImage image;
	////image.LoadFile(g_controller.m_captureImages[imageIndex].fileName);
	////wxRect rect = m_Image->GetParent()->GetClientRect();
	////wxImage scaleImage = image.Scale(rect.width, rect.height); // 이미지 크기 변환
	////m_Image->SetBitmap(wxBitmap(scaleImage));
	////m_Image->GetParent()->Refresh();


	return true;
}


void cFileMngFullPanel::OnButtonCancel(wxCommandEvent &)
{
	cCLFrame* frame = dynamic_cast<cCLFrame*>(wxGetTopLevelParent(this));
	if (!frame)
		return;
	frame->ChangePanel(PANEL_FILEMNG);
}


void cFileMngFullPanel::OnButtonPrev(wxCommandEvent &)
{
	SelectImage(m_imageIndex - 1);
}

void cFileMngFullPanel::OnButtonNext(wxCommandEvent &)
{
	SelectImage(m_imageIndex + 1);
}

void cFileMngFullPanel::OnSliderImageScrollChanged(wxScrollEvent& event)
{
	const int pos = event.GetPosition();
	if ((int)g_controller.m_captureImages.size() <= pos)
		return;

	SelectImage(pos);
}


// 이미지를 리스트 컨트롤에서 선택하고, 화면에 출력한다.
void cFileMngFullPanel::SelectImage(const int imageIndex)
{
	const int curItem = m_imageIndex;
	m_imageIndex = imageIndex;

	if (m_imageIndex >= (int)g_controller.m_captureImages.size())
		m_imageIndex = g_controller.m_captureImages.size() - 1;
	if (m_imageIndex < 0)
		m_imageIndex = 0;

	if (g_controller.m_captureImages.size() >(u_int)m_imageIndex)
	{
		// 이미지 로딩.
		const wxString fileName = g_controller.m_captureImages[m_imageIndex].fileName;

		wxImage image;
		image.LoadFile(fileName);
		wxRect rect = m_Image->GetParent()->GetClientRect();
		wxImage scaleImage = image.Scale(rect.width, rect.height); // 이미지 크기 변환

		m_Image->SetBitmap(wxBitmap(scaleImage));
		m_Image->GetParent()->Refresh();
	}

	m_sliderImage->SetValue(m_imageIndex);
}
