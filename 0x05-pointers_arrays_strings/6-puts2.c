#include "holberton.h"
/**
  *puts2 - function
  *@str: parameter
  */
void puts2(char *str)
{
	int i = 0;
	int size;

	while (str[i] != '\0')
	{
		i++;
	}
	
	size = i;

	for (i = 0 ; i <= size - 1 ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
