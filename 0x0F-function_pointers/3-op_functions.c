#include "3-calc.h"

/**
 * op_add - sums two numbers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: not always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two numbers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: not always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: not always 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: not always 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the division
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: not always 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
