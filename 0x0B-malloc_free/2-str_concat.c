#include "holberton.h"
#include <stdlib.h>
/**
 * len - function
 * @str: param
 * Return: int
 */
int size(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - function
 * @s1: param
 * @s2: param
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1, len2;

	i = 0;
	j = 0;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	len1 = size(s1);
	len2 = size(s2);

	concat = malloc((len1 + len2) * sizeof(char) + 1);

	if (concat == 0)
	{
		return ('\0');
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}
