#include "main.h"

/**
 * _abs - main function
 * @n: input number
 *
 * Return: absolut value of int
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	n = n * -1;
	return (n);
}
