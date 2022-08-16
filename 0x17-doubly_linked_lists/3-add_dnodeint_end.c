#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: head of the linked list
 * @n: value of n
 *
 * Return: addres fo the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current_node;

	if (head == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	new->prev = current_node;
	current_node->next = new;
	return (new);
}
