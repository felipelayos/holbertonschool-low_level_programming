#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - Add a new node
 *
 * @head: head of the list.
 * @n: Int to add.
 *
 * Return: new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head)
		return (0);
	if (!new_node)
		return (0);
	if (!*head)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	*head = new_node;

	new_node->n = n;
	return (*head);
}
