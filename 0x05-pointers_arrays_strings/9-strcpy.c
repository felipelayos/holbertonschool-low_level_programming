#include "holberton.h"
/**
* _strcpy - function
* @src: source
* @dest: destination
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0, size = 0;

	while (src[x] != '\0')
	{
		x++;
	}
	size = x;

	for (x = 0; x <= size; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
