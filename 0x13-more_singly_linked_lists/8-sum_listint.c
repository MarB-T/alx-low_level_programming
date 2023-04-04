#include "lists.h"

/**
 * sum_listint - Sums values of all nodes in list
 * @head: list head
 * Return: sum(int)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
