
#include "lists.h"

/**
 * dlistint_len - count the number
 * @h: const dlistint_t
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
