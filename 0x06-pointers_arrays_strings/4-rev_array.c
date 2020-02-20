#include "holberton.h"
/**
  *reverse_array - function
  *@a: parm
  *@n: parm
  */
void reverse_array(int *a, int n)
{
	int i = 0, aux = 0;

	n -= 1;
	while (i < n)
	{
		aux = a[i];
		a[i] = a[n];
		i++;
		a[n] = aux;
		n--;
	}
}
