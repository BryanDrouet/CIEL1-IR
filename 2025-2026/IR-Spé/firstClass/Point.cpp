#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

struct tableau {
    float x;
    float y;
};

struct tableau monPoint;

void initPoint()
{
    monPoint.x = 10;
    monPoint.y = 20;
}

void afficherPoint()
{
    printf("Coordonnees : x = %f | y = %f \n", monPoint.x, monPoint.y);
}
