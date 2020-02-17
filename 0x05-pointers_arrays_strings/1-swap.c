#include "holberton.h"
/**
*swap_int - function
*@a: parameter
*@b: parameter
*/
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
