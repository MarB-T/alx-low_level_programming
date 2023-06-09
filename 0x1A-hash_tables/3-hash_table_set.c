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
	hash_node_t *new, *bucket;
	unsigned long int idx;
	char *val, *k;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	val = strdup(value);
	k = strdup(key);
	if (val == NULL || k == NULL)
	{
		free(new);
		return (0);
	}
	new->key = k;
	new->value = val;
	new->next = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new;
		return (1);
	}
	bucket = ht->array[idx];
	while (bucket->next != NULL)
	{
		if (strcmp(bucket->key, key) == 0)
		{
			free(bucket->value);
			bucket->value = val;
			free(new);
			return (1);
		}
		bucket = bucket->next;
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
