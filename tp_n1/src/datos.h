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
/// @brief Calcula el precio pagando con débito.
/// @param debitoLatam, debitoAerolineas
/// @return El precio con el descuento aplicado por pagar con débito.
float debito(float precio);



/// @fn credito(float)
/// @brief Calcula el precio pagando con crédito.
/// @param creditoLatam, creditoAerolineas
/// @return El precio con aumento por pagar con crédito.
float credito(float precio);


/// @fn bitcoin(float)
/// @brief Calcula el precio pagando con Bitcoin.
/// @param bitcoinLatam, bitcoinAerolineas
/// @return El precio pagando con Bitcoin.
float bitcoin(float precio);



/// @fn precioKm(float,int)
/// @brief Calcula el precio por kilómetro de las aerolíneas.
/// @param precioKmLatam, precioKmAerolineas
/// @return El precio por cada kilómetro.
float precioKm(float precio, int kilometros);

/// @fn diferenciaPrecio(float,float)
/// @brief Calcula la diferencia entre los precios de las aerolíneas.
/// @param diferenciaPrecios
/// @return El precio mayor menos el precio menor.
float diferenciaPrecio(float precio1, float precio2);


#endif /* DATOS_H_ */
