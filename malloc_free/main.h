#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * creat_array - creates an array and initializes it with a specific char
 * @size: size of the array
 * @c: initialized char
 *
 * Return: Null if size 0, pointer to the array or Null if it fails
 */
char *create_array(unsigned int size, char c);
#endif
