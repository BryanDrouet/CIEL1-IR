#include <stdio.h>
#include <stdlib.h>

#define NB 100

int main() 
{
    int tab[NB];
    int S = 0;

    for (int i = 0; i < NB; i = i + 1) {
        tab[i] = i + 1;
        S = S + tab[i];
    }

    for (int i = 0; i < NB; i = i + 1) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    printf("S = %d\n", S);
    float Moyenne = ((float)S) / NB;
    printf("Moyenne = %f\n", Moyenne);
}