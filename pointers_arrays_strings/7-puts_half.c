#include "main.h"
/**
 * puts_half - prints the scond half of a string
 * @str: the string to print
 *
 * Return: always 0
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		int j = len / 2;

		for (; str[j]; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		int n = (len + 1) / 2;

		for (; str[n]; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
