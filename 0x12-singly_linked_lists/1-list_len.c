#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of a linked list
 * @h: list_t list
 *
 * Return: number in h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
