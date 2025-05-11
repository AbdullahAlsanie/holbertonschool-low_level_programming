#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap_next = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (cap_next)
				s[i] -= 32;
			cap_next = 0;
		}
		else if (
				s[i] == ' '  || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ','  || s[i] == ';'  || s[i] == '.' ||
				s[i] == '!'  || s[i] == '?'  || s[i] == '"' ||
				s[i] == '('  || s[i] == ')'  || s[i] == '{' ||
				s[i] == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}

		i++;
	}

	return (s);
}
