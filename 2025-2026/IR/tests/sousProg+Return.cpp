#include <stdio.h>
#include <stdlib.h>

int addV1(int x, int y);
int addV2(int* px, int* py);
void addV3(int* px, int* py, int* pz);

int main()
{
    int X = 10;
    int Y = 20;
    int Z;

    Z = addV1(X, Y); // Z <= X + Y
    printf("%d \n", Z);

    Z = addV2(&X, &Y);
    printf("%d \n", Z);

    addV3(&X, &Y, &Z);
}

int addV1(int x, int y) {
    return (x + y);
}

int addV2(int* px, int* py) {
    return (*px + *py);
}

void addV3(int* px, int* py, int* pz) {
    *pz = *px + *py;
}
