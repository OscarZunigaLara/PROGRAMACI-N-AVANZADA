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


///GENERATES A MINUTIA, RETURNS THE POINTER
Minutia * createMinutia(unsigned short x, unsigned short y, float angle, MinutiaType type);

///GENERATES AN ARRAY OF SIZE lenght AND VALUES INITIALIZED ON 0, RETURNS THE POINTER
MinutiaArray * createMinutiaArray(unsigned short length);
///RELEASES DE ARRAY,
void releaseMinutiaArray(MinutiaArray *arrMin);

///COMPUTE THE DISTANCE BETWEEN TWO MINUTIAS
double computeDistance(const Minutia *const minutia, const Minutia *const minutia1);

////FINDS THE CENTROID ON THE ARRAY, RETURNS THE POINTER
Minutia *findCentroid(const MinutiaArray * const minutiaArr, double (*computeDistance)(const Minutia *const minutia, const Minutia *const minutia1));





int testFindCentroid();



#endif //EXAMEN2_EXAM2_H
