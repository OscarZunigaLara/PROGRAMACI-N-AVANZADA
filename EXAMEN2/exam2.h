//
// Created by tndrmanjvbox on 5/7/20.
//

#ifndef EXAMEN2_EXAM2_H
#define EXAMEN2_EXAM2_H



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



Minutia * createMinutia(unsigned short x, unsigned short y, float angle, MinutiaType type);

MinutiaArray * createMinutiaArray(unsigned short length);

int releaseMinutiaArray(MinutiaArray *arrMin);

double computeDistance(const Minutia *const minutia, const Minutia *const minutia1);

Minutia *findCentroid(const MinutiaArray * const minutiaArr, double (*computeDis)(const Minutia *const minutia, const Minutia *const minutia1));





int testFindCentroid();



#endif //EXAMEN2_EXAM2_H
