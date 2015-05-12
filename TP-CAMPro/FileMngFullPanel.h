// ���� ���� ��ü ȭ��
#pragma once


class cFileMngFullPanel : public wxPanel
{
public:
	cFileMngFullPanel(wxFrame*frame);

	bool Init(const int imageIndex);


	// message handling
protected:
	void SelectImage(const int imageIndex);

	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonPrev(wxCommandEvent &);
	void OnButtonNext(wxCommandEvent &);
	void OnSliderImageScrollChanged(wxScrollEvent& event);


public:
	wxStaticBitmap *m_Image; // �̹��� ��� ��ü
	wxSlider *m_sliderImage;
	int m_imageIndex;
};
