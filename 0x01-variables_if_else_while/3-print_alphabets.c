#include <stdio.h>
/**
*main - alphabet
*Return: 0
*/
int main(void)
{
	char c = 'a', c2 = 'A';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	while (c2 <= 'Z')
	{
	putchar(c2);
	c2++;
	}
	if (c > 'z' || c2 > 'Z')
	{
	putchar('\n');
	}
	return (0);
}
