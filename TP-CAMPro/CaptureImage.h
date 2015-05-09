
// 캡쳐 이미지 포맷

#pragma once


struct sCaptureImage
{
	int id;
	wxString fileName;
	float speed;
	wxString time;



	sCaptureImage() {}
	sCaptureImage(int  id0, const wxString &fileName0, const float speed0, const wxString &time0) :
		id(id0), fileName(fileName0), speed(speed0), time(time0) {
	}

	sCaptureImage(const sCaptureImage &rhs) {
		operator=(rhs);
	}

	sCaptureImage& operator=(const sCaptureImage &rhs) {
		if (this != &rhs)
		{
			id = rhs.id;
			fileName = rhs.fileName;
			speed = rhs.speed;
			time = rhs.time;
		}
		return *this;
	}
};

