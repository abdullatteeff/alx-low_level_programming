#include "lists.h"

/**
 * listint_len - function that return the num of elements in a linked list
 * @h: node
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
