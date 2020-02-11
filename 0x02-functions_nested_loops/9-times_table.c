#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			
		
			if ((i*j) > 9)
			{
			_putchar(i * j / 10 + '0');
			_putchar(i * j % 10 + '0');
				if(j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if((i*j) <= 9)
			{
				_putchar(i * j + '0');
			
				if(j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
