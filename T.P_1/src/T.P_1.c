/*
 ============================================================================
 Name        : P_1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_TomaDeDatos.h"
#include "utn_Calculos.h"
const int descuento = 10;
const int aumento = 25;
const float precioBitcoin = 4606954.55;

int main(void){
	setbuf(stdout, NULL);
	int opcion;
	int salir;
	int kilometros;
	int retorno;
	int retorno2;
	int flag;
	float precioLatam;
	float precioLatamDebito;
	float precioLatamCredito;
	float precioLatamBitcoin;
	float precioLatamUnitario;
	float precioAerolineas;
	float precioAerolineasDebito;
	float precioAerolineasCredito;
	float precioAerolineasBitcoin;
	float precioAerolineasUnitario;
	float diferenciaDePrecio;
	salir=0;
	precioLatam = 0;
	precioLatamDebito = 0;
	precioLatamCredito = 0;
	precioLatamBitcoin = 0;
	precioLatamUnitario = 0;
	precioAerolineas = 0;
	precioAerolineasDebito = 0;
	precioAerolineasCredito = 0;
	precioAerolineasBitcoin = 0;
	precioAerolineasUnitario = 0;
	diferenciaDePrecio = 0;
	opcion = 0;
	kilometros = 0;
	retorno = 0;
	retorno2 = 0;
	flag = 0;

	do{
		if(flag == 0){
	printf("\n1. Ingresar kilometros: (KM=%d)\n",kilometros);
	printf("\n2. Ingresar precio de vuelos: (Latam=%.0f , Aerolineas=%.0f)\n",precioLatam,precioAerolineas);
	printf("\n3. calcular todos los costos");
	printf("\n a) Tarjeta de débito (descuento 10%%)");
	printf("\n b) Tarjeta de crédito (interés 25%%)");
	printf("\n c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)");
	printf("\n d) Mostrar precio por km (precio unitario)");
	printf("\n e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
	printf("\n4. informar resultados\n");
	printf("\n5. carga forzada de datos\n");
    printf("\n6. salir\n");
    scanf("%d",&opcion);
		}

    switch(opcion){

    case 1:utn_getInt(&kilometros,"Ingresar kilometros\n","No es un valor correcto\n",15000,1,3);
    break;

    case 2:

           retorno = utn_getFloat(&precioLatam,"ingresar precio de Latam\n","No es un valor correcto\n",999999999,1,3);

           if(retorno ==0){
            retorno2 = utn_getFloat(&precioAerolineas,"ingresar precio de Aerolineas\n","No es un valor correcto\n",999999999,1,3);
           }

            if(retorno2 == -1){
            	precioLatam =0;
            	precioAerolineas =0;
            }
    break;

    case 3:
    	if(retorno == 0 && retorno2 == 0 && kilometros !=0){
    	calculoDescuentoPorcentaje(precioLatam,&precioLatamDebito, descuento);
    	calculoAumentoPorcentaje(precioLatam,&precioLatamCredito, aumento);
    	precioLatamBitcoin = calculoBitcoin(precioLatam , precioBitcoin);
    	precioLatamUnitario = calculoDivisor(precioLatam, kilometros);
    	calculoDescuentoPorcentaje(precioAerolineas,&precioAerolineasDebito, descuento);
    	calculoAumentoPorcentaje(precioAerolineas,&precioAerolineasCredito, aumento);
    	precioAerolineasBitcoin = calculoBitcoin(precioAerolineas , precioBitcoin);
    	precioAerolineasUnitario = calculoDivisor(precioAerolineas, kilometros);
    	diferenciaDePrecio = calculoDiferencia(precioAerolineas,precioLatam);

    	if(flag ==1){
    		opcion = 4;
    	}
    	}
    	else{
    		printf("Los precios o kilometros no fueron bien ingresados, vuelve a intentarlo\n");
    	}
    	break;

    case 4:
    	printf("KMs ingresados: %d km\n",kilometros);
    	printf("\n Latam: $%.2f",precioLatam);
    	printf("\n a) Precio con tarjeta de débito: $%.2f",precioLatamDebito);
    	printf("\n b) Precio con tarjeta de crédito: $%.2f",precioLatamCredito);
    	printf("\n c) Precio pagando con bitcoin : $%.6f BTC", precioLatamBitcoin);
    	printf("\n d) Precio unitario: $%.2f\n", precioLatamUnitario);
    	printf("\n Aerolineas: $%.2f",precioAerolineas );
    	printf("\n a) Precio con tarjeta de débito: $%.2f", precioAerolineasDebito);
    	printf("\n b) Precio con tarjeta de crédito: $%.2f",precioAerolineasCredito);
    	printf("\n c) Precio pagando con bitcoin : $%.6f BTC", precioAerolineasBitcoin);
    	printf("\n d) Precio unitario: $%.2f\n", precioAerolineasUnitario);
    	printf("\n La diferencia de precio es: $%.2f\n",diferenciaDePrecio);
    	salir=1;
    	break;

    case 5: flag = 1;
           opcion = 3;
           precioLatam = 159339;
           precioAerolineas =162965;
           kilometros = 7090;

    	break;

    case 6:
    	salir=1;
    	break;
    }

	}while(salir ==0);


}



