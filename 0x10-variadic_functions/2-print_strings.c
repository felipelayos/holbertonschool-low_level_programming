#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function to print string
 *
 * @separator: Separator between the strings.
 * @n: Number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char *);

		if (p != 0)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
