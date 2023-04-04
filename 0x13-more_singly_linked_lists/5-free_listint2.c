#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to list head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *buf;

	while ((*head) != NULL)
	{
		buf = *head;
		*head = (*head)->next;
		free(buf);
	}
	free(*head);
	*head = NULL;
}
