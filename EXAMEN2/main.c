#include <stdio.h>
#include <stdlib.h>
#include "exam2.h"
#include <math.h>


/*
typedef enum {
    Ending,
    Bifurcation,
    Unknown
} MinutiaType;


typedef struct{
    unsigned short x;
    unsigned short y;
    float angle;
    MinutiaType type;
}Minutia;


typedef struct{
    unsigned short length;
    Minutia *minutiae;
}MinutiaArray;

*/


Minutia * createMinutia(unsigned short x, unsigned short y, float angle, MinutiaType type){
    Minutia *minutia = malloc(sizeof(Minutia));
    minutia->x = x;
    minutia->y = y;
    minutia->angle = angle;
    minutia->type = type;
    return minutia;
}


MinutiaArray * createMinutiaArray(unsigned short length){
    MinutiaArray *arrMin = malloc(sizeof(MinutiaArray));
    arrMin->length = length;
    arrMin->minutiae = calloc(length, sizeof(Minutia));

    return arrMin;
}

void releaseMinutiaArray(MinutiaArray *arrMin){
    free(arrMin->minutiae);
    free(arrMin);
}

double computeDistance(const Minutia *const minutia, const Minutia *const minutia1){
    int x = (minutia->x - minutia1->x);
    int y = (minutia->x - minutia1->x);
    x = pow(x,2);
    y = pow (y,2);
    double distance;
    distance = sqrt(x+y);
    return distance;
}

Minutia *findCentroid(const MinutiaArray * const minutiaArr, double (*computeDistance)(const Minutia *const minutia, const Minutia *const minutia1)){
    double distancia = 0;
    double min = 0x7FEFFFFFFFFFFFFFl;
    int pos = 0;

    for (int i = 0; i < minutiaArr->length; i++) {

        distancia = 0;
        for (int j = 0; j < minutiaArr->length; j++) {

            distancia =distancia + computeDistance(&minutiaArr->minutiae[i],&minutiaArr->minutiae[j]);
        }

        if (distancia < min){

            min = distancia;
            pos = i;
        }
    }

    return &minutiaArr->minutiae[pos];
}



int testFindCentroid(){
    int found;
    int siezeOfArr = 10;
    MinutiaArray *MinutiaArray = createMinutiaArray(siezeOfArr);


    Minutia *min1 = createMinutia(1, 11, 12 , Unknown);
    MinutiaArray->minutiae[0] = *min1;
    free(min1);

    min1 = createMinutia(2, 12, 54, Unknown);
    MinutiaArray->minutiae[1] = *min1;
    free(min1);

    min1 = createMinutia(3, 13, 55, Unknown);
    MinutiaArray->minutiae[2] = *min1;
    free(min1);

    min1 = createMinutia(4, 14, 12 , Unknown);
    MinutiaArray->minutiae[3] = *min1;
    free(min1);

    min1= createMinutia(5, 15, 1 , Unknown);
    MinutiaArray->minutiae[4] = *min1;
    free(min1);

    min1= createMinutia(6, 16, 12 , Unknown);
    MinutiaArray->minutiae[5] = *min1;
    free(min1);

    min1= createMinutia(7, 17, 12 , Bifurcation);
    MinutiaArray->minutiae[6] = *min1;
    free(min1);

    min1 = createMinutia(8, 18, 12 , Unknown);
    MinutiaArray->minutiae[7] = *min1;
    free(min1);

    min1 = createMinutia(9, 19,12 , Bifurcation);
    MinutiaArray->minutiae[8] = *min1;
    free(min1);

    min1 = createMinutia(10, 20, 12 , Unknown);
    MinutiaArray->minutiae[9] = *min1;
    free(min1);


    Minutia *centroid = findCentroid(MinutiaArray,computeDistance);

    //printf(" \n %d %d \n", centroid->x, centroid->y);
    //printf(" \n %d %d \n", (&MinutiaArray->minutiae[siezeOfArr/2-1])->x, (&MinutiaArray->minutiae[siezeOfArr/2-1])->y);

    if (&MinutiaArray->minutiae[siezeOfArr/2 -1 ] == centroid){
        found = 1;
    }else
        found = 0;
    releaseMinutiaArray(MinutiaArray);


    return found;

}

int testFindCentroid2(){
    int found;
    int siezeOfArr = 10;
    MinutiaArray *MinutiaArray = createMinutiaArray(siezeOfArr);


    Minutia *min1 = createMinutia(1, 11, 12 , Unknown);
    MinutiaArray->minutiae[0] = *min1;
    free(min1);

    Minutia *min2 = createMinutia(2, 12, 54, Ending);
    MinutiaArray->minutiae[1] = *min2;
    free(min2);

    Minutia *min3 = createMinutia(4, 13, 55, Unknown);
    MinutiaArray->minutiae[2] = *min3;
    free(min3);

    Minutia *min4 = createMinutia(8, 14, 12 , Unknown);
    MinutiaArray->minutiae[3] = *min4;
    free(min4);

    Minutia *min5 = createMinutia(16, 15, 1 , Ending);
    MinutiaArray->minutiae[4] = *min5;
    free(min5);

    Minutia *min6 = createMinutia(32, 16, 12 , Unknown);
    MinutiaArray->minutiae[5] = *min6;
    free(min6);

    Minutia *min7 = createMinutia(64, 17, 12 , Bifurcation);
    MinutiaArray->minutiae[6] = *min7;
    free(min7);

    Minutia *min8 = createMinutia(128, 18, 12 , Unknown);
    MinutiaArray->minutiae[7] = *min8;
    free(min8);

    Minutia *min9 = createMinutia(256, 19,12 , Bifurcation);
    MinutiaArray->minutiae[8] = *min9;
    free(min9);

    Minutia *min10 = createMinutia(512, 20, 12 , Unknown);
    MinutiaArray->minutiae[9] = *min10;
    free(min10);


    Minutia *centroid = findCentroid(MinutiaArray,computeDistance);

    //printf(" \n %d %d \n", centroid->x, centroid->y);
    //printf(" \n %d %d \n", (&MinutiaArray->minutiae[siezeOfArr/2-1])->x, (&MinutiaArray->minutiae[siezeOfArr/2-1])->y);

    if (&MinutiaArray->minutiae[siezeOfArr/2 -1 ] == findCentroid(MinutiaArray,computeDistance)){
        found = 1;
    }else
        found = 0;
    releaseMinutiaArray(MinutiaArray);


    return found;

}



int testFindCentroidMiPrueba(){
    int found;
    int siezeOfArr = 10;
    MinutiaArray *MinutiaArray = createMinutiaArray(siezeOfArr);

    for (int i = 0; i < siezeOfArr; ++i) {

        int type = rand()%3;
        //printf("%d",type);
        if(type == 0) {
            //printf("0");
            Minutia *min = createMinutia(i , i +10, i * 30 , Unknown);
            MinutiaArray->minutiae[i] = *min;
            free(min);
        }
        if (type == 1){
            //printf("1");
            Minutia *min = createMinutia(i , i +10, i * 30 , Bifurcation);
            MinutiaArray->minutiae[i] = *min;
            free(min);
        }
        if (type == 2){
            //printf("2");
            Minutia *min = createMinutia(i, i +10, i * 30 , Ending);
            MinutiaArray->minutiae[i] = *min;
            free(min);
        }


    }



    Minutia *centroid = findCentroid(MinutiaArray,computeDistance);

    //printf(" \n %d %d \n", centroid->x, centroid->y);
    //printf(" \n %d %d \n", (&MinutiaArray->minutiae[siezeOfArr/2 -1])->x, (&MinutiaArray->minutiae[siezeOfArr/2 -1 ])->y);


    if (&MinutiaArray->minutiae[siezeOfArr/2 -1] == centroid){
        found = 1;
    }else
        found = 0;
    releaseMinutiaArray(MinutiaArray);

    return found;


}

int testFindCentroidMiPrueba2(){
        int found;
        int siezeOfArr = 100;
        MinutiaArray *MinutiaArray = createMinutiaArray(siezeOfArr);

        for (int i = 0; i < siezeOfArr; ++i) {

            int type = rand()%3;
            //printf("%d",type);
            if(type == 0) {
                //printf("0");
                Minutia *min = createMinutia(i * 2 * (type + 1), i * 3 * (type + 1), i * 30 , Unknown);
                MinutiaArray->minutiae[i] = *min;
                free(min);
            }
            if (type == 1){
                //printf("1");
                Minutia *min = createMinutia(i * 2 * (type + 1), i * 3 * (type + 1), i * 30 , Bifurcation);
                MinutiaArray->minutiae[i] = *min;
                free(min);
            }
            if (type == 2){
                //printf("2");
                Minutia *min = createMinutia(i * 2 * (type + 1), i * 3 * (type + 1), i * 30 , Ending);
                MinutiaArray->minutiae[i] = *min;
                free(min);
            }


        }
    Minutia *centroid = findCentroid(MinutiaArray,computeDistance);

    //printf(" \n %d %d \n", centroid->x, centroid->y);
    //printf(" \n %d %d \n", (&MinutiaArray->minutiae[siezeOfArr/2 -1])->x, (&MinutiaArray->minutiae[siezeOfArr/2 -1])->y);

    if (&MinutiaArray->minutiae[siezeOfArr/2 - 1] == findCentroid(MinutiaArray,computeDistance)){
        found = 1;
    }else
        found = 0;
    releaseMinutiaArray(MinutiaArray);

        return found;

}




int main() {
    printf("EXAMEN 2");
    int exito;

    exito = testFindCentroid();
    //exito = testFindCentroid2();
    //exito = testFindCentroidMiPrueba();
    //exito = testFindCentroidMiPrueba2();
    printf("\n %d",exito);
    return 0;
}up