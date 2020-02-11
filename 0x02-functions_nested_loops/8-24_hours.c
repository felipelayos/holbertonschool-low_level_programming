#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, l = 0, aux = 9;

	while (i <= 2)
	{
		while (j <= aux)
		{
			while (k <= 5)
			{

				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');

					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			if (i <= 1)
				aux = 9;
			else
				aux = 3;
			j++;
		}
		j = 0;
		i++;
	}
}
