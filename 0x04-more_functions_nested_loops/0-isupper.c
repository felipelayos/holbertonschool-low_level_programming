#include "holberton.h"
/**
*_isupper - checks for uppercase character
*Return: int
*@c: parameter
*/
int _isupper(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = 0;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
	return (i);
}
