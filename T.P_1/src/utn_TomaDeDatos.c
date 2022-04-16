/*
 * bibliotecaCalculos.c
 *
 *  Created on: 9 abr. 2022
 *      Author: nicol
 */

#include <stdio.h>
#include <stdlib.h>
/// @brief esta funcion toma un valor entero ingresado por el usuario.
///
/// @param Este puntero se utiliza para devolver el valor por referencia.
/// @param Este puntero indica que mensaje utilizar para la toma de datos.
/// @param Este puntero indica que mensaje utilizar para un error en la toma de datos.
/// @param Este parametro ingresa un valor maximo del entero a pedir.
/// @param Este parametro ingresa un valor minimo del entero a pedir.
/// @param Este parametro ingresa un numero de reintentos maximos de la toma de datos.
/// @return devuelve un valor para verificar si el proceso salio satisfactoriamente.
int utn_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
        int maximo, int minimo, int maximoDeReintentos){

    int auxNumeroIngresado;
    int retorno;
    retorno = -1;

    if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
        do{
            printf("%s", mensaje);
            scanf("%d", &auxNumeroIngresado);
            maximoDeReintentos--;

            if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
                        *pNumeroIngresado = auxNumeroIngresado;
                        retorno = 0;
                        break;
            }else{
                printf("%s", mensajeError);
            }

        }while(maximoDeReintentos > 0);
    }

    return retorno;
}

/// @brief esta funcion toma un valor flotante ingresado por el usuario.
///
/// @param Este puntero se utiliza para devolver el valor por referencia.
/// @param Este puntero indica que mensaje utilizar para la toma de datos.
/// @param Este puntero indica que mensaje utilizar para un error en la toma de datos.
/// @param Este parametro ingresa un valor maximo del flotante a pedir.
/// @param Este parametro ingresa un valor minimo del flotante a pedir.
/// @param Este parametro ingresa un numero de reintentos maximos de la toma de datos.
/// @return devuelve un valor para verificar si el proceso salio satisfactoriamente.
int utn_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
        int maximo, int minimo, int maximoDeReintentos){

	float auxNumeroIngresado;
    int retorno;
    retorno = -1;

    if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
        do{
            printf("%s", mensaje);
            scanf("%f", &auxNumeroIngresado);
            maximoDeReintentos--;

            if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
                        *pNumeroIngresado = auxNumeroIngresado;
                        retorno = 0;
                        break;
            }else{
                printf("%s", mensajeError);
            }

        }while(maximoDeReintentos > 0);
    }

    return retorno;
}
