#include <stdio.h>
/**
*main - Numbers
*Return: 0
*/
int main(void)
{
	int n, i;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (i = n + 1 ; i <= 57 ; i++)
		{
			putchar(n);
			putchar(i);
			if (!(n == 56 && i == 57))
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
