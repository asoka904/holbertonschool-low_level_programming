#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *table;
	char *buf = "";
	unsigned long int i;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			table = ht->array[i];
			while (table)
			{
				printf("%s'%s': '%s'", buf, table->key, table->value);
				table = table->next;
				buf = ", ";
			}
		}
		printf("}\n");
	}
}
