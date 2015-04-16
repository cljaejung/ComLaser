//
// ComLaser
//

#include "stdafx.h"

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


