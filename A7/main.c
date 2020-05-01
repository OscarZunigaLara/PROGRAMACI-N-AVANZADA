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

Fraction* ptrsimplifyFraction(const Fraction* const frac){
    int gcdNumber = 1;

    Fraction* newFraction = malloc(sizeof(Fraction));
    newFraction->denominator = frac->denominator;
    newFraction->numerator = frac->numerator;
    if (frac->denominator != frac->numerator){
        gcdNumber = gcd(frac->numerator, frac->denominator);
        newFraction->numerator = newFraction->numerator/gcdNumber;
        newFraction->denominator = newFraction->denominator/gcdNumber;
    }

    return newFraction;
}

Fraction*  ptrSumFraction(const Fraction* const  frac1, const Fraction* const frac2){
    Fraction* newFraction = malloc(sizeof(Fraction));
    newFraction->numerator = frac1->numerator * frac2->denominator +
            frac2->numerator * frac1->denominator;
    newFraction->denominator = frac1->denominator * frac2->denominator;
    Fraction* oldFraction  = newFraction;
    newFraction = ptrsimplifyFraction(oldFraction);
    free(oldFraction);
    return newFraction;
}


typedef struct {
    int x;
    int y;
    int z;
}Point;


float ptrEuclideanDistance3D(const Point* Point1ptr, const Point* Point2ptr){


    int distanceX, distanceY, distanceZ;
    float  distance;
    distanceX = Point1ptr->x - Point2ptr->x;
    distanceY = Point1ptr->y - Point2ptr->y;
    distanceZ = Point1ptr->z - Point2ptr->z;
    distance = (int)distanceX * (int)distanceX + (int)distanceY * (int)distanceY + (int)distanceZ * (int)distanceY;
    distance = sqrt(distance);
    return distance;
}

typedef struct {
    int x;
    int y;

}Point2D;

int ptrQuadrant(const Point2D* const point){
    if (point->y  != 0 && point->x != 0){
        if (point->x > 0){
            if (point->y > 0){
                //printf("%d", 1);
                return 1;
            } else{
                //printf("%d", 4);
                return 4;
            }
        } else{
            if (point->y > 0){
                //printf("%d", 2);
                return 2;
            } else{
                //printf("%d", 3);
                return 3;
            }
        }


    } else{
        //printf("%d", 0);
        return 0;
    }

}

int ptrSwapAndNegate(Point2D * const point1){
    int x = point1->x;
    point1->x = -(point1->y);
    point1->y = -x;

}



double ptrComputeSlope(const Point2D * const point1, const Point2D* const point2){
    double x1 = point1->x;    double y1 = point1->y;
    double x2 = point2->x;    double y2 = point2->y;
    double slope = (y2 - y1)/(x2 - x1);
    return slope;
}


int ptrAreCollinear(const Point2D* const point1 , const Point2D* const point2, const Point2D* const  point3){

    double slope1 = ptrComputeSlope(point1, point2);
    double slope2 = ptrComputeSlope(point2, point3);

    return abs(slope1 - slope2)<0.00001;

    ///RESTAR....

}


typedef struct {
    int x;
    int y;
    int height;
    int width;
}Rectangle;


int ptrRectangleContainsPoint(const Rectangle* const rect, const Point2D* const point){
    if(point->x >= rect->x && point->x <= rect->x + rect->width){
        if(point->y >= rect->y && point->y <= rect->y + rect->height){
            return 1;
        }
    }

    return 0;
}
Rectangle* ptrRectangleUnion(const Rectangle* const rect1, const Rectangle* const rect2){
    Rectangle* rect = malloc(sizeof(Rectangle));
    int x; int y; int width; int height;

    if(rect1->x < rect2->x){
        x = rect1->x;
        } else{
        x = rect2->x;
    }
    if(rect1->y < rect2->y){
        y = rect1->y;
    } else{
        y = rect2->y;
    }
    if (rect1->x + rect1->width > rect2->x + rect2->width){
        width = rect1->x + rect1->width - x;
    } else{
        width = rect2->x + rect2->width - x;
    }
    if (rect1->y + rect1->height > rect2->y + rect2->height){
        height = rect1->y + rect1->height - y;
    } else{
        height = rect2->y + rect2->height - y;
    }
    rect->x = x; rect->y = y; rect->height = height; rect->width = width;
    return rect;
}

Rectangle* ptrRectangleIntersection(const Rectangle* const rect1, const Rectangle* const rect2){
    Rectangle* rect = malloc(sizeof(Rectangle));
    int x; int y; int width; int height;

    if(rect1->x > rect2->x){
        x = rect1->x;
    } else{
        x = rect2->x;
    }
    if(rect1->y > rect2->y){
        y = rect1->y;
    } else{
        y = rect2->y;
    }
    if (rect1->x + rect1->width < rect2->x + rect2->width){
        width = rect1->x + rect1->width - x;
    } else{
        width = rect2->x + rect2->width - x;
    }
    if (rect1->y + rect1->height < rect2->y + rect2->height){
        height = rect1->y + rect1->height - y;
    } else{
        height = rect2->y + rect2->height - y;
    }
    rect->x = x; rect->y = y; rect->height = height; rect->width = width;
    return rect;
}

typedef struct {
    int pointCount;
    Point2D* arPoints;
}Polygon;




int ptrPointInsideConvexPolygon(const Point2D* const point1, const Polygon* const polygon1){


    return 0;
}



int main() {

    ///MALLOC = MEMORY ALOCATION
    //CALLOC
/*
     //     SIMPLIFY FRACTION
    Fraction* FRACTIONPOINTER = malloc(sizeof(Fraction));
    scanf("%d", &FRACTIONPOINTER->numerator);
    scanf("%d", &FRACTIONPOINTER->denominator);
    Fraction* newFraction = ptrsimplifyFraction(FRACTIONPOINTER);
    free(FRACTIONPOINTER);
    printf("%d", newFraction->numerator);
    printf("\n%d", newFraction->denominator);
    free(newFraction);
*/
        /////SUM FRACTION
/*

    Fraction* FRACTIONPOINTER1 = malloc(sizeof(Fraction));
    scanf("%d", &FRACTIONPOINTER1->numerator);
    scanf("%d", &FRACTIONPOINTER1->denominator);
    Fraction* FRACTIONPOINTER2 = malloc(sizeof(Fraction));
    scanf("%d", &FRACTIONPOINTER2->numerator);
    scanf("%d", &FRACTIONPOINTER2->denominator);

    Fraction* FRACTIONPOINTERANSWER = ptrSumFraction(FRACTIONPOINTER1, FRACTIONPOINTER2);
    free(FRACTIONPOINTER1);
    free(FRACTIONPOINTER2);
    printf("%d", FRACTIONPOINTERANSWER->numerator);
    printf("\n%d", FRACTIONPOINTERANSWER->denominator);
    free(FRACTIONPOINTERANSWER);
*/
    //////EUCLIDEANDistance
/*
    Point* Point1 = malloc(sizeof(Point));
    Point* Point2 = malloc(sizeof(Point));
    scanf("%d %d %d", &Point1->x, &Point1->y, &Point1->z);
    //printf("%d %d %d", Point1->x, Point1->y, Point1->z);
    scanf("%d %d %d", &Point2->x, &Point2->y, &Point2->z);
    float distance = ptrEuclideanDistance3D(Point1, Point2);
    printf("%.2f", distance);
    free(Point1);
    free(Point2);
*/


    //////QUADRANT
/*
    Point2D* point = malloc(sizeof(Point2D));
    scanf("%d %d", &point->x, &point->y);
    int quadrant = ptrQuadrant(point);
    printf("%d", quadrant);
    free(point);
*/

    /////SWAP N NEGATE
/*
    Point2D* point = malloc(sizeof(Point2D));
    scanf("%d %d", &point->x, &point->y);
    ptrSwapAndNegate(point);
    printf("%d\n%d", point->x, point->y);
    free(point);
*/
///////PTR SLOPE
/*
    Point2D* point1 = malloc(sizeof(Point2D));
    scanf("%d %d", &point1->x, &point1->y);
    Point2D* point2 = malloc(sizeof(Point2D));
    scanf("%d %d", &point2->x, &point2->y);

    double slope = ptrComputeSlope(point1, point2);
    printf("%.1f", slope);
    free(point1);
    free(point2);
*/
    ///////////COLLINEAR
/*
    Point2D* point1 = malloc(sizeof(Point2D));
    scanf("%d %d", &point1->x, &point1->y);
    Point2D* point2 = malloc(sizeof(Point2D));
    scanf("%d %d", &point2->x, &point2->y);
    Point2D* point3 = malloc(sizeof(Point2D));
    scanf("%d %d", &point3->x, &point3->y);

    int collinear = ptrAreCollinear(point1, point2,point3);
    printf("%d", collinear);
    free(point1);
    free(point2);
    free(point3);

*/
    ////////////RECTCONSTRAINTS

/*
    Rectangle* newRect = malloc(sizeof(Rectangle));
    scanf("%d %d %d %d", &newRect->x, &newRect->y, &newRect->width, &newRect->height);
    Point2D* point1 = malloc(sizeof(Point2D));
    scanf("%d %d", &point1->x, &point1->y);
    int constraintsPoint = ptrRectangleContainsPoint(newRect, point1);
    printf("%d", constraintsPoint);
    free(newRect);
    free(point1);
*/

            /////RECTANGLEUNION
    /*
    Rectangle* newRect1 = malloc(sizeof(Rectangle));
    scanf("%d %d %d %d", &newRect1->x, &newRect1->y, &newRect1->width, &newRect1->height);
    Rectangle* newRect2 = malloc(sizeof(Rectangle));
    scanf("%d %d %d %d", &newRect2->x, &newRect2->y, &newRect2->width, &newRect2->height);

    Rectangle* newRect3 =ptrRectangleUnion(newRect1,newRect2);
    printf("%d %d %d %d", newRect3->x, newRect3->y, newRect3->width, newRect3->height);
    free(newRect1);
    free(newRect2);
    free(newRect3);
*/
        /////RECTANGLE INTERSECTION
    /*
    Rectangle* newRect1 = malloc(sizeof(Rectangle));
    scanf("%d %d %d %d", &newRect1->x, &newRect1->y, &newRect1->width, &newRect1->height);
    Rectangle* newRect2 = malloc(sizeof(Rectangle));
    scanf("%d %d %d %d", &newRect2->x, &newRect2->y, &newRect2->width, &newRect2->height);

    Rectangle* newRect3 =ptrRectangleIntersection(newRect1,newRect2);
    printf("%d %d %d %d", newRect3->x, newRect3->y, newRect3->width, newRect3->height);
    free(newRect1);
    free(newRect2);
    free(newRect3);
*/
    //prtSimplifyFraction();
    //ptrSumFraction();
    //ptrEuclideanDistance3D();
    //ptrQuadrant();
    //ptrSwapAndNegate();
    //ptrComputeSlope();
    //ptrAreCollinear();
    //ptrRectangleContainsPoint();

    return 0;
}
