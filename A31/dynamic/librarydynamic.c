#include "librarydynamic.h"

#include <stdio.h>

void hello(void) {
    printf("Hello, World!\n");
}


void thisIsATestForADynamicLibrary(int n){
    for (int i = 0; i < n * 1; ++i) {
        puts("THIS IS A DYNAMIC LIBRARY");
    }
}