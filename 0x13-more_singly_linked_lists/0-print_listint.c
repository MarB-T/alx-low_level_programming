#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head of the list in qiestion
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	printf("%d\n", h->n);
	nodes++;
	return (nodes);
}
