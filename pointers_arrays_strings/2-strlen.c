#include "main.h"
/**
 * _strlen - count the length of a string
 * @s: the input
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
