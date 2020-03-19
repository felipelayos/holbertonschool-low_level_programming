#include <stdio.h>
#include "lists.h"
/**
 * list_len - function to print a list of nodes
 *
 * @h: nodo.
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1 ; h->next != NULL ; i++)
	{
		h = h->next;
	}
	return (i);
}
