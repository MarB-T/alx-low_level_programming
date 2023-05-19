#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in dlist
 * @head: head of list
 * Return: sum (int)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (1)
	{
		sum += head->n;
		if (head->next == NULL)
			break;
		head = head->next;
	}
	return (sum);
}
