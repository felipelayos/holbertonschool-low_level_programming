#include <stdio.h>
#include <ctype.h>
/**
*_isalpha - check lowercase
*Return: 1 if c is lowercase or uppercase 0 otherwise
*@c: Parametro
*/
int _isalpha(int c)
{
	int i;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}

