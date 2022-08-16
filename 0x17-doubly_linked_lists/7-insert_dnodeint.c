#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the linked list
 * @idx: position to insert the new node
 * @n: value of n element
 *
 * Return: address fo the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp_node = *h;

	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}
		while (i < idx - 1 && tmp_node)
		{
			tmp_node = tmp_node->next;
			i++;
		}
		if (tmp_node)
		{
			if (tmp_node->next)
			{
				tmp_node->next->prev = new_node;
			}
			new_node->next = tmp_node->next;
			new_node->prev = tmp_node;
			tmp_node->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
