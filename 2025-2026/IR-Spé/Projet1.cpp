#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X = 10;
    int* pX = &X;
    char chaine[10] = "X = ";

    scanf("%d", pX);

    printf("X = %d \n", X);
    printf("%s%d \n", chaine, X);

    std::cout << "X = " << X << std::endl;
}
