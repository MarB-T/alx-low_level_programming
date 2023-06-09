#include "hash_tables.h"

/**
 * hash_table_print - function to print hash table
 * @ht: the hash table to be printed
 * Return: nothing
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *bucket;
	int j = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			if (j)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			j = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
