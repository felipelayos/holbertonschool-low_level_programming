#include "lists.h"
/**
 * insert_dnodeint_at_index - Inser new node in the position specified
 * @h: head of the list
 * @idx: position to insert the node
 * @n: content of the node to be inserted
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *node_aux;

	if (!h)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	node_aux = *h;
	while (i < idx - 1)
	{
		if (!node_aux)
		{
			return (NULL);
		}
		i++;
		node_aux = node_aux->next;
	}
	if (!node_aux->next)
	{
		return (add_dnodeint_end(h, n));
	}

	else
	{
		node = malloc(sizeof(dlistint_t));

		if (!node)
		{
			return (NULL);
		}

		node->n = n;
		node->next = node_aux->next;
		node->next->prev = node;
		node_aux->next = node;
		node->prev = node_aux;
	}
	return (node);
}
