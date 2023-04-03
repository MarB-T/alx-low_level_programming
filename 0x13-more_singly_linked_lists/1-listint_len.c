#include "lists.h"

/**
 * listint_len - gets the length of list
 * @h: head of list in question
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h->next != NULL)
	{
		elem++;
		h = h->next;
	}
	elem++;
	return (elem);
}
