#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lower case
 *
 *
 * Return:alwasy 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
