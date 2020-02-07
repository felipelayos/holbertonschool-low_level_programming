#include <stdio.h>
/**
*main - Numbers
*Return: 0
*/
int main(void)
{
	int n, i, k;

	for (k = 48 ; k <= 55 ; k++)
	{
		for (n = k + 1 ; n <= 56 ; n++)
		{
			for (i = n + 1 ; i <= 57 ; i++)
			{	
				putchar(k);
				putchar(n);
				putchar(i);
				if (!(k == 55 && n == 56 && i == 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
