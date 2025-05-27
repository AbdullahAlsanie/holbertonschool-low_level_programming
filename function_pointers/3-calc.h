#ifndef _3_CALC_H
#define _3_CALC_H
/**
 * op_add - add tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b);
/**
 * op_sub - subtract tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b);
/**
 * op_mul - multiply tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b);
/**
 * op_div - divide tow integers
 * @a: first integer
 * @b: seconed integer
 *
 * Return: result of the division
 */
int op_div(int a, int b);
/**
 * op_mod - operats a module b
 * @a: first integer
 * @b: seconed integer
 *
 * Return:the remainder of the division of a by b
 */
int op_mod(int a, int b);
/**
 * get_op_func - gets the right func
 * @s: function s
 * Return: int value
 */
int (*get_op_func(char *s))(int, int);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
