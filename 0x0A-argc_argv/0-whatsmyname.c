#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

void main(int argc __attribute__((unused)), char *argv[])
{
	char *programName = argv[0];

	printf("%s\n", programName);

	return (0);
}
