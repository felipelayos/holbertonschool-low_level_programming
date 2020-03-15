#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function to print anything
 * @format: format to print
 */
void print_all(const char *const format, ...)
{
	int i, j;
	va_list valist;
	print_type ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{0, 0}};

	char *separator;

	separator = "";

	i = 0;
	va_start(valist, format);
	while (format != 0 && format[i] != 0)
	{
		j = 0;
		while (ops[j].p != 0)
		{
			if (ops[j].p[0] == format[i])
			{
				printf("%s", separator);
				ops[j].f(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}

/**
 * p_char - function to print a char
 * @argument: Holds the va_list
 */
void p_char(va_list argument)
{
	printf("%c", va_arg(argument, int));
}
/**
 * p_int - function to print an int
 * @argument: Holds the va_list
 */
void p_int(va_list argument)
{
	printf("%d", va_arg(argument, int));
}
/**
 * p_float - function to print a float
 * @argument: Holds the va_list
 */
void p_float(va_list argument)
{
	printf("%f", va_arg(argument, double));
}
/**
 * p_string - function to print a string
 * @argument: Holds the va_list
 */
void p_string(va_list argument)
{
	char *ptr_aux;

	ptr_aux = va_arg(argument, char *);
	if (ptr_aux == 0)
	{
		ptr_aux = "(nil)";
	}
	printf("%s", ptr_aux);
}
