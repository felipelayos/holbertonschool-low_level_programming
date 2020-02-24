#include "holberton.h"
/**
  *_strspn - function
  *@s: parametro
  *@accept: parametro
  *Return: unsigned int.
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int cont = 0;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (accept[j] == s[i])
			{
				cont += 1;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}

	return (cont);
}
