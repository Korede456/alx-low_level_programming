#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
		printf("Error\n");
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;

		printf("%d\n", result);
	}

	return (0);
}
