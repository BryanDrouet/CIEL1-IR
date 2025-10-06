#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nbMystere = 5;
	int nbLu = 0;
	int nbEssaisMax = 4;
	int compteur = 0;

	while ( (nbLu != nbMystere) && ( compteur < nbEssaisMax)  ) {
		printf("Donner un nombre entier \n");
		scanf("%d", &nbLu);

		if (nbLu > nbMystere) { // nbLu > nbMystere
			printf("Trop haut\n");
		}
		else 
		{ // nbLu <= nbMystere
			if (nbLu < nbMystere) // nbLu < nbMystere
			{
				printf("Trop bas\n");
			}
			else // nbLu == nbMystere
			{
				printf("Egalité\n");
			}
		}
		compteur = compteur + 1;
	}
	printf("Le nombre mystere = %d\n", nbMystere);
}