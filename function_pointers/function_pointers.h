#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
/**
 * print_name -print a name
 * @name: the name to print
 * @f: function to use
 *
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *));
#endif
