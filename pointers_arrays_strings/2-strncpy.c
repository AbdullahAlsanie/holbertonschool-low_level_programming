#include "main.h"
/**
 * _strncpy - copis a string
 * @dest: string to copy
 * @src: copid sting
 * @n: number of byts
 *
 * Return:a pointer to the copid string src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
