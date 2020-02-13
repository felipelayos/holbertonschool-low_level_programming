#include "holberton.h"
/**
*print_triangle - print
*@size: parameter
*/
void print_triangle(int size)
{
	int i, j;

	for (j = size ; j > 0 ; j--)
	{
		for (i = j; i <= size ; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
