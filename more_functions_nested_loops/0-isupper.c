#include "main.h"
/**
 * _isupper - checks if upper case or not
 * @c: the input to check
 *
 * Return: 1 if c is upper case , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
