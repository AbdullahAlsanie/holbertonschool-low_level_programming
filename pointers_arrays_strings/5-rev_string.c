#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i]; i++)
	{
		j++;
	}
	j--;
	for (i = 0; i < j; i++)
	{
		char tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
