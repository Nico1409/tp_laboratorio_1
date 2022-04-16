/*
 * bibliotecaCalculos.h
 *
 *  Created on: 9 abr. 2022
 *      Author: nicol
 */

#ifndef UTN_TOMADEDATOS_H_
#define UTN_TOMADEDATOS_H_

int utn_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
        int maximo, int minimo, int maximoDeReintentos);

int utn_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
        int maximo, int minimo, int maximoDeReintentos);
#endif

