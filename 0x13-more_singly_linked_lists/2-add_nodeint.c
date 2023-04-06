#include "lists.h"

/**
 * add_nodeint - adds and extra node at the start of a listint_t list
 *
 * @n: data to be inserted
 * @head: pointer to a pointer to the head of the linked list
 * Return: address to the new element or NULL, if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
