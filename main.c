#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main (void)
{
	setbuf(stdout, NULL);
	int operandoA;
	int operandoB;
	int opcion;
	int resSuma;
	int resResta;
	float resDivision;
	int resMultiplicacion;
	int resFactoreoA;
	int resFactoreoB;
	int verificadorFactoreo = 0;

	printf("\nBienvenido a la calculadora!");

	do
	{
		printf("\nIngrese la opcion de la operacion que desea realizar: \n1. Ingresar el Primer numero\n2. Ingresarel segundo numero\n3. Realizar todas las operaciones (Suma, resta, division, multiplicaion, factoreo)\n4. Mostrar los resultados de las operaciones\n5. Salir.\nIngreso: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:
			if(getInt("\nIngrese el primer operando: ", "\nError, ingrese un numero valido: ", &operandoA, 5, 32767, -32768) == 0)
			{
			}
			break;
		case 2:
			if(getInt("\nIngrese el segundo operando: ", "\nError, ingrese un numero valido: ", &operandoB, 5, 32767, -32768) == 0)
			{
			}
			break;
		case 3:
			sumar(operandoA, operandoB, &resSuma);

			restar(operandoA, operandoB, &resResta);

			dividir(operandoA, operandoB, &resDivision);

			multiplicar(operandoA, operandoB, &resMultiplicacion);

			if(buscarFactorial(operandoA, &resFactoreoA) != 0)
			{
				printf("\nERROR - El primer numero no puede ser factorizado.\n");
				verificadorFactoreo = -1;
			}
			else
			{
				buscarFactorial(operandoA, &resFactoreoA);
			}

			if(buscarFactorial(operandoB, &resFactoreoB) != 0)
			{
				printf("\nERROR - El segundo numero no puede ser factorizado.\n");
				verificadorFactoreo = -1;
			}
			else
			{
				buscarFactorial(operandoB, &resFactoreoB);
			}
			break;
		case 4:
			printf("\nLos operandos son %d y %d",operandoA, operandoB);
			printf("\nEl resultado de A+B es: %d", resSuma);
			printf("\nEl resultado de A-B es: %d", resResta);
			if(dividir(operandoA, operandoB, &resDivision) != 0)
			{
				printf("\nERROR - No se puede dividir por cero.");
			}
			else
			{
				printf("\nEl resultado de A/B es: %.3f", resDivision);
			}
			printf("\nEl resultado de A*B es: %d", resMultiplicacion);
			if (verificadorFactoreo == 0)
			{
				printf("\nEl factorial de A es: %d y el factorial de B es: %d\n", resFactoreoA, resFactoreoB);
			}
			else
			{
				printf("No se pudo realizar la factorizacion de uno de los elementos.\n");
			}
			break;
		case 5:

			break;
		}

	}while (opcion != 5);


	printf("\nAdios!");


	return EXIT_SUCCESS;
}
