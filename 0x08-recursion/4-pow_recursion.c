#include "holberton.h"
/**
  *_pow_recursion - function to pow number
  *@x: number to pow
  *@y: pow to raise
  *Return: pow
  */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
