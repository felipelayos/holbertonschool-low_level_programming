#include "holberton.h"
/**
  *_strcat - Function
  *@dest: paameter
  *@src: parameter
  *Return: array
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++; /* i = array size */
	}

	for (j = 0; src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';


	return (dest);
}

