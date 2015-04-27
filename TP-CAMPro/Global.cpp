
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
