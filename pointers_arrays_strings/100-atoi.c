#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: returns integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int started = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (sign == 1)
			{
				if (num > (2147483647 - digit) / 10)
				{
					return (2147483647);
				}
			}
			else
			{
				if (num > (int)(2147483648U - digit) / 10)
				{
					return (-2147483648);
				}
			}

			num = num * 10 + digit;
			started = 1;

			started = 1;
		}
		else if (started)
			break;
		i++;
	}
	return (sign * num);
}
