#pragma once


class cEnforcementSetPanel : public wxPanel
{
public:
	cEnforcementSetPanel(wxFrame*frame);


protected:
	wxChoice *m_UnitChoice;
	wxComboBox* m_comboLocation;
	wxTextCtrl* m_editLimitSpeed;
	wxTextCtrl* m_editCaptureSpeed;
	wxTextCtrl* m_editCaptureDistance;
	UNIT_TYPE m_unitType;


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOK(wxCommandEvent &);
	void OnButtonCancel(wxCommandEvent &);
	void OnButtonLocation(wxCommandEvent &);
	void OnButtonLimitSpeed(wxCommandEvent &);
	void OnButtonCaptureSpeed(wxCommandEvent &);
	void OnButtonCaptureDistance(wxCommandEvent &);
	void OnChoiceUnitSelected(wxCommandEvent& event);
};


