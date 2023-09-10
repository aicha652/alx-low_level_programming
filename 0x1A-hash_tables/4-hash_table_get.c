#include "hash_tables.h"
/**
 * *hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 * Return:  the value associated with the element, or NULL if key couldn’t
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *convert_key = (const unsigned char *)key;
	hash_node_t *node;

	index = hash_djb2(convert_key) % ht->size;
	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	node = ht->array[index]->next;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
