
#include "stdafx.h"
#include "Bitmap3Button.h"


cBitmap3Button::cBitmap3Button(wxWindow *parent,
	wxWindowID id,
	const wxString& fileName,
	const wxPoint& pos,
	const wxSize& size,
	long style,
	const wxValidator& validator,
	const wxString& name)
{
	wxImage img(fileName);
	const int w = img.GetWidth() / 3;
	const int h = img.GetHeight();

	int x = 0;
	wxImage img1 = img.Size(wxSize(w, h), wxPoint(0, 0));
	x -= w;
	wxImage img2 = img.Size(wxSize(w, h), wxPoint(x, 0));
	x -= w;
	wxImage img3 = img.Size(wxSize(w, h), wxPoint(x, 0));

	Create(parent, id, img1, pos, size, wxNO_BORDER, validator, name);

	SetBitmapFocus(img1);
	SetBitmapHover(img3);
	SetBitmapSelected(img2);
}
