//
// ComLaser
//

#include "stdafx.h"


// ----------------------------------------------------------------------------
// resources
// ----------------------------------------------------------------------------
#if !defined(__WXMSW__) && !defined(__WXPM__)
    #include "../sample.xpm"
#endif


#include "CLApp.h"
#include "CLFrame.h"



IMPLEMENT_APP(cCLApp)



// 'Main program' equivalent: the program execution "starts" here
bool cCLApp::OnInit()
{
    if ( !wxApp::OnInit() )
        return false;

    cCLFrame *frame = new cCLFrame(_T("ComLaser App"));
    frame->Show(true);
    return true;
}
