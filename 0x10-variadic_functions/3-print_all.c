#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function to print anything
 *@format: print format.
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *separator;

	print_type ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}};

	va_list valist;

	va_start(valist, format);

	separator = "";
	while (format[i] != 0 && ops[i].p != NULL)
	{
		if (format[i] == ops[i].p[0])
		{
			printf("%s", separator);
			separator = ", ";
			ops[i].f(valist);
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
/**
 * p_char - function to print a char
 * @valist: list of arguments
 */
void p_char(va_list valist)
	printf("%s", va_arg(valist, char *));
/**
 * p_int - function to print an int
 * @valist: list of arguments
 */
void p_int(va_list valist)
	printf("%d", va_arg(valist, int));
/**
 * p_float - function to print a float
 * @valist: list of arguments
 */
void p_float(va_list valist)
	printf("%f", va_arg(valist, double));
/**
 * p_string - function to print a string
 * @valist: list of arguments
 */
void p_string(va_list valist)
	printf("%s", va_arg(valist, char *));
