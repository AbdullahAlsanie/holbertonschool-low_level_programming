#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *argstr;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		argstr = va_arg(arg, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (argstr == NULL)
			printf("nil");
		else
			printf("%s", argstr);
	}
	va_end(arg);
	printf("\n");
}
