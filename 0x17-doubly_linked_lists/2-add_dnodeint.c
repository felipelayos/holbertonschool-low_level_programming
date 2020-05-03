#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning
 * @head: Head if the linked list
 * @n: value of the node to add
 * Return: adress of the element to add
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!head)
	{
		return (NULL);
	}

	if (!node)
	{
		return (NULL);
	}


	if (*head)
	{
		(*head)->prev = node;
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;

	return (node);
}
