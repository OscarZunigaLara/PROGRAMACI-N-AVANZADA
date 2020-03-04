#include "library.h"

#include <stdio.h>

void hello(void) {
    printf("Hello, World!\n");
}


void thisIsATestForADynamicLibrary(int n){
    for (int i = 0; i < n; ++i) {
        puts("THIS IS A DYNAMIC LIBRARY");
    }
}