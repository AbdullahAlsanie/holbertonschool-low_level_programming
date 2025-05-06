#include "main.h"
/**
 * print_triangle - prints a triangle of the input size
 * @size: the input wich determaine the triangle size
 *
 * Return: always 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
