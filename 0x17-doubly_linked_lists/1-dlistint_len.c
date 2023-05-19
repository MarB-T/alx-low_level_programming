#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlist
 * @h: head of list
 * Return: elements in dlist (size_t)
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (1)
	{
		count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (count);
}
