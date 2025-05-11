#include "main.h"
/**
 * _strcmp - compars to strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if thay are equle, -1 if s1 less the s2, 1 if s1 bigger than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
