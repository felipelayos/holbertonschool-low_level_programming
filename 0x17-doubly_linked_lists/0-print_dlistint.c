#include "lists.h"
/**
 * print_dlistint - Print doubly linked lists
 * @h: head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	if (h->prev != NULL)
	{
		while (h->prev)
			h = h->prev;
	}
	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
