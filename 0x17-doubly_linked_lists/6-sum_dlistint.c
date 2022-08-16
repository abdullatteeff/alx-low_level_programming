#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data n of a linked list
 * @head: head of the linked list
 *
 * Return: sum of all the data n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node;

	if (head == NULL)
	{
		return (0);
	}
	current_node = head;
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
