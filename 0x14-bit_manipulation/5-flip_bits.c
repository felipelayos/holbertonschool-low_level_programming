#include "holberton.h"
/**
* flip_bits -  function that returns the number of bits you would need
*to flip to get from one number to another.
*
* @n: number 1
* @m: number 2
*
* Return: count of diferent bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux;
	unsigned int i = 0;

	aux = n ^ m;

	while (aux)
	{
		if (aux & 1)
			i++;
		aux >>= 1;
	}
	return (i);
}
