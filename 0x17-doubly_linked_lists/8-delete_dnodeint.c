#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at idx
 * @head: pointer to head
 * @index: index of node to delete
 * Return: 1- success, -1 - fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
