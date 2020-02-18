#include "holberton.h"
/**
  *puts_half - function
  *@str: parameters
  */
void puts_half(char *str)
{
	int i = 0, size = 0, half = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	size = i;

	if (size % 2 == 0)
	{
		half = size / 2;
	}
	else
	{
		half = (size / 2) - 1;
	}

	for (i = half ; i <= size - 1 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

