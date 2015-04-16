#pragma once

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif



class cOperatorPanel : public wxPanel
{
public:
	cOperatorPanel(wxFrame*frame);
	virtual ~cOperatorPanel();


protected:


public:


	// message handling
protected:
	DECLARE_EVENT_TABLE()
	void OnButtonExit(wxCommandEvent &);
};
