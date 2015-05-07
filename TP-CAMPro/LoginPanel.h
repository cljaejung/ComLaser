#pragma once


class wxButton;
class cLoginPanel : public wxPanel
{
public:
	cLoginPanel(wxFrame*frame);

	void SetDeviceID(const wxString &deviceID);


protected:
	wxTextCtrl *m_textDeviceID;
	wxComboBox *m_comboUserName;
	wxTextCtrl *m_textPassWord;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonUserName(wxCommandEvent &);
	void OnButtonPassWord(wxCommandEvent &);
	void OnButtonExit(wxCommandEvent &);
	void OnButtonStart(wxCommandEvent &);
};
