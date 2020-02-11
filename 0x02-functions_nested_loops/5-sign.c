#include "holberton.h"
/**
*print_sign - Function
* Return: 1 0 and -1
* @n: parameter
*/
int print_sign(int n)
{
	int i;
	char j;

	if (n > 0)
	{
		i = 1;
		j = '+';
	}
	else if (n < 0)
	{
		i = -1;
		j = '-';
	}
	else
	{
		i = 0;
		j = '0';
	}
	_putchar(j);
	return (i);
}
