#include "main.h"

/**
 * print_last_digit - main function
 * @n: input number
 *
 * Return: input number last digit
 *
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n
	}

	_putchar('0' + n);
	return (n);
}
