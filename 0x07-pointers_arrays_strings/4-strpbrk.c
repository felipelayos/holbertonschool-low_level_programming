#include "holberton.h"
/**
  *_strpbrk - function
  *@s: param
  *@accept: param
  *Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (s[i] == accept[i])
			{
				return (s + (i - 1));
			}
		}
	}
	return ('\0');
}
