#pragma once


// Button Image Type
namespace BUTTON2_TYPE {
	enum TYPE {
		BMP,
		PNG,
	};
}


class cBitmap2Button : public wxStaticBitmap
{
public:
	cBitmap2Button(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0,
		const wxString& name = wxStaticBitmapNameStr,
		BUTTON2_TYPE::TYPE buttonImageType = BUTTON2_TYPE::BMP);

	void SetButtonBitmap(const wxString &fileName);


protected:
	wxImage m_normalImg;
	wxImage m_hoverImg;
	bool m_isPressed;
	bool m_isEnterWindow;

	BUTTON2_TYPE::TYPE m_buttonImgType;


protected:
	wxString GetFileExt();

	void OnEraseBackground(wxEraseEvent&);
	void OnEnterWindow(wxMouseEvent& event);
	void OnLeaveWindow(wxMouseEvent& event);
	void OnLeftDown(wxMouseEvent& event);
	void OnLeftUp(wxMouseEvent& event);
};




// cBitmap2Button 클래스와 똑같은 기능을 하지만, 파일은 png 포맷으로 로딩한다.
class cPng2Button : public cBitmap2Button
{
public:
	cPng2Button(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0,
		const wxString& name = wxStaticBitmapNameStr)
		: cBitmap2Button(parent, id, fileName, pos, size, style, name, BUTTON2_TYPE::PNG)
	{
		// nothing ~ 
	}
};
