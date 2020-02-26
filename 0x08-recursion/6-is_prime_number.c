#include "holberton.h"

int primos(int num, int i);
/**
  *is_prime_number - function
  *@n: number to find if is prime or not
  *Return: int
  */
int is_prime_number(int n)
{
	int result;

	result = primos(n, n / 2);
	
	if (result == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}

/**
  *primos - find if a number is prime or not
  *@num: numbert to search if is prime or not
  *@i: auxiliar variable;
  *Return: if is prime or not
  */
int primos(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (primos(num, i - 1));
		}
	}
}
