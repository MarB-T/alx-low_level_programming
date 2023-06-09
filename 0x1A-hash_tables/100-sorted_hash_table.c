#include "hash_tables.h"

/**
 * shash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *bucket, *tmp;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			tmp = bucket;
			bucket = bucket->next;
			if (tmp->key)
				free(tmp->key);
			if (tmp->value)
				free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int j = 0;

	if (!ht)
		return;
	bucket = ht->shead;
	printf("{");
	while (bucket)
	{
		if (j)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		j = 1;
		bucket = bucket->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function to print the key:value from ht in reverse
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int j = 0;

	if (!ht)
		return;
	bucket = ht->stail;
	printf("{");
	while (bucket)
	{
		if (j)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		j = 1;
		bucket = bucket->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	shash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}


/**
 * insert_sorted - function for insert new node in sorted
 * @ht: pointer to sorted hash table
 * @new: pew node to insert
 * Return: nothing
 */
void insert_sorted(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *sbucket = ht->shead;

	if (sbucket == NULL)
	{
		ht->shead = ht->stail = new;
		new->snext = new->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new->key, sbucket->key) < 0)
		{
			new->snext = sbucket;
			new->sprev = sbucket->sprev;

			if (!sbucket->sprev)
				ht->shead = new;
			else
				sbucket->sprev->snext = new;
			sbucket->sprev = new;
			return;
		}
		sbucket = sbucket->snext;
	} while (sbucket);
	new->sprev = ht->stail;
	new->snext = ht->stail->snext;
	ht->stail->snext = new;
	ht->stail = new;
}


/**
 * shash_table_set - function that adds an element to the sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key to add the element
 * @value: value to add the element
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *v, *k;
	shash_node_t  *bucket, *new;

	if (!ht || !key || !*key || !value)
		return (0);
	v = strdup(value);
	if (!v)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = v;
			return (1);
		}
		bucket = bucket->next;
	}
	new = calloc(1, sizeof(shash_node_t));
	if (new == NULL)
	{
		free(v);
		return (0);
	}
	k = strdup(key);
	if (!k)
		return (0);
	new->key = k;
	new->value = v;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	insert_sorted(ht, new);
	return (1);
}

/**
 * shash_table_create - creates a sorted hash tables
 * @size: size of the hash table
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
