#include "holberton.h"
/**
*_isdigit - checks for a digit (0 through 9)
*Return: int
*@c: parameter
*/
int _isdigit(int c)
{
	int n;

	if (c >= '0' && c <= '9')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
