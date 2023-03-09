#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: string
 * return - 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
