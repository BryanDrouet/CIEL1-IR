#include <stdio.h>
#include <stdlib.h>

int addV1(int x, int y) {
    return (x + y);
}

int main()
{
    int X = 10;
    int Y = 20;
    int Z;

    Z = addV1(X, Y); // Z = X + Y
    printf("%d", Z);
}
