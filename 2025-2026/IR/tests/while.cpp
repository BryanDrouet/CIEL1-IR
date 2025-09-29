#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int nbMystere = 5;
    int nbLu = 0;
    int nbEssaiMax = 4;

    while ((nbLu != nbMystere) && (nbEssaiMax > 0, nbEssaiMax --)) {
        printf("Donner un nombre entier \n");
        scanf("%d", &nbLu);
        if (nbLu < nbMystere) {
            printf("C'est plus !\n");
        }
        else if (nbLu > nbMystere) {
            printf("C'est moins !\n");
        }
        else if (nbLu == nbMystere)
        {
            printf("\n\nExact !\n");
        }
    }
    printf("Le nombre mystere = %d\n", nbMystere);
}
