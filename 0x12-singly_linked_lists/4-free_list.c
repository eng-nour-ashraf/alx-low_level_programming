#include <stdlib.h>
#include "lists.h"

/**
 * free_list - clear a linked list
 * @head: list to be cleared
 */
void free_list(list_t *head)
{
	list_t *ls;

	while (head)
	{
		ls = head->next;
		free(head->str);
		free(head);
		head = ls;
	}
}
