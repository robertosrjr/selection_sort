/*
 ============================================================================
 Name        : SelectionSort.c
 Author      : Roberto S. Ramos Jr
 Version     :
 Copyright   : robertosrjr@gmail.com
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

int vec[] = {12, 58, 16, 38, 31, 23, 37, 11, 42, 27};

void troca(int* a, int* b) {

	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int selectionSort(int vec[], int tam) {

	int i, j, min, qtd=0;
	for (i = 0; i < (tam-1); i++) {

		min = i;
		for (j = (i+1); j < tam; j++) {

			if(vec[j] < vec[min]) {

				min = j;
			}
			qtd++;
		}
		if (i != min) {

			troca(&vec[i], &vec[min]);
		}
	}
	return(qtd);
}

void print_vector() {

	int i;
	for (i = 0; i < tamanho -1; i++) {

		printf("%d, ", vec[i]);
	}
}

int main(void) {

	printf("Selection Sort\n\n ");
	int qtde = 0;
	printf("Imprimir vector desordenado: ");
	print_vector();
	printf("\n");

	qtde = selectionSort(vec, tamanho);
	printf("Imprimir vector ordenado: ");
	print_vector();
	printf("\n");

	printf("Quantidade de Iterações: %d", qtde);

	return EXIT_SUCCESS;
}
