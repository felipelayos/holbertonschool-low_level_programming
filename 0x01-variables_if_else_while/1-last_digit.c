#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - style doc for function main goes there
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*print options*/
	printf("Last digit of %d is ", n);
	printf("%d and is ", n % 10);
	if ((n % 10) > 5)
	{
	printf("greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
	printf("0\n");
	}
	else
	{
	printf("less than 6 and not 0\n");
	}
	return (0);
}
