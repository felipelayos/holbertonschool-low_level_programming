#include "hash_tables.h"

/**
 * hash_table_get - entry point
 * @ht: const hash_table_t variable
 * @key: const char variable
 *
 * Return: char variable
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;
	hash_node_t *ht_n;

	if (ht == NULL)
		return (NULL);

	if (key[0] == '\0')
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	ht_n = ht->array[i];

	while (ht_n != NULL)
	{
		if (strcmp(key, (const char *)ht_n->key) == 0)
		{
			return (ht_n->value);
		}
		ht_n = ht_n->next;
	}
	return (NULL);
}
