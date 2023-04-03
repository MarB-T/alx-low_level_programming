#include "lists.h"

/**
 * free_node - frees node
 * @n: node to free
 * Return: nothing
 */

void free_node(listint_t *n)
{
	free(n->n);
	free(n->next);
	free(n);
}

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
		free_node(head);
		return;
	}
	else
	{
		while (head->next != NULL)
		{
			temp = head->next;
			free_node(head);
			head = temp;
		}
		free_node(head);
	}
}
