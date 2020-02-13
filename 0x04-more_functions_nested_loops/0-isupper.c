#include "holberton.h"
/**
*_isupper - checks for uppercase character
*Return: int
*@c: parameter
*/
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
