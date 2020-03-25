#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: head
 * @index: index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
		{
			return (node);
		}
		node = node->next;
		i++;
	}
	return (0);
}
