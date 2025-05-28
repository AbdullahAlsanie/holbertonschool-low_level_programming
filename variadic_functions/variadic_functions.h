#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * sum_them_all - sum of all its parameters
 * @n: integers to sum
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:  the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_c - prints char
 * @a: list to give
 * Return: always 0
 */
int print_c(va_list a);

/**
 * print_i - prints int
 * @a: list to give
 * Return: always 0
 */
int print_i(va_list a);

/**
 * print_f - prints float
 * @a: list to give
 * Return: always 0
 */
int print_f(va_list a);

/**
 * print_s - prints string
 * @a: list to give
 * Return: always 0
 */
int print_s(va_list a);

/**
 * print_all - prints all
 * @format: format string that says arg types
 *
 */
void print_all(const char * const format, ...);

/**
 * struct op - struct for for print_all
 * @c: character to check
 * @f: function to point to
 */
typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;

#endif
