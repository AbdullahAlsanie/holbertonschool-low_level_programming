#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest : first string
 * @src : second String
 *
 * Return: a pointer to the new concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
