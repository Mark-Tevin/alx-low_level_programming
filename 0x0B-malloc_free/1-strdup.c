#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - string duplicate
 * @str: string to be duplicated
 *
 * Return: string duplicate or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
	char *tt;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	tt = malloc(sizeof(char) * (i + 1));

	if (tt == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		tt[r] = str[r];
	return (tt);
}

