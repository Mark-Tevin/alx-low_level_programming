#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

/*LIBRARIES*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*STRUCTURES*/
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer value
 * @index: index of the node in the list
 * @next: pointer to next node
 *
 * Description: Returns singly linked list
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - singly linked list
 *
 * @n: Integer value
 * @index: index of the node in the list
 * @next: pointer to next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* PROTOTYPES*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
