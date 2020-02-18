#include "holberton.h"
/**
   *_strlen - function
   *@s: parameters
   *Return: value
   */
int _strlen(char *s)
{
	int i;
	int cont = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		if (s[i] != '\n')
		{
			cont += 1;
		}
	}
	return (cont);
}

