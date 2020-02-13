#include "holberton.h"
/**
*print_most_numbers - check lowercase
*Return: numbers
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
		if (i == 1 || i == 3)
		{
			i++;
		}
	}
	_putchar('\n');
}

