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
 * _isupper - checks if upper case or not
 * @c: input to check
 *
 * Return:1 if c is upper case , 0 otherwise
 */
int _isupper(int c);
/**
 * _isdigit - checks if the input is a dicimal intger form 0 to 9
 * @c: the input to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);
/**
 * mul - multiply two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of multiplication
 */
int mul(int a, int b);
/**
 * print_numbers - print the numbers 0 to 9
 *
 *
 * Return: always 0
 */
void print_numbers(void);
/**
 * print_most_numbers - prints the number 0 to 9 expect 2 and 4
 *
 *
 * Return: always 0
 */
void print_most_numbers(void);
/**
 * more_numbers - print the numbers 0 to 14 ten times
 *
 *
 * Return: always 0
 */
void more_numbers(void);
/**
 * print_line - print a line that has the input length
 * @n: the input wich determine the length
 *
 * Return: always 0
 */
void print_line(int n);
#endif
