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

/// @fn debito(float)
/// @brief Calcula el precio pagando con d�bito.
/// @param debitoLatam, debitoAerolineas
/// @return El precio con el descuento aplicado por pagar con d�bito.
float debito(float precio);



/// @fn credito(float)
/// @brief Calcula el precio pagando con cr�dito.
/// @param creditoLatam, creditoAerolineas
/// @return El precio con aumento por pagar con cr�dito.
float credito(float precio);


/// @fn bitcoin(float)
/// @brief Calcula el precio pagando con Bitcoin.
/// @param bitcoinLatam, bitcoinAerolineas
/// @return El precio pagando con Bitcoin.
float bitcoin(float precio);



/// @fn precioKm(float,int)
/// @brief Calcula el precio por kil�metro de las aerol�neas.
/// @param precioKmLatam, precioKmAerolineas
/// @return El precio por cada kil�metro.
float precioKm(float precio, int kilometros);

/// @fn diferenciaPrecio(float,float)
/// @brief Calcula la diferencia entre los precios de las aerol�neas.
/// @param diferenciaPrecios
/// @return El precio mayor menos el precio menor.
float diferenciaPrecio(float precio1, float precio2);


#endif /* DATOS_H_ */
