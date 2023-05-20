#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to list head
 * @idx: index to insert
 * @n: data of new node
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *current;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
		if (current == NULL)
			return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}
