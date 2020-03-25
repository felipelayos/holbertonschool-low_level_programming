#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function
 * @head: head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int acum = 0;

	while (node)
	{
		acum += node->n;
		node = node->next;
	}
	return (acum);
}
