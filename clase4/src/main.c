/*
Diseñar un programa para jugar a adivinar un número entre 0 y 100. El juego tiene que dar pistas de si
el número introducido por el jugador está por encima o por debajo. El juego termina cuando se adivina
el número o se decide terminar de jugar ingresando un número negativo. Permitir jugar tantas veces
como lo desee el jugador y al salir mostrar su mejor puntuación. Utilizar la biblioteca del ejercicio #001.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <time.h>
#include "funciones.h"

int main(void) {

	int random;
	int numero;
	char jugar;
	int intentos = 0;
	int puntuacion = 0;
	int i =0;

	do {
		random = getRandomNumber(1, 100,1);

		do{
			numero = getInt("adivine el numero entre 1 y 99 o ingrese un numero negativo para dejar de jugar \n");
			if (numero < 0){
				break;
			}
			else if(numero == random){
				printf("GANASTE!\n");
			}
			else if(numero < random){
				printf("muy bajo\n");
			}
			else if(numero > random){
				printf("muy alto\n");
			}

			intentos ++;

		}while (numero != random);
		i ++;

		if(i==1 || intentos < puntuacion){
			puntuacion = intentos;
		}
		intentos = 0;

		jugar = getChar("si desea seguir jugando ingrese s \n");


	}while(jugar == 's');

	printf("su menor numero de intentos fue %d", puntuacion);

	return EXIT_SUCCESS;
}
