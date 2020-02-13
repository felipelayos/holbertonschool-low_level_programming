#include "holberton.h"
/**
*print_square - Function
*@size: size of the square
*/
void print_square(int size)
{
	int i, j;

	for (j = 0 ; j <= size - 1 ; j++)
	{
		for (i = 0 ; i <= size - 1 ; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
