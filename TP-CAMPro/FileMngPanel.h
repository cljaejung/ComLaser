// 파일 관리 패널.
#pragma once

#include "CaptureImage.h"


class wxListCtrl;
class wxListEvent;
class cFileMngPanel : public wxPanel
{
public:
	cFileMngPanel(wxFrame*frame);
	virtual ~cFileMngPanel();


protected:
	void SelectImage(const int imageIndex, const bool fromListCtrl=false);
	void ShowImage(const wxString &fileName);

	// message handling
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonPrev(wxCommandEvent &);
	void OnButtonNext(wxCommandEvent &);
	void OnButtonMemCopy(wxCommandEvent &);
	void OnButtonFileTransfer(wxCommandEvent &);
	void OnButtonMemClear(wxCommandEvent &);
	void OnListctrlSelected(wxListEvent& event);
	void OnLeftDClick(wxMouseEvent& event);
	void OnSliderImageScrollChanged(wxScrollEvent& event);


protected:
	wxListCtrl *m_FileListCtrl;
	wxPanel *m_ImagePanel;
	wxStaticBitmap *m_CaptureImage;
	wxSlider *m_sliderCaptureImage;
	//vector<sCaptureImage> m_captureImages;
	int m_selectItem;
};
