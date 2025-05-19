#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Creat a copy of a string
 * @str: ponitr to the string to copy
 *
 * Return: pointer of the copy
 */
char *_strdup(char *str)
{
	int i = 0;
	int c;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	cp = malloc(sizeof(char) * i + 1);

	if (t == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < i; i++)
	{
		cp[c] = str[c];
	}
	return (cp);
