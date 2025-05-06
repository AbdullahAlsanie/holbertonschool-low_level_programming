#include "main.h"
/**
 * more_numbers - prints the number 0 to 14 ten times
 *
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j / 10 + '0');

			if (j >= 10 && j <= 14)
			{
			_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
