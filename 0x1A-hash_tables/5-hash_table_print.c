#include "hash_tables.h"
/**
 * hash_table_print - entry point
 * @ht: const hash_table_t
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_table;
	unsigned int i = 0;
	unsigned int aux = 0;

	if (ht == NULL)
		return;


	node_table = ht->array[0];
	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		node_table = ht->array[i];
		while (node_table)
		{
			if (aux == 1)
				printf(", ");
			printf("'%s': '%s'", node_table->key, node_table->value);
			aux = 1;
			node_table = node_table->next;
		}
	}
	putchar('}');
	putchar('\n');
}
