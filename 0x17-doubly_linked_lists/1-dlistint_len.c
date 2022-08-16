#include "lists.h"


/**
 * dlistint_len - function that returns the len of the linked list
 * @h: head of the linked list
 *
 * Return: len of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
