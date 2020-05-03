#include "lists.h"
/**
 * add_dnodeint_end - function that add a node at the end
 * of a doubly linked list
 * @head: Header of a double linked list
 * @n: value of the new node of the doubly linked list
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	current = *head;

	while (current->next)
	{
		current = current->next;
	}

	current->next = node;
	node->prev = current;

	return (node);
}
