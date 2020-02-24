#include "holberton.h"
/**
  *_memcpy - function
  *@dest: array
  *@src: array
  *@n: parametro
  *Return: char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
