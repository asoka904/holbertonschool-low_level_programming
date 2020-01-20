#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of the array.
 *
 * Return: Returns a pointer to the newly created hash table or NULL if fail.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	table->size = size;

	return (table);
}
