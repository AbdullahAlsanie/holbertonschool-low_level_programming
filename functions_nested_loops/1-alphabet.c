#include "main.h"

/**
 * print_alphabet - print the alphabet from a-z in lower case
 *
 *
 * Return:always 0
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
