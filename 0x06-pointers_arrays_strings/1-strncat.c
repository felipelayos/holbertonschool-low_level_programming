#include "holberton.h"
/**
  *_strncat - function
  *@dest: parametro
  *@src: parametro
  *@n: parametro
  *Return: string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++; /* i = array size */
	}

	for (j = 0; src[j] != '\0' && j < n ; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0'; 
	return (dest);
}
