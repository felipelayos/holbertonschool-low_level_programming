#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_node - Add a new node
 *
 * @head: head of the list.
 * @str: String to add.
 *
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!head)
		return (0);
	if (!new_node)
		return (0);
	if (!*head)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	new_node->str = strdup(str);
	new_node->len = str_len(str);
	*head = new_node;

	return (*head);
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
