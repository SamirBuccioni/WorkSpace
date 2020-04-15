/*
 *
 * ahora hacer un ordenamiento de array desde cero
 ============================================================================
 Name        : ordenamientoBurbujeo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QTY_ALUMNOS 9


void printArray(int* pArray, int limite);
int ordenarArray(int* pArray, int limite);
void intSwap(int*pNumeroA, int*pNumeroB);

int main(void) {

	int edades [QTY_ALUMNOS] = {54, 26, 93, 17, 77, 31, 44, 55, 27};
	int respuesta;

	printArray(edades, QTY_ALUMNOS);
	respuesta = ordenarArray(edades, QTY_ALUMNOS);


	return EXIT_SUCCESS;
}

ordenarArray(int* pArray, int limite){
	int retorno = -1;
	int i;
	int flagSwap;
	int contador = 0;
	if (pArray != NULL && limite > 0){
		retorno= 0;

		do{
			flagSwap=0;

			for(i=0;i<limite;i++){
				contador++;
				if(pArray[i] < pArray[i+1]){
					intSwap(&pArray[i],&pArray[i+1]);
				}
			}
		}while(flagSwap);
	}
}

void intSwap(int*pNumeroA, int*pNumeroB){

	int buffer;
	buffer = *pNumeroA;
	*pNumeroA = *pNumeroB;
	*pNumeroB = buffer;

}

void printArray(int* pArray, int limite){
	int i;
	for(i=0; i<limite;i++){
		printf("[DEBUG] INDEX: %d - VALUE: %d \n", i, pArray[i]);
	}

}
