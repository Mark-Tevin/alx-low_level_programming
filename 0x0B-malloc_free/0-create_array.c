#include "main.h"
#include <stdlib.h>

/**
 * @size: The size of array
 * @c: character to fill in the array
 * create_array - creates and array of chars
 *
 * Return : 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
