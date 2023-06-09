#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 * @ht: the hash table in question
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *bucket, *temp;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			temp = bucket;
			bucket = bucket->next;
			if (temp->value)	
				free(temp->value);
			if (temp->key)
				free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
