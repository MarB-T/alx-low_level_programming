#include "lists.h"

/**
 * looped - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: unique nodes.
 */
size_t looped(const listint_t *head)
{
	const listint_t *temp1, *temp2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp1 = head->next;
	temp2 = (head->next)->next;

	while (temp2)
	{
		if (temp1 == temp2)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				nodes++;
				temp1 = temp1->next;
				temp2 = temp2->next;
			}

			temp1 = temp1->next;
			while (temp1 != temp2)
			{
				nodes++;
				temp1 = temp1->next;
			}

			return (nodes);
		}

		temp1 = temp1->next;
		temp2 = (temp2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
