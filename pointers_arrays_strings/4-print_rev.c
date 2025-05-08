#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	len--;
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
