#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to list head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *buf;

	if ((*head) == NULL)
	{
		free(*head);
		return;
	}
	while ((*head)->next != NULL)
	{
		buf = (*head)->next;
		free(*head);
		*head = buf;
	}
	free(*head);
}
