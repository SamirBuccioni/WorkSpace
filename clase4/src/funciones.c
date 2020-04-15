/*
 * funciones.c
 *
 *  Created on: Apr 14, 2020
 *      Author: samir
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int getInt(char mensaje[]){
	int auxiliar;
	printf("%s", mensaje);
	scanf("%d", &auxiliar);
	return auxiliar;
}

float getFloat(char mensaje[]){
	float auxiliar;
	printf("%s", mensaje);
	__fpurge(stdin);
	scanf("%f", &auxiliar);
	return auxiliar;
}

char getChar(char mensaje[]){

	char auxiliar;
	printf("%s", mensaje);
	__fpurge(stdin);
	scanf("%c", &auxiliar);
	return auxiliar;
}

int getRandomNumber(int from, int to, int iniciar){

	if (iniciar)
		srand(time(NULL));
	return from + (rand() % (to + 1 - from));
}
