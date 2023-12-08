#include "lists.h"
#include <stdio.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{
		dlistint_t *next = node->next;
		free(node);
		node = next;
	}
}
