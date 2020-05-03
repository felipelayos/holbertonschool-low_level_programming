#include "lists.h"

/**
 * get_dnodeint_at_index - Get node an index
 * @head: head of the list
 * @index: index od the node
 *
 * Return: content of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		while (head->next != NULL && i < index)
		{
			aux = aux->next;
			i++;
		}

		if (i == index)
		{
			return (aux);
		}
	}
	return (NULL);
}
