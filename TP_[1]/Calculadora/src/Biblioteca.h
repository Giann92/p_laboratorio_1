
#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>
/// @fn float IngresarNumero(char[])
/// @brief Pide y devuelve 	un numero
///
/// @pre
/// @post
/// @param mesaje El texto que se muestra para pedir numero
/// @return El numero ingresado
float IngresarNumero(char mesaje[]);
/// @fn float Suma(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pres
/// @post
/// @param x Resive un numero ingresado
/// @param y Resive el otro numero ingresado
/// @return El resultado de la suma
float Suma(float , float);
/// @fn float Resta(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param x Resive un numero ingresado
/// @param y Resive el otro numero ingresado
/// @return El resultado de la resta
float Resta(float , float );
/// @fn float Division(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param x Resive un numero ingresado
/// @param y Resive el otro numero ingresado
/// @return El resultado de la division
float Division(float ,float );
/// @fn float Multiplicacion(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param x Resive un numero ingresado
/// @param y Resive el otro numero ingresado
/// @return El resultado de la multiplicacion
float Multiplicacion(float ,float );
/// @fn float FactorialA(float)
/// @brief Pide un numero para el calculo
///
/// @pre
/// @post
/// @param x Resive el numero ingresado
/// @return El resultado del factorial
float FactorialA(float);
/// @fn float FactorialB(float)
/// @brief Pide un numero para el calculo
///
/// @pre
/// @post
/// @param y Resive el numero ingresado
/// @return El resutado del factorial
float FactorialB(float);

#endif /* BIBLIOTECA_H_ */
