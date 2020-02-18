#include "holberton.h"
/**
  *print_rev - function
  *@s: parameters
  */
void print_rev(char *s)
{
	int cont = 0;
	int i;

	while (s[cont] != '\0')
	{
		cont += 1;
	}
	for (i = cont - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
