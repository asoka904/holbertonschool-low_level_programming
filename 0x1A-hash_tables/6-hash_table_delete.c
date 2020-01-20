#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	hash_node_t *tmp;

	if (!ht)
		return;
	for (; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
		if (node)
			free(node);
	}
	free(ht->array);
	free(ht);
}
