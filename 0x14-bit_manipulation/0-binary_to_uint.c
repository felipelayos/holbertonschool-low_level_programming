#include <stdlib.h>
#include "holberton.h"
/**
 * binary_to_uint - convert binary to int
 * @b: pointing to a string of 0 and 1 chars
 * Return: sum
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int i = 0, acum = 0;

	if (b)
	{
		while (b[i])
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);

			acum <<= 1;

			if (b[i] == '1')
				acum = acum + 1;

			i++;
		}
		return (acum);
	}
	return (0);
}
