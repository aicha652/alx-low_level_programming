#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i, j;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	for (j = 0; j < table->size; j++)
	{
		free(table->array[j]);
	}
	free(table->array);
	free(table);
	return (table);
}
