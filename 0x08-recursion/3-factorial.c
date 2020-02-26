#include "holberton.h"
/**
  *factorial - function to find the factorial of a number
  *@n: number to find factorial
  *Return: value of the factorial
  */
int factorial(int n)
{
	int fact;

	if (n == 0)
	{
		fact = 1;
	}
	else if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	else if (n < 0)
	{
		fact = -1;
	}
	return (fact);
}
