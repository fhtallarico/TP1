#include <stdio.h>
#include <stdlib.h>


int getInt(char* mensaje, char* mensajeError, int* pResultado,int reintentos,int maximo,int minimo);

int sumar(int operandoA, int operandoB, int* pResultado);

int restar(int operandoA, int operandoB, int* pResultado);

int dividir(int operandoA, int operandoB, float* pResultado);

int multiplicar(int operandoA, int operandoB, int* pResultado);

int buscarFactorial(int operando, int* pResultado);

