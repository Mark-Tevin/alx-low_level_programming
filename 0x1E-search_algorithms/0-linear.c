#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in an array of integers
 * with aid of Linear search Algorithm
 * @array: array of integers to search the values in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of found value else -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
