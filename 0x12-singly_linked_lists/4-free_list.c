#include "lists.h"

void free_node(list_t *node);

/**
 * free_list - frees a list
 * @head: pointer to list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *n;

	if (head->next == NULL)
	{
		free_node(head);
	}
	else
	{
		n = head->next;
		free_node(head);
		while (n->next != NULL)
		{
			n = n->next;
			free_node(n);
		}
	}
}

/**
 * free_node - frees a node
 * @node: pointer to node
 * Return: nothing
 */

void free_node(list_t *node)
{
	free(node->str);
	free(node);
}
