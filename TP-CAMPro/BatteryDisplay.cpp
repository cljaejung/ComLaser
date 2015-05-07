
#include "stdafx.h"
#include "BatteryDisplay.h"


cBatteryDisplay::cBatteryDisplay(wxWindow *parent,
	wxWindowID id,
	const wxString& fileName,
	const wxPoint& pos,
	const wxSize& size,
	long style,
	const wxString& name)
{
	wxImage img(fileName);
	const int w = img.GetWidth() / 5;
	const int h = img.GetHeight();


	// 한장의 이미지에 밧데리 이미지가 모두 있을 때와 그렇지 않을 때를 처리하기위한 코드.
	int x = 0;
	m_batteryLevel1 = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));
	x += w;
	m_batteryLevel2 = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));
	x += w;
	m_batteryLevel3 = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));
	x += w;
	m_batteryLevel4 = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));
	x += w;
	m_batteryLevel5 = img.GetSubImage(wxRect(wxPoint(x, 0), wxSize(w, h)));

	wxBitmap bmp(w, h);
	Create(parent, id, bmp, wxDefaultPosition, wxDefaultSize, style, name);

	SetBatteryLevel(4);
}


void cBatteryDisplay::SetBatteryLevel(const int level)
{
	switch (level)
	{
	case 0: SetBitmap(m_batteryLevel1); break;
	case 1: SetBitmap(m_batteryLevel2); break;
	case 2: SetBitmap(m_batteryLevel3); break;
	case 3: SetBitmap(m_batteryLevel4); break;
	case 4: SetBitmap(m_batteryLevel5); break;
	}

	m_level = level;
	Refresh();
	Layout();
	Fit();
}
