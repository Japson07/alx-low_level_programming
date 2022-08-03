#include "3-calc.h"

/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference betwen two numbers
 * @a: first number
 * @b: second number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two numbers
 * @a: first number
 * @b: second number
 * Return: the priduct of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of the division of  two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}