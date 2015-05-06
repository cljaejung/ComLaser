#pragma once


class cMoviePanel;
class cEnforcementPanel : public wxPanel
{
public:
	cEnforcementPanel(wxFrame*frame);
	virtual ~cEnforcementPanel();


protected:
	wxStaticText *m_textNumber;
	wxStaticText *m_textTime;
	wxStaticText *m_textSpeed;
	wxStaticText *m_captureSpeed;
	wxStaticText *m_captureDistance;
	cMoviePanel *m_cameraPanel;
	cMoviePanel *m_capturePanel;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonDone(wxCommandEvent &);
	void OnButtonFull(wxCommandEvent &);
};
