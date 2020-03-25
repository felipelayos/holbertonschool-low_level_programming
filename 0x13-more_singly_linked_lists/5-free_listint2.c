#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *aux;

	if (head != NULL)
	{
		aux = *head;
		while (aux != NULL)
		{
			node = aux;
			aux = aux->next;
			free(node);
		}
		*head = NULL;
	}
}
