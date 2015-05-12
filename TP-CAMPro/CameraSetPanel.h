// 카메라 설정 패널
#pragma once


const float GAIN_MIN = -5.63f;
const float GAIN_MAX = 24.f;


class cCameraSetPanel : public wxPanel
{
public:
	cCameraSetPanel(wxFrame*frame);
	virtual ~cCameraSetPanel();


protected:
	WEATHER::TYPE m_weather;
	float m_gain;
	float m_shutterSpeed;
	bool m_isZoom;
	bool m_isCaptureTest;

	wxStaticText *m_textGain;  // -5.63db ~ 24.0db
	wxSlider *m_sliderGain;
	wxChoice *m_choiceShutterSpeed;
	wxStaticText *m_textCaptureDistance;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonFull(wxCommandEvent &);
	void OnSliderGainScrollChanged(wxScrollEvent& event);
	void OnChoiceWeatherSelected(wxCommandEvent& event);
	void OnChoiceShutterSpeedSelected(wxCommandEvent& event);
	void OnChoiceSWZoomSelected(wxCommandEvent& event);
	void OnChoiceCaptureTestSelected(wxCommandEvent& event);
};

