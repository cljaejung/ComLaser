#pragma once


class cNumberPadPanel;
class cNumberPadDialog : public wxDialog
{
public:
	cNumberPadDialog(wxWindow *parent, const int initNumber=0);

	cNumberPadPanel *m_NumberPadPanel;

	int GetNumber();
	//virtual int ShowModal() override;
};

