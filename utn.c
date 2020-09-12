#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int getInt(char* mensaje, char* mensajeError, int* pResultado,int reintentos,int maximo,int minimo)
{
	int retorno = -1;
	int bufferInt;
	int resultadoScanf;
	if(		mensaje != NULL &&
			mensajeError != NULL &&
			pResultado != NULL &&
			reintentos >= 0 &&
			maximo >= minimo)
	{
		do
		{
			printf("%s",mensaje);
			fflush(stdin); // fflush // __fpurge
			resultadoScanf = scanf("%d" , &bufferInt);
			if(resultadoScanf == 1 && bufferInt >= minimo && bufferInt <= maximo)
			{
				retorno = 0;
				*pResultado = bufferInt;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}


int sumar(int operandoA, int operandoB, int* pResultado)
{
	int retorno = 0;
	*pResultado = operandoA + operandoB;

	return retorno;
}

int restar(int operandoA, int operandoB, int* pResultado)
{
	int retorno = 0;
	*pResultado = operandoA - operandoB;

	return retorno;
}

int dividir(int operandoA, int operandoB, float* pResultado)
{
	int retorno = -1;
	if (operandoB != 0) {
		*pResultado = (float)operandoA / operandoB;
		retorno = 0;
	}
	return retorno;
}

int multiplicar(int operandoA, int operandoB, int* pResultado)
{
	int retorno = 0;
	*pResultado = operandoA * operandoB;

	return retorno;
}

int buscarFactorial(int operando, int* pResultado)
{
	int retorno = -1;
	int acumulador = 1;


	while(operando >= 0)
	{
		if (operando == 0)
		{
			*pResultado = acumulador;
			retorno = 0;
			break;
		}
		else
		{
		acumulador = acumulador * operando;
		operando--;
		}
	}

	return retorno;
}
