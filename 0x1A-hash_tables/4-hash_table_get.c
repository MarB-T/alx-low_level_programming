#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: the hash table to search
 * @key: the key to search
 * Return: value associated with key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *bucket;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];
	while (bucket)
	{
		if (strcmp(bucket->key, key) == 0)
		{
			return (bucket->value);
		}
		bucket = bucket->next;
	}
	return (NULL);
}
