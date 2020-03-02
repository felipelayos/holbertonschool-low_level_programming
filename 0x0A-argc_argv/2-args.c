#include <stdio.h>
#include "holberton.h"
/**
 * main - function
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	x = 0;
	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
