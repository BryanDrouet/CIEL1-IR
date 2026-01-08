// #define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X = 10;
    char chaine[10] = "X = ";


    // --------------   C   ---------------
    int* pX = &X;
    // scanf("%d", pX);

    printf("X = %d \n", X);
    printf("%s%d \n", chaine, X);
    

    // --------------  C++  ---------------
    using namespace std;

    std::cin >> X;
    cout << "X = " << X << endl; 
}
