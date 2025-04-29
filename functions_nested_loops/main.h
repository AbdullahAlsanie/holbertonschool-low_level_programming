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

#endif
