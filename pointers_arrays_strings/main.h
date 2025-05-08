#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * reset_to_98 - taks a poointer as in input and change its value to 98
 * @n: the input
 *
 * Return: always 0
 */
void reset_to_98(int *n);
/**
 * swap_int - swap the value of tow integers
 * @a: first integer
 * @b: second integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b);
/**
 * _strlen - counts the length of a string
 * @s:the input
 *
 * Return: the String length
 */
int _strlen(char *s);
/**
 * _puts - print a string followed by a new line
 * @str: the string to print
 *
 * Return: always 0
 */
void _puts(char *str);
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: always 0
 */
void print_rev(char *s);
#endif
