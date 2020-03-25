#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the head node of list
 * @head: head
 * Return: node
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *node = *head;

	if (*head)
	{
		i = (*head)->n;
		*head = (*head)->next;
		free(node);
	}

	return (i);
}

