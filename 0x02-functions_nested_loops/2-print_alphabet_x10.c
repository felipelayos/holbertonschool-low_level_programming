#include "holberton.h"
/**
 * print_alphabet - Print alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 'a';
	int n = 0;

	while (n <= 9)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	i = 'a';
	_putchar('\n');
	n++;
	}
}
