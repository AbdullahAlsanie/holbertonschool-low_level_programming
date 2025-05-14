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
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 * Return: always 0
 */
void rev_string(char *s);
/**
 * puts2 - print every other character of a string strarting with the frist one
 * @str: the String to print
 *
 * Return: always 0
 */
void puts2(char *str);
/**
 * puts_half - prints the scond half of a string
 * @str: the string to print
 *
 * Return: always 0
 */
void puts_half(char *str);
/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how many times to prints
 *
 */
void print_array(int *a, int n);
/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
char *_strcpy(char *dest, char *src);
/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer result
 */
int _atoi(char *s);
/**
 * _strcat - concatenates two strings
 * @dest : first string
 * @src : second String
 *
 * Return: a pointer to the new concatenated string
 */
char *_strcat(char *dest, char *src);
/**
 * _strncat - concatenates two strings , similar to _strcat
 * @dest: first string
 * @src: second string
 * @n: number of byts
 *
 * Return: a pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n);
/**
 * _strncpy - copis a string
 * @dest: string to copy
 * @src: copid sting
 * @n: number of byts
 *
 * Return:a pointer to the copid string src
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp - compars to strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if thay are equle, -1 if s1 less the s2, 1 if s1 bigger than s2
 */
int _strcmp(char *s1, char *s2);
/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n);
/**
 * string_toupper - uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s);
/**
 * cap_string - capitalizes all words of a string
 * @s: the input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s);
/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s);
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: n amount of times
 * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_strchr(char *s, char c);
/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept);
/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept);
/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle);
/**
 * print_chessboard - board to print
 * @a: prints things
 * Return: returns crap
 */
void print_chessboard(char (*a)[8]);
/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size);
#endif
