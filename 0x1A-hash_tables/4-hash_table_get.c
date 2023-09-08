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
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		i++;
	}
	return (NULL);
}
