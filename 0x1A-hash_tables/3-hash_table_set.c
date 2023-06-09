#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @key: pointer to key of the value to add
 * @ht: hash table to add
 * @value: the value to add
 * Return: 1-Success 0-otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *v, *k;
	hash_node_t  *bucket, *new;
	unsigned long int idx;

	if (!ht || !key || !*key || !value)
		return (0);

	v = strdup(value);
	k = strdup(key);
	if (!v || !k)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = v;
			free(k);
			return (1);
		}
		bucket = bucket->next;
	}
	new = calloc(1, sizeof(hash_node_t));
	if (new == NULL)
	{
		free(v);
		free(k);
		return (0);
	}
	new->key = k;
	new->value = v;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
