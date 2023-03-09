#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @n: the number to calculate the factorial
 * Return: -1 if n < o, factorial of n if n=>0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
