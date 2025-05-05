#include "main.h"
/**
 * _isdigit - checks if the input is a dicimal number form 0 to 9
 * @c: the input to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
