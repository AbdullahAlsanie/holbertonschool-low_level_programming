#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: Index at which to insert the new node.
 * @n: Data for the new node.
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (curr && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}

	if (!curr)
	{
		free(new);
		return (NULL);
	}

	new->next = curr->next;
	new->prev = curr;
	if (curr->next)
		curr->next->prev = new;
	curr->next = new;

	return (new);
}
