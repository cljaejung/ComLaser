//
//  Normal, Pressed, Hover 연속된 세개의 이미지 파일로 버튼을 구현함.
// wxPanel을 상속받아, OnPaint() 함수에서 버튼의 상태에 따라, 이미지를 출력하게 함.
//
#pragma once



class cBitmap3ButtonEx : public wxPanel
{
public:
	cBitmap3ButtonEx(
		wxWindow *parent, 
		const wxWindowID id = wxID_ANY, 
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		const long style = 0
		);

	cBitmap3ButtonEx(wxWindow *parent,
		wxWindowID id,
		const wxString& fileName,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		const long style = 0
		);

	void SetButtonBitmap(const wxString &fileName);


protected:
	DECLARE_EVENT_TABLE()
	void OnPaint(wxPaintEvent& event);
	void OnEnterWindow(wxMouseEvent& event);
	void OnLeaveWindow(wxMouseEvent& event);
	void OnLeftDown(wxMouseEvent& event);
	void OnLeftUp(wxMouseEvent& event);
	void OnEraseBackground(wxEraseEvent& event);

protected:
	wxBitmap m_btnImage[BTN3_STATE::MAX];
	BTN3_STATE::TYPE m_state;
};
