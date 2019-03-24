#ifndef __PRINTER3D__
    #define __PRINTER3D__
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    #ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
    #else
    #include <unistd.h>
    #define GetCurrentDir getcwd
    #endif
#endif