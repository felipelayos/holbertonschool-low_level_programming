#include <stdio.h>
#include "lists.h"
/**
 * print_list - function to print a list of nodes
 *
 * @h: nodo.
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	int num = 0, i;
	char *strng;

	strng = h->str;

	for (i = 0; h->next != NULL; i++)
	{
		if (strng != NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, strng);
			num++;
		}
		h = h->next;
	}
	return (num);
}
