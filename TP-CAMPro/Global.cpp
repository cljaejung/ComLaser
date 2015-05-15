
#include "stdafx.h"
#include "Global.h"

#ifndef __WXMSW__
	#include <unistd.h>
	#include <time.h>
#endif


using namespace global;


int global::GetTickCount()
{
#ifdef __WXMSW__
	return ::GetTickCount();
#else
	struct timespec ts;
	unsigned theTick = 0U;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	theTick = ts.tv_nsec / 1000000;
	theTick += ts.tv_sec * 1000;
	return theTick;
#endif
}


// string -> wstring
wstring global::str2wstr(const string& str) 
{
	// Windows Version
#ifdef __WXMSW__
	int len;
	int slength = (int)str.length() + 1;
	len = ::MultiByteToWideChar(CP_ACP, 0, str.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	::MultiByteToWideChar(CP_ACP, 0, str.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;

#else
	string curLocale = setlocale(LC_ALL, "");
	const char* _Source = str.c_str();
	size_t _Dsize = mbstowcs(NULL, _Source, 0) + 1;
	wchar_t *_Dest = new wchar_t[_Dsize];
	wmemset(_Dest, 0, _Dsize);
	mbstowcs(_Dest, _Source, _Dsize);
	wstring result = _Dest;
	delete[]_Dest;
	setlocale(LC_ALL, curLocale.c_str());
	return result;
#endif
}


// wstring -> string
string global::wstr2str(const wstring& wstr)
{
	// Windows Version
#ifdef __WXMSW__
	const int slength = (int)wstr.length() + 1;
	const int len = ::WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), slength, 0, 0, NULL, FALSE);
	char* buf = new char[len];
	::WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), slength, buf, len, NULL, FALSE);
	std::string r(buf);
	delete[] buf;
	return r;
#else
	mbstate_t st = {};
	const unsigned wlen = wstr.length();
	wchar_t wbuf[wlen + 1];
	const size_t copied = wstr.copy(wbuf, wlen);
	wbuf[copied] = L'\0';
	const wchar_t* wptr = wbuf;
	char buf[wlen * sizeof(std::wstring::value_type) + 1];
	const ssize_t res = std::wcsrtombs(buf, &wptr, sizeof(buf), &st);
	return (res >= 0) ? buf : "?";
#endif
}
