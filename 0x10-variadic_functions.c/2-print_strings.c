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
		if (separator != NULL)
		{
			p = va_arg(list, char *);
			if (p == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", p);
			}

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%s ", va_arg(list, char *));
		}
	}
	printf("\n");
	va_end(list);
}
