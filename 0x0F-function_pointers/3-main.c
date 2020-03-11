#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: param
 * @argv: param
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;

	/* Validar que entren 4 elements ./archivo, numero1, operacion, numero2 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	/* Validar que el operador sea correcto */
	if ((!(operator[0] == '+' || operator[0] == '-' || operator[0] == '*' || 
	operator[0] == '/' || operator[0] == '%')) || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* Pasar los numeros a enteros */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/*Validar que no se vaya a dividir o sacar modulo por 0 */
	if ((operator[0] == '/' || operator[0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/*Imprimir la operación segun haya ingresado el usuario*/
	printf("%d\n", (*get_op_func(operator))(num1, num2));
	return (0);
}
