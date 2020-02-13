#include "holberton.h"
/**
*print_diagonal - function
*@n: return
*/
void print_diagonal(int n)
{
	int i;
	int spaces = 0;

	if (!(n <= 0))
	{
		for (i = 0 ; i <= n - 1 ; i++)
		{
			for (spaces = 0 ; spaces <= i - 1 ; spaces++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
