#include "holberton.h"
/**
*print_last_digit - Print last digit
*Return - last digit
*@n: value.
*/
int print_last_digit(int n)
{	
	int lastDigit;
	
	lastDigit = n % 10;	
	if (n < 0)
	{
	lastDigit = (lastDigit * -1);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
