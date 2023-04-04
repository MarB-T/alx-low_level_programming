#include "lists.h"


/**
 * listint_len - gets the length of list
 * @h: head of list in question
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		elem++;
		h = h->next;
	}
	elem++;
	return (elem);
}

/**
 * get_nodeint_at_index - Gets node of given index
 * @head: head node
 * @index: index of node to be found
 * Return: node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	size_t len = listint_len(head);
	unsigned int count = 0;

	if (index > len)
	{
		return (NULL);
	}
	if (head == NULL)
		return (NULL);
	if (index == 0)
		nth_node = head;
	else
	{
		while (count < index)
		{
			head = head->next;
			count++;
		}
		nth_node = head;
	}
	if (nth_node == NULL)
		return (NULL);
	return (nth_node);
}
