#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - function
 * @argc: param
 * @argv: param
 * Return: int
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc == 3)
	{
		n = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", n);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
