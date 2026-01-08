#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

void initPoint(Point* pPoint, float x, float y)
{
    pPoint -> X = x;
    pPoint -> Y = y;
}

void afficherPoint(const Point* pPoint)
{
    printf("X = %f \n", pPoint -> X);
    printf("Y = %f \n", pPoint -> Y);
}
