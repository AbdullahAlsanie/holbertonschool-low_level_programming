#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: the array given
 * @size: the array size
 * @cmp: the commpar function
 *
 * Return: Index of the found Int, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size != 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
