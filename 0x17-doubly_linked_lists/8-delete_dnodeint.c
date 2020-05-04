#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node in the position specified
 * @h: header of the list
 * @index: index of the node to delete
 * Return: 1 if works, -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *aux = NULL;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (-1);
	}
	if (!(*h))
	{
		return (-1);
	}
	else
	{
		aux = *h;
		while (index != i++ && aux)
		{
			aux = aux->next;
		}
		if (aux == NULL)
		{
			return (-1);
		}
		if (aux->next != NULL)
		{
			aux->next->prev = aux->prev;
		}
		if (index == 0)
		{
			*h = aux->next;
		}
		else
		{
			aux->prev->next = aux->next;
		}
		free(aux);
		return (1);
	}
	return (-1);
}
