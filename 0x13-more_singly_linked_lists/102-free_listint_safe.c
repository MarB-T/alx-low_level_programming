#include "lists.h"

/**
 * looped - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: unique nodes.
 */
size_t _looped(const listint_t *head)
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
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to pointer head
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = _looped(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
