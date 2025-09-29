// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NB_TOURS 5

int main()
{
	int i1;
	for (i1 = 0; i1 < NB_TOURS; i1++)
	{
		printf("Bonjour\n");
	}
	printf("\n");

	int i2;
	int j2;
	for (i2 = 0; i2 < NB_TOURS; i2++)
	{
		for (j2 = 0; j2 < i2; j2++)
		{
			printf("\t");
		}
		printf("Bonjour\n");
	}
	printf("\n");

	int i3;
	int j3;
	for (i3 = NB_TOURS; i3 > 0; i3--)
	{
		for (j3 = 1; j3 < i3; j3++)
		{
			printf("\t");
		}
		printf("Bonjour\n");
	}
	printf("\n");
}
