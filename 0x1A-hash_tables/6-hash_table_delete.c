#include "hash_tables.h"

/**
 * hash_table_delete - delete ht
 * @ht: hash table
 * Return: table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = ht->array[i]->next;
		}
	}
	free(ht->array);
	free(ht);
}
