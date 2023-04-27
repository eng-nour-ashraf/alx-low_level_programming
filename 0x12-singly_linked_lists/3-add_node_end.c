#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of linked list
 * @head: pointer to the list
 * @str: string to put in the node
 *
 * Return: address of the element, or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = a;

	return (a);
}
