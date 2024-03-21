#include "lists.h"

/**
 * add_dnodeint - insert a node at start of dlisint_t
 * @head - pointer to a pointer
 * @n: value to be inserted
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /* Allocate memory for the new node */
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

    /* Assign data to the new node */
	new->n = n;

    /* Make new node point to the current head as its next node */
	new->next = *head;

    /* Point prev new node to NULL since it's the new head */
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
