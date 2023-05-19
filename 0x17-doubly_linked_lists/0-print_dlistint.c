#include "lists.h"

/**
 * size_t print_dlistint - prints contents of a doubly linked list
 * @h: head of the list in question
 * Return: number of elements in list (size_t)
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
