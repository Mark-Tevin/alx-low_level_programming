#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string followed by a new line
 * main - Entry point
 * @s - the string to be printed
 * _puts_recursion(s) - calls character withna string argument
 * Return (0) Always
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar (*s);
	s++;
	_puts_recursion(s);
}
