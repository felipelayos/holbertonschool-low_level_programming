#include "holberton.h"
/**
  *_strspn - function
  *@s: parametro
  *@accept: parametro
  *Return: unsigned int.
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, size = 0;
	unsigned int cont = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	size = i;

	for (i = 0 ; i <= size ; i++)
	{
		for (j = 0 ; j <= size ; j++)
		{
			if (accept[i] == s[j])
			{
				cont += 1;
			}
		}
	}
	return (cont);
}
