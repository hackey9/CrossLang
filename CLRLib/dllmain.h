#pragma once

#ifdef CLRLIB_EXPORTS
#define CLRLIB_API __declspec(dllexport) 
#else
#define CLRLIB_API __declspec(dllimport) 
#endif



CLRLIB_API void clr_before();

CLRLIB_API bool clr_frame();

CLRLIB_API void clr_after();
