/*
 * datos.c
 *
 *  Created on: 13 abr 2022
 *      Author: ayrto
 */

#include <stdio.h>
#include <stdlib.h>

int menu(void)
{
	printf("\n1- Ingrese los Kil�metros. \n"
		   "2- Ingrese el precio de los vuelos.\n"
		   "3- Calcular todos los costos. \n"
		   "4- Informar resultados. \n"
		   "5- Carga forzada de datos. \n"
		   "6- Salir. \n"
		   "Ingrese la opci�n deseada: ");

	return 0;
}

int datos(float debitoLatam, float creditoLatam, float debitoAerolineas, float creditoAerolineas, float bitcoinLatam, float bitcoinAerolineas, float precioKmLatam, int kmIngresados, float precioKmAerolineas, float diferenciaPrecios, float precioVueloLatam, float precioVueloAerolineas)
{

	printf("\n  Kil�metros ingresados: %d kms"
		   "\n  Informe de resultados:"
		   "\n  Precio Latam: %f"
		   "\n a) Precio con tarjeta de d�bito: %f"
		   "\n b) Precio con tarjeta de cr�dito: %f"
		   "\n c) Precio pagando con Bitcoin: %f"
		   "\n d) Precio unitario: %f"
		   "\n  Precio Aerol�neas: %f"
		   "\n a) Precio con tarjeta de d�bito: %f"
		   "\n b) Precio con tarjeta de cr�dito: %f"
		   "\n c) Precio pagando con Bitcoin: %f"
		   "\n d) Precio unitario: %f"
		   "\n La diferencia de precios es de: %f" , kmIngresados, precioVueloLatam, debitoLatam, creditoLatam, bitcoinLatam, precioKmLatam, precioVueloAerolineas, debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioKmAerolineas, diferenciaPrecios );


	return 0;
}

float debito(float precio)
	{
		float descuento;

		descuento = precio - (precio * 10/100);

		return descuento;
	}

float credito(float precio)
	{
		float interes;

		interes = precio + (precio * 25/100);

		return interes;
	}

float bitcoin(float precio)
	{
		float btc;

		btc = (float) precio / 4606954.55;

		return btc;
	}

float precioKm(float precio , int kilometros)
	{
		float kmPrecio;

		kmPrecio = (float) precio / kilometros;

		return kmPrecio;
	}

float diferenciaPrecio(float precio1, float precio2)
	{
	float diferencia;

	if(precio2 < precio1)
	{
		diferencia =  (float) precio1 - precio2;
	}
	else
	{
		diferencia = (float) precio2 - precio1;
	}

return diferencia;

}


