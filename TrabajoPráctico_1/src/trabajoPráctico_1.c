

#include <stdio.h>
#include <stdlib.h>
#include "OperacionesAritmeticas.h"


int main(void) {

	setbuf(stdout,NULL);

	float operando1;
	float operando2;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	long int resultadoFactorial1;
	long int resultadoFactorial2;
	//int flagOperando1;
	//int flagOperando2;

	//flagOperando1 = 0;
	//flagOperando2 = 0;
	operando1 = 0;
	operando2 = 0;

	int opcion;


	do
	    {
			printf("\nCalculadora UTN \n");

			if(operando1 != 0)
			{
				printf("\n1. Cargar primer operando (%.2f)", operando1);

			}else
			{
				printf("\n1. Cargar primer operando (x = 0)");

			}


			if(operando2 != 0)
			{
				printf("\n1. Cargar segundo operando (%.2f)", operando2);


			}else
			{
				printf("\n1. Cargar segundo operando (x = 0)");
			}


	        printf("\n3. Realizar operaciones");
	        printf("\n4. Mostrar resultados");
	        printf("\n5. Salir\n");
	        printf("\nElija una opcion: ");
	        scanf("%d", &opcion);

	        switch(opcion)
	        {
	            case 1:
	            	printf("\nIngrese el primer operando: \n");
	            	scanf("%f", &operando1);





	            break;
	            case 2:
	            	printf("\nIngrese el segundo operando: \n");
	            	scanf("%f", &operando2);



	            break;
	            case 3:

	            	 printf("\nRealizando las operaciones...\n");

	            	 resultadoSuma = Sumar(operando1, operando2);
	            	 resultadoResta = Restar(operando1, operando2);
	            	 resultadoMultiplicacion = Multiplicar(operando1, operando2);
	            	 resultadoDivision  = Dividir(operando1, operando2);
	            	 resultadoFactorial1 = Factorial(operando1);
	            	 resultadoFactorial2 = Factorial(operando2);

	            break;
	            case 4:

	                printf("\nEl resultado de la suma es : %.2f \n", resultadoSuma);
	                printf("\nEl resultado de la resta es: %.2f \n", resultadoResta);
	                printf("\nEl resultado de la multiplicacion es: %.2f \n", resultadoMultiplicacion);
	                printf("\nEl factorial del operando 1 es %ld \n",resultadoFactorial1);
	                printf("\nEl factorial del operando 2 es %ld \n", resultadoFactorial2);

	                if(resultadoDivision==0)
	                {
	            		printf(" \nNo se puede dividir por cero.\n");

	                } else
	                {
		                printf("\nEl resultado es: %2.f \n", resultadoDivision);

	                }

	            break;
	            case 5:
	            	printf("\nGracias por utilizar este programa.\n");

	        }

	    }while(opcion!=5);



	return EXIT_SUCCESS;
}

















