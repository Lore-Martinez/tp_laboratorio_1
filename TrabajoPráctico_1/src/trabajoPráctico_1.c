

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
				printf("\n2. Cargar segundo operando (%.2f)", operando2);


			}else
			{
				printf("\n2. Cargar segundo operando (x = 0)");
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
	            	if(operando1 != 0 && operando2 != 0)
	            	{
	            		printf("Realizando suma: (%.2f + %.2f)", operando1, operando2);
	            		printf("\nRealizando resta: (%.2f - %.2f)", operando1, operando2);
	            		printf("\nRealizando multiplicacion: (%.2f * %.2f)", operando1, operando2);
	            		printf("\nRealizando division: (%.2f / %.2f)", operando1, operando2);
	            		printf("\nRealizando factorial del primer operando: (!%.2f)", operando1);
	            		printf("\nRealizando factorial del segundo operando: (!%.2f)", operando2);

	            		resultadoSuma = Sumar(operando1, operando2);
	            		resultadoResta = Restar(operando1, operando2);
	            		resultadoMultiplicacion = Multiplicar(operando1, operando2);
	            		resultadoDivision  = Dividir(operando1, operando2);
	            		resultadoFactorial1 = Factorial(operando1);
	            		resultadoFactorial2 = Factorial(operando2);
	            	}else
	            	{
	            		printf("Usted no ha ingresado alguno de los operandos. Por favor, ingreselo para realizar las operaciones");
	            	}

	            break;

	            case 4:

	                printf("\nEl resultado de la suma es : %.2f \n", resultadoSuma);
	                printf("\nEl resultado de la resta es: %.2f \n", resultadoResta);
	                printf("\nEl resultado de la multiplicacion es: %.2f \n", resultadoMultiplicacion);
	                if(resultadoDivision==0)
	                	{
	                		printf(" \nNo se puede dividir por cero.\n");

	                	} else
	                	{
	                		printf("\nEl resultado es de la division es: %.2f \n", resultadoDivision);

	                	}
	                printf("\nEl factorial del operando 1 es %ld \n",resultadoFactorial1);
	                printf("\nEl factorial del operando 2 es %ld \n", resultadoFactorial2);
	            break;

	            case 5:
	            	printf("\nGracias por utilizar este programa.\n");

	        }

	    }while(opcion!=5);



	return EXIT_SUCCESS;
}

















