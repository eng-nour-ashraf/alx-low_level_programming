#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node at the beginning of linked list
 * @head: pointer to the list
 * @str: string added in the node
 *
 * Return: the address of the element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = (*head);
	(*head) = a;

	return (*head);
}
