#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function to print a list of nodes
 *
 * @h: nodo.
 *
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == 0)
	{
		return (0);
	}
	for (i = 1 ; h->next != NULL ; i++)
	{
		h = h->next;
	}
	return (i);
}
