#include "lists.h"

/**
 * reverse_listint - reverses listint_t linked list
 * @head: pointer to list head
 * Return: head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	(*head)->next = prev;
	return (*head);
}
