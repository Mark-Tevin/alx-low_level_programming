#include "lists.h"

/**
 * listint_len - prints the elements of a listint_len list
 *
 * Return: number of elements in a linked list
 * @h: pointer to the head of the linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
