#include "lists.h"

/**
 * pop_listint - Deletes first node
 * @head: Pointer to head pointer
 * Return: Value in head node
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	node_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (node_data);
}
