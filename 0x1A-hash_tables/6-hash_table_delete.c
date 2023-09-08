#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	while (ht != NULL)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				ht->array[i] = node->next;
				free(node);
				node = node->next;
			}
			free(ht->array[i]);
			i++;
		}
	}
}
