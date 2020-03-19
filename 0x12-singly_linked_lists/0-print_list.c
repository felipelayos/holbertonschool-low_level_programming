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
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 1 ; h->next != NULL ; i++)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%i] %s\n", h->len, "(nill)");
		}
		h = h->next;
	}

	printf("[%i] %s\n", h->len, h->str);

	return (i);
}
