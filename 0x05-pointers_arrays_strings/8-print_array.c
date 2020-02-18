#include <stdio.h>
/**
  *print_array - function
  *@a: argument
  *@n: argument
  */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0 ; i <= n - 1 ; i++)
	{
		printf("%d", a[i]);

		if (!(i == n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
