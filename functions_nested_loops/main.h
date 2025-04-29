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
 * print_alphabet - prints the alphabet from a-z in lower case
 *
 *
 * Return:always 0
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabet 10 times in lower case
 *
 *
 * Return:always 0
 *
 */
void print_alphabet_x10(void);

/**
 * int _islower - Checks if a character is a lowercase or not
 * @c: thr character to check
 *
 * Return: 1 if the character is lowercase , 0 otherwise
 *
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if its a letter , 0 otherwise
 *
*/
int _isalpha(int c);

/**
 * print_sign - prints the integer sign
 * @n: the integer to check
 *
 * Return: 1 if greater than 0 , 0 if 0 , -1 if less than 0
 *
 */
int print_sign(int n);

/**
 * _abs - prints a absolute value of a number
 * @int: the input number
 *
 * Return: absolute value of int
 *
 */
int _abs(int);

/**
 * print_last_digit - prints last digit of the input
 * @int: the input intger
 *
 * Return: the last digit of the input
 */
int print_last_digit(int);

#endif
