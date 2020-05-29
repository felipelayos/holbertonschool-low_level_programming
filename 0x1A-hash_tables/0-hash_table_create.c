#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: size
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (table->array[i])
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
