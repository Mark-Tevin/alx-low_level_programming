#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of the linked list
 * @head: pointer to pointer
 * @n: value
 *
 * Return: gives the address of the new element or NULL incase it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	while (temp != NULL && temp->next != NULL)
		temp = temp->next;
	if (temp == NULL)
		*head = new;
	else
	{
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
