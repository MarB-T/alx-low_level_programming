#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to list head
 * @idx: index to insert
 * @n: data of new node
 * Return: address of new node
 */

dlistint_t *insert_dnode_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *current, *prevv;

	if (*h == NULL)
		return (add_nodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	current = *h;
	while (1)
	{
		if (idx == count)
		{
			new->n = n;
			prevv = current->prev;
			new->next = current;
			new->prev = prevv;
			prevv->next = new;
			return (*h);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
