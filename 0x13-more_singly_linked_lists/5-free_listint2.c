#include "lists.h"

/**
 * free_listint2 - linked list
 * @head: pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;

	while (*head)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}

	*head = NULL;
}
