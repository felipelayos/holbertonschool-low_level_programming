#include "holberton.h"
/**
*get_bit - value of a bit at a given index.
*
*@n: number
*@index: index
*
*Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	i <<= index;

	if (i & n)
		return (1);

	return (0);
}
