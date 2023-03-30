#include "lists.h"

/**
 * list_len - determines the number of elements in a list
 * @h: head of list
 * Return: lenght of list (size_t)
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
