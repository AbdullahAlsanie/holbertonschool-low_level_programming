#include "main.h"
/**
 * puts2 - print every other character of a string strarting with the frist one
 * @str: the String to print
 *
 * Return: always 0
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	len--;
	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
