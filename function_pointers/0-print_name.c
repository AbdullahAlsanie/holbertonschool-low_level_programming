#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -print a name
 * @name: the name to print
 * @f: function to use
 *
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
