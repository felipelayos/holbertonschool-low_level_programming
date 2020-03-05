#include "holberton.h"
#include <stdlib.h>
/**
*_strdup - function
*@str: param
*Return: char
*/
char *_strdup(char *str)
{
	char *duplicatedArray;
	int i = 0, size = 0;

	/* If the array str = NULL return NULL. */
	if (str == '\0')
	{
		return ('\0');
	}

	/*Size of the array */
	while (str[size] != '\0')
	{
		size++;
	}

	/*Size of the array to duplicate */
	duplicatedArray = malloc(sizeof(char) * size + 1);

	/* Verify if the malloc work well */
	if (duplicatedArray == '\0')
	{
		return ('\0');
	}

	/* Duplicate the array on the other array*/
	for (i = 0 ; i <= size ; i++)
	{
		duplicatedArray[i] = str[i];
	}

	return (duplicatedArray);
}
