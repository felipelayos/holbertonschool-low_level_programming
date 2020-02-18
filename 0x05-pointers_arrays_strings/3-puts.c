#include "holberton.h"
/**
  *_puts - function
  *str - argument
  */
void _puts(char *str)
{
		int cont = 0;
		int i = 0;

		while (str[cont] != '\0')
		{
			cont += 1;
		}
		for (i = 0 ; i <= cont ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
