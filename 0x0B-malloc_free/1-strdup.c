#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly allocated
 * space in memory
 * which contains a copy of the string given as a parameter,
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int b, c;

	b = 0;
	c = 0;

	if (str == NULL)
		return (NULL);

	while (str[c])
		c++;

	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		return (NULL);

	while ((a[b] = str[b]) != '\0')
		b++;

	return (a);
}
