#pragma once


class cFileMngFullPanel : public wxPanel
{
public:
	cFileMngFullPanel(wxFrame*frame);
	virtual ~cFileMngFullPanel();


protected:


public:
	wxStaticBitmap *m_Image;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonCancel(wxCommandEvent &);
};
