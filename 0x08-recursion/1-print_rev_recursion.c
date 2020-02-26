#include "holberton.h"
/**
  *_print_rev_recursion - function to print reverse string
  *@s: string to print reverse
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
