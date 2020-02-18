#include "holberton.h"
/**
   *_strlen - function
   *@s: parameters
   *Return: value
   */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont += 1;
	}
	return (cont);
}

