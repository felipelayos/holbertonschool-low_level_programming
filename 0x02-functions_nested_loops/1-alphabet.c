#include "holberton.h"
/**
 * print_alphabet - Print alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
		_putchar('\n');
}
