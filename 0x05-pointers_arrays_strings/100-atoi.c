#include "holberton.h"
/**
* _atoi - string to integer function
* @s: string
* Return: int
*/
int _atoi(char *s)
{
	int x = 0, neg = -1, n = 0, sw = 0;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
		{
			negative *= -1;
		}
		else if (s[x] >= '0' && s[x] <= '9')
		{
			sw = 1;
			n *= 10;
			n -= (s[x] - '0');
		}
		else if (flag)
		{
			break;
		}
		x++;
	}
	n = n * negative;

	return (n);
}
