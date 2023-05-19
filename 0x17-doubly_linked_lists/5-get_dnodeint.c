#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlist
 * @head: head of list
 * @index: index to return
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (index == ind)
		{
			return (head);
		}
		head = head->next;
		ind++;
	}
	return (NULL);
}
