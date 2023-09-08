#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to the hash_table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *convert_key = (const unsigned char *)key;
	unsigned long int index;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	index = hash_djb2(convert_key) % ht->size;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	else
	{
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[index]->next;
		ht->array[index]->next = node;
		return (1);
	}
	return (0);
}
