#ifndef HOLBERTON
#define HOLBERTON

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - struct to choose type of format
 *
 * @p: format
 * @f: function
 */
typedef struct type
{
	char *p;
	void (*f)();
} print_type;

void p_char(va_list valist);
void p_int(va_list valist);
void p_float(va_list valist);
void p_string(va_list valist);

#endif
