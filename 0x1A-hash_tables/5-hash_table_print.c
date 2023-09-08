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

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (comma)
			{
				printf(", ");/* this line will be executed when comma is no 0 */
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			comma = 1;
		}
		i++;
	}
	printf("}\n");
}
