#include <stdio.h>
#include <ctype.h>
/**
*_islower - check lowercase
*Return: 1 if c is lowercase 0 otherwise
*@c: Parametro
*/
int _islower(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		i = 0;
	}
	return (i);
}

