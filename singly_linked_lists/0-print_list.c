#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print all the elemnts of a list_t
 * @h: the list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return (count);
}
