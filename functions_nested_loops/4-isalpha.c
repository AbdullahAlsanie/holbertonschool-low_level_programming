#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to ckecks
 *
 * Return: 1 if a latter , 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
