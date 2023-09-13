#include "3-calc.h"

/**
 * get_op_func - entry point
 * @s: operator
 * Return: an int
 */

int (*get_op_funct(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i <= 5)
	{
		if (*s == ops[i].op)
		{
			return ((void*)ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
