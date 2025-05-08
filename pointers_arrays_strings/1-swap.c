#include "main.h"
/**
 * swap_int - swaps the value of tow integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	int *a = *b;
	int *b = temp;
}
