#include "lists.h"

/**
 * free_dlistint -  free a list
 * @head: head of the list list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *x = NULL;

	while (head != NULL)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
