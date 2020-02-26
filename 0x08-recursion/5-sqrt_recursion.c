#include "holberton.h"
/**
  *incremento - function to find the natural square root of a number
  *@m: number
  *@x: auxiliar variable
  *Return: natural square root value
  */
int incremento(int m, int x)
{
	if ((x * x) > m)
	{
		return (-1);
	}
	else if ((x * x) != m)
	{
		return (incremento(m, x + 1));
	}
	else
	{
		return (x);
	}
}
/**
  *_sqrt_recursion - function to find the natural square root of a number
  *@n: number
  *Return: natural square root value
  */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (incremento(n, i));

}
