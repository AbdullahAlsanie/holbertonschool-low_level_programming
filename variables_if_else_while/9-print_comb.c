#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return:always 0
 *
 */
int main(void)
{
	int i;

	for (i = 10; i <= 19; i++)
	{
		putchar((i % 10) + '0');

		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
