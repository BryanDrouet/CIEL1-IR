// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NB_TOURS 5

int main()
{
	/*
	int i;
	for (i = 0; i < NB_TOURS; i++)
	{
		printf("Bonjour\n");
	}

	int i;
	int j;
	for (i = 0; i < NB_TOURS; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("\t");
		}
		printf("Bonjour\n");
	}
	*/

	int i;
	int j;
	for (i = NB_TOURS; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			printf("\t");
		}
		printf("Bonjour\n");
	}
}
