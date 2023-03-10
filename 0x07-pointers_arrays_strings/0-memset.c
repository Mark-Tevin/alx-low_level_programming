#include "main.h"
#include <stdio.h>

/**
 * _memset() - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @n: number of bytes to be changed
 * @b: desired value
 *
 * Return - s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
