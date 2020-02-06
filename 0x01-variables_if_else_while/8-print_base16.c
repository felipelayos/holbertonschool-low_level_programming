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
		if (n == 57)
		{
			n += 40;
		}
		putchar(n);
	}
	if (n > 102)
	{
		putchar('\n');
	}
	return (0);
}
