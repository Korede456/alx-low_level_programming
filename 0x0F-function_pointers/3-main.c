#include "3-calc.h"

/**
 * main - A calculator function
 * @argc: argument count
 * @argv: array of arguments
 * Return: intergers
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	a = atoi(argv[0]);
	b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	result = (*get_op*func(argv[1]))(a, b);
	return (result);
}
