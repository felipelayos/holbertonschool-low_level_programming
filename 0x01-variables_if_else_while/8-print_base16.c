#include <stdio.h>
/**
*main - Reverse of the alphabet.
*Return: 0
*/
int main(void)
{
	int n;

	for (n = 48 ; n <= 102  ; n++)
	{
		if (n == 58)
		{
			n += 39;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
