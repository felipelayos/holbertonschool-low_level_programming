#include "holberton.h"
/**
*print_binary - convert number to binary
*
*@n: number
*
*Return: void
*/
void print_binary(unsigned long int n)
{
	int i;
	unsigned int x;

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;

		if (x & 1)
		{
			_putchar('1');
		}
		else if (x | 0)
		{
			_putchar('0');
		}
	}
}
