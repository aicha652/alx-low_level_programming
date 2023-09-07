#include "hash_tables.h"
/**
 * *hash_table_create - function that creates a hash table
 * @size: siz of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
