#include "holberton.h"
/**
*set_bit - sets the value of a bit to 1 at a given index.
*
*@n: number
*@index: indez
*
*Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n |= (1 << index);
		return (1);
	}
	return (-1);
}
