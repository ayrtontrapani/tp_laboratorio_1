/*
 * datos.h
 *
 *  Created on: 13 abr 2022
 *      Author: ayrto
 */

#ifndef DATOS_H_
#define DATOS_H_

int datos(float debitoLatam, float creditoLatam, float debitoAerolineas, float creditoAerolineas, float bitcoinLatam, float bitcoinAerolineas, float precioKmAerolineas, int kmIngresados, float precioKmLatam, float diferenciaPrecios,float precioVueloLatam,float precioVueloAerolineas);
int menu(void);

float debito(float precio);
float credito(float precio);
float bitcoin(float precio);
float precioKm(float precio, int kilometros);
float diferenciaPrecio(float precio1, float precio2);


#endif /* DATOS_H_ */
