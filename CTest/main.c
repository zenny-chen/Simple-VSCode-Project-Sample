#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

// The following macro definition intends to make VS Code recognize the constants in the <math.h> library.
#ifndef __USE_MISC
#define __USE_MISC  1
#endif

#include <math.h>
#include <uchar.h>
#include <stdatomic.h>
#include <complex.h>

#include <dlfcn.h>

extern int ASMTest(int a, int b);
extern void CPPTest(void);

int main(int argc, const char* argv[])
{
    printf("6 - 2 = %d\n",  ASMTest(6, 2));   

    void *symHandle = dlopen("/lib/x86_64-linux-gnu/libdl.so.2", RTLD_NOW);
    if(symHandle == NULL)
    {
        puts("shared object file open failed!");
        return 0;
    }
    
    dlclose(symHandle);

    printf("The value is: %f\n", M_E + sin(M_PI * 0.5));

    CPPTest();
}


