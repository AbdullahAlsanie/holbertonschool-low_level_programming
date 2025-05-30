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
 * malloc_checked - Allocates memory
 * @b: Integer to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
/**
 * string_nconcat - concatenates two strings.
 * @s1: First String
 * @s2: Second String
 * @n: Number of byts for the second string
 *
 * Return: Pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size);
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max);
#endif
