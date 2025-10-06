#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define NB_TOURS 10
int main() 
{
	// V1
	for (int i = 0; i < NB_TOURS; i = i + 1) {
		printf("Bonjour\n");
	}

	// V2
	for (int i = 0; i < NB_TOURS; i = i + 1) {
	// Decalage vertical

		for (int j = 0; j < i; j = j + 1) {
		// Decalage horizontal
			// i decalages
			printf("\t");
		}
		printf("Bonjour\n");
	}

	// V3
	for (int i = 0; i < NB_TOURS; i = i + 1) {

		for (int j = NB_TOURS - i - 1; 0 < j; j = j - 1) {
			printf("\t");
		}
		printf("Bonjour\n");
	}
}