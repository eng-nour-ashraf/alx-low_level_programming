#include "lists.h"

/**
 * delete_nodeint_at_index - deletes item in a linked list at a certain position
 * @head: the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a = *head;
	listint_t *b = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}

	while (i < index - 1)
	{
		if (!a || !(a->next))
			return (-1);
		a = a->next;
		i++;
	}


	b = a->next;
	a->next = b->next;
	free(b);

	return (1);
}
