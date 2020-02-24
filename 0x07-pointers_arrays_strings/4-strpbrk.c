#include "holberton.h"
/**
  *_strpbrk - function
  *@s: param
  *@accept: param
  *Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, size = 0;

	while (s[size])
	{
		size++;
	}


	for (i = 0 ; accept[i] ; i++)
	{
		if (s[i] == accept[i])
		{
			return (s + (i - 1));
		}
	}

	if (s[i] == size)
	{
		return (s + (i - 1));
	}
	return ('\0');
}
