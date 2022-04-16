#include <stdio.h>
#include <stdlib.h>

/// @brief esta funcion calcula el descuento
///
/// @param Este parametro toma una copia del precio ingresado
/// @param Este puntero sirve para devolver el resultado por referencia.
/// @param Esta variable sirve para ingresar el descuento que se quiera hacer en porcentaje.
float calculoDescuentoPorcentaje(float Precio, float *pResultado, int descuento)
{
float resultado;

if(pResultado != NULL){

resultado = (Precio * descuento)/100;
*pResultado = Precio - resultado;

}
return 0;
}
/// @brief esta funcion calcula el aumento
///
/// @param Este parametro toma una copia del precio ingresado
/// @param Este puntero sirve para devolver el resultado por referencia.
/// @param Este parametro toma una copia del aumento que se quiera hacer en porcentaje.
float calculoAumentoPorcentaje(float Precio, float *pResultado, int aumento)
{
float resultado;

if(pResultado != NULL ){

resultado = (Precio * aumento)/100;
*pResultado = Precio + resultado;

}
return 0;
}

/// @brief Esta funcion pasa el precio ingresado en pesos a bitcoin.
///
/// @param se ingresa una copia del precio.
/// @param Se ingresa una copia del valor actual del bitcoin.
/// @return devuelve el resultado en bitcoin.
float calculoBitcoin(float precio, float precioBitcoin){

	float resultado;

	resultado = precio / precioBitcoin;

	return resultado;

}
/// @brief esta funcion divide.
///
/// @param se ingresa una copia del dividendo.
/// @param se ingrersa una copia del divisor.
/// @return devuelve el resultado.
float calculoDivisor(float dividendo, int divisor){
	float total;
	total = dividendo / divisor;
	return total;
}
/// @brief esta funcion calcula la diferencia entre 2 precios.
///
/// @param se ingresa una copia del precio a comparar.
/// @param se ingresa una copia del segundo precio a comparar.
/// @return devuelve el resultado.
float calculoDiferencia(float precio1, float precio2)
{
	int resultado;
	resultado = precio1 - precio2;
	if(resultado <0){
		resultado = precio2 - precio1;
	}

	return resultado;
}






















