#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars, and initializes it with a char.
*@size: size of the array
*@c: character
*Return: NULL if size is 0 or pointer to array.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		array = malloc(size * sizeof(char));
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
