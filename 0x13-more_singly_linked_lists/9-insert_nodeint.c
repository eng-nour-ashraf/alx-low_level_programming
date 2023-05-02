#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new items in a linked list,
 * at position
 * @head: pointer to the first node in the list
 * @idx: index
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *a = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; a && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = a->next;
			a->next = new;
			return (new);
		}
		else
			a = a->next;
	}

	return (NULL);
}
