#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all listed elements
 * @h - pointer
 * return - number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d ", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
