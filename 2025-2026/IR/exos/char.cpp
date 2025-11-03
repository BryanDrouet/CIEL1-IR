#include <stdio.h>
#include <stdlib.h>

#define NB_CHAR 10

int main()
{
  char TabChar[NB_CHAR] = "Bonjour";

  int i;
  while (TabChar[i] != '\0') {
    printf("%c \n", TabChar[i]);
    i = i + 1;
  }
  printf("\n");
}
