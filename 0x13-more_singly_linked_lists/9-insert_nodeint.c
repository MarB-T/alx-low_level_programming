#include "lists.h"
#include "7-get_nodeint.c"

/**
 * insert_nodeint_at_index - Insert node to given index
 * @head: pointer to head node
 * @idx: index to add new node
 * @n: data in new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	size_t len = listint_len(*head);

	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		return (NULL);
	}
	current = get_nodeint_at_index(*head, (idx - 1));
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
