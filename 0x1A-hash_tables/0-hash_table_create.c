#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table;

    if (!size)
        return (NULL);

    table = malloc(sizeof(hash_table_t));
    if (!table)
        return (NULL);

    table[0].array = calloc(size, sizeof(char *));
    if (!table[0].array)
        return (NULL);

    table[0].size = size;
    return (table);
}
