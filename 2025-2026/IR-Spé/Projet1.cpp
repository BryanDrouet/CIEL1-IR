#include <iostream>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X = 10;
    char chaine[10] = "X = ";

    printf("X = %d \n", X);
    printf("%s%d \n", chaine, X);

    std::cout << "X = " << X << std::endl;
}
