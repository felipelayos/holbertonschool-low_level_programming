#include "holberton.h"
/**
  *_strncpy - function
  *@dest: parametro
  *@src: parametro
  *@n: parametro
  *Return: 0
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

