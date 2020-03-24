#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - Add a new node on the end of the list
 *
 * @head: head of the list.
 * @n: Int to add.
 *
 * Return: new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *aux;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = 0;

	if (!*head == '\0')
	{
		aux = *head;

		while (aux->next != NULL)
		{
			aux = aux->next;
		}

		aux->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
