#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *h = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	while (h != NULL && i < index)
	{
		h = h->next;
		i++;
	}
	if (h == NULL)
		return (-1);

	temp = h;
	if (index == 0)
		*head = (temp)->next;
	else
		(temp->prev)->next = temp->next;

	if (temp->next != NULL)
		(temp->next)->prev = temp->prev;
	free(temp);

	return (1);
}
