#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: void / print the key/value in the order that
 * they appear in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, comma = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	while (ht != NULL && i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma)
			{
				printf(", ");/* this line will be executed when comma is no 0 */
			}
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
