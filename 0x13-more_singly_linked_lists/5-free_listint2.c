#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head != 0)
	{
		while (*head != 0)
		{
			node = *head;
			*head = (*head)->next;
			free(node);
		}
	}
	*head = NULL;
}
