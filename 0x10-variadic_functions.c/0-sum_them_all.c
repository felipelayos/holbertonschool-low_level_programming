#include <stdarg.h>
/**
 * sum_them_all - function to add numbers
 * 
 * @n: number of parameters
 * 
 * Return: add of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    unsigned int i;

    va_list list;
    va_start(list, n);

    if (n == 0)
    {
        return (0);
    }

    for (i = 0 ; i < n ; i++)
    {
        sum += va_arg(list, int);
    }
    
    return (sum);
}