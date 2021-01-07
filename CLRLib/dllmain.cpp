#include "dllmain.h"

using namespace ::CSharpDLL;

void clr_before()
{
    SharpLibrary::LifecycleBefore();
}

bool clr_frame()
{
    return SharpLibrary::LifecycleFrame();
}

void clr_after()
{
    SharpLibrary::LifecycleAfter();
}
