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
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: the function given as a parameter
 *
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * int_index - searches for an integer in an array
 * @array: the array given
 * @size: the array size
 * @cmp: the commpar function
 *
 * Return: Index of the found Int, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int));
#endif
