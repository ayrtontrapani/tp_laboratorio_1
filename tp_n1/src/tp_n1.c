/*
 ============================================================================
 Name        : tp_n1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "datos.h"

int main(void)
{
	setbuf(stdout, NULL);

	int respuesta;
	int kmIngresados;
	float precioVueloAerolineas;
	float precioVueloLatam;
	float debitoLatam;
	float debitoAerolineas;
	float creditoLatam;
	float creditoAerolineas;
	float bitcoinLatam;
	float bitcoinAerolineas;
	float precioKmLatam;
	float precioKmAerolineas;
	float diferenciaPrecios;

	int flagUno = 0;
	int flagDos = 0;
	int flagTres = 0;


	do
	{
		menu();

		scanf("%d", &respuesta);

		switch(respuesta)
		{
		case 1:
			printf("\n Ingrese los kil?metros deseados");
			scanf("%d", &kmIngresados);

			flagUno = 1;

			break;

		case 2:
			if(flagUno == 0)
			{
					printf("\n Error, debe ingresar los kil?metros en la opci?n 1");
			}
			else
			{
				printf("\n Ingrese el precio del vuelo de Aerolineas");
				scanf("%f", &precioVueloAerolineas);

				printf("\n Ingrese el precio del vuelo de Latam");
				scanf("%f", &precioVueloLatam);

				flagDos=1;
			}

			break;

		case 3:
			if(flagDos == 0)
				{
					printf("\n Error, debe ingresar los precios de los vuelos en la opci?n 2");
				}

			if(precioVueloAerolineas < 1 && precioVueloLatam < 1 && kmIngresados < 1)
			{
				printf("Error, los datos ingresados deben ser mayores a 1\n");
			}
			else
			{
				debitoLatam = debito(precioVueloLatam);
				debitoAerolineas = debito(precioVueloAerolineas);
				creditoLatam = credito(precioVueloLatam);
				creditoAerolineas = credito(precioVueloAerolineas);
				bitcoinLatam = bitcoin(precioVueloLatam);
				bitcoinAerolineas = bitcoin(precioVueloAerolineas);
				precioKmLatam = precioKm(precioVueloLatam, kmIngresados);
				precioKmAerolineas = precioKm(precioVueloAerolineas, kmIngresados);
				diferenciaPrecios = diferenciaPrecio(precioVueloLatam, precioVueloAerolineas);

				flagTres = 1;

			}
			break;

		case 4:
			if(flagTres == 0)
			{
				printf("Error, debe calcular los costos en la opci?n 3.\n");
			}
			else
			{
				datos(debitoLatam,creditoLatam,debitoAerolineas,creditoAerolineas,bitcoinLatam,bitcoinAerolineas,precioKmLatam,kmIngresados,precioKmAerolineas,diferenciaPrecios,precioVueloLatam,precioVueloAerolineas);
			}
			break;

		case 5:

			kmIngresados = 7090;
			precioVueloAerolineas = 162965;
			precioVueloLatam = 159339;

			debitoLatam = debito(precioVueloLatam);
			creditoLatam = credito(precioVueloLatam);
			bitcoinLatam = bitcoin(precioVueloLatam);

			debitoAerolineas = debito(precioVueloAerolineas);
			creditoAerolineas = credito(precioVueloAerolineas);
			bitcoinAerolineas = bitcoin(precioVueloAerolineas);

			precioKmLatam = precioKm(precioVueloLatam, kmIngresados);
            precioKmAerolineas = precioKm(precioVueloAerolineas, kmIngresados);
            diferenciaPrecios = diferenciaPrecio(precioVueloAerolineas, precioVueloLatam);

            datos(debitoLatam,creditoLatam,debitoAerolineas,creditoAerolineas,bitcoinLatam,bitcoinAerolineas,precioKmLatam,kmIngresados,precioKmAerolineas,diferenciaPrecios,precioVueloLatam,precioVueloAerolineas);

            break;

		default:
			printf("Fin");


		}
	} while (respuesta != 6);

	return 0;

}
