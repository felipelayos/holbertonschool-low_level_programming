#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free list.
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			node = head;
			head = head->next;
			free(node);
		}
		free(head);
	}
}
