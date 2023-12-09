#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value to be inserted in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current != NULL && idx > 0)
	{
		current = current->next;
		idx--;
	}
	if (idx > 0)
	{
		free(new);
		return (NULL);
	}
	new->next = current;
	new->prev = (current != NULL) ? current->prev : NULL;

	if (current != NULL)
		current->prev = new;

	if (new->prev != NULL)
		new->prev->next = new;

	return (new);
}
