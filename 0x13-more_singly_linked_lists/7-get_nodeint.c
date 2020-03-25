#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: list
 * @index: node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	if (head != NULL)
	{
		node = head;

		for (i = 0; i < index; i++)
		{
			node = node->next;
			if (node == NULL)
				break;
		}

		if (i == index)
        {
			return (node);
        }
	}
	return (NULL);
}
