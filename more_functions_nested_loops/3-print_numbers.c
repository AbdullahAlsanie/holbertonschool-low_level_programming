#include "main.h"
/**
 * print_numbers - print the numbers 0 to 9
 *
 *
 * Return: alwasy 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
