#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct {
  int numerator;
  int denominator;
}Fraction;


int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int prtSimplifyFraction(){
    Fraction* FRACTIONPOINTER = malloc(sizeof(Fraction));
    int gcdNumber = 1;

    scanf("%d", &FRACTIONPOINTER->numerator);
    scanf("%d", &FRACTIONPOINTER->denominator);
    if (FRACTIONPOINTER->denominator != FRACTIONPOINTER->numerator){
        gcdNumber = gcd(FRACTIONPOINTER->numerator, FRACTIONPOINTER->denominator);
        //printf("\n%d", FRACTIONPOINTER->numerator);
        //printf("\n%d", FRACTIONPOINTER->denominator);
        //printf("\n%d", gcdNumber);
        FRACTIONPOINTER->numerator = FRACTIONPOINTER->numerator/gcdNumber;
        FRACTIONPOINTER->denominator = FRACTIONPOINTER->denominator/gcdNumber;
    }
    printf("%d", FRACTIONPOINTER->numerator);
    printf("\n%d", FRACTIONPOINTER->denominator);

    free(FRACTIONPOINTER);
}

int ptrSumFraction(){
    Fraction* FRACTIONPOINTER1 = malloc(sizeof(Fraction));
    scanf("%d", &FRACTIONPOINTER1->numerator);
    scanf("%d", &FRACTIONPOINTER1->denominator);
    int gcdNumber1 = 1;
    if (FRACTIONPOINTER1->denominator != FRACTIONPOINTER1->numerator){
        gcdNumber1 = gcd(FRACTIONPOINTER1->numerator, FRACTIONPOINTER1->denominator);
        //printf("\n%d", FRACTIONPOINTER->numerator);
        //printf("\n%d", FRACTIONPOINTER->denominator);
        //printf("\n%d", gcdNumber);
        FRACTIONPOINTER1->numerator = FRACTIONPOINTER1->numerator/gcdNumber1;
        FRACTIONPOINTER1->denominator = FRACTIONPOINTER1->denominator/gcdNumber1;
    }
    Fraction* FRACTIONPOINTER2 = malloc(sizeof(Fraction));
    scanf("%d", &FRACTIONPOINTER2->numerator);
    scanf("%d", &FRACTIONPOINTER2->denominator);
    int gcdNumber2 = 1;
    if (FRACTIONPOINTER2->denominator != FRACTIONPOINTER2->numerator){
        gcdNumber2 = gcd(FRACTIONPOINTER2->numerator, FRACTIONPOINTER2->denominator);
        //printf("\n%d", FRACTIONPOINTER->numerator);
        //printf("\n%d", FRACTIONPOINTER->denominator);
        //printf("\n%d", gcdNumber);
        FRACTIONPOINTER2->numerator = FRACTIONPOINTER2->numerator/gcdNumber2;
        FRACTIONPOINTER2->denominator = FRACTIONPOINTER2->denominator/gcdNumber2;
    }
    Fraction* FRACTIONPOINTER3 = malloc(sizeof(Fraction));

    FRACTIONPOINTER3->denominator = FRACTIONPOINTER1->denominator * FRACTIONPOINTER2->denominator;
    FRACTIONPOINTER3->numerator = FRACTIONPOINTER1->numerator * FRACTIONPOINTER2->denominator +
            FRACTIONPOINTER2->numerator * FRACTIONPOINTER1->denominator;
    int gcdNumber3 = 1;
    if (FRACTIONPOINTER2->denominator != FRACTIONPOINTER2->numerator){
        gcdNumber2 = gcd(FRACTIONPOINTER2->numerator, FRACTIONPOINTER2->denominator);
        //printf("\n%d", FRACTIONPOINTER->numerator);
        //printf("\n%d", FRACTIONPOINTER->denominator);
        //printf("\n%d", gcdNumber);
        FRACTIONPOINTER3->numerator = FRACTIONPOINTER3->numerator/gcdNumber3;
        FRACTIONPOINTER3->denominator = FRACTIONPOINTER3->denominator/gcdNumber3;
    }
    printf("\n%d", FRACTIONPOINTER3->numerator);
    printf("\n%d", FRACTIONPOINTER3->denominator);
    free(FRACTIONPOINTER1);
    free(FRACTIONPOINTER2);
    free(FRACTIONPOINTER3);

}


typedef struct {
    int x;
    int y;
    int z;
}Point;


int ptrEuclideanDistance3D(){
    Point* Point1 = malloc(sizeof(Point));
    Point* Point2 = malloc(sizeof(Point));
    scanf("%d %d %d", &Point1->x, &Point1->y, &Point1->z);
    //printf("%d %d %d", Point1->x, Point1->y, Point1->z);
    scanf("%d %d %d", &Point2->x, &Point2->y, &Point2->z);

    int distanceX, distanceY, distanceZ;
    float  distance;
    distanceX = Point1->x - Point2->x;
    distanceY = Point1->y - Point2->y;
    distanceZ = Point1->z - Point2->z;
    distance = (int)distanceX * (int)distanceX + (int)distanceY * (int)distanceY + (int)distanceZ * (int)distanceY;
    distance = sqrt(distance);
    printf("%.2f", distance);
    free(Point1);
    free(Point2);
    return distance;
}

int ptrQuadrant(){

}

int ptrComputeSlope(){

}

int ptrAreCollinear(){

}

int ptrRectangleContainsPoint(){

}
int ptrRectangleUnion(){

}

int ptrRectangleIntersection(){

}

int ptrPointInsideConvexPolygon(){

}


int main() {
    //prtSimplifyFraction();
    //ptrSumFraction();
    ptrEuclideanDistance3D();


    return 0;
}
