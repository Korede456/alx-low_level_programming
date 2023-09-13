#include "3-calc.h"

/**
 * op_add - it add two int
 * @a: first int to add
 * @b: second int to add
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * @a: first int
 * @b: second int
 * Return: the value of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - it multiplies two int
 * @a: first int
 * @b: second int
 * Return: the value of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point
 * @a: firt int
 * @b: second int
 * Return: the value of a / b
 */

int op_div(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}

/**
 * op_mod - entry point
 * @a: first int
 * @b: second int
 * Return: the value of a % b
 */

int op_mod(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
