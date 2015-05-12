#pragma once


#include "CaptureImage.h"


class wxListCtrl;
class wxListEvent;
class cFileMngPanel : public wxPanel
{
public:
	cFileMngPanel(wxFrame*frame);
	virtual ~cFileMngPanel();

	bool ReadCaptureFiles();


protected:
	void ShowImage(const wxString &fileName);


protected:
	wxListCtrl *m_FileListCtrl;
	wxPanel *m_ImagePanel;
	wxStaticBitmap *m_StaticBitmap;
	vector<sCaptureImage> m_captureImages;
	int m_selectItem;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonPrev(wxCommandEvent &);
	void OnButtonNext(wxCommandEvent &);
	void OnListctrlSelected(wxListEvent& event);
	void OnLeftDClick(wxMouseEvent& event);
};
