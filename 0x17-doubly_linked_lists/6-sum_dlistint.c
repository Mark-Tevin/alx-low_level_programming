#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *new = head;

	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}

	return (sum);
}
