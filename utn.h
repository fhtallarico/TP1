#include <stdio.h>
#include <stdlib.h>

/**\brief Pide al usuario el ingreso de un entero
 *
 *\param mensaje char* / Mensaje de ingreso mostrado al usuario.
 *\param mensajeError char* / Mensaje de error en caso que el usuario ingrese un dato invalido.
 *\param pResultado int* / Puntero donde se escribirá el numero ingresado.
 *\param reintentos int/ Cantidad de reintentos dados al usuario para ingresar una dato valido.
 *\param maximo int/ Numero maximo para el ingreso.
 *\param minimo int/ Numero mimo para el ingreso.
 */
int getInt(char* mensaje, char* mensajeError, int* pResultado,int reintentos,int maximo,int minimo);

/**\brief Realiza la suma de 2 numeros.
 * \param operandoA int/ Primer numero de la operacion.
 * \param operandoB int/ Segundo numero de la operacion.
 * \param pResultado int* / Puntero donde se escribira el resultado de la suma.
 */
int sumar(int operandoA, int operandoB, int* pResultado);

/**\brief Realiza la resta de 2 numeros.
 * \param operandoA int/ Primer numero de la operacion.
 * \param operandoB int/ Segundo numero de la operacion.
 * \param pResultado int* / Puntero donde se escribira el resultado de la resta.
 */
int restar(int operandoA, int operandoB, int* pResultado);

/**\brief Realiza la division de 2 numeros.
 * \param operandoA int/ Dividendo.
 * \param operandoB int/ Divisor.
 * \param pResultado int* / Puntero donde se escribira el resultado de la división.
 */
int dividir(int operandoA, int operandoB, float* pResultado);

/**\brief Realiza la multiplicacion de 2 numeros.
 * \param operandoA int/ Primer numero de la operacion.
 * \param operandoB int/ Segundo numero de la operacion.
 * \param pResultado int* / Puntero donde se escribira el resultado de la multiplicación.
 */
int multiplicar(int operandoA, int operandoB, int* pResultado);

/**\brief Busca el factorial de un numero.
 * \param operando int/ Numero del cual se buscara el factorial.
 * \param pResultado int* / Puntero donde se escribira el resultado de la factorización.
 */
int buscarFactorial(int operando, int* pResultado);

