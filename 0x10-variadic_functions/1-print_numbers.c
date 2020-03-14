#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i < n - 1)
			{
				printf("%d%s", va_arg(list, int), separator);
			}
			else
			{
				printf("%d", va_arg(list, int));
			}
		}
		else
		{
			printf("%d", va_arg(list, int));
		}
	}
	printf("\n");
	va_end(list);
}
