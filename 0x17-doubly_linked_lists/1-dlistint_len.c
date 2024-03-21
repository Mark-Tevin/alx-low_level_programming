#include "lists.h"
#include <stdio.h>

#include <stddef.h>
/**
 * dlistint_len - prints number of  elements
 * @h - pointer
 * return - number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
