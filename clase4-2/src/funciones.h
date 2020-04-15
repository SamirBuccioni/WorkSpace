/*
 * funciones.h
 *
 *  Created on: Apr 14, 2020
 *      Author: samir
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

int utn_getNumero(int* pResultado, char* mensaje,char* mensajeError, int minimo,int maximo,int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje,char* mensajeError, float minimo,float maximo,int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos);
int getRandomNumber(int from, int to, int iniciar);

#endif /* FUNCIONES_H_ */
