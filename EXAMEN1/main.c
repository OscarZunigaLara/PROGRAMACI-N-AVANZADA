#include <stdio.h>
#include "main.h"
#include <stdarg.h>

//http://manpages.ubuntu.com/manpages/bionic/es/man3/stdarg.3.html

void binprintf(int v)
{
    unsigned int mask=1<<((sizeof(int)<<3)-1);
    while(mask) {
        printf("%d", (v&mask ? 1 : 0));
        mask >>= 1;
    }
}

void binprintfUnsignedShortInt(int v)
{
    unsigned int mask=1<<((sizeof(unsigned short int)<<3)-1);
    while(mask) {
        printf("%d", (v&mask ? 1 : 0));
        mask >>= 1;
    }
}

unsigned  int codificaParDeBits(int count, ...) {
    unsigned int nReturn = 0;
    printf("\n");
    va_list list;
    va_start(list, count);
    int count2 = count;
    if (count > 8){
        count2 = 8;
    }
    if (count > 16){
        count = 16;
    }

    for(int j=0; j<count2; j++)
    {
        unsigned short int n1 =va_arg(list, unsigned  int);
        //binprintfUnsignedShortInt(0); binprintfUnsignedShortInt(n1);
        //printf("\n");
        n1 <<= (14 - (j*2));
        n1 >>=(14);
        n1 <<= (j*2);
        //binprintfUnsignedShortInt(0); binprintfUnsignedShortInt(n1);
        //printf("\n");
        nReturn += n1;
    }
    int i = 0;
    for(int j=8; j<count; j++)
    {
        unsigned int n1 =va_arg(list, unsigned  int);
        //printf("\n");
        n1 <<= (30 - (i*2));
        n1 >>=(30);
        n1 <<= (j*2);
        nReturn += n1;
        //binprintf(n1);
        i++;
    }

    //printf("\n");
    //binprintf(nReturn);
    //printf("\n");
    //printf("%u", nReturn);
    //printf("\n");

    va_end(list);

    return nReturn;
}



int testcodificaParDeBits0(){

    return codificaParDeBits(0) == 0;
}


int testcodificaParDeBits3(){

    return codificaParDeBits(3,
                             2, 5, 16) == 22;
}
int testcodificaParDeBits8(){
    return codificaParDeBits(8,
                             2, 5, 66, 12, 65, 434, 7677,333) ==  4102;
}

int testcodificaParDeBits16(){
    return codificaParDeBits(16,
                             2, 5, 66, 12, 65, 434, 7677,333, 11111, 23123,
                             99999, 3432453, 11111, 34234234, 3, 6666666) ==  2400391174;
}

int testcodificaParDeBitsmas16(){
    return codificaParDeBits(19,
                             2, 5, 66, 12, 65, 434, 7677,333, 11111, 23123,
                             99999, 3432453, 11111, 34234234, 3, 6666666,23,
                             3434,6666666) ==  2400391174;
}
int testcodificaParDeBits18(){
    return codificaParDeBits(18,65535,65535,65535,65535,65535,65535,65535,65535,65535,
    65535,65535,65535,65535,65535,65535,65535,0, 0)==4294967295 ;
}


int main() {
    printf("EXAMEN, EJERCICIO 1...\n");

    printf("PROBANDO 0 VALORES     ");
    printf("%d", testcodificaParDeBits0());
    printf("\n");
    printf("PROBANDO 3 VALORES     ");
    printf("%d", testcodificaParDeBits3());
    printf("\n");
    printf("PROBANDO 8 VALORES     ");
    printf("%d", testcodificaParDeBits8());
    printf("\n");
    printf("PROBANDO 16 VALORES    ");
    printf("%d", testcodificaParDeBits16());
    printf("\n");
    printf("PROBANDO 19 VALORES    ");
    printf("%d", testcodificaParDeBitsmas16());
    printf("\n");
    printf("PROBANDO 18 VALORES    ");
    printf("%d", testcodificaParDeBits18());
    printf("\n");
    return 0;
}
