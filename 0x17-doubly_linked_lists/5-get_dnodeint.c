#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve (starting from 0)
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		if (count == index)
		{
			return (node);
		}
		node = node->next;
		count++;
	}
	return (NULL);
}
