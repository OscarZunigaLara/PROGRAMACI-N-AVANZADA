#include "libraryStatic.h"
#include "librarydynamic.h"

#include <stdio.h>

void hello(void) {
    printf("Hello, Worl   d!\n");
}

void thidIsATestForStaticLibrary(int n){
    for (int i = 0; i < n; ++i) {
        puts("THIS IS AN STATIC LIBRARY");
    }
}