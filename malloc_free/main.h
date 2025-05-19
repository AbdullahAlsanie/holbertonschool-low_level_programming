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
/**
 * _strdup - Creat a copy of a string
 * @str: ponitr to the string to copy
 *
 * Return: pointer of the copy
 */
char *_strdup(char *str);
/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the Concatenated string, Null if faild
 */
char *str_concat(char *s1, char *s2);
/**
 * alloc_grid - creat a 2 dimen array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height);
/**
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height);
#endif
