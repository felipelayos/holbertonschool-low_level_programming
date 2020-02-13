#include "holberton.h"
/**
*print_line - check lowercase
*Return: numbers
*@n: number of lines to print
*/
void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
		for ( i = 0 ; i <= n - 1 ; i++ )
		{
			_putchar('_');
		}	
	}
	_putchar('\n');

}
