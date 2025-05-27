#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - operats a module b
 * @a: first integer
 * @b: seconed integer
 *
 * Return:the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
