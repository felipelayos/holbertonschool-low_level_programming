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
		if (c == 'q' || c == 'e')
		{
		c++;			
		}
	putchar(c);
	c++;
	}
	if (c > 'z')
	{
	putchar('\n');
	}
	return (0);
}
