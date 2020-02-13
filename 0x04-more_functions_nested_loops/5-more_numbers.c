#include "holberton.h"
/**
*more_numbers - check lowercase
*Return: numbers
*/
void more_numbers(void)
{
	int i, n;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
			_putchar(i + '0');
			}
		}
	_putchar('\n');
	}
}

