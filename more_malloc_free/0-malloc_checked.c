#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 * @b: Integer to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
