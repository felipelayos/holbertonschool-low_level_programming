#include <stdio.h>
/**
*main - Reverse of the alphabet.
*Return: 0
*/
int main(void)
{
	int n;

	for (n = 122 ; n >= 97 ; n--)
	{
	putchar(n);
	}
	if (n < 97)
	{
	putchar('\n');
	}
	return (0);
}
