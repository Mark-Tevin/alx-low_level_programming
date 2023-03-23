#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print names using pointer to function
 * @name - string to add
 * @f: ponter to function
 * Return : nothing
 */

void print _name(char *name, void (*f) (char *f))
{
	if (f! = NULL)
		f(name);
}
