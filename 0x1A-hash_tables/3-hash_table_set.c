#include "hash_tables.h"

/**
 * hash_table_set - function
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int i;
	hash_node_t *new, *aux;

	if (ht == NULL || key[0] == '\0')
		return (0);
	i = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	aux = ht->array[i];
	if (ht->array[i] != NULL && strcmp(key, (const char *)aux->key) == 0)
	{
		free(aux->value);
		free(new);
		aux->value = strdup(value);
		return (1);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
