#include "lists.h"

/**
 * add_dnodeint - insert a node at the beginning of the doubly linked list called dlisint_t
 * @head - pointer to a pointer
 * @n: value to be inserted
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		new->prev = (*head)->prev;
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
