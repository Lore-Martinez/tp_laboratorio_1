#include <stdio.h>
#include <stdlib.h>

#include "OperacionesAritmeticas.h"

/** \brief Sumar calcula la suma de dos números de tipo float.
 *
 * \param numero1 y param numero2 son los números a sumar
 * \return Retorna el resultado de la suma entre los dos números
 *
 *
 */

float Sumar(float numero1, float numero2) // declaro la función y le asigno dos parámetros de tipo float


// desarrollo la función
{
	float resultado;

	resultado = numero1 + numero2;

	return resultado; //termina la función y retorna el resultado
}

/** \brief Resta le resta a un número el valor de otro número, ambos de tipo float.
 *
 * \param numero1 es el minuendo, param numero2 es el sustraendo. Al minuendo le resta el sustraendo
 * \return Retorna el resultado de la resta, es decir, el resto o la diferencia entre ambos números.
 *
 *
 */

float Restar(float numero1, float numero2) // declaro la función y le asigno dos parámetros de tipo float


// desarrollo la función
{
	float resultado;

	resultado = numero1 - numero2;

	return resultado; //termina la función y retorna el resultado

}

/** \brief MUltiplicar realiza la multiplicación entre dos números.
 *
 * \param numero1 es el primer factor ingresado
 * \param numero2 es el segundo factor ingresado
 * \return Retorna el resultado entre los dos factores, es decir, el producto.
 *
 *
 */

float Multiplicar(float numero1, float numero2) // declaro la función y le asigno dos parámetros de tipo float


// desarrollo la función
{
	float resultado;

	resultado = numero1 * numero2;

	return resultado; //termina la función y retorna el resultado

}

/** \brief Dividir calcula la división entre dos números, validando que el divisor no sea cero.
 *
 * \param numero1 dividendo
 * \param numero2 divisor
 * \return Retorna el resultado de la división entre ambos números.
 *
 *
 */



float Dividir(float numero1, float numero2) // declaro la función y le asigno dos parámetros de tipo float


// desarrollo la función
{
	float resultado;

	if(numero2 ==0)
	{
		resultado = 0; // termina la función y retorna cero
	}

	else
	{
		resultado = numero1 / numero2;
		return resultado; // termina la función y retorna el resultado
	}


		return 0; // salgo de la función y retorno cero.

}

/** \brief Factorial calcula con una función recursiva, el factorial de un número
 *
 * \param numeroIngresado Número a calcular el factorial.
 * \return Retorna 1 si el valor ingresado es menor a uno, retorna el factorial si el valor ingresado es
 * es igual o mayor a uno.
 *
 */

int Factorial(int numeroIngresado)
{
	if(numeroIngresado<1) {
		return 1;
	}
	else
	{
		return(numeroIngresado*Factorial(numeroIngresado-1));
	}
}





