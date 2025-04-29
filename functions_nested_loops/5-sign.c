#include "main.h"

/**
 * print_sign - prints the integer sign
 * @n: the integer to checke
 *
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	putchar('-');
	return (-1);
}
