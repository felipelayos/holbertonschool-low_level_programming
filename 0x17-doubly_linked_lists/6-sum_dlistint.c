  #include "lists.h"

/**
 * sum_dlistint - add the elements of a list
 * @head: head of the list
 * Return: The sum of all the elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int acum = 0;

	while (head != NULL)
	{
		acum += head->n;
		head = head->next;
	}
	return (acum);
}
