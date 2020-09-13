#include <stdio.h>
#include <stdlib.h>

#include "OperacionesAritmeticas.h"

float Sumar(float numero1, float numero2)

{
	float resultado;

	resultado = numero1 + numero2;

	return resultado;
}



float Restar(float numero1, float numero2)
{
	float resultado;

	resultado = numero1 - numero2;

	return resultado;

}

float Multiplicar(float numero1, float numero2)

{
	float resultado;

	resultado = numero1 * numero2;

	return resultado;

}

float Dividir(float numero1, float numero2)
{
	float resultado;

	if(numero2 ==0)
	{
		resultado = 0;
	}

	else
	{
		resultado = numero1 / numero2;
		return resultado;
	}


		return 0;

	}


int validarNumeroIngresado(int numeroIngresado)
{
	int resultado;

	resultado = 0;


	if(resultado == 0)
	{
		printf("No se puede realizar operación. Por favor, reingrese.\n");
	}

	return 0;
}


