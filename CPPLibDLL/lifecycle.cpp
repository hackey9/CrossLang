#include "lifecycle.h"
#include <iostream>
#include "../CLRLib/dllmain.h"

void lifecycle_before()
{
    clr_before();
}

bool lifecycle_frame()
{
    return clr_frame();
}

void lifecycle_after()
{
    clr_after();
}
