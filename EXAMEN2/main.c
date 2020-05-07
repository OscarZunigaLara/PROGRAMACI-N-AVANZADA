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

int releaseMinutiaArray(MinutiaArray *arrMin){
    free(arrMin->minutiae);
    free(arrMin);
    return 0;
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

Minutia *findCentroid(const MinutiaArray * const minutiaArr, double (*computeDis)(const Minutia *const minutia, const Minutia *const minutia1)){
    double distancia = 0;
    double min = 0x7FEFFFFFFFFFFFFFl;
    int pos = 0;

    for (int i = 0; i < minutiaArr->length; ++i) {

        distancia = 0;
        for (int j = 0; j < minutiaArr->length; ++j) {

            distancia =distancia + computeDis(&minutiaArr->minutiae[i],&minutiaArr->minutiae[j]);
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
    int siezeOfArr = 20;
    MinutiaArray *minutiaArr = createMinutiaArray(siezeOfArr);

    for (int i = 0; i < siezeOfArr; ++i) {

        int type = rand()%3;
        //printf("%d",type);
        if(type == 0) {
            //printf("0");
            Minutia *minutia = createMinutia(i * 2, i * 3, i * 30 , Unknown);
            minutiaArr->minutiae[i] = *minutia;
            free(minutia);
        }
        if (type == 1){
            //printf("1");
            Minutia *minutia = createMinutia(i * 2, i * 3, i * 30 , Bifurcation);
            minutiaArr->minutiae[i] = *minutia;
            free(minutia);
        }
        if (type == 2){
            //printf("2");
            Minutia *minutia = createMinutia(i * 2, i * 3, i * 30 , Ending);
            minutiaArr->minutiae[i] = *minutia;
            free(minutia);
        }


    }
    Minutia *centroid = findCentroid(minutiaArr,computeDistance);
    printf(" \n %d %d \n", centroid->x, centroid->y);
    printf(" \n %d %d \n", centroid->x, centroid->y);
    if (&minutiaArr->minutiae[siezeOfArr/2] == findCentroid(minutiaArr,computeDistance)){
        found = 1;
    }else
        found = 0;
    releaseMinutiaArray(minutiaArr);


    return found;


}


int testFindCentroidMiPrueba(){
    int found;
    int siezeOfArr = 10;
    MinutiaArray *minutiaArr = createMinutiaArray(siezeOfArr);


    Minutia *minutia = createMinutia(3, 4, 12 , Unknown);
    minutiaArr->minutiae[0] = *minutia;
    free(minutia);

    Minutia *minutia1 = createMinutia(5, 3, 54, Ending);
    minutiaArr->minutiae[1] = *minutia;
    free(minutia);

    Minutia *minutia2 = createMinutia(55, 1, 55, Unknown);
    minutiaArr->minutiae[2] = *minutia;
    free(minutia);

    Minutia *minutia3 = createMinutia(3, 4, 12 , Unknown);
    minutiaArr->minutiae[0] = *minutia;
    free(minutia);






    if (&minutiaArr->minutiae[siezeOfArr/2] == findCentroid(minutiaArr,computeDistance)){
        found = 1;
    }else
        found = 0;
    releaseMinutiaArray(minutiaArr);


}

int testFindCentroidMiPrueba2(){
        int found;
        int siezeOfArr = 10;
        MinutiaArray *minutiaArr = createMinutiaArray(siezeOfArr);

        for (int i = 0; i < siezeOfArr; ++i) {

            int type = rand()%3;
            //printf("%d",type);
            if(type == 0) {
                //printf("0");
                Minutia *minutia = createMinutia(i * 2 * (type + 1), i * 3 * (type + 1), i * 30 , Unknown);
                minutiaArr->minutiae[i] = *minutia;
                free(minutia);
            }
            if (type == 1){
                //printf("1");
                Minutia *minutia = createMinutia(i * 2 * (type + 1), i * 3 * (type + 1), i * 30 , Bifurcation);
                minutiaArr->minutiae[i] = *minutia;
                free(minutia);
            }
            if (type == 2){
                //printf("2");
                Minutia *minutia = createMinutia(i * 2 * (type + 1), i * 3 * (type + 1), i * 30 , Ending);
                minutiaArr->minutiae[i] = *minutia;
                free(minutia);
            }


        }
        Minutia *centroid = findCentroid(minutiaArr,computeDistance);
        printf(" \n %d %d \n", centroid->x, centroid->y);
        printf(" \n %d %d \n", (&minutiaArr->minutiae[siezeOfArr/2])->x, (&minutiaArr->minutiae[siezeOfArr/2])->y);

    if (&minutiaArr->minutiae[siezeOfArr/2] == findCentroid(minutiaArr,computeDistance)){
            found = 1;
        }else
            found = 0;
        releaseMinutiaArray(minutiaArr);


        return found;


}




int main() {
    printf("EXAMEN 2");
    int exito;

    //exito = testFindCentroid();

    exito = testFindCentroidMiPrueba2();
    printf("\n %d",exito);
    return 0;
}
