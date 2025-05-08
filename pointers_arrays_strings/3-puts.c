#include "main.h"
/**
 * _puts - print a string followed by a new line
 * @str: the string to print
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
