#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars, and initializes it with a specific char,
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int a = 0;

	if (size == 0)
		return (NULL);

	b = (char *) malloc(sizeof(char) * size);

	if (b == NULL)
		return (0);

	while (a < size)
	{
		*(b + a) = c;
		a++;
	}

	*(b + a) = '\0';

	return (b);
}
