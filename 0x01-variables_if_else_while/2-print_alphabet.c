#include <stdio.h>
/**
*main - alphabet
*Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	if (c > 'z')
	{
	putchar('\n');
	}
	return (0);
}
