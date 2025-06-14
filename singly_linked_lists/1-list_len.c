#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - count the number of elements in a linked list_t list.
 * @h: pointer to the head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
