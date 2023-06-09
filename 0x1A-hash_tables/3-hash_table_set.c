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
	hash_node_t *new;
	unsigned long int idx;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = key;
	new->value = value;
	new->next = NULL;

	idx = key_index(key, ht->size);

}
