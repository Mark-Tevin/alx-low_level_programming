#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string
 *
 * return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
