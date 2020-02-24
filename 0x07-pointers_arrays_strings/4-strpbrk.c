#include "holberton.h"
/**
  *_strpbrk - function
  *@s: param
  *@accept: param
  *Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (i = 0 ; accept[i] ; i++)
	{
		if (s[i] == accept[i])
		{
			return (s + (i - 1));
		}
	}
	return ('\0');
}
