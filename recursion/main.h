#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */
void _puts_recursion(char *s);
/**
 * _print_rev_recursion - prints in reverse recurse
 * @s: string to recurse
 */
void _print_rev_recursion(char *s);
/**
 * _strlen_recursion - length of string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s);
/**
 * factorial - gives factorial of number
 * @n: number to use
 * Return: returns factor or -1
 */
int factorial(int n);
/**
 * _pow_recursion - gives power of int
 * @x: integer to power
 * @y: power to do
 * Return: integer value
 */
int _pow_recursion(int x, int y);
/**
 * helper - helps decide if i'm right
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int helper(int i, int n);
/**
 * helper - does it for me
 * @i: helper int
 * @n: integer I'm testing
 * Return: value
 */
int helper(int i, int n);
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n);
#endif
