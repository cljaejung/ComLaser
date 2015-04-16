#pragma once

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif


class cMainPanel : public wxPanel
{
public:
	cMainPanel(wxFrame*frame);
	virtual ~cMainPanel();


protected:


public:
	

	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonOperator(wxCommandEvent &);
};
