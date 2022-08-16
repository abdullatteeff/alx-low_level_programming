#include "lists.h"

/**
 * print_dlistint - function that prints n element of a linked lists
 * @h: head of the linked list
 *
 * Return: number of nodes of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
