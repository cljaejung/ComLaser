#pragma once


class cEnforcementFullPanel : public wxPanel
{
public:
	cEnforcementFullPanel(wxFrame*frame);

	void UpdatePanel(const wxString &captureNumber, const wxString &captureSpeed, const wxString &fileName);


protected:
	wxStaticText *m_captureNumber;
	wxStaticText *m_captureSpeed;
	wxStaticBitmap *m_captureImage;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};
