#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key in a hashtable
 * @key: pointer to the key
 * @size: size of the array of the hash table
 * Return: unique index
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL)
		return (EXIT_FAILURE);
	hash = hash_djb2(key);
	return (hash % size);
}
