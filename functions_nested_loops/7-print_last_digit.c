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
	if (n < 0)
	{
		n = -1 * n;
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
