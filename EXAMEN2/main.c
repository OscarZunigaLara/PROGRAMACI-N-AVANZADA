#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {
    Ending,Bifurcation,Unknown
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

Minutia *findCentroid(const MinutiaArray * const minutiaArr, double (*distance)(const Minutia *const minutia1, const)){
    double distancia = 0;
    double min = 0x7FEFFFFFFFFFFFFFl;
    int pos = 0;
    for (int i = 0; i < minutiaArr->length; ++i) {
        for (int j = 0; j < minutiaArr->length; ++j) {
            distancia = distance(&minutiaArr->minutiae[i],&minutiaArr->minutiae[j]);
        }
        if (distancia < min){
            min = distancia;
            pos = i;
        }
    }
    return &minutiaArr->minutiae[pos];
}

int testFindCentroid(){




}



int main() {
    printf("EXAMEN 2");

    return 0;
}
