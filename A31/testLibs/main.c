#include <stdio.h>
#include "libraryStatic.h"
#include "librarydynamic.h"


int main(int argc, char *argv[]){
    printf("TESTING THE STATIC AND DINAMIC LIBRARIES!\n \n");

    printf("INTRODUCE A DIGIT FOR TESTING THE STATIC LIBRARY");
    int nStatic;
    scanf("%d", &nStatic);
    thidIsATestForStaticLibrary(nStatic);
    printf("\n");

    printf("INTRODUCE A DIGIT FOR TESTING THE DYNAMIC LIBRARY");
    int nDynamyc;
    scanf("%d", &nDynamyc);
    thisIsATestForADynamicLibrary(nDynamyc);
    return 0;
}



///https://www.thegeekstuff.com/2012/06/linux-shared-libraries/
///https://www.howtogeek.com/427086/how-to-use-linuxs-ar-command-to-create-static-libraries/
/*
 * gcc -L/home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/A31/dynamic/cmake-build-debug/   -Wall main.c libstatic.a -o TEST -ldynamic
 *
 *
 *export LD_LIBRARY_PATH=/home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/A31/dynamic/cmake-build-debug:$LD_LIBRARY_PATH
*/
