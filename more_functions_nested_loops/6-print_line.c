#include "main.h"
/**
 * print_line - print a line that has the input length
 * @n: the input wich determine the length
 *
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
