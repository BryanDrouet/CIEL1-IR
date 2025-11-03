#include <stdio.h>
#include <stdlib.h>

#define NB_CHAR 8

int main()
{
    char TabChar[NB_CHAR] = "Bonjour";
    int i = 0;

    while ((i < NB_CHAR) && (TabChar[i] != '\0'))
    {
        i++;
        printf("%c \n", TabChar[i]);
    }
    printf("Fin de boucle");
}
