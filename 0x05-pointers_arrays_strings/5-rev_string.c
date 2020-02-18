#include "holberton.h"
/**
  *rev_string - function
  *@s: parameter
  */
void rev_string(char *s)
{
	int i = 0, j = 0;
	int size;
	char aux[1024];

	while (s[i] != '\0')
	{
		i++;
	}

	size = i;
	j = size - 1;

	for (i = 0 ; i < size ; i++)
	{
		aux[i] = s[j];
		j = j - 1;
	}
	for (i = 0 ; i < size ; i++)
	{
		s[i] = aux[i];
	}
}
