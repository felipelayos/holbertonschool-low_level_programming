#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Add a new node on the end of the list
 *
 * @head: head of the list.
 * @str: String to add.
 *
 * Return: new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *aux_new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = str_len(str);
	new_node->str = strdup(str);
	new_node->next = 0;

	if (!*head == 0)
	{
		aux_new_node = *head;

		while (aux_new_node->next != NULL)
		{
			aux_new_node = aux_new_node->next;
		}

		aux_new_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
/**
 * str_len - legnth of a string
 *
 * @str: string to count
 *
 * Return: length of string
 */
int str_len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	while (str[i])
	{
		i++;
	}
	return (i);
}
