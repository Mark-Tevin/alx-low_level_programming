#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/* prints all elements in doubly linked list and return number of nodes */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
