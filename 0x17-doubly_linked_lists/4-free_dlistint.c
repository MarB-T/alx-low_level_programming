#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of list in question
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
