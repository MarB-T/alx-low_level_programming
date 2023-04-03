#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: Head of list in question
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head->next == NULL)
	{
		free(head);
		return;
	}
	else
	{
		while (head->next != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
		free(head);
	}
	free(temp);
}
