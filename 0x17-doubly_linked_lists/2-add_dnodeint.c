#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: head of the linked list
 * @n: value of the n element
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	if (*head)
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
