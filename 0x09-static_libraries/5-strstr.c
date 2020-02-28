#include "holberton.h"

/**
 * _strstr - function
 * @haystack: param
 * @needle: param
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (haystack[i] != '\0')
	{
		k = i;
		j = 0;
		while (haystack[k] == needle[j] && needle[j] != '\0' && haystack[k] != '\0')
		{
			k++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
