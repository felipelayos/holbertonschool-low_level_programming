#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 'a';
	int n = 0;

	while (n <= 9)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
